/*
 * XREFs of ?GetPrimitive@CAnimation@@UEAAPEBUDwmAnimationPrimitive@@I@Z @ 0x1801A9840
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z @ 0x1802A62BC (-ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

const struct DwmAnimationPrimitive *__fastcall CAnimation::GetPrimitive(CAnimation *this, unsigned int a2)
{
  __int64 v2; // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v4)(CSharedSectionBase **); // rax
  const struct DwmAnimationPrimitive *result; // rax

  v2 = *((_QWORD *)this + 1);
  v4 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CSharedSectionBase **))(*(_QWORD *)v2 + 32LL);
  if ( v4 != CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
    return (const struct DwmAnimationPrimitive *)((__int64 (__fastcall *)(__int64, _QWORD))v4)(v2, a2);
  result = (const struct DwmAnimationPrimitive *)CSharedSectionBase::ResolveAllocation(
                                                   *(CSharedSectionBase **)(v2 + 16),
                                                   *(unsigned int *)(v2 + 28),
                                                   *(unsigned int *)(v2 + 24));
  if ( result )
    return (const struct DwmAnimationPrimitive *)((char *)result + 32 * a2);
  return result;
}
