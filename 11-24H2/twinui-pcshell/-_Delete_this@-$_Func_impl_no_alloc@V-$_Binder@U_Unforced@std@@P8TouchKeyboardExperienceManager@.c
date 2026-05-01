/*
 * XREFs of ?_Delete_this@?$_Func_impl_no_alloc@V?$_Binder@U_Unforced@std@@P8TouchKeyboardExperienceManager@@EAAJPEBG@ZPEAV3@AEBU?$_Ph@$00@2@@std@@JPEBG@std@@EEAAX_N@Z @ 0x18035F030
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,long (TouchKeyboardExperienceManager::*)(unsigned short const *),TouchKeyboardExperienceManager *,std::_Ph<1> const &>,long,unsigned short const *>::_Delete_this(
        void *a1,
        char a2)
{
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
}
