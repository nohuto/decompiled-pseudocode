/*
 * XREFs of std::call_once__lambda_c8397eccb247ca477275d95d0a9bda1a___ @ 0x18007CBC0
 * Callers:
 *     ?Create@MPCConstantManager@@SAJPEAVMPCManagerConnection@@@Z @ 0x180099870 (-Create@MPCConstantManager@@SAJPEAVMPCManagerConnection@@@Z.c)
 * Callees:
 *     ??0MPCConstantManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x1800931E8 (--0MPCConstantManager@@QEAA@PEAVMPCManagerConnection@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     __std_init_once_link_alternate_names_and_abort @ 0x18009E828 (__std_init_once_link_alternate_names_and_abort.c)
 */

// Hidden C++ exception states: #wind=2
BOOL __fastcall std::call_once__lambda_c8397eccb247ca477275d95d0a9bda1a___(
        __int64 a1,
        struct MPCManagerConnection ***a2)
{
  BOOL result; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  MPCConstantManager *v8; // [rsp+50h] [rbp+18h]

  v7 = HIDWORD(a1);
  v6 = 0;
  result = __std_init_once_begin_initialize(&MPCConstantManager::s_singletonCreated, 0, &v6, 0LL);
  if ( !result )
    abort();
  if ( v6 )
  {
    v8 = (MPCConstantManager *)operator new(0x58uLL);
    MPCConstantManager::s_instance = MPCConstantManager::MPCConstantManager(v8, **a2);
    result = InitOnceComplete(&MPCConstantManager::s_singletonCreated, 0, 0LL);
    if ( !result )
      _std_init_once_link_alternate_names_and_abort(v5, v4);
  }
  return result;
}
