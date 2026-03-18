/*
 * XREFs of PspInheritSyscallProvider @ 0x140A5611C
 * Callers:
 *     PspInsertProcess @ 0x1408A7074 (PspInsertProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     PspUnlockProcessShared @ 0x14025E2E0 (PspUnlockProcessShared.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     PspLockProcessShared @ 0x14033E760 (PspLockProcessShared.c)
 *     PspAttachProcessToSyscallProvider @ 0x14077110C (PspAttachProcessToSyscallProvider.c)
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
    if ( ExAcquireRundownProtection(v2 + 7) )
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
