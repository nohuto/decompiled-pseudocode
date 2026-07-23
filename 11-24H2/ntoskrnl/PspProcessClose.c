/*
 * XREFs of PspProcessClose @ 0x1409E5850
 * Callers:
 *     <none>
 * Callees:
 *     PspLockProcessExclusive @ 0x14044FF38 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x140458484 (PspUnlockProcessExclusive.c)
 *     PsTerminateProcess @ 0x1408F32A4 (PsTerminateProcess.c)
 *     PspRundownProcess @ 0x1409E5948 (PspRundownProcess.c)
 */

void __fastcall PspProcessClose(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  signed __int32 v5; // edi

  if ( a4 > 1 || *(_DWORD *)(a2 + 896) )
  {
    if ( (*(_DWORD *)(a2 + 1532) & 0x8000) == 0
      && *(_QWORD *)(a1 + 464) == *(_QWORD *)(a2 + 728)
      && (*(_DWORD *)(a1 + 500) & 0x40000008) != 0 )
    {
      PsTerminateProcess((void *)a2);
    }
  }
  else
  {
    v5 = 0x2000000;
    PspLockProcessExclusive(a2, (__int64)KeGetCurrentThread());
    if ( !*(_DWORD *)(a2 + 896) )
    {
      _m_prefetchw((const void *)(a2 + 500));
      v5 = _InterlockedOr((volatile signed __int32 *)(a2 + 500), 8u);
    }
    PspUnlockProcessExclusive(a2);
    if ( (v5 & 0x2000000) == 0
      && ((*(_DWORD *)(a2 + 1532) & 1) == 0 || *(_QWORD *)(a2 + 1600) || (*(_DWORD *)(a2 + 2012) & 1) == 0) )
    {
      PspRundownProcess((PVOID)a2);
    }
  }
}
