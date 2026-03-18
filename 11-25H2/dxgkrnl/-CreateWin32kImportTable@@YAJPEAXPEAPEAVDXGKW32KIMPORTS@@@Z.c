/*
 * XREFs of ?CreateWin32kImportTable@@YAJPEAXPEAPEAVDXGKW32KIMPORTS@@@Z @ 0x140091CBC
 * Callers:
 *     ?DelayLoadWin32k@DXGGLOBAL@@QEAAJPEAX@Z @ 0x1400270A4 (-DelayLoadWin32k@DXGGLOBAL@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0W32KIMPORTS@@QEAA@PEAX@Z @ 0x140091144 (--0W32KIMPORTS@@QEAA@PEAX@Z.c)
 */

__int64 __fastcall CreateWin32kImportTable(__int64 a1, struct DXGKW32KIMPORTS **a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  W32KIMPORTS *v7; // rax
  struct DXGKW32KIMPORTS *v8; // rax

  v6 = 0;
  v7 = (W32KIMPORTS *)operator new(0x278uLL, 0x4B677844u, 256LL, a4);
  if ( v7 && (v8 = W32KIMPORTS::W32KIMPORTS(v7, a1)) != 0LL )
    *a2 = v8;
  else
    return (unsigned int)-1073741801;
  return v6;
}
