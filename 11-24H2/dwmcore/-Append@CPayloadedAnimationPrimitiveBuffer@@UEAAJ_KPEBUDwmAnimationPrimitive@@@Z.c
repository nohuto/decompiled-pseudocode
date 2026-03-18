/*
 * XREFs of ?Append@CPayloadedAnimationPrimitiveBuffer@@UEAAJ_KPEBUDwmAnimationPrimitive@@@Z @ 0x180228FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPayloadedAnimationPrimitiveBuffer::Append(
        CPayloadedAnimationPrimitiveBuffer *this,
        unsigned int a2,
        const struct DwmAnimationPrimitive *a3)
{
  return DynArray<DwmAnimationPrimitive,0>::AddMultipleAndSet((char *)this + 16, a3, a2);
}
