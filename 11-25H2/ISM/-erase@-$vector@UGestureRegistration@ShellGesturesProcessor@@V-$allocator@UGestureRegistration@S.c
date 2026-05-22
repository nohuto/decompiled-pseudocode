/*
 * XREFs of ?erase@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@2@0@Z @ 0x1800287F8
 * Callers:
 *     ?OnClientDisconnected@ShellGesturesProcessor@@QEAAXPEAVDragManagerClientProxy@@@Z @ 0x1800286D0 (-OnClientDisconnected@ShellGesturesProcessor@@QEAAXPEAVDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ??$_Move_unchecked@PEAUGestureRegistration@ShellGesturesProcessor@@PEAU12@@std@@YAPEAUGestureRegistration@ShellGesturesProcessor@@PEAU12@00@Z @ 0x18002841C (--$_Move_unchecked@PEAUGestureRegistration@ShellGesturesProcessor@@PEAU12@@std@@YAPEAUGestureReg.c)
 *     ??$_Destroy_range@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@YAXPEAUGestureRegistration@ShellGesturesProcessor@@QEAU12@AEAV?$allocator@UGestureRegistration@ShellGesturesProcessor@@@0@@Z @ 0x180028564 (--$_Destroy_range@V-$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@YAXPEAUG.c)
 */

__int64 *__fastcall std::vector<ShellGesturesProcessor::GestureRegistration>::erase(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *result; // rax
  __int64 *v8; // rdi

  if ( a3 != a4 )
  {
    v8 = (__int64 *)std::_Move_unchecked<ShellGesturesProcessor::GestureRegistration *,ShellGesturesProcessor::GestureRegistration *>(
                      a4,
                      *(_QWORD *)(a1 + 8),
                      a3);
    std::_Destroy_range<std::allocator<ShellGesturesProcessor::GestureRegistration>>(v8, *(__int64 **)(a1 + 8));
    *(_QWORD *)(a1 + 8) = v8;
  }
  result = a2;
  *a2 = a3;
  return result;
}
