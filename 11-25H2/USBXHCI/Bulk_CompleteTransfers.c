/*
 * XREFs of Bulk_CompleteTransfers @ 0x140011C6C
 * Callers:
 *     Bulk_ProcessTransferCompletion @ 0x140011A88 (Bulk_ProcessTransferCompletion.c)
 * Callees:
 *     Bulk_Transfer_Complete @ 0x1400121B4 (Bulk_Transfer_Complete.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1400164C0 (StageQueue_ForwardScanGetNextStage.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x140018CF0 (Bulk_Stage_FreeScatterGatherList.c)
 *     Bulk_Stage_Release @ 0x140018DCC (Bulk_Stage_Release.c)
 *     TR_ReleaseDoubleBuffer @ 0x140023F10 (TR_ReleaseDoubleBuffer.c)
 *     WPP_RECORDER_SF_DDDqd @ 0x140030330 (WPP_RECORDER_SF_DDDqd.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

_QWORD **__fastcall Bulk_CompleteTransfers(__int64 a1, __int64 ****a2)
{
  KSPIN_LOCK *v3; // r12
  __int64 ***v5; // rbx
  __int64 *v6; // rdx
  __int64 *v7; // rdx
  _QWORD **result; // rax
  __int64 ***v9; // rbx
  __int64 ****v10; // rax
  __int64 **v11; // rdx
  struct _MDL *v12; // rcx
  char v13; // al
  __int64 v14; // rdx
  int v15; // r8d
  __int64 **v16; // rax
  __int64 *v17; // rax
  __int64 NextStage; // r14
  _QWORD *v19; // rax
  int v20; // eax
  int v21; // eax
  __int64 ****v22; // rax
  __int64 v23; // rdx
  int v24; // r8d
  __int64 **v25; // rcx
  _QWORD *v26; // rax
  __int64 **v27; // r8
  __int64 *v28; // rax
  int v29; // [rsp+20h] [rbp-60h]
  _QWORD *v30; // [rsp+50h] [rbp-30h] BYREF
  __int64 ***v31; // [rsp+58h] [rbp-28h]
  __int64 *v32; // [rsp+60h] [rbp-20h] BYREF
  __int64 **v33; // [rsp+68h] [rbp-18h]
  __int64 *v34; // [rsp+70h] [rbp-10h] BYREF
  __int64 **v35; // [rsp+78h] [rbp-8h]

  v33 = &v32;
  v3 = (KSPIN_LOCK *)(a1 + 96);
  v32 = (__int64 *)&v32;
  v35 = &v34;
  v34 = (__int64 *)&v34;
  v31 = (__int64 ***)&v30;
  v30 = &v30;
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  while ( 1 )
  {
    v5 = *a2;
    if ( *a2 == (__int64 ***)a2 )
      break;
    if ( v5[1] != (__int64 **)a2 )
      goto LABEL_27;
    v16 = *v5;
    if ( (*v5)[1] != (__int64 *)v5 )
      goto LABEL_27;
    *a2 = (__int64 ***)v16;
    v16[1] = (__int64 *)a2;
    v5[1] = (__int64 **)v5;
    *v5 = (__int64 **)v5;
    *((_BYTE *)v5 + 133) = *((_BYTE *)v5 + 132);
    *((_BYTE *)v5 + 134) = *((_BYTE *)v5 + 130);
    while ( 1 )
    {
      NextStage = StageQueue_ForwardScanGetNextStage(v5 + 16);
      if ( !NextStage )
        break;
      KeReleaseSpinLock(v3, *(_BYTE *)(a1 + 104));
      Bulk_Stage_FreeScatterGatherList(a1, NextStage);
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc(v3);
      Bulk_Stage_Release(a1, NextStage);
      ++*((_DWORD *)v5 + 29);
      --*(_DWORD *)(a1 + 356);
    }
    if ( *((_DWORD *)v5 + 16) == 3 )
    {
      v19 = v33;
      if ( *v33 != (__int64 *)&v32 )
        goto LABEL_27;
      v5[1] = v33;
      *v5 = &v32;
      *v19 = v5;
      v33 = (__int64 **)v5;
    }
    else
    {
      v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 **))(WdfFunctions_01033 + 2048))(
              WdfDriverGlobals,
              v5[3]);
      if ( v20 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v23 = *(_QWORD *)(a1 + 48);
          v24 = *(unsigned __int8 *)(v23 + 135);
          LOBYTE(v23) = 4;
          WPP_RECORDER_SF_DDDqd(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            v23,
            v24,
            14,
            v29,
            v24,
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
            *(_DWORD *)(a1 + 64),
            (char)v5[3],
            v20);
        }
        *((_DWORD *)v5 + 16) = 2;
        v25 = *(__int64 ***)(a1 + 400);
        if ( *v25 != (__int64 *)(a1 + 392) )
LABEL_27:
          __fastfail(3u);
        *v5 = (__int64 **)(a1 + 392);
        v5[1] = v25;
        *v25 = (__int64 *)v5;
        *(_QWORD *)(a1 + 400) = v5;
      }
      else
      {
        *((_DWORD *)v5 + 16) = 0;
        v21 = *((_DWORD *)v5 + 17);
        if ( v21 == 1 || v21 == 28 )
        {
          v26 = v35;
          if ( *v35 != (__int64 *)&v34 )
            goto LABEL_27;
          v5[1] = v35;
          *v5 = &v34;
          *v26 = v5;
          v35 = (__int64 **)v5;
        }
        else
        {
          v22 = (__int64 ****)v31;
          if ( *v31 != &v30 )
            goto LABEL_27;
          v5[1] = (__int64 **)v31;
          *v5 = &v30;
          *v22 = v5;
          v31 = v5;
        }
      }
    }
  }
  KeReleaseSpinLock(v3, *(_BYTE *)(a1 + 104));
  while ( 1 )
  {
    v6 = v32;
    if ( v32 == (__int64 *)&v32 )
      break;
    if ( (__int64 **)v32[1] != &v32 )
      goto LABEL_27;
    v17 = (__int64 *)*v32;
    if ( *(__int64 **)(*v32 + 8) != v32 )
      goto LABEL_27;
    v32 = (__int64 *)*v32;
    v17[1] = (__int64)&v32;
    v6[1] = (__int64)v6;
    *v6 = (__int64)v6;
    if ( *(_DWORD *)(a1 + 64) && !*((_DWORD *)v6 + 17) )
      *((_DWORD *)v6 + 17) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 136LL) + 24LL);
    Bulk_Transfer_Complete(a1, v6, 3221291008LL);
  }
  while ( 1 )
  {
    v7 = v34;
    if ( v34 == (__int64 *)&v34 )
      break;
    if ( (__int64 **)v34[1] != &v34 )
      goto LABEL_27;
    v28 = (__int64 *)*v34;
    if ( *(__int64 **)(*v34 + 8) != v34 )
      goto LABEL_27;
    v34 = (__int64 *)*v34;
    v28[1] = (__int64)&v34;
    v7[1] = (__int64)v7;
    *v7 = (__int64)v7;
    Bulk_Transfer_Complete(a1, v7, 0xFFFFFFFFLL);
  }
  while ( 1 )
  {
    result = &v30;
    if ( v30 == &v30 )
      return result;
    v9 = v31;
    if ( *v31 != &v30 )
      goto LABEL_27;
    v10 = (__int64 ****)v31[1];
    if ( *v10 != v31 )
      goto LABEL_27;
    v31 = (__int64 ***)v31[1];
    *v10 = (__int64 ***)&v30;
    v9[1] = (__int64 **)v9;
    *v9 = (__int64 **)v9;
    v11 = v9[12];
    *((_DWORD *)v9 + 28) = *((_DWORD *)v9 + 27);
    if ( v11 )
    {
      TR_ReleaseDoubleBuffer(a1);
      v9[12] = 0LL;
    }
    v12 = (struct _MDL *)v9[10];
    if ( v12 )
    {
      if ( (v27 = v9[6], *((_WORD *)v27 + 1) != 8)
        && *((_WORD *)v27 + 1) != 9
        && *((_WORD *)v27 + 1) != 10
        && *((_WORD *)v27 + 1) != 50
        && *((_WORD *)v27 + 1) != 55
        && *((_WORD *)v27 + 1) != 56
        && (unsigned int)*((unsigned __int16 *)v27 + 1) - 57 < 2
        || v12 != (struct _MDL *)v27[6] )
      {
        if ( v12 != (struct _MDL *)v9[7][15] )
        {
          IoFreeMdl(v12);
          v9[10] = 0LL;
        }
      }
    }
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 **))(WdfFunctions_01033 + 2264))(
            WdfDriverGlobals,
            v9[3]);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = *(_QWORD *)(a1 + 48);
      v15 = *(unsigned __int8 *)(v14 + 135);
      LOBYTE(v14) = 4;
      WPP_RECORDER_SF_DDDqd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v14,
        v15,
        15,
        v29,
        v15,
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_DWORD *)(a1 + 64),
        (char)v9[3],
        v13);
    }
  }
}
