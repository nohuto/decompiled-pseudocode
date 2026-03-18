/*
 * XREFs of HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x14000AEC8
 * Callers:
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     HUBSM_EvtSmWorkItem @ 0x14000AD80 (HUBSM_EvtSmWorkItem.c)
 *     HUBSM_RunStateMachine @ 0x14000BEE4 (HUBSM_RunStateMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     McTemplateK0ppqqqq_EtwWriteTransfer @ 0x14000C5B4 (McTemplateK0ppqqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qLLL @ 0x14000C758 (WPP_RECORDER_SF_qLLL.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(__int64 a1)
{
  __int64 v1; // r12
  bool *v2; // r14
  int v3; // r13d
  __int64 v5; // rbp
  __int64 v6; // r15
  int v7; // eax
  _DWORD *v8; // rcx
  __int64 v9; // rdx
  int v10; // r8d
  __int64 v11; // rbx
  _DWORD *v12; // rax
  int v13; // edx
  int v14; // ecx
  KIRQL v15; // bp
  int v16; // r8d
  __int64 v17; // r13
  unsigned int *v18; // rax
  char v19; // r9
  unsigned int v20; // ebx
  unsigned __int8 v21; // dl
  char v22; // al
  __int64 v23; // rax
  int v24; // ebx
  int v25; // eax
  int v26; // r9d
  int v27; // eax
  __int64 v28; // rax
  int v29; // edx
  unsigned int v30; // ebx
  unsigned int v31; // ebx
  unsigned int v32; // ebx
  unsigned int v33; // ebx
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rbp
  int v37; // eax
  int v38; // ebx
  int v39; // r9d
  __int64 v40; // rbp
  KIRQL v41; // bl
  __int64 v42; // rax
  unsigned int v43; // ebx
  unsigned int v44; // ebx
  unsigned int v45; // ebx
  unsigned int v46; // ebx
  __int64 v47; // rax
  unsigned int v48; // edi
  int v50; // [rsp+20h] [rbp-78h]
  int v51; // [rsp+A0h] [rbp+8h]
  int v52; // [rsp+A8h] [rbp+10h]
  int v53; // [rsp+B0h] [rbp+18h]
  __int64 v54; // [rsp+B8h] [rbp+20h]

  v1 = *(unsigned int *)(a1 + 880);
  v2 = (bool *)(a1 + 1050);
  v3 = *(_DWORD *)(a1 + 984);
  v5 = *(_QWORD *)(a1 + 976);
  v54 = v5;
  v53 = v3;
  v51 = *(_DWORD *)(a1 + 880);
  v6 = *(_QWORD *)(v5 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4 * v1 + 852) - v3));
  if ( (*(_DWORD *)(v6 + 16) & 0x80u) != 0 )
    *v2 = !*v2;
  if ( *v2 || (*(_DWORD *)(v6 + 16) & 0x10) != 0 && KeGetCurrentIrql() )
  {
LABEL_96:
    (*(void (__fastcall **)(_QWORD, void (__fastcall *)(__int64, __int64), __int64, _QWORD))(*(_QWORD *)(a1 + 1000)
                                                                                           + 520LL))(
      *(_QWORD *)(a1 + 992),
      HUBSM_EvtSmWorkItem,
      a1,
      (unsigned int)(-(*(_BYTE *)(a1 + 1008) != 0) - 892338175));
    return 1003;
  }
  v7 = (*(__int64 (__fastcall **)(__int64))(v6 + 8))(a1);
  v8 = *(_DWORD **)(v6 + 24);
  v52 = v7;
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = 0LL;
      if ( v8[1] == 1002 )
        goto LABEL_11;
      v10 = *(_DWORD *)(a1 + 952);
      v11 = 0LL;
      v12 = v8;
      while ( (v10 & *v12) != v10 )
      {
        v9 = (unsigned int)(v9 + 1);
        v11 = (unsigned int)v9;
        v12 = &v8[2 * v9];
        if ( v12[1] == 1002 )
          goto LABEL_11;
      }
      v24 = v8[2 * v11 + 1];
      if ( v24 == 1002 )
      {
LABEL_11:
        v52 = 1001;
        goto LABEL_12;
      }
      v1 = (unsigned int)(v1 + 1);
      v51 = v1;
      *(_DWORD *)(a1 + 4 * v1 + 852) = v24;
      v25 = *(_DWORD *)(a1 + 984);
      *(_DWORD *)(a1 + 880) = v1;
      if ( v25 == 2000 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_33;
        v26 = 16;
        goto LABEL_32;
      }
      if ( v25 == 3000 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_33;
        v26 = 17;
        goto LABEL_32;
      }
      if ( v25 == 4000 )
        break;
      if ( v25 == 5000 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = 18;
LABEL_32:
        WPP_RECORDER_SF_qLLL(
          (_DWORD)v8,
          v9,
          v10,
          v26,
          v50,
          *(_QWORD *)(a1 + 960),
          *(_DWORD *)(a1 + 12LL * ((*(_BYTE *)(a1 + 832) - 1) & 0x3F) + 4),
          232,
          v24);
      }
LABEL_33:
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v24;
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v1;
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832)) = 1000;
      *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
      if ( SBYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
        McTemplateK0ppqqqq_EtwWriteTransfer(
          v24 - *(_DWORD *)(a1 + 984),
          (unsigned int)&USBHUB3_ETW_EVENT_STATE_MACHINE,
          a1 + 1012,
          *(_QWORD *)(a1 + 1032),
          *(_QWORD *)(a1 + 960),
          *(_DWORD *)(a1 + 984),
          **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8LL * (unsigned int)(v24 - *(_DWORD *)(a1 + 984))),
          232,
          v1);
      v6 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v24 - v3));
      if ( (*(_DWORD *)(v6 + 16) & 0x80u) != 0 )
        *v2 = !*v2;
      if ( *v2 || (*(_DWORD *)(v6 + 16) & 0x10) != 0 && KeGetCurrentIrql() )
        goto LABEL_96;
      v27 = (*(__int64 (__fastcall **)(__int64, __int64))(v6 + 8))(a1, v9);
      v8 = *(_DWORD **)(v6 + 24);
      v52 = v27;
      if ( !v8 )
        goto LABEL_12;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_33;
    v26 = 15;
    goto LABEL_32;
  }
LABEL_12:
  v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
  while ( 2 )
  {
    LODWORD(v17) = 0;
    if ( *(_DWORD *)(v6 + 32) == 1000 )
      goto LABEL_63;
    v18 = (unsigned int *)(v6 + 32);
    while ( v18[1] == 1000 )
    {
      LOBYTE(v14) = *(_BYTE *)(a1 + 948);
      v19 = 0;
      v20 = *v18;
      v21 = v14;
      v22 = *(_BYTE *)(a1 + 949);
      if ( (_BYTE)v14 != v22 )
      {
        do
        {
          v16 = *(_DWORD *)(a1 + 4LL * v21 + 884);
          if ( v16 == v20 )
          {
            v19 = 1;
          }
          else
          {
            v23 = (unsigned __int8)v14;
            LOBYTE(v14) = (v14 + 1) & 0xF;
            *(_DWORD *)(a1 + 4 * v23 + 884) = v16;
          }
          v22 = *(_BYTE *)(a1 + 949);
          v21 = (v21 + 1) & 0xF;
        }
        while ( v21 != v22 );
      }
      LOBYTE(v13) = v14;
      if ( (_BYTE)v14 != v22 )
      {
        do
        {
          v28 = v13 & 0xF;
          LOBYTE(v13) = (v13 + 1) & 0xF;
          *(_DWORD *)(a1 + 4 * v28 + 884) = 1000;
        }
        while ( (_BYTE)v13 != *(_BYTE *)(a1 + 949) );
      }
      *(_BYTE *)(a1 + 949) = v14;
      if ( !v19 )
        goto LABEL_61;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 840), v15);
      if ( v20 <= 0xFC7 )
      {
        if ( v20 != 4039 )
        {
          v30 = v20 - 3006;
          if ( !v30 )
          {
            v40 = *(_QWORD *)(a1 + 960);
            if ( (*(_DWORD *)(v40 + 1336) & 2) != 0 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(v40 + 1328) + 1636LL) & 0x400) != 0 )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v29) = 4;
                  WPP_RECORDER_SF_(
                    *(_QWORD *)(v40 + 1432),
                    v29,
                    5,
                    14,
                    (__int64)&WPP_0cc843adf6153b7d46bf14e0910357bd_Traceguids);
                }
                _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v40 + 1328) + 1636LL), 0xFFFFFBFF);
              }
            }
            else
            {
              v41 = KfRaiseIrql(2u);
              v42 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                      WdfDriverGlobals,
                      *(_QWORD *)(v40 + 1328));
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v42);
              KeLowerIrql(v41);
              *(_QWORD *)(v40 + 1328) = 0LL;
            }
            _InterlockedAnd((volatile signed __int32 *)(v40 + 1336), 0xFFFFFFFE);
            if ( *(_DWORD *)(v40 + 1424) != 4 )
              *(_DWORD *)(v40 + 1424) = 0;
            goto LABEL_60;
          }
          v31 = v30 - 1017;
          if ( v31 )
          {
            v32 = v31 - 4;
            if ( v32 )
            {
              v33 = v32 - 4;
              if ( v33 )
              {
                if ( v33 != 4 )
                  goto LABEL_60;
              }
            }
          }
        }
LABEL_54:
        v34 = *(_QWORD *)(a1 + 960);
        v35 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
                WdfDriverGlobals,
                *(_QWORD *)(v34 + 456));
        if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
        {
          v36 = a1 + 1012;
          if ( (*(int (__fastcall **)(__int64, __int64))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v35, a1 + 1012) >= 0 )
            goto LABEL_56;
        }
        goto LABEL_60;
      }
      v43 = v20 - 4043;
      if ( !v43 )
        goto LABEL_54;
      v44 = v43 - 4;
      if ( !v44 )
        goto LABEL_54;
      v45 = v44 - 20;
      if ( !v45 || (v46 = v45 - 4) == 0 || v46 == 28 )
      {
        v34 = *(_QWORD *)(a1 + 960);
        if ( (*(_DWORD *)(v34 + 1636) & 0x80u) != 0 )
        {
          v36 = a1 + 1012;
          *(_OWORD *)(a1 + 1012) = *(_OWORD *)(v34 + 2176);
LABEL_56:
          if ( g_IoSetActivityIdIrp )
          {
            g_IoSetActivityIdIrp(*(_QWORD *)(v34 + 264), v36);
            if ( g_IoSetActivityIdIrp )
              g_IoSetActivityIdIrp(*(_QWORD *)(v34 + 424), v36);
          }
          _InterlockedOr((volatile signed __int32 *)(v34 + 1636), 0x40u);
        }
      }
LABEL_60:
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
LABEL_61:
      v17 = (unsigned int)(v17 + 1);
      v18 = (unsigned int *)(v6 + 32 + 8 * v17);
      if ( *v18 == 1000 )
        break;
    }
    LODWORD(v1) = v51;
LABEL_63:
    if ( (*(_DWORD *)(v6 + 16) & 8) != 0 )
    {
      v37 = *(_DWORD *)(a1 + 984);
      v1 = (unsigned int)(v1 - 1);
      v51 = v1;
      v38 = *(_DWORD *)(a1 + 4 * v1 + 852);
      switch ( v37 )
      {
        case 2000:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_92;
          v39 = 16;
          break;
        case 3000:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_92;
          v39 = 17;
          break;
        case 4000:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_92;
          v39 = 15;
          break;
        default:
          if ( v37 == 5000 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v39 = 18;
            break;
          }
LABEL_92:
          *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v38;
          *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v1;
          v47 = *(unsigned __int8 *)(a1 + 832);
          *(_DWORD *)(a1 + 12 * v47) = 1000;
          *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
          if ( SBYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
            McTemplateK0ppqqqq_EtwWriteTransfer(
              3 * v47,
              (unsigned int)&USBHUB3_ETW_EVENT_STATE_MACHINE,
              a1 + 1012,
              *(_QWORD *)(a1 + 1032),
              *(_QWORD *)(a1 + 960),
              *(_DWORD *)(a1 + 984),
              **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8LL * (unsigned int)(v38 - *(_DWORD *)(a1 + 984))),
              232,
              v1);
          v14 = v54;
          v6 = *(_QWORD *)(v54 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4 * v1 + 852) - v53));
          continue;
      }
      WPP_RECORDER_SF_qLLL(
        v14,
        v13,
        v16,
        v39,
        v50,
        *(_QWORD *)(a1 + 960),
        *(_DWORD *)(a1 + 12LL * ((*(_BYTE *)(a1 + 832) - 1) & 0x3F) + 4),
        232,
        *(_DWORD *)(a1 + 4 * v1 + 852));
      goto LABEL_92;
    }
    break;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 840), v15);
  v48 = v52;
  *(_DWORD *)(a1 + 880) = v1;
  return v48;
}
