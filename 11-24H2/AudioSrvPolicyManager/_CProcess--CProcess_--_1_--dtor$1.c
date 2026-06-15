/*
 * XREFs of _CProcess::CProcess_::_1_::dtor$1 @ 0x18004B045
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CProcess::CProcess_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::CriticalSection::~CriticalSection((LPCRITICAL_SECTION)(*(_QWORD *)(a2 + 64) + 24LL));
}
