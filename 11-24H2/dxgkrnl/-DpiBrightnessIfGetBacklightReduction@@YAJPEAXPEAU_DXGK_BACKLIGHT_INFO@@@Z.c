/*
 * XREFs of ?DpiBrightnessIfGetBacklightReduction@@YAJPEAXPEAU_DXGK_BACKLIGHT_INFO@@@Z @ 0x14024D1A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402C78D0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402CA36C (DpiAcquireCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightnessIfGetBacklightReduction(_QWORD *a1, struct _DXGK_BACKLIGHT_INFO *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int16 v6; // bp
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(_QWORD, struct _DXGK_BACKLIGHT_INFO *); // rax
  __int64 v12; // rcx

  v2 = a1[8];
  v3 = 0LL;
  v6 = *(_WORD *)(v2 + 4810);
  if ( v6 == 2 )
    v3 = v2 + 4808;
  if ( !v3 )
    return 3221225659LL;
  v8 = -1073741661;
  KeWaitForSingleObject((PVOID)(v2 + 4536), Executive, 0, 0, 0LL);
  v9 = 32LL;
  if ( v6 == 2 )
    v9 = v2 + 4840;
  if ( *(_QWORD *)v9 )
  {
    v8 = DpiAcquireCoreSyncAccessSafe(a1, 0LL);
    if ( v8 >= 0 )
    {
      v10 = 80LL;
      if ( v6 == 2 )
        v10 = v2 + 4888;
      v11 = *(__int64 (__fastcall **)(_QWORD, struct _DXGK_BACKLIGHT_INFO *))v10;
      v12 = 8LL;
      if ( v6 == 2 )
        v12 = v2 + 4816;
      v8 = v11(*(_QWORD *)v12, a2);
      DpiReleaseCoreSyncAccessSafe(a1, 0LL);
    }
  }
  KeReleaseMutex((PRKMUTEX)(v2 + 4536), 0);
  return (unsigned int)v8;
}
