/*
 * XREFs of ?__clone@?$__func@V?$_Binder@U_Unforced@std@@P8TouchKeyboardExperienceManager@@EAAJXZPEAV3@@std@@$$A6AXXZ@__function@wistd@@UEBAXPEAV?$__base@$$A6AXXZ@23@@Z @ 0x1802A24E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func<std::_Binder<std::_Unforced,long (TouchKeyboardExperienceManager::*)(void),TouchKeyboardExperienceManager *>,void (void)>::__clone(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = &wistd::__function::__func<std::_Binder<std::_Unforced,long (TouchKeyboardExperienceManager::*)(void),TouchKeyboardExperienceManager *>,void (void)>::`vftable';
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  result = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a2 + 24) = result;
  return result;
}
