/*
 * XREFs of RtlpWaitCouldDeadlock @ 0x1800603A0
 * Callers:
 *     RtlpAcquireSRWLockSharedContended @ 0x180044840 (RtlpAcquireSRWLockSharedContended.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 * Callees:
 *     <none>
 */

bool RtlpWaitCouldDeadlock()
{
  struct _TEB *v1; // rax
  __int64 WowTebOffset; // rcx
  __int64 v3; // rax

  if ( byte_1801D1908 )
    return 1;
  if ( UseWOW64 )
  {
    v1 = NtCurrentTeb();
    WowTebOffset = v1->WowTebOffset;
    if ( (_DWORD)WowTebOffset )
    {
      if ( (int)WowTebOffset >= 0 )
        v1 = (struct _TEB *)((char *)v1 + WowTebOffset);
    }
    else
    {
      v1 = 0LL;
    }
    v3 = *(unsigned int *)(LODWORD(v1->NtTib.Self) + 0xCLL);
    if ( v3 )
      return *(_BYTE *)(v3 + 40) != 0;
  }
  return 0;
}
