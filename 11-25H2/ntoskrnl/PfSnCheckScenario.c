/*
 * XREFs of PfSnCheckScenario @ 0x1408264CC
 * Callers:
 *     PfSnSetAltPrefetchParam @ 0x14073B764 (PfSnSetAltPrefetchParam.c)
 *     PfSnBeginAppLaunch @ 0x1408261B4 (PfSnBeginAppLaunch.c)
 *     PfSnOperationProcess @ 0x1408288CC (PfSnOperationProcess.c)
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
  v4 = dword_140E66A00[v2];
  if ( v4 )
  {
    if ( (dword_140E66E50 & 1) == 0 || (dword_140E66B90 & 1) != 0 )
    {
      if ( dword_140E66DA4 == 1 )
      {
        return (unsigned int)-1073741296;
      }
      else if ( qword_140E66CD8 )
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
