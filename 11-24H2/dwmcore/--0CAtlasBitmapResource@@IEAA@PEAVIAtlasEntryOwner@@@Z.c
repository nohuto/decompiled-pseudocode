/*
 * XREFs of ??0CAtlasBitmapResource@@IEAA@PEAVIAtlasEntryOwner@@@Z @ 0x180063300
 * Callers:
 *     ?Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z @ 0x180063224 (-Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ @ 0x18002465C (--0-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ.c)
 */

CAtlasBitmapResource *__fastcall CAtlasBitmapResource::CAtlasBitmapResource(
        CAtlasBitmapResource *this,
        struct IAtlasEntryOwner *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>::CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>((__int64)this);
  *(_QWORD *)(v2 + 16) = &CAtlasBitmapResource::`vftable'{for `IBitmapRealization'};
  *(_QWORD *)v2 = &CAtlasBitmapResource::`vftable'{for `CMILCOMBaseT<IBitmapResource,IBitmapResource,CMilObjectDeleter>'};
  *(_DWORD *)(v2 + 40) = -1;
  *(_QWORD *)(v2 + 24) = 0LL;
  *(_QWORD *)(v2 + 32) = v3;
  *(_WORD *)(v2 + 48) = 0;
  return (CAtlasBitmapResource *)v2;
}
