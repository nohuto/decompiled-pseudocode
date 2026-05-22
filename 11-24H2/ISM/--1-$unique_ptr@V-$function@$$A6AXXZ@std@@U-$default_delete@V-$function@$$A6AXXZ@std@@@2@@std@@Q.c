/*
 * XREFs of ??1?$unique_ptr@V?$function@$$A6AXXZ@std@@U?$default_delete@V?$function@$$A6AXXZ@std@@@2@@std@@QEAA@XZ @ 0x1800B984C
 * Callers:
 *     _lambda_3b64102ac84e73bf6a3808442553243e_::_lambda_invoker_cdecl_ @ 0x1800B9370 (_lambda_3b64102ac84e73bf6a3808442553243e_--_lambda_invoker_cdecl_.c)
 *     ?DeferInvokeHelper@MPCHolographicInputManager@@AEAAXAEBV?$function@$$A6AXXZ@std@@W4MsgPriority@@@Z @ 0x1800B9B2C (-DeferInvokeHelper@MPCHolographicInputManager@@AEAAXAEBV-$function@$$A6AXXZ@std@@W4MsgPriority@@.c)
 *     __lambda_3b64102ac84e73bf6a3808442553243e_::_lambda_invoker_cdecl__::_1_::dtor$0 @ 0x1801D4B6C (__lambda_3b64102ac84e73bf6a3808442553243e_--_lambda_invoker_cdecl__--_1_--dtor$0.c)
 *     _MPCHolographicInputManager::DeferInvokeHelper_::_1_::dtor$1 @ 0x1801D4BD0 (_MPCHolographicInputManager--DeferInvokeHelper_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::unique_ptr<std::function<void (void)>>::~unique_ptr<std::function<void (void)>>(
        _QWORD **a1,
        __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rcx

  v2 = *a1;
  if ( *a1 )
  {
    v3 = (_QWORD *)v2[7];
    if ( v3 )
    {
      LOBYTE(a2) = v3 != v2;
      (*(void (__fastcall **)(_QWORD *, __int64))(*v3 + 32LL))(v3, a2);
      v2[7] = 0LL;
    }
    operator delete(v2, (const struct std::nothrow_t *)0x40);
  }
}
