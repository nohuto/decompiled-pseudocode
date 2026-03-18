/*
 * XREFs of ?ObjectInit@CompositionSurfaceObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x140047C00
 * Callers:
 *     NtCreateCompositionSurfaceHandle @ 0x140047DF0 (NtCreateCompositionSurfaceHandle.c)
 * Callees:
 *     ??0CCompositionSurface@@QEAA@XZ @ 0x140047C8C (--0CCompositionSurface@@QEAA@XZ.c)
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
  *((_QWORD *)a1 + 16) = (char *)a1 + 120;
  *((_QWORD *)a1 + 15) = (char *)a1 + 120;
  *((_DWORD *)a1 + 34) = 0;
  *((_QWORD *)a1 + 18) = 0LL;
  *((_BYTE *)a1 + 169) = 0;
  return 0LL;
}
