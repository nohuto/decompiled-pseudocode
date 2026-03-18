/*
 * XREFs of DpiFdoStartAdapterThread @ 0x140240820
 * Callers:
 *     DpiSessionCreateCallback @ 0x1403E211C (DpiSessionCreateCallback.c)
 * Callees:
 *     memset @ 0x14009FCC0 (memset.c)
 *     DxgkEnsureVmBusInterface @ 0x1401D1D84 (DxgkEnsureVmBusInterface.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x14024092C (DpiFdoStartAdapterThreadImpl.c)
 */

void __fastcall DpiFdoStartAdapterThread(_BYTE *StartContext, __int64 a2)
{
  char v3; // di
  NTSTATUS started; // esi
  __int64 v5; // r9
  void *Pool2; // rax
  void *v7; // rbp
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  v3 = 1;
  if ( StartContext )
    v3 = *StartContext & 1;
  LOBYTE(a2) = v3;
  started = DpiFdoStartAdapterThreadImpl(StartContext, a2, &v8);
  if ( v8 )
  {
    DxgkEnsureVmBusInterface();
    Pool2 = (void *)ExAllocatePool2(256LL, 1552LL, 1953656900LL, v5);
    v7 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, 0x610uLL);
      started = DpiFdoStartAdapterThreadImpl(v7, 0LL, &v8);
      ExFreePoolWithTag(v7, 0x74727044u);
    }
    else
    {
      started = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      WdLogGlobalForLineNumber = 16634;
    }
  }
  if ( StartContext )
    ExFreePoolWithTag(StartContext, 0x74727044u);
  if ( !v3 )
    PsTerminateSystemThread(started);
}
