/*
 * XREFs of ObservablePropertyCallback__lambda_3d6638088535fad8bc54773006e1fbb5___::Run @ 0x180586DA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InvalidateThumbnailVisual@SwitchItemThumbnailElement@@IEAAXXZ @ 0x180586B88 (-InvalidateThumbnailVisual@SwitchItemThumbnailElement@@IEAAXXZ.c)
 */

void __fastcall ObservablePropertyCallback__lambda_3d6638088535fad8bc54773006e1fbb5___::Run(__int64 a1)
{
  SwitchItemThumbnailElement *v1; // rbx

  v1 = *(SwitchItemThumbnailElement **)(*(_QWORD *)(a1 + 16) + 16LL);
  if ( v1 )
  {
    (*(void (__fastcall **)(SwitchItemThumbnailElement *))(*(_QWORD *)v1 + 8LL))(v1);
    SwitchItemThumbnailElement::InvalidateThumbnailVisual(v1);
    (*(void (__fastcall **)(SwitchItemThumbnailElement *))(*(_QWORD *)v1 + 16LL))(v1);
  }
}
