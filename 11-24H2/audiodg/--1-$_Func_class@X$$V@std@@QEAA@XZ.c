/*
 * XREFs of ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x140037F34
 * Callers:
 *     _CSerialWorkQueue::QueueWorkItem_::_1_::dtor$0 @ 0x140091719 (_CSerialWorkQueue--QueueWorkItem_--_1_--dtor$0.c)
 *     _CSerialWorkQueue::QueueWorkItem_::_1_::dtor$5 @ 0x14009173D (_CSerialWorkQueue--QueueWorkItem_--_1_--dtor$5.c)
 *     _std::function_void___cdecl(void)_::function_void___cdecl(void)__::_1_::dtor$0 @ 0x140091776 (_std--function_void___cdecl(void)_--function_void___cdecl(void)__--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
