/*
 * XREFs of DpiCallDrvSetBrightness @ 0x1402CB5B0
 * Callers:
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x14024CC08 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 *     ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1402CB420 (-DpiBrightnessIfSet@@YAJPEAXE@Z.c)
 * Callees:
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x140013524 (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiCallDrvSetBrightness(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rsi
  int v4; // edi
  __int64 v5; // rdx
  _QWORD *v6; // r9
  _QWORD *v7; // rcx
  __int16 v8; // ax
  int v9; // esi
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // ebx

  v2 = *(_QWORD *)(a1 + 64);
  v4 = a2;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = *(_WORD *)(v2 + 4810);
  if ( v8 == 2 )
    v6 = (_QWORD *)(v2 + 4808);
  if ( v8 == 1 )
    v7 = (_QWORD *)(v2 + 4808);
  if ( (!v6 || !v6[4]) && (!v7 || !v7[4]) )
    return 3221225659LL;
  v9 = *(unsigned __int8 *)(v2 + 4528);
  if ( v6 && v6[4] )
  {
    v10 = (__int64 (__fastcall *)(__int64, __int64))v6[5];
    v11 = v6[1];
  }
  else
  {
    v10 = (__int64 (__fastcall *)(__int64, __int64))v7[5];
    v11 = v7[1];
  }
  LOBYTE(v5) = v4;
  v12 = v10(v11, v5);
  v15 = v12;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqtq_EtwWriteTransfer(v13, &EventBrightness, v14, a1, v9, v4, v12);
  return v15;
}
