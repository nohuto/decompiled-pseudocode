/*
 * XREFs of DpiRectContainsRectWithSubpixel @ 0x1401A8118
 * Callers:
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x140043A80 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 * Callees:
 *     ?GetDpiRectWithSubpixel@@YAXPEBUtagRECT@@PEBMPEBUtagWND@@2PEAM333@Z @ 0x1401A8204 (-GetDpiRectWithSubpixel@@YAXPEBUtagRECT@@PEBMPEBUtagWND@@2PEAM333@Z.c)
 *     ?RectContainsRect@@YAHMMMMMMMM@Z @ 0x1401A8470 (-RectContainsRect@@YAHMMMMMMMM@Z.c)
 */

__int64 __fastcall DpiRectContainsRectWithSubpixel(
        const struct tagRECT *a1,
        const float *a2,
        const struct tagWND *a3,
        const struct tagRECT *a4,
        float *a5,
        struct tagWND *a6)
{
  float v8; // [rsp+40h] [rbp-20h] BYREF
  float v9; // [rsp+44h] [rbp-1Ch] BYREF
  float v10; // [rsp+48h] [rbp-18h] BYREF
  float v11; // [rsp+4Ch] [rbp-14h] BYREF
  float v12; // [rsp+50h] [rbp-10h] BYREF
  float v13; // [rsp+54h] [rbp-Ch] BYREF
  float v14; // [rsp+58h] [rbp-8h] BYREF
  float v15; // [rsp+5Ch] [rbp-4h] BYREF

  v15 = 0.0;
  v14 = 0.0;
  v13 = 0.0;
  v12 = 0.0;
  v11 = 0.0;
  v10 = 0.0;
  v9 = 0.0;
  v8 = 0.0;
  GetDpiRectWithSubpixel(a1, a2, a6, a3, &v15, &v14, &v13, &v12);
  GetDpiRectWithSubpixel(a4, a5, a6, a6, &v11, &v10, &v9, &v8);
  return RectContainsRect(v15, v14, v13, v12, v11, v10, v9, v8);
}
