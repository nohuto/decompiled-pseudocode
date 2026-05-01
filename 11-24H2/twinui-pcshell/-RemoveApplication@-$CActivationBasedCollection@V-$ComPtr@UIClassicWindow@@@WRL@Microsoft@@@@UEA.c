/*
 * XREFs of ?RemoveApplication@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@UEAAX_K@Z @ 0x180041DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

void *__fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::RemoveApplication(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v4; // r8
  void *result; // rax

  if ( a2 < *(_QWORD *)(a1 + 16) )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*(_QWORD *)(a1 + 8) + 8 * a2));
    v4 = *(_QWORD *)(a1 + 16);
    result = (void *)(v4 - 1);
    if ( a2 != v4 - 1 )
      result = memmove_0(
                 (void *)(*(_QWORD *)(a1 + 8) + 8 * a2),
                 (const void *)(*(_QWORD *)(a1 + 8) + 8 * a2 + 8),
                 8 * (v4 - a2) - 8);
    --*(_QWORD *)(a1 + 16);
  }
  return result;
}
