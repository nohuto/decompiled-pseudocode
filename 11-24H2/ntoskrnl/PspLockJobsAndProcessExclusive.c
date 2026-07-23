/*
 * XREFs of PspLockJobsAndProcessExclusive @ 0x1408D78C4
 * Callers:
 *     PspJobDelete @ 0x1404E6110 (PspJobDelete.c)
 *     PspAssignProcessToJob @ 0x140A105B0 (PspAssignProcessToJob.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     PspLockJobChain @ 0x1408D7F38 (PspLockJobChain.c)
 */

void __fastcall PspLockJobsAndProcessExclusive(unsigned int *a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v4; // ebp
  unsigned __int64 *v6; // rsi
  char *v7; // rax
  char *v8; // rbx
  unsigned int i; // ebx
  __int64 v10; // rcx

  --*(_WORD *)(a3 + 486);
  v4 = a4 & 1;
  if ( a2 )
  {
    v6 = (unsigned __int64 *)(a2 + 456);
    v7 = (char *)KeAbPreAcquire(a2 + 456, 0LL);
    v8 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx(v6, v7, (__int64)v6);
    if ( v8 )
      v8[10] = 1;
  }
  for ( i = 0; i < *a1; ++i )
  {
    v10 = *(_QWORD *)&a1[4 * i + 2];
    if ( LOBYTE(a1[4 * i + 4]) )
      PspLockJobChain(v10, 0LL, v4);
    else
      ExAcquireResourceExclusiveLite((PERESOURCE)(v10 + 56), 1u);
  }
}
