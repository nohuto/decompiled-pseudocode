/*
 * XREFs of std::_Func_impl_no_alloc__lambda_80aa732c9f0abca8142808a505c7029f__void_::_Delete_this @ 0x180017690
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_80aa732c9f0abca8142808a505c7029f__void_::_Delete_this(
        _QWORD *a1,
        char a2)
{
  volatile signed __int32 *v2; // rbx

  v2 = (volatile signed __int32 *)a1[3];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
}
