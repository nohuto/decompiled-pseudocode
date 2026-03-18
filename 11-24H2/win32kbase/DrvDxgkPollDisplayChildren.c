/*
 * XREFs of DrvDxgkPollDisplayChildren @ 0x1401CAB80
 * Callers:
 *     xxxDisplayDiagBlackScreenDetected @ 0x1401ABAF0 (xxxDisplayDiagBlackScreenDetected.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvDxgkPollDisplayChildren(__int64 a1)
{
  __int64 v2; // rcx
  __int64 DxgkWin32kInterface; // rax

  if ( !*(_QWORD *)(DxDdGetDxgkWin32kInterface(a1) + 128) )
    return 3221225659LL;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v2);
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(DxgkWin32kInterface + 128))(a1, 0LL);
}
