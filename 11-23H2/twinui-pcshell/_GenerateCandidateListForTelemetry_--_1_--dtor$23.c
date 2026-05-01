/*
 * XREFs of _GenerateCandidateListForTelemetry_::_1_::dtor$23 @ 0x18076C90A
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@XZ @ 0x180547E50 (--1-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@XZ.c)
 */

__int64 __fastcall GenerateCandidateListForTelemetry_::_1_::dtor_23(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 40) & 0x20;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 40) &= ~0x20u;
    return std::wstring::~wstring(*(_QWORD *)(a2 + 64));
  }
  return result;
}
