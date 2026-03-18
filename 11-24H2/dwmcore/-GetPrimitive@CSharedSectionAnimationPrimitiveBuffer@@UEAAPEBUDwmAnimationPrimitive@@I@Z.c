/*
 * XREFs of ?GetPrimitive@CSharedSectionAnimationPrimitiveBuffer@@UEAAPEBUDwmAnimationPrimitive@@I@Z @ 0x18017C470
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NXZ @ 0x18007D840 (-UpdateAnimateValues@CAnimation@@UEAA_NXZ.c)
 *     ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18007E6D0 (-GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18017BD30 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 * Callees:
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z @ 0x1802A62BC (-ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z.c)
 */

const struct DwmAnimationPrimitive *__fastcall CSharedSectionAnimationPrimitiveBuffer::GetPrimitive(
        CSharedSectionBase **this)
{
  const struct DwmAnimationPrimitive *result; // rax
  __int64 v2; // r9

  result = (const struct DwmAnimationPrimitive *)CSharedSectionBase::ResolveAllocation(
                                                   this[2],
                                                   *((unsigned int *)this + 7),
                                                   *((unsigned int *)this + 6));
  if ( result )
    return (const struct DwmAnimationPrimitive *)((char *)result + 32 * v2);
  return result;
}
