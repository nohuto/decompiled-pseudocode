/*
 * XREFs of ??1?$vector_facade@PEAVICompositionSurfaceInfoListener@@V?$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801FA294
 * Callers:
 *     ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x180203BA0 (--1CCompositionSurfaceInfo@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

int __fastcall detail::vector_facade<ICompositionSurfaceInfoListener *,detail::buffer_impl<ICompositionSurfaceInfoListener *,1,1,detail::liberal_expansion_policy>>::~vector_facade<ICompositionSurfaceInfoListener *,detail::buffer_impl<ICompositionSurfaceInfoListener *,1,1,detail::liberal_expansion_policy>>(
        void **a1)
{
  signed __int64 v1; // rax

  v1 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( v1 )
    a1[1] = (char *)a1[1] - 8 * v1;
  return detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>(a1);
}
