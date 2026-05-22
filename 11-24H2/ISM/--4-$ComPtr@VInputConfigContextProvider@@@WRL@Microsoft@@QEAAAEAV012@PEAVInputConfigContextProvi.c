/*
 * XREFs of ??4?$ComPtr@VInputConfigContextProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputConfigContextProvider@@@Z @ 0x180093C10
 * Callers:
 *     ??0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18000E7D0 (--0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?RuntimeClassInitialize@ShellGesturesProcessor@@QEAAJXZ @ 0x180093B88 (-RuntimeClassInitialize@ShellGesturesProcessor@@QEAAJXZ.c)
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180035CE0 (-Release@InputContext@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Microsoft::WRL::ComPtr<InputConfigContextProvider>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v3; // rcx

  if ( *a1 != a2 )
  {
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 16));
    v3 = *a1;
    *a1 = a2;
    if ( v3 )
      InputContext::Release((InputContext *)(v3 + 8));
  }
  return a1;
}
