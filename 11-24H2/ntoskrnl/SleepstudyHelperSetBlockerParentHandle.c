/*
 * XREFs of SleepstudyHelperSetBlockerParentHandle @ 0x1404810F0
 * Callers:
 *     <none>
 * Callees:
 *     SshpDereferenceBlocker @ 0x140477900 (SshpDereferenceBlocker.c)
 *     SshpReferenceBlocker @ 0x14048115C (SshpReferenceBlocker.c)
 */

__int64 __fastcall SleepstudyHelperSetBlockerParentHandle(__int64 a1, KSPIN_LOCK *a2)
{
  unsigned int v2; // ebx
  KSPIN_LOCK *v5; // rcx

  v2 = 0;
  if ( a1 && a2 )
  {
    v5 = *(KSPIN_LOCK **)(a1 + 80);
    if ( v5 )
      SshpDereferenceBlocker(v5, 1, 1);
    *(_QWORD *)(a1 + 80) = a2;
    SshpReferenceBlocker(a2);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
