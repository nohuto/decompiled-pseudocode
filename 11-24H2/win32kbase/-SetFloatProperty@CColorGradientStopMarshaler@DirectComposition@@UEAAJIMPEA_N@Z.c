/*
 * XREFs of ?SetFloatProperty@CColorGradientStopMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1401147B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1401085A0 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CColorGradientStopMarshaler::SetFloatProperty(
        DirectComposition::CColorGradientStopMarshaler *this,
        __int64 a2,
        float a3,
        bool *a4)
{
  if ( (_DWORD)a2 )
  {
    DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
  }
  else
  {
    *((_DWORD *)this + 4) |= 0x40u;
    *((float *)this + 14) = a3;
    *a4 = 1;
  }
  return 0LL;
}
