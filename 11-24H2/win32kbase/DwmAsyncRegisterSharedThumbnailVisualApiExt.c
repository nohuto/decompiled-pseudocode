/*
 * XREFs of DwmAsyncRegisterSharedThumbnailVisualApiExt @ 0x140132DAC
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x14011D360 (NtDCompositionRegisterThumbnailVisual.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DwmAsyncRegisterSharedThumbnailVisualApiExt(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 (__fastcall *v12)(__int64, __int64, __int64, _QWORD, int, __int64, __int64, __int64); // rax

  v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, __int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 2680LL);
  if ( v12 )
    return v12(a1, a2, a3, a4, a5, a6, a7, a8);
  else
    return 3221225659LL;
}
