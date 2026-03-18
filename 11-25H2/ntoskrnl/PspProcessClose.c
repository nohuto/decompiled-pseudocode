/*
 * XREFs of PspProcessClose @ 0x1409F2500
 * Callers:
 *     <none>
 * Callees:
 *     PspUnlockProcessExclusive @ 0x1403D76DC (PspUnlockProcessExclusive.c)
 *     PspLockProcessExclusive @ 0x14045AFE0 (PspLockProcessExclusive.c)
 *     PsTerminateProcess @ 0x14091F3D4 (PsTerminateProcess.c)
 *     PspRundownProcess @ 0x1409F25F8 (PspRundownProcess.c)
 */

void __fastcall PspProcessClose(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  signed __int32 v6; // edi

  if ( a4 > 1 || *(_DWORD *)(a2 + 896) )
  {
    if ( (*(_DWORD *)(a2 + 1532) & 0x8000) == 0
      && *(_QWORD *)(a1 + 464) == *(_QWORD *)(a2 + 728)
      && (*(_DWORD *)(a1 + 500) & 0x40000008) != 0 )
    {
      PsTerminateProcess((volatile signed __int32 *)a2, 0xC000010A);
    }
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0x2000000;
    PspLockProcessExclusive(a2, (__int64)CurrentThread);
    if ( !*(_DWORD *)(a2 + 896) )
    {
      _m_prefetchw((const void *)(a2 + 500));
      v6 = _InterlockedOr((volatile signed __int32 *)(a2 + 500), 8u);
    }
    PspUnlockProcessExclusive(a2, (__int64)CurrentThread);
    if ( (v6 & 0x2000000) == 0
      && ((*(_DWORD *)(a2 + 1532) & 1) == 0 || *(_QWORD *)(a2 + 1600) || (*(_DWORD *)(a2 + 2012) & 1) == 0) )
    {
      PspRundownProcess((PVOID)a2);
    }
  }
}
