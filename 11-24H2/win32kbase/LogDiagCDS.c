/*
 * XREFs of LogDiagCDS @ 0x140199A8C
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E5504 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvChangeDisplaySettings @ 0x140137250 (DrvChangeDisplaySettings.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     PALLOCMEM @ 0x14008F85C (PALLOCMEM.c)
 *     DrvDxgkWriteDiagEntry @ 0x1400E5440 (DrvDxgkWriteDiagEntry.c)
 *     DrvDxgkLogCodePointPacket @ 0x1400E5480 (DrvDxgkLogCodePointPacket.c)
 *     ?FillSimpleDevModeField@@YAXQEAU_devicemodeW@@PEAU_DXGK_DIAG_SIMPLE_DEVMODE@@@Z @ 0x1401C8F0C (-FillSimpleDevModeField@@YAXQEAU_devicemodeW@@PEAU_DXGK_DIAG_SIMPLE_DEVMODE@@@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall LogDiagCDS(
        __int64 a1,
        struct _devicemodeW *a2,
        __int64 a3,
        int a4,
        char a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int16 a10,
        struct _devicemodeW *a11)
{
  void *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r14
  int v18; // ebp
  unsigned int v19; // edx
  int v20; // edx

  v15 = (void *)PALLOCMEM(160LL, 0x73726447u);
  v16 = (__int64)v15;
  if ( v15 )
  {
    memset(v15, 0, 0xA0uLL);
    *(_DWORD *)v16 = 5;
    *(_DWORD *)(v16 + 4) = 160;
    *(_QWORD *)(v16 + 64) = a6;
    *(_DWORD *)(v16 + 56) = a7;
    *(_DWORD *)(v16 + 52) = a8;
    *(_DWORD *)(v16 + 60) = a9;
    v17 = -a1;
    v18 = -a4;
    v19 = ((8 * (a5 & 8)) | (8 * (a5 & 4)) & 0xBF | (8 * (a5 & 3)) & 0x9F | (v18 == 0 ? 4 : 0) | (v17 != 0 ? 2 : 0) | (a11 != 0LL ? 0x1000 : 0) | *(_DWORD *)(v16 + 48) & 0xFFFFEF80 | (a2 != 0LL)) ^ ((unsigned __int16)((8 * (a5 & 8)) | (8 * (a5 & 4)) & 0xBF | (8 * (a5 & 3)) & 0x9F | (v18 == 0 ? 4 : 0) | (v17 != 0 ? 2 : 0) | (a11 != 0LL ? 0x1000 : 0) | *(_WORD *)(v16 + 48) & 0xEF80 | (a2 != 0LL)) ^ (unsigned __int16)(a10 << 13)) & 0xE000;
    *(_DWORD *)(v16 + 48) = v19;
    if ( a3 )
    {
      v20 = v19 | 0x800;
      *(_DWORD *)(v16 + 48) = v20;
      *(_DWORD *)(v16 + 48) = v20 ^ ((unsigned __int16)v20 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(a3 + 248) << 7)) & 0x780;
    }
    FillSimpleDevModeField(a2, (struct _DXGK_DIAG_SIMPLE_DEVMODE *)(v16 + 72));
    FillSimpleDevModeField(a11, (struct _DXGK_DIAG_SIMPLE_DEVMODE *)(v16 + 116));
    DrvDxgkWriteDiagEntry(v16);
    GreDeleteFastMutex((char *)v16);
  }
  else
  {
    WdLogSingleEntry1(6LL, 160LL);
    WdLogGlobalForLineNumber = 26706;
    DrvDxgkLogCodePointPacket(5LL, a7, a8, a9);
  }
}
