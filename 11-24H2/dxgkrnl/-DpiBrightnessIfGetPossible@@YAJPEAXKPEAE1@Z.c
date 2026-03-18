/*
 * XREFs of ?DpiBrightnessIfGetPossible@@YAJPEAXKPEAE1@Z @ 0x1404049B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402C78D0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402CA36C (DpiAcquireCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightnessIfGetPossible(_QWORD *a1, unsigned int a2, unsigned __int8 *a3, unsigned __int8 *a4)
{
  __int64 v4; // r14
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int16 v10; // ax
  int v11; // edi
  __int64 (__fastcall *v12)(__int64, _QWORD, unsigned __int8 *, unsigned __int8 *); // rax
  __int64 v13; // rcx

  v4 = a1[8];
  v7 = 0LL;
  v8 = 0LL;
  v10 = *(_WORD *)(v4 + 4810);
  if ( v10 == 2 )
    v7 = v4 + 4808;
  if ( v10 == 1 )
    v8 = v4 + 4808;
  if ( (!v7 || !*(_QWORD *)(v7 + 32)) && (!v8 || !*(_QWORD *)(v8 + 32)) )
    return 3221225659LL;
  KeWaitForSingleObject((PVOID)(v4 + 4536), Executive, 0, 0, 0LL);
  v11 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 0);
  if ( v11 >= 0 )
  {
    if ( v7 && (v12 = *(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int8 *, unsigned __int8 *))(v7 + 32)) != 0LL )
    {
      v13 = *(_QWORD *)(v7 + 8);
    }
    else
    {
      v12 = *(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int8 *, unsigned __int8 *))(v8 + 32);
      v13 = *(_QWORD *)(v8 + 8);
    }
    v11 = v12(v13, a2, a3, a4);
    DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
  }
  KeReleaseMutex((PRKMUTEX)(v4 + 4536), 0);
  return (unsigned int)v11;
}
