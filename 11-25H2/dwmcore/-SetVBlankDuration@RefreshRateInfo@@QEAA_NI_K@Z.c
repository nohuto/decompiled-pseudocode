/*
 * XREFs of ?SetVBlankDuration@RefreshRateInfo@@QEAA_NI_K@Z @ 0x180218738
 * Callers:
 *     ?SetVBlankDuration@CLegacySwapChain@@UEAA_NI_K@Z @ 0x1802184D0 (-SetVBlankDuration@CLegacySwapChain@@UEAA_NI_K@Z.c)
 *     ?SetVBlankDuration@CDDisplaySwapChain@@UEAA_NI_K@Z @ 0x1802186A0 (-SetVBlankDuration@CDDisplaySwapChain@@UEAA_NI_K@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall RefreshRateInfo::SetVBlankDuration(RefreshRateInfo *this, unsigned int a2, unsigned __int64 a3)
{
  if ( a2 )
  {
    if ( a2 > 1 )
      a3 = g_qpcFrequency.QuadPart * (unsigned __int64)*((unsigned int *)this + 1) / *(unsigned int *)this / a2;
  }
  else
  {
    a3 = 0LL;
  }
  if ( a3 == *((_QWORD *)this + 4) && a2 == *((_DWORD *)this + 7) )
    return 0;
  if ( a3 )
  {
    if ( !*((_QWORD *)this + 1) || a3 < *((_QWORD *)this + 1) || *((_QWORD *)this + 2) && a3 > *((_QWORD *)this + 2) )
      return 0;
    *((_QWORD *)this + 4) = a3;
    *((_DWORD *)this + 7) = a2;
  }
  else
  {
    *((_QWORD *)this + 4) = 0LL;
    *((_DWORD *)this + 7) = 0;
  }
  return 1;
}
