/*
 * XREFs of ?SetPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z @ 0x1400BFE30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400AACA4 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     ?GetPriorityFloorRequester@@YA?AW4tagThreadPriorityFloorRequester@@W4tagThreadPriorityFloor@@@Z @ 0x1400C0248 (-GetPriorityFloorRequester@@YA-AW4tagThreadPriorityFloorRequester@@W4tagThreadPriorityFloor@@@Z.c)
 *     ?GetPriorityFloorValue@@YAEW4tagThreadPriorityFloor@@@Z @ 0x1400C028C (-GetPriorityFloorValue@@YAEW4tagThreadPriorityFloor@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_DdddD @ 0x1400C02D0 (WPP_RECORDER_AND_TRACE_SF_DdddD.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDdd @ 0x1400C0430 (WPP_RECORDER_AND_TRACE_SF_DDdd.c)
 */

void __fastcall tagTHREADINFO::SetPriorityFloor(_QWORD *a1, unsigned int a2)
{
  __int64 PriorityFloorValue; // r13
  int PriorityFloorRequester; // ebp
  __int64 v6; // r8
  char v7; // r12
  bool v8; // r14
  __int64 UserSessionState; // rax
  int v10; // edx
  int v11; // r8d
  char v12; // cl
  char v13; // bp
  char v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rax
  __int16 v17; // bp
  int v18; // r14d
  char v19; // si
  char ThreadId; // di
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // edx
  int v24; // r8d
  int v25; // [rsp+20h] [rbp-78h]
  int v26; // [rsp+28h] [rbp-70h]
  int v27; // [rsp+38h] [rbp-60h]
  bool v28; // [rsp+A0h] [rbp+8h]
  bool v29; // [rsp+A0h] [rbp+8h]

  PriorityFloorValue = (unsigned __int8)GetPriorityFloorValue(a2);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1 + 216, 0LL);
  if ( *((_BYTE *)a1 + PriorityFloorValue + 1744) == 0xFF
    || (PriorityFloorRequester = GetPriorityFloorRequester(a2),
        (PriorityFloorRequester & *((_DWORD *)a1 + 435)) == PriorityFloorRequester) )
  {
    KeBugCheckEx(0x164u, 0x41uLL, 0LL, 0LL, 0LL);
  }
  v7 = 1;
  v8 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    PsGetThreadId((PETHREAD)*a1);
    UserSessionState = W32GetUserSessionState(a1[58]);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v28;
    WPP_RECORDER_AND_TRACE_SF_DDdd(*((_QWORD *)WPP_GLOBAL_Control + 3), v10, v11, *(_QWORD *)(UserSessionState + 69400));
  }
  *((_DWORD *)a1 + 435) |= PriorityFloorRequester;
  v12 = *((_BYTE *)a1 + PriorityFloorValue + 1744) + 1;
  *((_BYTE *)a1 + PriorityFloorValue + 1744) = v12;
  if ( v12 == 1 )
  {
    if ( *((unsigned __int16 *)a1 + 868) < 1 << PriorityFloorValue )
    {
      v13 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        PsGetThreadId((PETHREAD)*a1);
        v16 = W32GetUserSessionState(v15);
        WPP_RECORDER_AND_TRACE_SF_dD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v13,
          v14,
          *(_QWORD *)(v16 + 69400),
          4u,
          0xDu,
          0x10u,
          (__int64)&WPP_ab198495905d31ffcdd691cf04187f1c_Traceguids);
      }
      PsAdjustWin32kPriorityFloor(*a1, (unsigned int)PriorityFloorValue, v6);
    }
    *((_WORD *)a1 + 868) |= 1 << PriorityFloorValue;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v7 = 0;
  }
  v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = *((_WORD *)a1 + 868);
    v18 = *((_DWORD *)a1 + 435);
    v19 = *((_BYTE *)a1 + PriorityFloorValue + 1744);
    ThreadId = (unsigned __int8)PsGetThreadId((PETHREAD)*a1);
    v22 = W32GetUserSessionState(v21);
    LOBYTE(v23) = v7;
    LOBYTE(v24) = v29;
    WPP_RECORDER_AND_TRACE_SF_DdddD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v23,
      v24,
      *(_QWORD *)(v22 + 69400),
      v25,
      v26,
      17,
      v27,
      ThreadId,
      PriorityFloorValue,
      v19,
      v18,
      v17);
  }
  ExReleasePushLockExclusiveEx(a1 + 216, 0LL);
  KeLeaveCriticalRegion();
}
