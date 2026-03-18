/*
 * XREFs of Isoch_Stage_CompleteTD @ 0x140018460
 * Callers:
 *     Isoch_Transfer_CompleteStaleStages @ 0x140015EC0 (Isoch_Transfer_CompleteStaleStages.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x140016760 (Isoch_ProcessTransferEventWithED0.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x140016B10 (Isoch_ProcessTransferEventWithED1.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqd @ 0x14000FE1C (WPP_RECORDER_SF_DDqd.c)
 *     WPP_RECORDER_SF_DDqq @ 0x140013D00 (WPP_RECORDER_SF_DDqq.c)
 *     WPP_RECORDER_SF_DDqqD @ 0x140017DF0 (WPP_RECORDER_SF_DDqqD.c)
 *     Isoch_TransferData_Free @ 0x1400183E4 (Isoch_TransferData_Free.c)
 *     TR_GetNtStatusFromUsbdStatus @ 0x140019948 (TR_GetNtStatusFromUsbdStatus.c)
 *     WPP_RECORDER_SF_DDqdDDDD @ 0x14001F300 (WPP_RECORDER_SF_DDqdDDDD.c)
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x140025C8C (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 *     TR_SendCompleteStageRequest @ 0x14003C940 (TR_SendCompleteStageRequest.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140059AC0 (memset.c)
 */

__int64 __fastcall Isoch_Stage_CompleteTD(__int64 a1, int a2, __int64 a3, char a4, _BYTE *a5, _DWORD *a6)
{
  __int64 v6; // rbx
  unsigned int v7; // r13d
  int v8; // edi
  int v11; // ebp
  __int64 result; // rax
  __int64 v13; // r15
  __int64 v14; // r12
  unsigned int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rdx
  int v18; // r8d
  __int64 v19; // rdi
  __int64 v20; // rsi
  KIRQL v21; // bp
  unsigned __int8 *v22; // rbp
  __int64 *v23; // rdi
  __int64 *v24; // rsi
  __int64 v25; // rdx
  __int64 *v26; // rdi
  __int64 *v27; // rsi
  int v28; // ecx
  int v29; // edx
  unsigned int v30; // r8d
  __int64 v31; // rcx
  _QWORD *v32; // rax
  int v33; // eax
  __int64 v34; // r10
  _DWORD *v35; // rcx
  __int64 v36; // r9
  __int64 v37; // r8
  unsigned int v38; // eax
  __int64 v39; // rdx
  int v40; // eax
  int v41; // r8d
  int v42; // r9d
  KIRQL v43; // di
  __int64 *v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  int v48; // [rsp+20h] [rbp-98h]
  __int64 v49; // [rsp+28h] [rbp-90h]
  __int64 v50; // [rsp+30h] [rbp-88h]
  __int64 v51; // [rsp+40h] [rbp-78h]
  __int64 v52; // [rsp+70h] [rbp-48h]
  __int64 v53; // [rsp+C0h] [rbp+8h]
  int v54; // [rsp+D0h] [rbp+18h]
  char v55; // [rsp+D8h] [rbp+20h]

  v55 = a4;
  v54 = a3;
  v6 = *(_QWORD *)a1;
  v7 = 0;
  v8 = *(_DWORD *)(a1 + 48);
  v11 = -1073545216;
  *a6 = 0;
  result = (__int64)a5;
  v13 = *(_QWORD *)(v6 + 56);
  v14 = *(_QWORD *)(v6 + 48) + 140LL;
  *a5 = 0;
  v15 = v8 - 1;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( *(_DWORD *)(v14 + 12 * v16 + 8) == -1 )
    {
      result = (int)v16;
      v53 = (int)v16;
      if ( (int)v16 >= 0 )
      {
        v45 = 12LL * (int)v16;
        v52 = v45;
        do
        {
          if ( *(_DWORD *)(v14 + v45 + 8) != -1 )
            break;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v46 = *(_QWORD *)(v13 + 56);
            LODWORD(v50) = *(_DWORD *)(v46 + 144);
            LODWORD(v49) = *(unsigned __int8 *)(*(_QWORD *)(v13 + 48) + 135LL);
            WPP_RECORDER_SF_DDqq(
              *(_QWORD *)(v46 + 80),
              2u,
              a3,
              0x18u,
              (__int64)&WPP_dd4fc339be0d3de3d8d0a5a4ecea6bb9_Traceguids,
              v49,
              v50,
              *(_QWORD *)(v6 + 24),
              a1);
            result = v53;
            v45 = v52;
          }
          --result;
          *(_DWORD *)(v14 + v45 + 8) = -1073545216;
          v45 -= 12LL;
          v53 = result;
          v52 = v45;
        }
        while ( result >= 0 );
        LODWORD(a3) = v54;
        v7 = 0;
        a4 = v55;
      }
    }
  }
  v17 = v14 + 12LL * v15;
  if ( *(_DWORD *)(v17 + 8) == -1 )
  {
    result = (unsigned int)(a2 - 26);
    if ( (unsigned int)result > 2 )
      goto LABEL_59;
    if ( !(_DWORD)a3 )
      goto LABEL_10;
    if ( a2 == 28 )
    {
LABEL_7:
      v11 = 0;
    }
    else
    {
LABEL_59:
      switch ( a2 )
      {
        case 0:
          v11 = -1;
          break;
        case 1:
        case 13:
        case 26:
          goto LABEL_7;
        case 2:
          v11 = -1073741805;
          break;
        case 3:
        case 31:
          v11 = -1073741806;
          break;
        case 6:
          v11 = -1073741820;
          break;
        case 10:
          v11 = -1073741803;
          break;
        case 20:
          v11 = -1073741804;
          break;
        case 23:
          break;
        case 27:
          v11 = -1073610752;
          break;
        case 34:
          v11 = -1073741802;
          break;
        case 199:
          v11 = -1073741807;
          if ( _bittest64((const signed __int64 *)(*(_QWORD *)(v13 + 40) + 736LL), 0x3Eu) )
            v11 = -1073709056;
          break;
        default:
          v11 = -1073741807;
          break;
      }
    }
    *(_DWORD *)(v17 + 8) = v11;
    *(_DWORD *)(v6 + 84) += a3;
    result = *(_QWORD *)(v13 + 56);
    if ( *(_DWORD *)(result + 120) == 5 )
      *(_DWORD *)(v17 + 4) = a3;
  }
