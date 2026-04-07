/*
 * XREFs of ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800798F0
 * Callers:
 *     ?InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ @ 0x1800A345C (-InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ.c)
 *     ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ @ 0x1800A3A3C (-OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        HSTRING_HEADER *hstringHeader,
        PCWSTR sourceString,
        UINT32 a3,
        UINT32 a4)
{
  UINT32 v4; // eax
  const WCHAR *v5; // r10
  HRESULT StringReference; // eax

  v4 = a4;
  v5 = sourceString;
  if ( a4 >= a3 )
    goto LABEL_4;
  while ( 1 )
  {
    StringReference = WindowsCreateStringReference(v5, v4, hstringHeader, (HSTRING *)&hstringHeader[1]);
    if ( StringReference >= 0 )
      break;
    RaiseException(StringReference, 1u, 0, 0LL);
    __debugbreak();
LABEL_4:
    v4 = a3 - 1;
  }
}
