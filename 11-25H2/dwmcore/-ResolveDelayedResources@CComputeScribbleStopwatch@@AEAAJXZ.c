/*
 * XREFs of ?ResolveDelayedResources@CComputeScribbleStopwatch@@AEAAJXZ @ 0x18017592C
 * Callers:
 *     ?GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ @ 0x180175880 (-GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Calibrate@CComputeScribbleStopwatch@@AEAAJXZ @ 0x180175994 (-Calibrate@CComputeScribbleStopwatch@@AEAAJXZ.c)
 *     ?ResolveGpuTimestamp@CComputeScribbleStopwatch@@AEAAJXZ @ 0x180175A4C (-ResolveGpuTimestamp@CComputeScribbleStopwatch@@AEAAJXZ.c)
 */

__int64 __fastcall CComputeScribbleStopwatch::ResolveDelayedResources(CComputeScribbleStopwatch *this)
{
  int v2; // edi
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 64) )
    return 0LL;
  v2 = CComputeScribbleStopwatch::Calibrate(this);
  if ( v2 < 0 )
  {
    v4 = 78LL;
  }
  else
  {
    v2 = CComputeScribbleStopwatch::ResolveGpuTimestamp(this);
    if ( v2 >= 0 )
    {
      *((_BYTE *)this + 64) = 1;
      return 0LL;
    }
    v4 = 81LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblestopwatch.cpp",
    (const char *)(unsigned int)v2);
  return (unsigned int)v2;
}
