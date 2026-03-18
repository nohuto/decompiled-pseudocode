/*
 * XREFs of GreDxgkEnableUnorderedWaitsForDevice @ 0x1401146B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreDxgkEnableUnorderedWaitsForDevice(__int64 a1, char a2)
{
  unsigned int v3; // edi
  __int64 DxgkWin32kInterface; // rax
  __int64 v5; // rdx

  v3 = a1;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
  LOBYTE(v5) = a2;
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(DxgkWin32kInterface + 424))(v3, v5);
}
