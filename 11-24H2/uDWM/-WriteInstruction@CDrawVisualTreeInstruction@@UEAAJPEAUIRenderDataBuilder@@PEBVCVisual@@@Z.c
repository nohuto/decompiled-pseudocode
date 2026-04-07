/*
 * XREFs of ?WriteInstruction@CDrawVisualTreeInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x1800777E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawVisualTreeInstruction::WriteInstruction(
        CDrawVisualTreeInstruction *this,
        struct IRenderDataBuilder *a2,
        const struct CVisual *a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(struct IRenderDataBuilder *, __int64); // r9
  __int64 v7; // rax

  v3 = *(_QWORD *)a2;
  v5 = 0LL;
  v6 = *(__int64 (__fastcall **)(struct IRenderDataBuilder *, __int64))(v3 + 72);
  v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( v7 )
    v5 = *(unsigned int *)(*(_QWORD *)(v7 + 16) + 24LL);
  return v6(a2, v5);
}
