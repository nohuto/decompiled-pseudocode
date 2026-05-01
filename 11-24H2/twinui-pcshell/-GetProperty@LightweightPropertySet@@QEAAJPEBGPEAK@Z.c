/*
 * XREFs of ?GetProperty@LightweightPropertySet@@QEAAJPEBGPEAK@Z @ 0x18044CD58
 * Callers:
 *     ?GetLightweightProperty@WindowWrapperBase@@UEAAJPEBGPEAK@Z @ 0x1804405A0 (-GetLightweightProperty@WindowWrapperBase@@UEAAJPEBGPEAK@Z.c)
 *     ?GetLightweightProperty@UwpWindowWrapperBase@@UEAAJPEBGPEAK@Z @ 0x18044AC10 (-GetLightweightProperty@UwpWindowWrapperBase@@UEAAJPEBGPEAK@Z.c)
 * Callees:
 *     ?IsName@LightweightProperty@LightweightPropertySet@@QEAA_NPEBG@Z @ 0x1800CB170 (-IsName@LightweightProperty@LightweightPropertySet@@QEAA_NPEBG@Z.c)
 */

__int64 __fastcall LightweightPropertySet::GetProperty(
        LightweightPropertySet *this,
        const unsigned __int16 *a2,
        unsigned int *a3)
{
  unsigned __int64 i; // rbx

  *a3 = 0;
  for ( i = 0LL; i < *((_QWORD *)this + 1); ++i )
  {
    if ( LightweightPropertySet::LightweightProperty::IsName(
           (HSTRING *)(*(_QWORD *)(*(_QWORD *)this + 8 * i) + 8LL),
           a2) )
    {
      _mm_lfence();
      *a3 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 8 * i) + 16LL);
      return 0LL;
    }
  }
  return 2147943568LL;
}
