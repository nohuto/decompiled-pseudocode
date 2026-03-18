/*
 * XREFs of ?GetCount@CSharedSectionAnimationPrimitiveBuffer@@UEAA_KXZ @ 0x18017C4B0
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NXZ @ 0x18007D840 (-UpdateAnimateValues@CAnimation@@UEAA_NXZ.c)
 *     ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18007E6D0 (-GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18017BD30 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CSharedSectionAnimationPrimitiveBuffer::GetCount(
        CSharedSectionAnimationPrimitiveBuffer *this)
{
  return (unsigned __int64)*((unsigned int *)this + 6) >> 5;
}
