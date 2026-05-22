/*
 * XREFs of ??$_Move_unchecked@PEAUGestureRegistration@ShellGesturesProcessor@@PEAU12@@std@@YAPEAUGestureRegistration@ShellGesturesProcessor@@PEAU12@00@Z @ 0x1800289DC
 * Callers:
 *     ?UnregisterGestureSource@ShellGesturesProcessor@@QEAAX_KPEAVDragManagerClientProxy@@@Z @ 0x1800285F8 (-UnregisterGestureSource@ShellGesturesProcessor@@QEAAX_KPEAVDragManagerClientProxy@@@Z.c)
 *     ?erase@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@2@0@Z @ 0x180028DB8 (-erase@-$vector@UGestureRegistration@ShellGesturesProcessor@@V-$allocator@UGestureRegistration@S.c)
 * Callees:
 *     ??4?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180146654 (--4-$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

__int64 __fastcall std::_Move_unchecked<ShellGesturesProcessor::GestureRegistration *,ShellGesturesProcessor::GestureRegistration *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rdi
  char v6; // al

  if ( a1 != a2 )
  {
    v5 = a1 + 16;
    do
    {
      *(_QWORD *)a3 = *(_QWORD *)(v5 - 16);
      *(_DWORD *)(a3 + 8) = *(_DWORD *)(v5 - 8);
      Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>::operator=(a3 + 16, v5);
      v6 = *(_BYTE *)(v5 + 8);
      v5 += 32LL;
      *(_BYTE *)(a3 + 24) = v6;
      a3 += 32LL;
    }
    while ( v5 - 16 != a2 );
  }
  return a3;
}
