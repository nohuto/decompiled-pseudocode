/*
 * XREFs of SshpBlockerActiveDereference @ 0x140444B58
 * Callers:
 *     SleepstudyHelperBlockerActiveDereference @ 0x140444B00 (SleepstudyHelperBlockerActiveDereference.c)
 *     SshpDereferenceBlocker @ 0x140477900 (SshpDereferenceBlocker.c)
 * Callees:
 *     SshpIterateParentBlockers @ 0x140444C1C (SshpIterateParentBlockers.c)
 */

__int64 __fastcall SshpBlockerActiveDereference(__int64 a1, int a2)
{
  unsigned int v2; // ebx

  if ( *(_DWORD *)(a1 + 20) < a2 )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    v2 = 0;
    SshpIterateParentBlockers((PKSPIN_LOCK)a1);
  }
  return v2;
}
