/*
 * XREFs of SleepstudyHelper_ComponentActiveLocked @ 0x1404E5DF0
 * Callers:
 *     SleepstudyHelper_ComponentActive @ 0x1404E5D90 (SleepstudyHelper_ComponentActive.c)
 * Callees:
 *     SshpSetBlockerActive @ 0x140444D60 (SshpSetBlockerActive.c)
 */

__int64 __fastcall SleepstudyHelper_ComponentActiveLocked(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v4; // ecx
  bool v5; // zf

  v2 = 0;
  if ( a1 )
  {
    if ( (_UNKNOWN *)a1 != &SleepstudyHelperUnsupportedHandle )
    {
      v4 = *(_DWORD *)(a1 + 8);
      if ( (v4 & 0x10) == 0 )
      {
        v5 = ++*(_DWORD *)(a1 + 20) == 1;
        *(_DWORD *)(a1 + 8) = v4 | 0x10;
        if ( v5 )
        {
          LOBYTE(a2) = 1;
          SshpSetBlockerActive(a1, a2);
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