LABEL_10:
  v18 = *(_DWORD *)(a1 + 44);
  if ( v15 != v18 )
    return result;
  if ( a4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      HIDWORD(v51) = HIDWORD(a1);
      WPP_RECORDER_SF_DDqqD(
        *(_QWORD *)(*(_QWORD *)(v13 + 56) + 80LL),
        4u,
        (unsigned int)(v18 - *(_DWORD *)(a1 + 40) + 1),
        0x19u,
        v48);
    }
    if ( *(_BYTE *)(v13 + 288) )
    {
      if ( *(_DWORD *)(a1 + 160) )
      {
        TR_SendCompleteStageRequest(v13);
        SecureDmaEnabler_ReleaseResourcesAfterDma(*(_QWORD *)(*(_QWORD *)(v13 + 40) + 104LL), a1 + 128);
      }
    }
    else if ( *(_QWORD *)(a1 + 72) )
    {
      v19 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
      v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 40) + 96LL) + 24LL);
      v21 = KfRaiseIrql(2u);
      (*(void (__fastcall **)(__int64, _QWORD, bool))(*(_QWORD *)(v20 + 8) + 96LL))(
        v20,
        *(_QWORD *)(a1 + 72),
        (*(_BYTE *)(v19 + 32) & 1) == 0);
      KeLowerIrql(v21);
      *(_QWORD *)(a1 + 72) = 0LL;
    }
    *(_BYTE *)(v13 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 96));
    v22 = *(unsigned __int8 **)a1;
    if ( *(_BYTE *)(a1 + 56) )
    {
      IoFreeMdl(*(PMDL *)(a1 + 64));
      *(_QWORD *)(a1 + 64) = 0LL;
      *(_BYTE *)(a1 + 56) = 0;
    }
    v23 = *(__int64 **)(a1 + 8);
    v24 = (__int64 *)(a1 + 8);
    if ( v23 != (__int64 *)(a1 + 8) )
    {
      if ( (*(_QWORD *)(*(_QWORD *)(v13 + 40) + 736LL) & 0x4000000000000LL) != 0 )
      {
        do
        {
          memset((void *)v23[2], 0, *((unsigned int *)v23 + 11));
          v23 = (__int64 *)*v23;
        }
        while ( v24 != v23 );
      }
      v25 = v13 + 208;
      if ( (__int64 *)*v24 != v24 )
      {
        **(_QWORD **)(a1 + 16) = *(_QWORD *)v25;
        *(_QWORD *)(*(_QWORD *)v25 + 8LL) = *(_QWORD *)(a1 + 16);
        *(_QWORD *)v25 = *v24;
        *(_QWORD *)(*v24 + 8) = v25;
        *(_QWORD *)(a1 + 16) = a1 + 8;
        *v24 = (__int64)v24;
      }
    }
    v26 = *(__int64 **)(a1 + 24);
    v27 = (__int64 *)(a1 + 24);
    if ( v26 != (__int64 *)(a1 + 24) )
    {
      if ( (*(_QWORD *)(*(_QWORD *)(v13 + 40) + 736LL) & 0x4000000000000LL) != 0 )
      {
        do
        {
          memset((void *)v26[2], 0, *((unsigned int *)v26 + 11));
          v26 = (__int64 *)*v26;
        }
        while ( v27 != v26 );
      }
      if ( (__int64 *)*v27 != v27 )
      {
        **(_QWORD **)(v13 + 216) = *v27;
        *(_QWORD *)(*v27 + 8) = *(_QWORD *)(v13 + 216);
        **(_QWORD **)(a1 + 32) = v13 + 208;
        *(_QWORD *)(v13 + 216) = *(_QWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 32) = a1 + 24;
        *v27 = (__int64)v27;
      }
    }
    v28 = v22[128];
    v29 = v22[132];
    --v22[130];
    v30 = v22[129];
    if ( (unsigned __int8 *)a1 == &v22[v29 * v28 + 144] )
      v22[132] = (v29 + 1) % v30;
    else
      v22[131] = (int)(v30 + v22[131] - 1) % (int)v30;
    ++*(_DWORD *)(v6 + 112);
    if ( *(_DWORD *)(v6 + 100) != *(_DWORD *)(v6 + 96) )
      goto LABEL_47;
    if ( *(_DWORD *)(v6 + 64) == 1 )
    {
      v31 = *(_QWORD *)v6;
      if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) == v6 )
      {
        v32 = *(_QWORD **)(v6 + 8);
        if ( *v32 == v6 )
        {
          *v32 = v31;
          *(_QWORD *)(v31 + 8) = v32;
          v33 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 2048))(
                  WdfDriverGlobals,
                  *(_QWORD *)(v6 + 24));
          if ( v33 >= 0 )
          {
            *(_DWORD *)(v6 + 64) = 0;
LABEL_33:
            KeReleaseSpinLock((PKSPIN_LOCK)(v13 + 96), *(_BYTE *)(v13 + 104));
            v34 = *(_QWORD *)(v6 + 48);
            if ( *(_WORD *)(v34 + 2) == 56 )
            {
LABEL_34:
              v35 = (_DWORD *)(v34 + 36);
            }
            else
            {
              switch ( *(_WORD *)(v34 + 2) )
              {
                case '9':
                case ':':
                  v35 = (_DWORD *)(v34 + 52);
                  break;
                default:
                  goto LABEL_34;
              }
            }
            v36 = *(_QWORD *)(v6 + 48);
            *v35 = *(_DWORD *)(v6 + 84);
            v37 = 0LL;
            v38 = *(_DWORD *)(v6 + 96);
            v39 = 0LL;
            if ( v38 )
            {
              while ( 1 )
              {
                v40 = *(_DWORD *)(v34 + 12LL * (unsigned int)v39 + 148);
                if ( v40 == -1 )
                  break;
                if ( v40 )
                  goto LABEL_52;
                v37 = (unsigned int)(v37 + 1);
LABEL_39:
                ++*(_DWORD *)(v13 + 264);
                v39 = (unsigned int)(v39 + 1);
                v38 = *(_DWORD *)(v6 + 96);
                if ( (unsigned int)v39 >= v38 )
                  goto LABEL_40;
              }
              *(_DWORD *)(v34 + 12LL * (unsigned int)v39 + 148) = -1073610752;
LABEL_52:
              ++*(_DWORD *)(v34 + 136);
              ++*(_DWORD *)(v13 + 268);
              goto LABEL_39;
            }
LABEL_40:
            if ( *(_DWORD *)(v34 + 136) == v38 )
              v7 = -1073739008;
            *(_DWORD *)(v34 + 4) = v7;
            *(_DWORD *)(v6 + 68) = TR_GetNtStatusFromUsbdStatus(v7, v39, v37, v36);
            ++*(_DWORD *)(v13 + 248);
            *(_QWORD *)(v13 + 256) += *(unsigned int *)(v6 + 84);
            if ( *(int *)(v6 + 68) < 0 )
              ++*(_DWORD *)(v13 + 252);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_DDqdDDDD(
                *(_QWORD *)(*(_QWORD *)(v13 + 56) + 80LL),
                *(unsigned __int8 *)(*(_QWORD *)(v13 + 48) + 135LL),
                v41,
                v42);
            Isoch_TransferData_Free(v6);
            v43 = KfRaiseIrql(2u);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2104))(
              WdfDriverGlobals,
              *(_QWORD *)(v6 + 24),
              *(unsigned int *)(v6 + 68));
            KeLowerIrql(v43);
            *(_BYTE *)(v13 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 96));
