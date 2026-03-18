/*
 * XREFs of ??0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x140039200
 * Callers:
 *     ??0CFlipContentToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x140039184 (--0CFlipContentToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z.c)
 *     ?CreateUnBindToken@CToken@@SAJPEAVCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x140098D84 (-CreateUnBindToken@CToken@@SAJPEAVCompositionSurfaceObject@@PEAPEAV1@@Z.c)
 *     ?Create@CDisableScanoutToken@@SAJPEAVCompositionSurfaceObject@@_KPEAPEAV1@@Z @ 0x14009F0F4 (-Create@CDisableScanoutToken@@SAJPEAVCompositionSurfaceObject@@_KPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CToken *__fastcall CToken::CToken(CToken *this, __int64 a2, struct CompositionSurfaceObject *a3)
{
  *((_DWORD *)this + 6) = 6;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CToken::`vftable';
  *((_QWORD *)this + 7) = a2;
  *((_WORD *)this + 32) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 17) = 0;
  *((_QWORD *)this + 6) = a3;
  ObReferenceObjectByPointer(a3, 3u, g_pDxgkCompositionObjectType, 0);
  return this;
}
