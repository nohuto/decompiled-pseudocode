/*
 * XREFs of HUBSM_RunStateMachine @ 0x14000BEE4
 * Callers:
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     HUBSM_EvtSmWorkItem @ 0x14000AD80 (HUBSM_EvtSmWorkItem.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x14000AEC8 (HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     HUBSM_FindAndSetTargetState @ 0x14000B6C0 (HUBSM_FindAndSetTargetState.c)
 *     HUBMISC_DbgBreak @ 0x14002FAB8 (HUBMISC_DbgBreak.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

KIRQL __fastcall HUBSM_RunStateMachine(__int64 a1, int a2, KIRQL *a3, char a4)
{
  unsigned int v4; // r13d
  char v5; // si
  __int64 i; // rdx
  __int64 v10; // rcx
  unsigned __int8 v11; // r8
  unsigned int v12; // ebx
  char v13; // r9
  int v14; // r10d
  int v15; // ecx
  __int64 v16; // rcx
  KSPIN_LOCK *v17; // r15
  int v18; // edx
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // r14
  KIRQL v22; // al
  __int64 v23; // r14
  KIRQL v24; // si
  __int64 v25; // rax
  int v26; // r8d
  volatile signed __int32 *v27; // rdi
  __int64 j; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  KIRQL result; // al
  KIRQL v33; // cl
  KIRQL v34; // r9
  char v35; // r8
  KIRQL v36; // dl
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // [rsp+20h] [rbp-58h]
  char v41; // [rsp+88h] [rbp+10h] BYREF
  char v42; // [rsp+98h] [rbp+20h]

  v42 = a4;
  v4 = 0;
  v41 = 0;
  v5 = a4;
  while ( 1 )
  {
    if ( a2 == 1000 )
    {
      for ( i = *(unsigned int *)(a1 + 880); ; i = (unsigned int)(i - 1) )
      {
        v10 = *(_QWORD *)(*(_QWORD *)(a1 + 976)
                        + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4 * i + 852) - *(_DWORD *)(a1 + 984)));
        if ( !(_DWORD)i || (*(_DWORD *)(v10 + 16) & 4) == 0 )
          break;
      }
      v11 = *(_BYTE *)(a1 + 948);
      v12 = 1000;
      v13 = *(_BYTE *)(a1 + 949);
      LOBYTE(i) = v11;
      v14 = *(_DWORD *)(v10 + 16);
      if ( v11 != v13 )
      {
        while ( 1 )
        {
          v15 = *(_DWORD *)(a1 + 4LL * (unsigned __int8)i + 884) & 3;
          if ( !v15 )
            break;
          if ( (v15 != 2 || (v14 & 1) != 0) && (v15 != 3 || (v14 & 2) == 0) )
          {
            LOBYTE(i) = (i + 1) & 0xF;
            if ( (_BYTE)i != v13 )
              continue;
          }
          if ( (_BYTE)i == v13 )
            goto LABEL_19;
          break;
        }
        v12 = *(_DWORD *)(a1 + 4LL * (unsigned __int8)i + 884);
        while ( (_BYTE)i != v11 )
        {
          v16 = (unsigned __int8)i;
          LOBYTE(i) = (i - 1) & 0xF;
          *(_DWORD *)(a1 + 4 * v16 + 884) = *(_DWORD *)(a1 + 4LL * (((_BYTE)v16 - 1) & 0xF) + 884);
          v11 = *(_BYTE *)(a1 + 948);
        }
        *(_DWORD *)(a1 + 4LL * v11 + 884) = 1000;
        *(_BYTE *)(a1 + 948) = (*(_BYTE *)(a1 + 948) + 1) & 0xF;
      }
LABEL_19:
      if ( v12 == 1000 )
      {
        v38 = *(_QWORD *)(a1 + 960);
        *(_BYTE *)(a1 + 848) = 0;
        v39 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                WdfDriverGlobals,
                v38);
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
                 WdfDriverGlobals,
                 v39,
                 "State Machine Tag",
                 1520LL,
                 "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
      }
      if ( ++v4 == -1 )
        HUBMISC_DbgBreak("State machine running for too long", i);
      v17 = (KSPIN_LOCK *)(a1 + 840);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 840), *a3);
      if ( v12 > 0xFC7 )
      {
        if ( v12 != 4043 && v12 != 4047 )
        {
          if ( v12 == 4067 || v12 == 4071 || v12 == 4099 )
          {
            v19 = *(_QWORD *)(a1 + 960);
            if ( (*(_DWORD *)(v19 + 1636) & 0x80u) != 0 )
            {
              v21 = a1 + 1012;
              *(_OWORD *)(a1 + 1012) = *(_OWORD *)(v19 + 2176);
LABEL_31:
              if ( g_IoSetActivityIdIrp )
              {
                g_IoSetActivityIdIrp(*(_QWORD *)(v19 + 264), v21);
                if ( g_IoSetActivityIdIrp )
                  g_IoSetActivityIdIrp(*(_QWORD *)(v19 + 424), v21);
              }
              _InterlockedOr((volatile signed __int32 *)(v19 + 1636), 0x40u);
            }
          }
LABEL_35:
          v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
          v5 = v42;
          *a3 = v22;
          goto LABEL_52;
        }
      }
      else if ( v12 != 4039 )
      {
        if ( v12 == 3006 )
        {
          v23 = *(_QWORD *)(a1 + 960);
          if ( (*(_DWORD *)(v23 + 1336) & 2) != 0 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(v23 + 1328) + 1636LL) & 0x400) != 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v18) = 4;
                WPP_RECORDER_SF_(
                  *(_QWORD *)(v23 + 1432),
                  v18,
                  5,
                  14,
                  (__int64)&WPP_0cc843adf6153b7d46bf14e0910357bd_Traceguids);
              }
              _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v23 + 1328) + 1636LL), 0xFFFFFBFF);
            }
          }
          else
          {
            v24 = KfRaiseIrql(2u);
            v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                    WdfDriverGlobals,
                    *(_QWORD *)(v23 + 1328));
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v25);
            KeLowerIrql(v24);
            *(_QWORD *)(v23 + 1328) = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)(v23 + 1336), 0xFFFFFFFE);
          if ( *(_DWORD *)(v23 + 1424) != 4 )
            *(_DWORD *)(v23 + 1424) = 0;
          goto LABEL_35;
        }
        if ( v12 != 4023 && v12 != 4027 && v12 != 4031 && v12 != 4035 )
          goto LABEL_35;
      }
      v19 = *(_QWORD *)(a1 + 960);
      v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
              WdfDriverGlobals,
              *(_QWORD *)(v19 + 456));
      if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
      {
        v21 = a1 + 1012;
        if ( (*(int (__fastcall **)(__int64, __int64))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v20, a1 + 1012) >= 0 )
          goto LABEL_31;
      }
      goto LABEL_35;
    }
    v12 = a2;
    v17 = (KSPIN_LOCK *)(a1 + 840);
    a2 = 1000;
LABEL_52:
    KeReleaseSpinLock(v17, *a3);
    if ( !HUBSM_FindAndSetTargetState(a1, v12, &v41) )
      goto LABEL_82;
    v26 = *(_DWORD *)(a1 + 984);
    if ( v26 == 3000 || v26 == 5000 )
    {
      v27 = *(volatile signed __int32 **)(a1 + 960);
      for ( j = *(unsigned int *)(a1 + 880); ; j = (unsigned int)(j - 1) )
      {
        v29 = *(_QWORD *)(*(_QWORD *)(a1 + 976) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4 * j + 852) - v26));
        if ( !(_DWORD)j || (*(_DWORD *)(v29 + 16) & 4) == 0 )
          break;
      }
      if ( (*(_BYTE *)(v29 + 16) & 0x20) != 0 )
      {
        if ( (v27[66] & 0x20) != 0 )
        {
          v30 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                  WdfDriverGlobals,
                  *(_QWORD *)v27);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
            WdfDriverGlobals,
            v30,
            0LL,
            1588LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
          _InterlockedAnd(v27 + 66, 0xFFFFFFDF);
        }
      }
      else if ( (*(_DWORD *)(*(_QWORD *)v27 + 40LL) & 0x20000) != 0 && (v27[66] & 0x20) == 0 )
      {
        v31 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
        LODWORD(v40) = 1603;
        if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3504))(
               WdfDriverGlobals,
               v31,
               0LL,
               0LL,
               v40,
               "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c") >= 0 )
          _InterlockedOr(v27 + 66, 0x20u);
      }
    }
    if ( v41 )
    {
      v41 = 0;
      if ( v12 != 1002 && !(unsigned __int8)ExCancelTimer(*(_QWORD *)(a1 + 1040), 0LL) )
      {
        result = KeAcquireSpinLockRaiseToDpc(v17);
        v33 = *(_BYTE *)(a1 + 948);
        v34 = result;
        v35 = *(_BYTE *)(a1 + 949);
        v36 = v33;
        *a3 = result;
        if ( v33 == v35 )
        {
LABEL_72:
          *(_BYTE *)(a1 + 1048) = 1;
          return result;
        }
        while ( 1 )
        {
          result = v36;
          if ( *(_DWORD *)(a1 + 4LL * v36 + 884) == 1002 )
            break;
          v36 = (v36 + 1) & 0xF;
          if ( v36 == v35 )
            goto LABEL_72;
        }
        if ( v36 != v35 )
        {
          while ( v36 != v33 )
          {
            v37 = v36;
            v36 = (v36 - 1) & 0xF;
            *(_DWORD *)(a1 + 4 * v37 + 884) = *(_DWORD *)(a1 + 4LL * (((_BYTE)v37 - 1) & 0xF) + 884);
            v33 = *(_BYTE *)(a1 + 948);
          }
          *(_DWORD *)(a1 + 4LL * v33 + 884) = 1000;
          *(_BYTE *)(a1 + 948) = (*(_BYTE *)(a1 + 948) + 1) & 0xF;
        }
        KeReleaseSpinLock(v17, v34);
      }
    }
    if ( !v5 && v4 > 0x64 )
      break;
    a2 = HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(a1);
    if ( a2 == 1003 )
      goto LABEL_85;
LABEL_82:
    *a3 = KeAcquireSpinLockRaiseToDpc(v17);
  }
  (*(void (__fastcall **)(_QWORD, void (__fastcall *)(__int64, __int64), __int64, _QWORD))(*(_QWORD *)(a1 + 1000) + 520LL))(
    *(_QWORD *)(a1 + 992),
    HUBSM_EvtSmWorkItem,
    a1,
    (unsigned int)(-(*(_BYTE *)(a1 + 1008) != 0) - 892338175));
LABEL_85:
  result = KeAcquireSpinLockRaiseToDpc(v17);
  *a3 = result;
  return result;
}
