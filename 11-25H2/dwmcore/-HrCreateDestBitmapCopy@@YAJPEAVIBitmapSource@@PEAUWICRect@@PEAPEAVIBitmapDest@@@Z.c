/*
 * XREFs of ?HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z @ 0x1802E3078
 * Callers:
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z @ 0x180236CD0 (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x1800781CC (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x180187810 (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x1802BFD08 (-HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HrCreateDestBitmapCopy(struct IBitmapSource *a1, struct WICRect *a2, struct IBitmapDest **a3)
{
  CSystemMemoryBitmap *v5; // rax
  CSystemMemoryBitmap *v6; // rax
  CSystemMemoryBitmap *v7; // rbx
  __int64 v8; // rsi
  struct WICRect *v9; // r8
  int v10; // eax
  unsigned int v11; // edi
  int v12; // r9d
  unsigned int v14; // [rsp+20h] [rbp-18h]

  *a3 = 0LL;
  v5 = (CSystemMemoryBitmap *)operator new(0x98uLL);
  if ( !v5 )
  {
    v8 = 0LL;
    goto LABEL_9;
  }
  v6 = CSystemMemoryBitmap::CSystemMemoryBitmap(v5);
  v7 = v6;
  v8 = (__int64)v6;
  if ( !v6 )
  {
LABEL_9:
    v11 = -2147024882;
    v12 = -2147024882;
    v14 = 99;
    goto LABEL_10;
  }
  (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v6 + 8LL))(v6);
  v10 = CSystemMemoryBitmap::HrInit(v7, a1, v9);
  v11 = v10;
  if ( v10 < 0 )
  {
    v14 = 104;
    goto LABEL_6;
  }
  v10 = (**(__int64 (__fastcall ***)(CSystemMemoryBitmap *, GUID *, struct IBitmapDest **))v7)(
          v7,
          &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
          a3);
  v11 = v10;
  if ( v10 < 0 )
  {
    v14 = 107;
LABEL_6:
    v12 = v10;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, v14, 0LL);
  }
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(v8);
  return v11;
}