LABEL_47:
            *a6 = --*(_DWORD *)(v13 + 384);
            KeReleaseSpinLock((PKSPIN_LOCK)(v13 + 96), *(_BYTE *)(v13 + 104));
            result = (__int64)a5;
            *a5 = 1;
            return result;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v47 = *(_QWORD *)(v13 + 56);
            LODWORD(v51) = v33;
            LODWORD(v50) = *(_DWORD *)(v47 + 144);
            LODWORD(v49) = *(unsigned __int8 *)(*(_QWORD *)(v13 + 48) + 135LL);
            WPP_RECORDER_SF_DDqd(
              *(_QWORD *)(v47 + 80),
              4u,
              *(unsigned __int8 *)(*(_QWORD *)(v13 + 48) + 135LL),
              0x11u,
              (__int64)&WPP_dd4fc339be0d3de3d8d0a5a4ecea6bb9_Traceguids,
              v49,
              v50,
              *(_QWORD *)(v6 + 24),
              v51);
          }
          *(_DWORD *)(v6 + 64) = 2;
          v44 = *(__int64 **)(v13 + 416);
          if ( *v44 == v13 + 408 )
          {
            *(_QWORD *)v6 = v13 + 408;
            *(_QWORD *)(v6 + 8) = v44;
            *v44 = v6;
            *(_QWORD *)(v13 + 416) = v6;
            goto LABEL_47;
          }
        }
      }
      __fastfail(3u);
    }
    if ( *(_DWORD *)(v6 + 64) == 3 )
      goto LABEL_47;
    goto LABEL_33;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    result = (__int64)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_DDqqD(
               *(_QWORD *)(*(_QWORD *)(v13 + 56) + 80LL),
               5u,
               (unsigned int)(v18 - *(_DWORD *)(a1 + 40) + 1),
               0x1Au,
               v48);
  }
  return result;
}
