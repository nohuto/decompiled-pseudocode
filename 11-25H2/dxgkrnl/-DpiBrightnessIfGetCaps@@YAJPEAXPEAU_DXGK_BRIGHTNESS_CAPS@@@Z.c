/*
 * XREFs of ?DpiBrightnessIfGetCaps@@YAJPEAXPEAU_DXGK_BRIGHTNESS_CAPS@@@Z @ 0x140246480
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402BA080 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402BD038 (DpiAcquireCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightnessIfGetCaps(_QWORD *a1, struct _DXGK_BRIGHTNESS_CAPS *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int16 v6; // r15
  int v8; // edi
  __int64 v9; // r14
  __int64 v10; // rcx

  v2 = a1[8];
  v3 = 0LL;
  v6 = *(_WORD *)(v2 + 4810);
  if ( v6 == 2 )
    v3 = v2 + 4808;
  if ( !v3 )
    return 3221225659LL;
  v8 = -1073741661;
  KeWaitForSingleObject((PVOID)(v2 + 4536), Executive, 0, 0, 0LL);
  v9 = 56LL;
  if ( v6 == 2 )
    v9 = v2 + 4864;
  if ( *(_QWORD *)v9 )
  {
    v8 = DpiAcquireCoreSyncAccessSafe(a1, 0LL);
    if ( v8 >= 0 )
    {
      v10 = 8LL;
      if ( v6 == 2 )
        v10 = v2 + 4816;
      v8 = (*(__int64 (__fastcall **)(_QWORD, struct _DXGK_BRIGHTNESS_CAPS *))v9)(*(_QWORD *)v10, a2);
      DpiReleaseCoreSyncAccessSafe(a1, 0LL);
    }
  }
  KeReleaseMutex((PRKMUTEX)(v2 + 4536), 0);
  if ( (**(_QWORD **)(*(_QWORD *)(v2 + 4032) + 3008LL) & 0x200000) != 0 )
    a2->Value &= ~1u;
  return (unsigned int)v8;
}
