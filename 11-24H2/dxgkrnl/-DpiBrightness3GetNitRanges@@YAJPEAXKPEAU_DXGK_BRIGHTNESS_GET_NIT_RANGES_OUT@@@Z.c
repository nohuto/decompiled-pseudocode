/*
 * XREFs of ?DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z @ 0x14024CB00
 * Callers:
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x140085D20 (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 *     DpiMdmProcessAdapterBrightness @ 0x140088E5C (DpiMdmProcessAdapterBrightness.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?ZeroUnusedNitsRanges@@YAXPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z @ 0x14024DD98 (-ZeroUnusedNitsRanges@@YAXPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402C78D0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402CA36C (DpiAcquireCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightness3GetNitRanges(
        _QWORD *a1,
        unsigned int a2,
        struct _DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT *a3)
{
  __int64 v3; // rdi
  int v7; // eax
  int v8; // ebx
  __int64 v9; // r9
  __int64 (__fastcall *v10)(_QWORD, _QWORD, struct _DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT *); // rax

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
      v10 = *(__int64 (__fastcall **)(_QWORD, _QWORD, struct _DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT *))(v9 + 56);
      if ( v10 )
      {
        v8 = v10(*(_QWORD *)(v9 + 8), a2, a3);
        if ( v8 >= 0 )
          ZeroUnusedNitsRanges(a3);
      }
      else
      {
        v8 = -1073741661;
      }
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
    WdLogGlobalForLineNumber = 576;
  }
  KeReleaseMutex((PRKMUTEX)(v3 + 4536), 0);
  return (unsigned int)v8;
}
