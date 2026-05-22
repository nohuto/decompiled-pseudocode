/*
 * XREFs of ?DeferInvokeHelper@MPCHolographicInputManager@@AEAAXAEBV?$function@$$A6AXXZ@std@@W4MsgPriority@@@Z @ 0x1800B9B2C
 * Callers:
 *     ?DisplayContextChangeCallback@MPCHolographicInputManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800B9D50 (-DisplayContextChangeCallback@MPCHolographicInputManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID.c)
 *     ?Input3DSwitchDisableCallback@MPCHolographicInputManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800BA870 (-Input3DSwitchDisableCallback@MPCHolographicInputManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     ??1?$unique_ptr@V?$function@$$A6AXXZ@std@@U?$default_delete@V?$function@$$A6AXXZ@std@@@2@@std@@QEAA@XZ @ 0x1800B984C (--1-$unique_ptr@V-$function@$$A6AXXZ@std@@U-$default_delete@V-$function@$$A6AXXZ@std@@@2@@std@@Q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPCHolographicInputManager::DeferInvokeHelper(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  __int64 (__fastcall ***v6)(_QWORD, _QWORD *); // rcx
  int v7; // eax
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = operator new(0x40uLL);
  v5 = v4;
  v11 = v4;
  v4[7] = 0LL;
  v6 = *(__int64 (__fastcall ****)(_QWORD, _QWORD *))(a2 + 56);
  if ( v6 )
    v4[7] = (**v6)(v6, v4);
  v11 = v5;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(__int64), _QWORD *, __int64))(**(_QWORD **)(a1 + 3624)
                                                                                             + 152LL))(
         *(_QWORD *)(a1 + 3624),
         lambda_3b64102ac84e73bf6a3808442553243e_::_lambda_invoker_cdecl_,
         v5,
         4LL);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x46F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v7,
      v9);
  v11 = 0LL;
  std::unique_ptr<std::function<void (void)>>::~unique_ptr<std::function<void (void)>>(&v11, v8);
}
