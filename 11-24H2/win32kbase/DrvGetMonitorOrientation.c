/*
 * XREFs of DrvGetMonitorOrientation @ 0x1401CAE90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvGetMonitorOrientation(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 DxgkWin32kInterface; // rax

  if ( !a1 )
    return 3221225485LL;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64))(DxgkWin32kInterface + 264))(
           *a1,
           a2,
           0LL,
           a3,
           a4);
}
