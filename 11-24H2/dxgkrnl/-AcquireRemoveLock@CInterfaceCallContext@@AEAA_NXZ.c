/*
 * XREFs of ?AcquireRemoveLock@CInterfaceCallContext@@AEAA_NXZ @ 0x140058550
 * Callers:
 *     ?CommonConstructor@CInterfaceCallContext@@AEAAXPEAXPEAU_IRP@@EW4AdapterLockAcquireType@@EEE@Z @ 0x140057454 (-CommonConstructor@CInterfaceCallContext@@AEAAXPEAXPEAU_IRP@@EW4AdapterLockAcquireType@@EEE@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CInterfaceCallContext::AcquireRemoveLock(CInterfaceCallContext *this)
{
  NTSTATUS v2; // eax
  char result; // al

  v2 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(*((_QWORD *)this + 1) + 64LL), *((PVOID *)this + 1), File, 1u, 0x20u);
  *((_DWORD *)this + 8) = v2;
  if ( v2 >= 0 )
  {
    *((_BYTE *)this + 36) = 1;
    return 1;
  }
  else
  {
    WdLogSingleEntry1(2LL, v2);
    result = 0;
    WdLogGlobalForLineNumber = 240;
  }
  return result;
}
