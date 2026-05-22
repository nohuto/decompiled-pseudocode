/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_ShellGesturesProcessor::GestureRegistration_______lambda_28cbbaafa351dff69488e6a008c133d8___ @ 0x1800286B4
 * Callers:
 *     ?UnregisterGestureSource@ShellGesturesProcessor@@QEAAX_KPEAVDragManagerClientProxy@@@Z @ 0x1800285F8 (-UnregisterGestureSource@ShellGesturesProcessor@@QEAAX_KPEAVDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180146654 (--4-$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

_QWORD *__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_ShellGesturesProcessor::GestureRegistration_______lambda_28cbbaafa351dff69488e6a008c133d8___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 i; // rdi
  __int64 j; // rsi
  _QWORD *v9; // rdx
  _QWORD *result; // rax

  for ( i = a2; i != a3; i += 32LL )
  {
    if ( *(_QWORD *)i == *a4 && *(_QWORD *)(i + 16) == a4[1] )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 32; j != a3; j += 32LL )
    {
      v9 = (_QWORD *)(j + 16);
      if ( *(_QWORD *)j != *a4 || *v9 != a4[1] )
      {
        *(_QWORD *)i = *(_QWORD *)j;
        *(_DWORD *)(i + 8) = *(_DWORD *)(j + 8);
        Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>::operator=(i + 16, v9);
        *(_BYTE *)(i + 24) = *(_BYTE *)(j + 24);
        i += 32LL;
      }
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
