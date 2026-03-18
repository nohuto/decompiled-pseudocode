/*
 * XREFs of ?SetFloatProperty@CVisualCaptureMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1402373A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1401085A0 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CVisualCaptureMarshaler::SetFloatProperty(
        DirectComposition::CVisualCaptureMarshaler *this,
        __int64 a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  bool v5; // al

  v4 = 0;
  if ( (_DWORD)a2 == 5 )
  {
    if ( *((float *)this + 26) == a3 )
    {
      v5 = 0;
    }
    else
    {
      *((float *)this + 26) = a3;
      v5 = 1;
    }
    *a4 = v5;
  }
  else
  {
    return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
  }
  return v4;
}
