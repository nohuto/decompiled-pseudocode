/*
 * XREFs of _Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1_::_1_::dtor$2 @ 0x1807023E1
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@XP6AHPEBX@Z@std@@QEAA@XZ @ 0x18064A0A8 (--1-$unique_ptr@XP6AHPEBX@Z@std@@QEAA@XZ.c)
 */

__int64 __fastcall Util::TryOpenFileMappingAsStreamForWindowAsync__ResumeCoro_1_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 232) = *(_QWORD *)(a2 + 368) + 32LL;
  return std::unique_ptr<void,int (*)(void const *)>::~unique_ptr<void,int (*)(void const *)>(*(_QWORD *)(a2 + 232));
}
