/*
 * XREFs of GreDxgkPreSessionDisconnected @ 0x1C00A0D98
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00A1044 (xxxRemoteDisconnect.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00C2C24 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00C2C70 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GreDxgkPreSessionDisconnected(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 DxgkWin32kInterface; // rax
  __int64 v5; // rcx
  char v6; // [rsp+38h] [rbp+10h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v6);
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v3, v2);
  LOBYTE(v5) = a1;
  (*(void (__fastcall **)(__int64))(DxgkWin32kInterface + 368))(v5);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v6);
}
