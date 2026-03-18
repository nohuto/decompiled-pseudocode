/*
 * XREFs of ?DpiBrightness3SetBacklightOptimization@@YAJPEAXKW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1402BE2E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x140016724 (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402BA080 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402BD038 (DpiAcquireCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightness3SetBacklightOptimization(
        _QWORD *a1,
        unsigned int a2,
        enum DXGK_BACKLIGHT_OPTIMIZATION_LEVEL a3)
{
  __int64 v3; // rsi
  struct _KMUTANT *v7; // r14
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 (__fastcall *v11)(_QWORD, _QWORD, _QWORD); // rax
  int v12; // esi
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // [rsp+20h] [rbp-38h]

  v3 = a1[8];
  v7 = (struct _KMUTANT *)(v3 + 4536);
  KeWaitForSingleObject((PVOID)(v3 + 4536), Executive, 0, 0, 0LL);
  v8 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 0);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = 0LL;
    if ( *(_WORD *)(v3 + 4810) == 3 )
      v10 = v3 + 4808;
    if ( v10 )
    {
      v11 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v10 + 64);
      if ( v11 )
      {
        v12 = *(_DWORD *)(v3 + 4524);
        v13 = v11(*(_QWORD *)(v10 + 8), a2, (unsigned int)a3);
        v9 = v13;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          LODWORD(v17) = v12;
          McTemplateK0pqtq_EtwWriteTransfer(v14, &EventBacklightOptimizationLevel, v15, a1, v17, a3, v13);
        }
      }
      else
      {
        v9 = -1073741661;
      }
    }
    else
    {
      v9 = -1073741637;
    }
    DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
  }
  else
  {
    WdLogSingleEntry1(2LL, v8);
    WdLogGlobalForLineNumber = 632;
  }
  KeReleaseMutex(v7, 0);
  return v9;
}
