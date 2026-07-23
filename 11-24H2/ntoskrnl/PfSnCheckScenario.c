/*
 * XREFs of PfSnCheckScenario @ 0x14094870C
 * Callers:
 *     PfSnSetAltPrefetchParam @ 0x140745A74 (PfSnSetAltPrefetchParam.c)
 *     PfSnBeginAppLaunch @ 0x1409483F4 (PfSnBeginAppLaunch.c)
 *     PfSnOperationProcess @ 0x14094AD54 (PfSnOperationProcess.c)
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
  v4 = dword_140E66E10[v2];
  if ( v4 )
  {
    if ( (dword_140E67260 & 1) == 0 || (dword_140E66FA0 & 1) != 0 )
    {
      if ( dword_140E671B4 == 1 )
      {
        return (unsigned int)-1073741296;
      }
      else if ( qword_140E670E8 )
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
