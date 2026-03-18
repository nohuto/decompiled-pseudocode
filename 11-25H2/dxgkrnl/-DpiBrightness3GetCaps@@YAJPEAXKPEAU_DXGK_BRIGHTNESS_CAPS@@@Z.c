/*
 * XREFs of ?DpiBrightness3GetCaps@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_CAPS@@@Z @ 0x140245BF0
 * Callers:
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x140085690 (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 *     DpiMdmProcessAdapterBrightness @ 0x140088794 (DpiMdmProcessAdapterBrightness.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402BA080 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402BD038 (DpiAcquireCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightness3GetCaps(_QWORD *a1, unsigned int a2, struct _DXGK_BRIGHTNESS_CAPS *a3)
{
  __int64 v3; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 (__fastcall *v10)(_QWORD, _QWORD, struct _DXGK_BRIGHTNESS_CAPS *); // rax

  v3 = a1[8];
  KeWaitForSingleObject((PVOID)(v3 + 4536), Executive, 0, 0, 0LL);
  v7 = DpiAcquireCoreSyncAccessSafe(a1, 0LL);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = 0LL;
    if ( *(_WORD *)(v3 + 4810) == 3 )
      v9 = v3 + 4808;
    if ( v9 )
    {
      v10 = *(__int64 (__fastcall **)(_QWORD, _QWORD, struct _DXGK_BRIGHTNESS_CAPS *))(v9 + 48);
      if ( v10 )
        v8 = v10(*(_QWORD *)(v9 + 8), a2, a3);
      else
        v8 = -1073741661;
    }
    else
    {
      v8 = -1073741637;
    }
    DpiReleaseCoreSyncAccessSafe(a1, 0LL);
  }
  else
  {
    WdLogSingleEntry1(2LL, v7);
    WdLogGlobalForLineNumber = 524;
  }
  KeReleaseMutex((PRKMUTEX)(v3 + 4536), 0);
  return v8;
}
