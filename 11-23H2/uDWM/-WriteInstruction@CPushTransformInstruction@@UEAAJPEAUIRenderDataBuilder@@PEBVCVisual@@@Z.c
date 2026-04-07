/*
 * XREFs of ?WriteInstruction@CPushTransformInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x18001DDF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPushTransformInstruction::WriteInstruction(
        CPushTransformInstruction *this,
        struct IRenderDataBuilder *a2,
        const struct CVisual *a3)
{
  return (*(__int64 (__fastcall **)(struct IRenderDataBuilder *, _QWORD))(*(_QWORD *)a2 + 88LL))(
           a2,
           *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL));
}
