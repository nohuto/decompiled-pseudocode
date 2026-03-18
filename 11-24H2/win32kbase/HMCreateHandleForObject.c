/*
 * XREFs of HMCreateHandleForObject @ 0x140062FB0
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1401874A0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x14020F4F0 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x140062510 (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     HMHandleFromIndex @ 0x1400631A0 (HMHandleFromIndex.c)
 *     EtwTraceUserCreateHandle @ 0x140063210 (EtwTraceUserCreateHandle.c)
 *     RawInputManagerDeviceObjectReference @ 0x140063B80 (RawInputManagerDeviceObjectReference.c)
 *     ?HMGrowHandleTable@@YAHXZ @ 0x140111A54 (-HMGrowHandleTable@@YAHXZ.c)
 */

__int64 __fastcall HMCreateHandleForObject(_QWORD *a1, unsigned __int8 a2)
{
  __int64 v4; // rcx
  _QWORD *UserSessionState; // rbp
  __int64 *v6; // rbx
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rcx
  unsigned int EtwUserHandleType; // eax
  __int64 v22; // rbx

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  if ( a2 != 19 && a2 != 22 || !a1 )
    return 0LL;
  while ( 1 )
  {
    v6 = UserSessionState + 2470;
    if ( UserSessionState[2470] )
      break;
    v6 = UserSessionState + 2469;
    if ( UserSessionState[2469] )
      break;
    if ( !(unsigned int)HMGrowHandleTable() )
      return 0LL;
  }
  if ( !v6 )
    return 0LL;
  v7 = *v6;
  v8 = UserSessionState[2493] + 32 * *v6;
  v9 = *(_QWORD *)(W32GetUserSessionState(v4) + 19888);
  *v6 = *(_QWORD *)(v9 + 40 * v7);
  if ( (unsigned int)v7 > *(_DWORD *)(W32GetUserSessionState(v10) + 19872) )
    *(_DWORD *)(W32GetUserSessionState(v11) + 19872) = v7;
  *(_BYTE *)(v8 + 24) = a2;
  *(_QWORD *)(v9 + 40 * v7 + 24) = 0LL;
  *(_QWORD *)(v9 + 40 * v7) = a1;
  *(_QWORD *)(v9 + 40 * v7 + 32) = _InterlockedIncrement64(&HandleSequenceNumber);
  *a1 = HMHandleFromIndex(v7);
  v13 = W32GetUserSessionState(v12);
  ++*(_DWORD *)(v13 + 19876);
  v15 = *(_DWORD *)(W32GetUserSessionState(v14) + 19876);
  if ( v15 > *(_DWORD *)(W32GetUserSessionState(v16) + 19880) )
  {
    v18 = *(_DWORD *)(W32GetUserSessionState(v17) + 19876);
    *(_DWORD *)(W32GetUserSessionState(v19) + 19880) = v18;
  }
  EtwUserHandleType = GetEtwUserHandleType(a2);
  EtwTraceUserCreateHandle(*a1, EtwUserHandleType, 0LL);
  if ( a2 == 19 )
  {
    RawInputManagerDeviceObjectReference(a1[4]);
  }
  else
  {
    v22 = a1[2];
    RawInputManagerDeviceObjectReference(*(_QWORD *)(v22 + 32));
    _InterlockedAdd((volatile signed __int32 *)(v22 + 8), 1u);
  }
  *(_QWORD *)(v9 + 40 * v7 + 16) = 0LL;
  return *(_QWORD *)(v9 + 40 * v7);
}
