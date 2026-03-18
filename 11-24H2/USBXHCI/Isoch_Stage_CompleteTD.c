/*
 * XREFs of Isoch_Stage_CompleteTD @ 0x140010440
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x140011400 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x140011E20 (Isoch_ProcessTransferEventWithED0.c)
 *     Isoch_Transfer_CompleteStaleStages @ 0x140012930 (Isoch_Transfer_CompleteStaleStages.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqq @ 0x1400076A0 (WPP_RECORDER_SF_DDqq.c)
 *     TR_GetNtStatusFromUsbdStatus @ 0x140010CD8 (TR_GetNtStatusFromUsbdStatus.c)
 *     Isoch_TransferData_Free @ 0x1400111C4 (Isoch_TransferData_Free.c)
 *     WPP_RECORDER_SF_DDqqD @ 0x140011240 (WPP_RECORDER_SF_DDqqD.c)
 *     WPP_RECORDER_SF_DDqdDDDD @ 0x140012700 (WPP_RECORDER_SF_DDqdDDDD.c)
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x140022E7C (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 *     WPP_RECORDER_SF_DDqd @ 0x14002F21C (WPP_RECORDER_SF_DDqd.c)
 *     TR_SendCompleteStageRequest @ 0x14003C8C4 (TR_SendCompleteStageRequest.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

__int64 __fastcall Isoch_Stage_CompleteTD(unsigned __int8 *a1, int a2, __int64 a3, char a4, _BYTE *a5, _DWORD *a6)
{
  __int64 *v6; // rbx
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
  __int64 *v31; // rcx
  __int64 **v32; // rax
  int v33; // eax
  __int64 v34; // r10
  _DWORD *v35; // rcx
  int v36; // r8d
  unsigned int v37; // eax
  unsigned int v38; // edx
  int v39; // eax
  int v40; // r8d
  int v41; // r9d
  KIRQL v42; // di
  int v43; // edx
  __int64 **v44; // rcx
  int v45; // edx
  __int64 v46; // rcx
  __int64 v47; // rdx
  int v48; // r8d
  int v49; // [rsp+20h] [rbp-98h]
  __int64 v50; // [rsp+70h] [rbp-48h]
  __int64 v51; // [rsp+C0h] [rbp+8h]
  int v52; // [rsp+D0h] [rbp+18h]
  char v53; // [rsp+D8h] [rbp+20h]

  v53 = a4;
  v52 = a3;
  v6 = *(__int64 **)a1;
  v7 = 0;
  v8 = *((_DWORD *)a1 + 12);
  v11 = -1073545216;
  *a6 = 0;
  result = (__int64)a5;
  v13 = v6[7];
  v14 = v6[6] + 140;
  *a5 = 0;
  v15 = v8 - 1;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( *(_DWORD *)(v14 + 12 * v16 + 8) == -1 )
    {
      result = (int)v16;
      v51 = (int)v16;
      if ( (int)v16 >= 0 )
      {
        v46 = 12LL * (int)v16;
        v50 = v46;
        do
        {
          if ( *(_DWORD *)(v14 + v46 + 8) != -1 )
            break;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_DDqq(
              *(_QWORD *)(*(_QWORD *)(v13 + 56) + 80LL),
              2u,
              a3,
              0x18u,
              (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids);
            result = v51;
            v46 = v50;
          }
          --result;
          *(_DWORD *)(v14 + v46 + 8) = -1073545216;
          v46 -= 12LL;
          v51 = result;
          v50 = v46;
        }
        while ( result >= 0 );
        LODWORD(a3) = v52;
        v7 = 0;
        a4 = v53;
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
    *((_DWORD *)v6 + 21) += a3;
    result = *(_QWORD *)(v13 + 56);
    if ( *(_DWORD *)(result + 128) == 5 )
      *(_DWORD *)(v17 + 4) = a3;
  }
LABEL_10:
  v18 = *((_DWORD *)a1 + 11);
  if ( v15 != v18 )
    return result;
  if ( a4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v43 = *(unsigned __int8 *)(*(_QWORD *)(v13 + 48) + 143LL);
      LOBYTE(v43) = 4;
      WPP_RECORDER_SF_DDqqD(
        *(_QWORD *)(*(_QWORD *)(v13 + 56) + 80LL),
        v43,
        v18 - *((_DWORD *)a1 + 10) + 1,
        25,
        v49,
        *(_BYTE *)(*(_QWORD *)(v13 + 48) + 143LL),
        *(_DWORD *)(*(_QWORD *)(v13 + 56) + 152LL),
        v6[3],
        (char)a1,
        v18 - a1[40] + 1);
    }
    if ( *(_BYTE *)(v13 + 288) )
    {
      if ( *((_DWORD *)a1 + 40) )
      {
        TR_SendCompleteStageRequest(v13);
        SecureDmaEnabler_ReleaseResourcesAfterDma(*(_QWORD *)(*(_QWORD *)(v13 + 40) + 104LL), a1 + 128);
      }
    }
    else if ( *((_QWORD *)a1 + 9) )
    {
      v19 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
      v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 40) + 96LL) + 24LL);
      v21 = KfRaiseIrql(2u);
      (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)(v20 + 8) + 96LL))(
        v20,
        *((_QWORD *)a1 + 9),
        (*(_BYTE *)(v19 + 32) & 1) == 0);
      KeLowerIrql(v21);
      *((_QWORD *)a1 + 9) = 0LL;
    }
    *(_BYTE *)(v13 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 96));
    v22 = *(unsigned __int8 **)a1;
    if ( a1[56] )
    {
      IoFreeMdl(*((PMDL *)a1 + 8));
      *((_QWORD *)a1 + 8) = 0LL;
      a1[56] = 0;
    }
    v23 = (__int64 *)*((_QWORD *)a1 + 1);
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
        **((_QWORD **)a1 + 2) = *(_QWORD *)v25;
        *(_QWORD *)(*(_QWORD *)v25 + 8LL) = *((_QWORD *)a1 + 2);
        *(_QWORD *)v25 = *v24;
        *(_QWORD *)(*v24 + 8) = v25;
        *((_QWORD *)a1 + 2) = a1 + 8;
        *v24 = (__int64)v24;
      }
    }
    v26 = (__int64 *)*((_QWORD *)a1 + 3);
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
        **((_QWORD **)a1 + 4) = v13 + 208;
        *(_QWORD *)(v13 + 216) = *((_QWORD *)a1 + 4);
        *((_QWORD *)a1 + 4) = a1 + 24;
        *v27 = (__int64)v27;
      }
    }
    v28 = v22[128];
    v29 = v22[132];
    --v22[130];
    v30 = v22[129];
    if ( a1 == &v22[v29 * v28 + 144] )
      v22[132] = (v29 + 1) % v30;
    else
      v22[131] = (int)(v30 + v22[131] - 1) % (int)v30;
    ++*((_DWORD *)v6 + 28);
    if ( *((_DWORD *)v6 + 25) != *((_DWORD *)v6 + 24) )
      goto LABEL_47;
    if ( *((_DWORD *)v6 + 16) == 1 )
    {
      v31 = (__int64 *)*v6;
      if ( *(__int64 **)(*v6 + 8) == v6 )
      {
        v32 = (__int64 **)v6[1];
        if ( *v32 == v6 )
        {
          *v32 = v31;
          v31[1] = (__int64)v32;
          v33 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2048))(
                  WdfDriverGlobals,
                  v6[3]);
          if ( v33 >= 0 )
          {
            *((_DWORD *)v6 + 16) = 0;
LABEL_33:
            KeReleaseSpinLock((PKSPIN_LOCK)(v13 + 96), *(_BYTE *)(v13 + 104));
            v34 = v6[6];
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
            *v35 = *((_DWORD *)v6 + 21);
            v36 = 0;
            v37 = *((_DWORD *)v6 + 24);
            v38 = 0;
            if ( v37 )
            {
              while ( 1 )
              {
                v39 = *(_DWORD *)(v34 + 12LL * v38 + 148);
                if ( v39 == -1 )
                  break;
                if ( v39 )
                  goto LABEL_52;
                ++v36;
LABEL_39:
                ++*(_DWORD *)(v13 + 264);
                ++v38;
                v37 = *((_DWORD *)v6 + 24);
                if ( v38 >= v37 )
                  goto LABEL_40;
              }
              *(_DWORD *)(v34 + 12LL * v38 + 148) = -1073610752;
LABEL_52:
              ++*(_DWORD *)(v34 + 136);
              ++*(_DWORD *)(v13 + 268);
              goto LABEL_39;
            }
LABEL_40:
            if ( *(_DWORD *)(v34 + 136) == v37 )
              v7 = -1073739008;
            *(_DWORD *)(v34 + 4) = v7;
            *((_DWORD *)v6 + 17) = TR_GetNtStatusFromUsbdStatus(v7);
            ++*(_DWORD *)(v13 + 248);
            *(_QWORD *)(v13 + 256) += *((unsigned int *)v6 + 21);
            if ( *((int *)v6 + 17) < 0 )
              ++*(_DWORD *)(v13 + 252);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_DDqdDDDD(
                *(_QWORD *)(*(_QWORD *)(v13 + 56) + 80LL),
                *(unsigned __int8 *)(*(_QWORD *)(v13 + 48) + 143LL),
                v40,
                v41);
            Isoch_TransferData_Free(v6);
            v42 = KfRaiseIrql(2u);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
              WdfDriverGlobals,
              v6[3],
              *((unsigned int *)v6 + 17));
            KeLowerIrql(v42);
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
            v47 = *(_QWORD *)(v13 + 48);
            v48 = *(unsigned __int8 *)(v47 + 143);
            LOBYTE(v47) = 4;
            WPP_RECORDER_SF_DDqd(
              *(_QWORD *)(*(_QWORD *)(v13 + 56) + 80LL),
              v47,
              v48,
              17,
              (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
              v48,
              *(_DWORD *)(*(_QWORD *)(v13 + 56) + 152LL),
              v6[3],
              v33);
          }
          *((_DWORD *)v6 + 16) = 2;
          v44 = *(__int64 ***)(v13 + 416);
          if ( *v44 == (__int64 *)(v13 + 408) )
          {
            *v6 = v13 + 408;
            v6[1] = (__int64)v44;
            *v44 = v6;
            *(_QWORD *)(v13 + 416) = v6;
            goto LABEL_47;
          }
        }
      }
      __fastfail(3u);
    }
    if ( *((_DWORD *)v6 + 16) == 3 )
      goto LABEL_47;
    goto LABEL_33;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    result = (__int64)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v45 = *(unsigned __int8 *)(*(_QWORD *)(v13 + 48) + 143LL);
      LOBYTE(v45) = 5;
      return WPP_RECORDER_SF_DDqqD(
               *(_QWORD *)(*(_QWORD *)(v13 + 56) + 80LL),
               v45,
               v18 - *((_DWORD *)a1 + 10) + 1,
               26,
               v49,
               *(_BYTE *)(*(_QWORD *)(v13 + 48) + 143LL),
               *(_DWORD *)(*(_QWORD *)(v13 + 56) + 152LL),
               v6[3],
               (char)a1,
               (unsigned __int8)v18 - a1[40] + 1);
    }
  }
  return result;
}
