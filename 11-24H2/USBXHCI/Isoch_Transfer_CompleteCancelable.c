/*
 * XREFs of Isoch_Transfer_CompleteCancelable @ 0x140010D60
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x14000E290 (Isoch_RetrieveNextStage.c)
 *     Isoch_PrepareStage @ 0x14000F1B0 (Isoch_PrepareStage.c)
 *     Isoch_MapStage @ 0x140010000 (Isoch_MapStage.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x140011400 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_CompleteStaleTransfers @ 0x1400121A0 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_CompleteTransfers @ 0x140022988 (Isoch_CompleteTransfers.c)
 * Callees:
 *     Isoch_TransferData_Free @ 0x1400111C4 (Isoch_TransferData_Free.c)
 *     WPP_RECORDER_SF_DDqdDDDD @ 0x140012700 (WPP_RECORDER_SF_DDqdDDDD.c)
 *     TR_QueueDpcForTransferCompletion @ 0x1400148B4 (TR_QueueDpcForTransferCompletion.c)
 *     WPP_RECORDER_SF_DDqd @ 0x14002F21C (WPP_RECORDER_SF_DDqd.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

void __fastcall Isoch_Transfer_CompleteCancelable(__int64 a1, __int64 *a2, int a3, int a4, char a5, char a6)
{
  int v7; // r14d
  int v8; // ebp
  __int64 *v11; // rcx
  __int64 **v12; // rax
  int v13; // eax
  __int64 v14; // r10
  _DWORD *v15; // rcx
  int v16; // r8d
  __int64 v17; // r9
  unsigned int v18; // edx
  unsigned int v19; // eax
  int v20; // eax
  KIRQL v21; // bl
  __int64 v22; // rdi
  __int64 **v23; // rax
  __int64 v24; // rcx
  __int64 **v25; // rax
  __int64 **v26; // rcx
  __int64 v27; // rdx
  int v28; // r8d

  v7 = 0;
  v8 = a4;
  if ( *((_DWORD *)a2 + 16) == 1 )
  {
    v11 = (__int64 *)*a2;
    v12 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) != a2 || *v12 != a2 )
      goto LABEL_40;
    *v12 = v11;
    v11[1] = (__int64)v12;
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2048))(WdfDriverGlobals, a2[3]);
    if ( v13 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = *(_QWORD *)(a1 + 48);
        v28 = *(unsigned __int8 *)(v27 + 143);
        LOBYTE(v27) = 4;
        WPP_RECORDER_SF_DDqd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v27,
          v28,
          17,
          (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
          v28,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
          a2[3],
          v13);
      }
      v22 = a1 + 408;
      *((_DWORD *)a2 + 16) = 2;
      v23 = *(__int64 ***)(v22 + 8);
      if ( *v23 == (__int64 *)v22 )
      {
        *a2 = v22;
        a2[1] = (__int64)v23;
        *v23 = a2;
        *(_QWORD *)(v22 + 8) = a2;
        return;
      }
      goto LABEL_40;
    }
    *((_DWORD *)a2 + 16) = 0;
LABEL_6:
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
    v14 = a2[6];
    if ( *(_WORD *)(v14 + 2) == 56 )
    {
LABEL_7:
      v15 = (_DWORD *)(v14 + 36);
    }
    else
    {
      switch ( *(_WORD *)(v14 + 2) )
      {
        case '9':
        case ':':
          v15 = (_DWORD *)(v14 + 52);
          break;
        default:
          goto LABEL_7;
      }
    }
    v16 = 0;
    v17 = v14 + 128;
    *v15 = *((_DWORD *)a2 + 21);
    v18 = 0;
    v19 = *((_DWORD *)a2 + 24);
    if ( v19 )
    {
      do
      {
        if ( a3 == -1 )
        {
          v20 = *(_DWORD *)(v17 + 12LL * v18 + 20);
          if ( v20 == -1 )
          {
            *(_DWORD *)(v17 + 12LL * v18 + 20) = -1073610752;
LABEL_28:
            ++*(_DWORD *)(v14 + 136);
            ++*(_DWORD *)(a1 + 268);
            goto LABEL_13;
          }
        }
        else
        {
          *(_DWORD *)(v17 + 12LL * v18 + 20) = a3;
          v20 = a3;
        }
        if ( v20 )
          goto LABEL_28;
        ++v16;
LABEL_13:
        ++*(_DWORD *)(a1 + 264);
        ++v18;
        v19 = *((_DWORD *)a2 + 24);
      }
      while ( v18 < v19 );
    }
    if ( v8 == -1 )
    {
      if ( *(_DWORD *)(v14 + 136) != v19 )
      {
        *(_DWORD *)(v14 + 4) = 0;
        goto LABEL_18;
      }
      *(_DWORD *)(v14 + 4) = -1073739008;
    }
    else
    {
      *(_DWORD *)(v14 + 4) = v8;
      if ( v8 == 1 )
        goto LABEL_18;
      if ( v8 <= -1073738240 )
      {
        if ( v8 == -1073738240 )
        {
          v7 = -1073741637;
          goto LABEL_18;
        }
        if ( v8 == -1073739264 || v8 == -2147483136 || v8 == -2147482880 || v8 == -2147482112 )
        {
          v7 = -1073741811;
          goto LABEL_18;
        }
      }
      else
      {
        switch ( v8 )
        {
          case -1073676288:
            v7 = -1073741536;
            goto LABEL_18;
          case -1073737728:
            v7 = -1073741670;
            goto LABEL_18;
          case -1073713152:
            v7 = -1073741810;
            goto LABEL_18;
          case 0:
LABEL_18:
            *((_DWORD *)a2 + 17) = v7;
            ++*(_DWORD *)(a1 + 248);
            *(_QWORD *)(a1 + 256) += *((unsigned int *)a2 + 21);
            if ( *((int *)a2 + 17) < 0 )
              ++*(_DWORD *)(a1 + 252);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_DDqdDDDD(
                *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
                v16,
                v17);
            Isoch_TransferData_Free(a2);
            if ( !a6 )
            {
              v21 = KfRaiseIrql(2u);
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
                WdfDriverGlobals,
                a2[3],
                *((unsigned int *)a2 + 17));
              KeLowerIrql(v21);
LABEL_24:
              *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
              return;
            }
            *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
            v26 = *(__int64 ***)(a1 + 432);
            if ( *v26 == (__int64 *)(a1 + 424) )
            {
              a2[1] = (__int64)v26;
              *a2 = a1 + 424;
              *v26 = a2;
              *(_QWORD *)(a1 + 432) = a2;
              KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
              TR_QueueDpcForTransferCompletion(a1);
              goto LABEL_24;
            }
LABEL_40:
            __fastfail(3u);
        }
      }
    }
    v7 = -1073741823;
    goto LABEL_18;
  }
  if ( *((_DWORD *)a2 + 16) != 3 )
    goto LABEL_6;
  if ( a5 )
  {
    v24 = *a2;
    v25 = (__int64 **)a2[1];
    v8 = -1073676288;
    if ( a4 != -1 )
      v8 = a4;
    if ( *(__int64 **)(v24 + 8) != a2 || *v25 != a2 )
      goto LABEL_40;
    *v25 = (__int64 *)v24;
    *(_QWORD *)(v24 + 8) = v25;
    goto LABEL_6;
  }
}
