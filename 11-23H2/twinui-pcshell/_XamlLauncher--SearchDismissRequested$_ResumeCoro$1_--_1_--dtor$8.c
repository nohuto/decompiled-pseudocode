/*
 * XREFs of _XamlLauncher::SearchDismissRequested$_ResumeCoro$1_::_1_::dtor$8 @ 0x180200D7E
 * Callers:
 *     <none>
 * Callees:
 *     ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1801BFB34 (--1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall XamlLauncher::SearchDismissRequested__ResumeCoro_1_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 104) = *(_QWORD *)(a2 + 40) + 112LL;
  Microsoft::WRL::Wrappers::HStringReference::~HStringReference(*(Microsoft::WRL::Wrappers::HStringReference **)(a2 + 104));
}
