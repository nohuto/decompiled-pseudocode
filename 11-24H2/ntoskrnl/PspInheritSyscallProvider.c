/*
 * XREFs of PspInheritSyscallProvider @ 0x140A4E06C
 * Callers:
 *     PspInsertProcess @ 0x1408FD2CC (PspInsertProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     PspUnlockProcessShared @ 0x14028E8F0 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x14031DC40 (PspLockProcessShared.c)
 *     PspAttachProcessToSyscallProvider @ 0x14077132C (PspAttachProcessToSyscallProvider.c)
 */

__int64 __fastcall PspInheritSyscallProvider(_QWORD *a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v2; // rsi
  unsigned int v3; // edi
  unsigned int v7; // r15d

  v2 = *(struct _EX_RUNDOWN_REF **)(a2 + 1976);
  v3 = 0;
  if ( v2 )
  {
    PspLockProcessShared(a2, (__int64)KeGetCurrentThread());
    v7 = *(_DWORD *)(a2 + 2000);
    PspUnlockProcessShared(a2);
    if ( ExAcquireRundownProtection_0(v2 + 7) )
    {
      PspAttachProcessToSyscallProvider(a1, (__int64)v2, v7);
      ExReleaseRundownProtection_0(v2 + 7);
    }
    else
    {
      return (unsigned int)-1073741738;
    }
  }
  return v3;
}
