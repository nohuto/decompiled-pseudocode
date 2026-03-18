/*
 * XREFs of ?RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z @ 0x1801A3E70
 * Callers:
 *     ?DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x1801A3520 (-DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x180264120 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawingContext::RecordBitmapResourceInfo(CDrawingContext *this, struct IBitmapResource *a2)
{
  bool v4; // si
  char *v5; // rbp
  void (__fastcall *v6)(struct IBitmapResource *, bool, _QWORD, void *, _DWORD, char *); // r14
  bool v7; // zf
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r8d
  void *v11; // r9
  _BYTE v12[16]; // [rsp+40h] [rbp-38h] BYREF

  v4 = *((_QWORD *)this + 6) && !*((_BYTE *)g_pComposition + 6466);
  v5 = (char *)this + 164;
  v6 = *(void (__fastcall **)(struct IBitmapResource *, bool, _QWORD, void *, _DWORD, char *))(*(_QWORD *)a2 + 48LL);
  v7 = *((_BYTE *)this + 192) == 0;
  v8 = *((_QWORD *)this + 4);
  if ( v7 )
    v5 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v8 + 8) + 24LL))(v8 + 8, v12);
  v10 = *((_DWORD *)this + 74);
  if ( v10 )
    v11 = (void *)(*((_QWORD *)this + 36) + 68LL * (unsigned int)(v10 - 1));
  else
    v11 = &CMILMatrix::Identity;
  v6(a2, v4, 0LL, v11, *(_DWORD *)(v9 + 8), v5);
}
