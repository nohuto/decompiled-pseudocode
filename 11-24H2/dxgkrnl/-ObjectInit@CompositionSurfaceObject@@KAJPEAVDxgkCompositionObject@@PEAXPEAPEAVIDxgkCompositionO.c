/*
 * XREFs of ?ObjectInit@CompositionSurfaceObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x14004A5D0
 * Callers:
 *     NtCreateCompositionSurfaceHandle @ 0x140047630 (NtCreateCompositionSurfaceHandle.c)
 * Callees:
 *     ??0CCompositionSurface@@QEAA@XZ @ 0x14004A660 (--0CCompositionSurface@@QEAA@XZ.c)
 */

__int64 __fastcall CompositionSurfaceObject::ObjectInit(
        struct DxgkCompositionObject *a1,
        void *a2,
        struct IDxgkCompositionObject **a3)
{
  CCompositionSurface *v3; // rdi

  v3 = (struct DxgkCompositionObject *)((char *)a1 + 40);
  if ( a1 )
  {
    *(_QWORD *)a1 = &CompositionSurfaceObject::`vftable'{for `DxgkCompositionObject'};
    *((_QWORD *)a1 + 4) = &CompositionSurfaceObject::`vftable'{for `IPairedSurfaceObject'};
    CCompositionSurface::CCompositionSurface(v3);
  }
  *a3 = v3;
  *((_DWORD *)a1 + 16) = 0;
  *((_QWORD *)a1 + 9) = 0LL;
  *((_QWORD *)a1 + 10) = 0LL;
  *((_QWORD *)a1 + 11) = 0LL;
  *((_QWORD *)a1 + 21) = (char *)a1 + 160;
  *((_QWORD *)a1 + 20) = (char *)a1 + 160;
  *((_DWORD *)a1 + 44) = 0;
  *((_QWORD *)a1 + 23) = 0LL;
  *((_BYTE *)a1 + 209) = 0;
  return 0LL;
}
