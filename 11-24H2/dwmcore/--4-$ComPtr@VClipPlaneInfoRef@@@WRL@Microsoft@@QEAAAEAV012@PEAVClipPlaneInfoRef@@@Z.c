/*
 * XREFs of ??4?$ComPtr@VClipPlaneInfoRef@@@WRL@Microsoft@@QEAAAEAV012@PEAVClipPlaneInfoRef@@@Z @ 0x1801EA134
 * Callers:
 *     ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x18022C25C (-UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VClipPlaneInfoRef@@@WRL@Microsoft@@IEAAKXZ @ 0x1801E2420 (-InternalRelease@-$ComPtr@VClipPlaneInfoRef@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ClipPlaneInfoRef>::operator=(__int64 *a1, void (__fastcall ***a2)(_QWORD))
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (void (__fastcall ***)(_QWORD))*a1 != a2 )
  {
    if ( a2 )
      (**a2)(a2);
    v5 = *a1;
    *a1 = (__int64)a2;
    Microsoft::WRL::ComPtr<ClipPlaneInfoRef>::InternalRelease(&v5);
  }
  return a1;
}
