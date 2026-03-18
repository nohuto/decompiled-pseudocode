/*
 * XREFs of PspInheritSyscallProvider @ 0x140A517A8
 * Callers:
 *     PspInsertProcess @ 0x1408F3D10 (PspInsertProcess.c)
 * Callees:
 *     PspUnlockProcessShared @ 0x14029BF00 (PspUnlockProcessShared.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     PspLockProcessShared @ 0x1403F8E70 (PspLockProcessShared.c)
 *     PspAttachProcessToSyscallProvider @ 0x14076174C (PspAttachProcessToSyscallProvider.c)
 */

__int64 __fastcall PspInheritSyscallProvider(_QWORD *a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v2; // rsi
  unsigned int v3; // edi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v8; // r15d

  v2 = *(struct _EX_RUNDOWN_REF **)(a2 + 1976);
  v3 = 0;
  if ( v2 )
  {
    CurrentThread = KeGetCurrentThread();
    PspLockProcessShared(a2, (__int64)CurrentThread);
    v8 = *(_DWORD *)(a2 + 2000);
    PspUnlockProcessShared(a2, (__int64)CurrentThread);
    if ( ExAcquireRundownProtection_0(v2 + 7) )
    {
      PspAttachProcessToSyscallProvider(a1, (__int64)v2, v8);
      ExReleaseRundownProtection_0(v2 + 7);
    }
    else
    {
      return (unsigned int)-1073741738;
    }
  }
  return v3;
}
