/*
 * XREFs of PsSessionCreate @ 0x1406F73F8
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1408F8590 (MmInitializeProcessAddressSpace.c)
 *     MiMapProcessExecutable @ 0x1408F8C84 (MiMapProcessExecutable.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     KeQueryInterruptTimePrecise @ 0x14033BC40 (KeQueryInterruptTimePrecise.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     PsGetServerSiloGlobals @ 0x140349380 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x140349A50 (PsGetCurrentServerSilo.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PspInitializeSessionGlobals @ 0x1406F7578 (PspInitializeSessionGlobals.c)
 *     PspFreeSessionId @ 0x14077BBDC (PspFreeSessionId.c)
 *     PspGetNewSessionId @ 0x14077BC2C (PspGetNewSessionId.c)
 *     PspMarkSessionReferenceProcess @ 0x14077BD44 (PspMarkSessionReferenceProcess.c)
 *     PspSessionObjectCreate @ 0x14077BDCC (PspSessionObjectCreate.c)
 *     PsDereferenceSession @ 0x140A07200 (PsDereferenceSession.c)
 *     PspMakeSessionVisible @ 0x140AB1FD8 (PspMakeSessionVisible.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 PsSessionCreate()
{
  __int64 result; // rax
  _KPROCESS *Process; // rsi
  unsigned __int32 NewSessionId; // edi
  __int64 Pool2; // rax
  __int64 v4; // rbx
  void *CurrentServerSilo; // rax
  int v6; // ebx
  char v7[8]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int32 v9; // [rsp+40h] [rbp-28h]
  int v10; // [rsp+44h] [rbp-24h]
  __int64 *v11; // [rsp+48h] [rbp-20h] BYREF
  int v12; // [rsp+50h] [rbp-18h]
  int v13; // [rsp+54h] [rbp-14h]

  result = PspInitializeSessionGlobals();
  if ( (int)result >= 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    NewSessionId = PspGetNewSessionId();
    if ( NewSessionId == -1 )
      return 3221225495LL;
    Pool2 = ExAllocatePool2(0x40uLL);
    v4 = Pool2;
    if ( !Pool2 )
    {
      PspFreeSessionId(NewSessionId);
      return 3221225495LL;
    }
    *(_DWORD *)Pool2 = 1;
    *(_DWORD *)(Pool2 + 8) = NewSessionId;
    *(_DWORD *)(Pool2 + 48) = PsDefaultSystemLocaleId;
    *(_QWORD *)(Pool2 + 168) = KeQueryInterruptTimePrecise((__int64)v7);
    *(_QWORD *)(v4 + 24) = v4 + 16;
    *(_QWORD *)(v4 + 16) = v4 + 16;
    *(_DWORD *)(v4 + 12) = 1;
    CurrentServerSilo = (void *)PsGetCurrentServerSilo();
    *(_QWORD *)(v4 + 160) = CurrentServerSilo;
    if ( CurrentServerSilo )
    {
      ObfReferenceObjectWithTag(CurrentServerSilo, 0x73536D4Du);
      _InterlockedCompareExchange(
        *((volatile signed __int32 **)PsGetServerSiloGlobals(*(_QWORD *)(v4 + 160)) + 161),
        NewSessionId,
        -1);
    }
    PspMarkSessionReferenceProcess(Process, v4);
    if ( (DWORD1(PerfGlobalGroupMask) & 0x400000) != 0 )
    {
      v10 = 0;
      v13 = 0;
      v11 = &v8;
      v9 = NewSessionId;
      v8 = v4;
      v12 = 12;
      EtwTraceKernelEvent((int)&v11, 1, 0x20400000u, 587, 5249027);
    }
    PspMakeSessionVisible(v4);
    v6 = PspSessionObjectCreate();
    if ( v6 < 0 )
      PsDereferenceSession();
    return (unsigned int)v6;
  }
  return result;
}
