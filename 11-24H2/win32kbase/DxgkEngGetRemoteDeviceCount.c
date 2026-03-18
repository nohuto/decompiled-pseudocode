/*
 * XREFs of DxgkEngGetRemoteDeviceCount @ 0x14023AAD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall DxgkEngGetRemoteDeviceCount(__int64 a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 376LL);
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
