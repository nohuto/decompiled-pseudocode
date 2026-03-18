/*
 * XREFs of Bulk_CompleteTransfers @ 0x14000568C
 * Callers:
 *     Bulk_ProcessTransferCompletion @ 0x1400054A8 (Bulk_ProcessTransferCompletion.c)
 * Callees:
 *     StageQueue_ForwardScanGetNextStage @ 0x140012400 (StageQueue_ForwardScanGetNextStage.c)
 *     Bulk_Transfer_Complete @ 0x14001596C (Bulk_Transfer_Complete.c)
 *     Bulk_Stage_Release @ 0x1400163D8 (Bulk_Stage_Release.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x140022DA0 (Bulk_Stage_FreeScatterGatherList.c)
 *     TR_ReleaseDoubleBuffer @ 0x140023D40 (TR_ReleaseDoubleBuffer.c)
 *     WPP_RECORDER_SF_DDDqd @ 0x14002F368 (WPP_RECORDER_SF_DDDqd.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

_QWORD **__fastcall Bulk_CompleteTransfers(__int64 a1, __int64 ****a2)
{
  KSPIN_LOCK *v3; // r12
  __int64 ***v5; // rbx
  __int64 **v6; // rax
  __int64 NextStage; // rsi
  _QWORD *v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  int v11; // r8d
  __int64 **v12; // rcx
  int v13; // eax
  __int64 ****v14; // rax
  _QWORD *v15; // rax
  __int64 *v16; // rdx
  __int64 *v17; // rax
  __int64 *v18; // rdx
  __int64 *v19; // rax
  _QWORD **result; // rax
  __int64 ***v21; // rbx
  __int64 ****v22; // rax
  int v23; // eax
  __int64 **v24; // rdx
  struct _MDL *v25; // rcx
  __int64 **v26; // r8
  char v27; // al
  __int64 v28; // rdx
  int v29; // r8d
  int v30; // [rsp+20h] [rbp-60h]
  _QWORD *v31; // [rsp+50h] [rbp-30h] BYREF
  __int64 ***v32; // [rsp+58h] [rbp-28h]
  __int64 *v33; // [rsp+60h] [rbp-20h] BYREF
  __int64 **v34; // [rsp+68h] [rbp-18h]
  __int64 *v35; // [rsp+70h] [rbp-10h] BYREF
  __int64 **v36; // [rsp+78h] [rbp-8h]

  v34 = &v33;
  v3 = (KSPIN_LOCK *)(a1 + 96);
  v33 = (__int64 *)&v33;
  v36 = &v35;
  v35 = (__int64 *)&v35;
  v32 = (__int64 ***)&v31;
  v31 = &v31;
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  while ( 1 )
  {
    v5 = *a2;
    if ( *a2 == (__int64 ***)a2 )
      break;
    if ( v5[1] != (__int64 **)a2 )
      goto LABEL_54;
    v6 = *v5;
    if ( (*v5)[1] != (__int64 *)v5 )
      goto LABEL_54;
    *a2 = (__int64 ***)v6;
    v6[1] = (__int64 *)a2;
    *((_BYTE *)v5 + 133) = *((_BYTE *)v5 + 132);
    *((_BYTE *)v5 + 134) = *((_BYTE *)v5 + 130);
    v5[1] = (__int64 **)v5;
    *v5 = (__int64 **)v5;
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
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 1004LL) == 1 )
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 356));
      else
        --*(_DWORD *)(a1 + 356);
    }
    if ( *((_DWORD *)v5 + 16) == 3 )
    {
      v8 = v34;
      if ( *v34 != (__int64 *)&v33 )
        goto LABEL_54;
      v5[1] = v34;
      *v5 = &v33;
      *v8 = v5;
      v34 = (__int64 **)v5;
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 **))(WdfFunctions_01033 + 2048))(
             WdfDriverGlobals,
             v5[3]);
      if ( v9 >= 0 )
      {
        *((_DWORD *)v5 + 16) = 0;
        v13 = *((_DWORD *)v5 + 17);
        if ( v13 == 1 || v13 == 28 )
        {
          v15 = v36;
          if ( *v36 != (__int64 *)&v35 )
            goto LABEL_54;
          v5[1] = v36;
          *v5 = &v35;
          *v15 = v5;
          v36 = (__int64 **)v5;
        }
        else
        {
          v14 = (__int64 ****)v32;
          if ( *v32 != &v31 )
            goto LABEL_54;
          v5[1] = (__int64 **)v32;
          *v5 = &v31;
          *v14 = v5;
          v32 = v5;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v10 = *(_QWORD *)(a1 + 48);
          v11 = *(unsigned __int8 *)(v10 + 143);
          LOBYTE(v10) = 4;
          WPP_RECORDER_SF_DDDqd(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            v10,
            v11,
            14,
            v30,
            v11,
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
            *(_DWORD *)(a1 + 64),
            (char)v5[3],
            v9);
        }
        *((_DWORD *)v5 + 16) = 2;
        v12 = *(__int64 ***)(a1 + 400);
        if ( *v12 != (__int64 *)(a1 + 392) )
LABEL_54:
          __fastfail(3u);
        *v5 = (__int64 **)(a1 + 392);
        v5[1] = v12;
        *v12 = (__int64 *)v5;
        *(_QWORD *)(a1 + 400) = v5;
      }
    }
  }
  KeReleaseSpinLock(v3, *(_BYTE *)(a1 + 104));
  while ( 1 )
  {
    v16 = v33;
    if ( v33 == (__int64 *)&v33 )
      break;
    if ( (__int64 **)v33[1] != &v33 )
      goto LABEL_54;
    v17 = (__int64 *)*v33;
    if ( *(__int64 **)(*v33 + 8) != v33 )
      goto LABEL_54;
    v33 = (__int64 *)*v33;
    v17[1] = (__int64)&v33;
    v16[1] = (__int64)v16;
    *v16 = (__int64)v16;
    if ( *(_DWORD *)(a1 + 64) && !*((_DWORD *)v16 + 17) )
      *((_DWORD *)v16 + 17) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 144LL) + 24LL);
    Bulk_Transfer_Complete(a1, v16, 3221291008LL);
  }
  while ( 1 )
  {
    v18 = v35;
    if ( v35 == (__int64 *)&v35 )
      break;
    if ( (__int64 **)v35[1] != &v35 )
      goto LABEL_54;
    v19 = (__int64 *)*v35;
    if ( *(__int64 **)(*v35 + 8) != v35 )
      goto LABEL_54;
    v35 = (__int64 *)*v35;
    v19[1] = (__int64)&v35;
    v18[1] = (__int64)v18;
    *v18 = (__int64)v18;
    Bulk_Transfer_Complete(a1, v18, 0xFFFFFFFFLL);
  }
  while ( 1 )
  {
    result = &v31;
    if ( v31 == &v31 )
      return result;
    v21 = v32;
    if ( *v32 != &v31 )
      goto LABEL_54;
    v22 = (__int64 ****)v32[1];
    if ( *v22 != v32 )
      goto LABEL_54;
    v32 = (__int64 ***)v32[1];
    *v22 = (__int64 ***)&v31;
    v23 = *((_DWORD *)v21 + 27);
    v21[1] = (__int64 **)v21;
    *v21 = (__int64 **)v21;
    v24 = v21[12];
    *((_DWORD *)v21 + 28) = v23;
    if ( v24 )
    {
      TR_ReleaseDoubleBuffer(a1);
      v21[12] = 0LL;
    }
    v25 = (struct _MDL *)v21[10];
    if ( v25 )
    {
      if ( (v26 = v21[6], *((_WORD *)v26 + 1) != 8)
        && *((_WORD *)v26 + 1) != 9
        && *((_WORD *)v26 + 1) != 10
        && *((_WORD *)v26 + 1) != 50
        && *((_WORD *)v26 + 1) != 55
        && *((_WORD *)v26 + 1) != 56
        && (unsigned int)*((unsigned __int16 *)v26 + 1) - 57 < 2
        || v25 != (struct _MDL *)v26[6] )
      {
        if ( v25 != (struct _MDL *)v21[7][15] )
        {
          IoFreeMdl(v25);
          v21[10] = 0LL;
        }
      }
    }
    v27 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 **))(WdfFunctions_01033 + 2264))(
            WdfDriverGlobals,
            v21[3]);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v28 = *(_QWORD *)(a1 + 48);
      v29 = *(unsigned __int8 *)(v28 + 143);
      LOBYTE(v28) = 4;
      WPP_RECORDER_SF_DDDqd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v28,
        v29,
        15,
        v30,
        v29,
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
        *(_DWORD *)(a1 + 64),
        (char)v21[3],
        v27);
    }
  }
}
