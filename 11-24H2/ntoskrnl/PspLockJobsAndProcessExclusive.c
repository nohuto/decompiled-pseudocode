/*
 * XREFs of PspLockJobsAndProcessExclusive @ 0x1408E705C
 * Callers:
 *     PspJobDelete @ 0x1404EE9D0 (PspJobDelete.c)
 *     PspAssignProcessToJob @ 0x140A173D0 (PspAssignProcessToJob.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PspLockJobChain @ 0x1408E76DC (PspLockJobChain.c)
 */

void __fastcall PspLockJobsAndProcessExclusive(unsigned int *a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v4; // ebp
  unsigned __int64 *v6; // rsi
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  unsigned int i; // ebx
  __int64 v10; // rcx

  --*(_WORD *)(a3 + 486);
  v4 = a4 & 1;
  if ( a2 )
  {
    v6 = (unsigned __int64 *)(a2 + 456);
    v7 = KeAbPreAcquire(a2 + 456, 0LL);
    v8 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx(v6, (__int64)v7, (__int64)v6);
    if ( v8 )
      *((_BYTE *)v8 + 10) = 1;
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
