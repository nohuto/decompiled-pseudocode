/*
 * XREFs of PsSessionCreate @ 0x1406EBB94
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140904AC8 (MmInitializeProcessAddressSpace.c)
 *     MiMapProcessExecutable @ 0x1409051BC (MiMapProcessExecutable.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     KeQueryInterruptTimePrecise @ 0x140279D80 (KeQueryInterruptTimePrecise.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x1403D73D0 (PsGetCurrentServerSilo.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PspInitializeSessionGlobals @ 0x1406EBD14 (PspInitializeSessionGlobals.c)
 *     PspFreeSessionId @ 0x14076C03C (PspFreeSessionId.c)
 *     PspGetNewSessionId @ 0x14076C08C (PspGetNewSessionId.c)
 *     PspMarkSessionReferenceProcess @ 0x14076C1A4 (PspMarkSessionReferenceProcess.c)
 *     PspSessionObjectCreate @ 0x14076C22C (PspSessionObjectCreate.c)
 *     PsDereferenceSession @ 0x140A05104 (PsDereferenceSession.c)
 *     PspMakeSessionVisible @ 0x140AACD68 (PspMakeSessionVisible.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 PsSessionCreate()
{
  __int64 result; // rax
  _KPROCESS *Process; // rsi
  unsigned __int32 NewSessionId; // edi
  LARGE_INTEGER *Pool2; // rax
  LARGE_INTEGER *v4; // rbx
  void *CurrentServerSilo; // rax
  int v6; // ebx
  LARGE_INTEGER v7; // [rsp+30h] [rbp-38h] BYREF
  LARGE_INTEGER *v8; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int32 v9; // [rsp+40h] [rbp-28h]
  int v10; // [rsp+44h] [rbp-24h]
  LARGE_INTEGER **v11; // [rsp+48h] [rbp-20h] BYREF
  int v12; // [rsp+50h] [rbp-18h]
  int v13; // [rsp+54h] [rbp-14h]

  result = PspInitializeSessionGlobals();
  if ( (int)result >= 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    NewSessionId = PspGetNewSessionId();
    if ( NewSessionId == -1 )
      return 3221225495LL;
    Pool2 = (LARGE_INTEGER *)ExAllocatePool2(0x40uLL);
    v4 = Pool2;
    if ( !Pool2 )
    {
      PspFreeSessionId(NewSessionId);
      return 3221225495LL;
    }
    Pool2->LowPart = 1;
    Pool2[1].LowPart = NewSessionId;
    Pool2[6].LowPart = PsDefaultSystemLocaleId;
    Pool2[21] = KeQueryInterruptTimePrecise(&v7);
    v4[3].QuadPart = (LONGLONG)&v4[2];
    v4[2].QuadPart = (LONGLONG)&v4[2];
    v4[1].HighPart = 1;
    CurrentServerSilo = (void *)PsGetCurrentServerSilo();
    v4[20].QuadPart = (LONGLONG)CurrentServerSilo;
    if ( CurrentServerSilo )
    {
      ObfReferenceObjectWithTag(CurrentServerSilo, 0x73536D4Du);
      _InterlockedCompareExchange(
        *((volatile signed __int32 **)PsGetServerSiloGlobals(v4[20].QuadPart) + 161),
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
