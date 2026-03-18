/*
 * XREFs of DrvCreateLiveDumpWithWdLogs @ 0x1401C9C64
 * Callers:
 *     NtUserDisplayConfigGetDeviceInfo @ 0x14016B770 (NtUserDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvCreateLiveDumpWithWdLogs(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 DxgkWin32kInterface; // rax
  char v6; // [rsp+28h] [rbp-20h]

  v2 = a2;
  v3 = (int)a1;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
  v6 = 0;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, char))(DxgkWin32kInterface + 720))(
           403LL,
           2061LL,
           v3,
           v2,
           0LL,
           v6);
}
