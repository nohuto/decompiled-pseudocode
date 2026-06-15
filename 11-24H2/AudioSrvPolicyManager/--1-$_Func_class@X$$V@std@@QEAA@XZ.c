/*
 * XREFs of ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x180017A2C
 * Callers:
 *     _CApplicationManager::ProcessInteractivityNotification_::_1_::dtor$3 @ 0x180048D16 (_CApplicationManager--ProcessInteractivityNotification_--_1_--dtor$3.c)
 *     _QueueGenericWorkItem_::_1_::dtor$0 @ 0x180049000 (_QueueGenericWorkItem_--_1_--dtor$0.c)
 *     _QueueGenericWorkItem_::_1_::dtor$5 @ 0x180049050 (_QueueGenericWorkItem_--_1_--dtor$5.c)
 *     _CProcess::RecalculateVolume_::_1_::dtor$1 @ 0x180049760 (_CProcess--RecalculateVolume_--_1_--dtor$1.c)
 *     _std::function_void___cdecl(void)_::function_void___cdecl(void)__::_1_::dtor$0 @ 0x180049CA0 (_std--function_void___cdecl(void)_--function_void___cdecl(void)__--_1_--dtor$0.c)
 *     _CSerialWorkQueue::QueueWorkItem_::_1_::dtor$0 @ 0x18004A96F (_CSerialWorkQueue--QueueWorkItem_--_1_--dtor$0.c)
 *     _CProcess::ResetReusedSessionGroupingParams_::_1_::dtor$1 @ 0x18004AC94 (_CProcess--ResetReusedSessionGroupingParams_--_1_--dtor$1.c)
 *     _CApplication::CApplication_::_1_::dtor$12 @ 0x18004B01A (_CApplication--CApplication_--_1_--dtor$12.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Func_class<void,>::~_Func_class<void,>(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
