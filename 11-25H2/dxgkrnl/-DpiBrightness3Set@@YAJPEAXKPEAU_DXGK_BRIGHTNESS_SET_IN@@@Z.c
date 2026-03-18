/*
 * XREFs of ?DpiBrightness3Set@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_SET_IN@@@Z @ 0x140428830
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x140016724 (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     Feature_DisplayMux_PostGA_BugBundle_1__private_IsEnabledDeviceUsageNoInline @ 0x14006E0E8 (Feature_DisplayMux_PostGA_BugBundle_1__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402BA080 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402BD038 (DpiAcquireCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightness3Set(_QWORD *a1, unsigned int a2, struct _DXGK_BRIGHTNESS_SET_IN *a3)
{
  __int64 v3; // rdi
  int v7; // eax
  int v8; // ebx
  __int64 v9; // r9
  __int64 (__fastcall *v10)(_QWORD, _QWORD, struct _DXGK_BRIGHTNESS_SET_IN *); // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // [rsp+20h] [rbp-38h]

  v3 = a1[8];
  KeWaitForSingleObject((PVOID)(v3 + 4536), Executive, 0, 0, 0LL);
  v7 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 0);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = 0LL;
    if ( *(_WORD *)(v3 + 4810) == 3 )
      v9 = v3 + 4808;
    if ( v9 )
    {
      v10 = *(__int64 (__fastcall **)(_QWORD, _QWORD, struct _DXGK_BRIGHTNESS_SET_IN *))(v9 + 32);
      if ( v10 )
      {
        v8 = v10(*(_QWORD *)(v9 + 8), a2, a3);
        if ( (unsigned int)Feature_DisplayMux_PostGA_BugBundle_1__private_IsEnabledDeviceUsageNoInline()
          && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          LODWORD(v14) = *(_DWORD *)(v3 + 4528);
          McTemplateK0pqtq_EtwWriteTransfer(v11, &EventBrightness, v12, a1, v14, a3->BrightnessMillinits, v8);
        }
        if ( v8 >= 0 )
          *(_DWORD *)(v3 + 4528) = a3->BrightnessMillinits;
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
    DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
  }
  else
  {
    WdLogSingleEntry1(2LL, v7);
    WdLogGlobalForLineNumber = 402;
  }
  KeReleaseMutex((PRKMUTEX)(v3 + 4536), 0);
  return (unsigned int)v8;
}
