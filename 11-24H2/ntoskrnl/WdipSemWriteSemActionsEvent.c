/*
 * XREFs of WdipSemWriteSemActionsEvent @ 0x140A9F6F8
 * Callers:
 *     WdipSemDisableScenario @ 0x140A3D910 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140A3E10C (WdipSemEnableScenario.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     WdipSemFastFree @ 0x1406F75E0 (WdipSemFastFree.c)
 *     WdipSemFastAllocate @ 0x140A3FB7C (WdipSemFastAllocate.c)
 *     WdipSemWriteEvent @ 0x140A7DEF4 (WdipSemWriteEvent.c)
 *     WmiQueryTraceInformation @ 0x140ADA530 (WmiQueryTraceInformation.c)
 */

__int64 __fastcall WdipSemWriteSemActionsEvent(const EVENT_DESCRIPTOR *a1, __int64 a2)
{
  __int64 v4; // rdi
  NTSTATUS v5; // ebx
  __int64 v6; // rcx
  ULONGLONG v7; // rbx
  int v8; // r14d
  __int64 v9; // r13
  PSLIST_ENTRY v10; // rax
  _SLIST_ENTRY v11; // xmm0
  _SLIST_ENTRY **v12; // rsi
  char v14; // [rsp+30h] [rbp-D0h] BYREF
  int TraceInformation; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  __int32 Buffer[4]; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+50h] [rbp-B0h] BYREF
  ULONGLONG v19; // [rsp+60h] [rbp-A0h]
  __int64 v20; // [rsp+68h] [rbp-98h]
  int *v21; // [rsp+70h] [rbp-90h]
  __int64 v22; // [rsp+78h] [rbp-88h]
  char *v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+88h] [rbp-78h]
  _QWORD v25[124]; // [rsp+850h] [rbp+750h] BYREF

  memset_0(v25, 0, sizeof(v25));
  v16 = 0;
  v4 = 0LL;
  if ( a1
    && a2
    && (Buffer[0] = _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId), TraceInformation = 0, Buffer[0]) )
  {
    v5 = WmiQueryTraceInformation(LoggerEventsLostClass, &TraceInformation, 4u, 0LL, Buffer);
    if ( v5 >= 0 )
    {
      v7 = *(_QWORD *)(a2 + 32);
      v16 = TraceInformation;
      v8 = *(_DWORD *)(v7 + 48);
      v19 = v7 + 16;
      v21 = &v16;
      v18.Ptr = v7;
      *(_QWORD *)&v18.Size = 16LL;
      v20 = 2LL;
      v22 = 4LL;
      v14 = *(_BYTE *)(v7 + 48);
      v23 = &v14;
      v24 = 1LL;
      while ( (unsigned int)v4 < *(_DWORD *)(v7 + 48) )
      {
        v9 = *(_QWORD *)(v7 + 8 * v4 + 56);
        v10 = WdipSemFastAllocate(4, 0x28u);
        if ( !v10 )
        {
          v5 = -1073741670;
          goto LABEL_12;
        }
        v11 = *(_SLIST_ENTRY *)v9;
        v25[v4] = v10;
        v6 = 2LL * (unsigned int)(v4 + 4);
        *v10 = v11;
        LOBYTE(v10[1].Next) = *(_BYTE *)(v9 + 18);
        *((_QWORD *)&v10[1].Next + 1) = *(_QWORD *)(v9 + 24);
        LODWORD(v10[2].Next) = *(_DWORD *)(v9 + 36);
        HIDWORD(v10[2].Next) = *(_DWORD *)(a2 + 4 * v4 + 48);
        *(&v18.Reserved + 2 * v6) = 0;
        v4 = (unsigned int)(v4 + 1);
        *(&v18.Ptr + v6) = (ULONGLONG)v10;
        *(&v18.Size + 2 * v6) = 40;
      }
      v5 = WdipSemWriteEvent(v6, a1, (const GUID *)(a2 + 16), v8 + 4, &v18);
LABEL_12:
      if ( (_DWORD)v4 )
      {
        v12 = (_SLIST_ENTRY **)v25;
        do
        {
          WdipSemFastFree(4, *v12++);
          --v4;
        }
        while ( v4 );
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
