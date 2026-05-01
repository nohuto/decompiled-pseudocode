/*
 * XREFs of ?SetAnimationData@CStartExperienceManager@@UEAAJ_K00@Z @ 0x180392420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStartExperienceManager::SetAnimationData(
        CStartExperienceManager *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax

  *((_QWORD *)this + 82) = a2;
  result = 0LL;
  *((_QWORD *)this + 83) = a3;
  *((_QWORD *)this + 84) = a4;
  return result;
}
