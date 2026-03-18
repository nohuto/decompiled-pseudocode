/*
 * XREFs of ?ClearPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z @ 0x1400BFA00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400AACA4 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     ?GetPriorityFloorRequester@@YA?AW4tagThreadPriorityFloorRequester@@W4tagThreadPriorityFloor@@@Z @ 0x1400C0248 (-GetPriorityFloorRequester@@YA-AW4tagThreadPriorityFloorRequester@@W4tagThreadPriorityFloor@@@Z.c)
 *     ?GetPriorityFloorValue@@YAEW4tagThreadPriorityFloor@@@Z @ 0x1400C028C (-GetPriorityFloorValue@@YAEW4tagThreadPriorityFloor@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_DdddD @ 0x1400C02D0 (WPP_RECORDER_AND_TRACE_SF_DdddD.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDdd @ 0x1400C0430 (WPP_RECORDER_AND_TRACE_SF_DDdd.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?GetTID@tagTHREADINFO@@QEBAKXZ @ 0x1400F2110 (-GetTID@tagTHREADINFO@@QEBAKXZ.c)
 */

void __fastcall tagTHREADINFO::ClearPriorityFloor(_QWORD *a1, unsigned int a2)
{
  unsigned __int8 PriorityFloorValue; // al
  __int64 v5; // r13
  int PriorityFloorRequester; // ebp
  char v7; // r12
  __int64 v8; // r8
  bool v9; // r14
  __int64 UserSessionState; // rax
  int v11; // edx
  int v12; // r8d
  bool v13; // zf
  int v14; // edx
  unsigned __int16 v15; // ax
  unsigned int v16; // r14d
  bool v17; // si
  bool v18; // bp
  char ThreadId; // di
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  __int64 v24; // rdx
  bool v25; // r13
  __int16 v26; // bp
  int v27; // r14d
  char v28; // si
  char v29; // di
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  char v34; // si
  char v35; // bp
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // [rsp+20h] [rbp-88h]
  int v39; // [rsp+28h] [rbp-80h]
  int v40; // [rsp+38h] [rbp-70h]
  unsigned __int8 v41; // [rsp+B0h] [rbp+8h]
  bool v42; // [rsp+C0h] [rbp+18h]

  PriorityFloorValue = GetPriorityFloorValue(a2);
  v5 = PriorityFloorValue;
  v41 = PriorityFloorValue;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1 + 216, 0LL);
  if ( !*((_BYTE *)a1 + v5 + 1744) )
    goto LABEL_2;
  PriorityFloorRequester = GetPriorityFloorRequester(a2);
  if ( (PriorityFloorRequester & *((_DWORD *)a1 + 435)) != PriorityFloorRequester )
    goto LABEL_2;
  v7 = 1;
  v8 = 4096LL;
  v9 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    PsGetThreadId((PETHREAD)*a1);
    UserSessionState = W32GetUserSessionState(a1[58]);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v42;
    WPP_RECORDER_AND_TRACE_SF_DDdd(*((_QWORD *)WPP_GLOBAL_Control + 3), v11, v12, *(_QWORD *)(UserSessionState + 69400));
    v8 = 4096LL;
  }
  *((_DWORD *)a1 + 435) &= ~PriorityFloorRequester;
  v13 = (*((_BYTE *)a1 + v5 + 1744))-- == 1;
  if ( v13 )
  {
    v14 = 1 << v5;
    if ( ((1 << v5) & (unsigned __int16)a1[217]) == 1 << v5 )
    {
      v15 = a1[217] & ~(_WORD)v14;
      *((_WORD *)a1 + 868) = v15;
      if ( v15 < v14 )
      {
        v13 = !_BitScanReverse(&v16, v15);
        if ( v13 )
        {
          v17 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            ThreadId = (unsigned __int8)PsGetThreadId((PETHREAD)*a1);
            v21 = W32GetUserSessionState(v20);
            LOBYTE(v22) = v18;
            LOBYTE(v23) = v17;
            WPP_RECORDER_AND_TRACE_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v23,
              v22,
              *(_QWORD *)(v21 + 69400),
              4,
              13,
              20,
              (__int64)&WPP_ab198495905d31ffcdd691cf04187f1c_Traceguids,
              ThreadId);
          }
          v24 = 0LL;
        }
        else
        {
          v34 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            tagTHREADINFO::GetTID((tagTHREADINFO *)a1);
            v37 = W32GetUserSessionState(v36);
            WPP_RECORDER_AND_TRACE_SF_dD(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v34,
              v35,
              *(_QWORD *)(v37 + 69400),
              4u,
              0xDu,
              0x13u,
              (__int64)&WPP_ab198495905d31ffcdd691cf04187f1c_Traceguids);
          }
          v24 = v16;
        }
        PsAdjustWin32kPriorityFloor(*a1, v24, v8);
      }
      goto LABEL_21;
    }
LABEL_2:
    KeBugCheckEx(0x164u, 0x41uLL, 0LL, 0LL, 0LL);
  }
LABEL_21:
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v7 = 0;
  }
  v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v26 = *((_WORD *)a1 + 868);
    v27 = *((_DWORD *)a1 + 435);
    v28 = *((_BYTE *)a1 + v41 + 1744);
    v29 = (unsigned __int8)PsGetThreadId((PETHREAD)*a1);
    v31 = W32GetUserSessionState(v30);
    LOBYTE(v32) = v25;
    LOBYTE(v33) = v7;
    WPP_RECORDER_AND_TRACE_SF_DdddD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v33,
      v32,
      *(_QWORD *)(v31 + 69400),
      v38,
      v39,
      21,
      v40,
      v29,
      v41,
      v28,
      v27,
      v26);
  }
  ExReleasePushLockExclusiveEx(a1 + 216, 0LL);
  KeLeaveCriticalRegion();
}
