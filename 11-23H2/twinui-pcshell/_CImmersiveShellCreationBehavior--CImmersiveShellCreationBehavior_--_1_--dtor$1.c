/*
 * XREFs of _CImmersiveShellCreationBehavior::CImmersiveShellCreationBehavior_::_1_::dtor$1 @ 0x1802C54E1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveShellCreationBehavior::CImmersiveShellCreationBehavior_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return wistd::unique_ptr<CThreadRefHost,wistd::default_delete<CThreadRefHost>>::~unique_ptr<CThreadRefHost,wistd::default_delete<CThreadRefHost>>(*(_QWORD *)(a2 + 48) + 56LL);
}
