/*
 * XREFs of PfSnCheckScenario @ 0x140960C4C
 * Callers:
 *     PfSnSetAltPrefetchParam @ 0x140747784 (PfSnSetAltPrefetchParam.c)
 *     PfSnBeginAppLaunch @ 0x140960934 (PfSnBeginAppLaunch.c)
 *     PfSnOperationProcess @ 0x140963294 (PfSnOperationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfSnCheckScenario(int a1, int *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ecx
  int v4; // r8d

  v2 = a1;
  v3 = 0;
  v4 = dword_140E66CC0[v2];
  if ( v4 )
  {
    if ( (dword_140E67110 & 1) == 0 || (dword_140E66E50 & 1) != 0 )
    {
      if ( dword_140E67064 == 1 )
      {
        return (unsigned int)-1073741296;
      }
      else if ( qword_140E66F98 )
      {
        *a2 = v4;
      }
      else
      {
        return (unsigned int)-1073741127;
      }
    }
    else
    {
      return (unsigned int)-1073741725;
    }
  }
  else
  {
    return (unsigned int)-1073741399;
  }
  return v3;
}
