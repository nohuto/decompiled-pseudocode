/*
 * XREFs of PipResetDevices @ 0x140C23FB0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 * Callees:
 *     _PnpCtxRegQueryValue @ 0x1408BA0C4 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegCloseKey @ 0x140A1004C (_PnpCtxRegCloseKey.c)
 *     PipResetMatchingFilteredDevices @ 0x140C24080 (PipResetMatchingFilteredDevices.c)
 */

__int64 __fastcall PipResetDevices(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+54h] [rbp+Ch]
  unsigned int v8; // [rsp+58h] [rbp+10h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF
  void *v10; // [rsp+68h] [rbp+20h] BYREF

  v7 = HIDWORD(a1);
  v10 = 0LL;
  v9 = 0;
  v6 = 0;
  v1 = *(_QWORD *)&PiPnpRtlCtx;
  result = PnpCtxRegOpenKey(*(__int64 *)&PiPnpRtlCtx, 2147483650LL, (__int64)L"SYSTEM", 0, 1u, (__int64)&v10);
  if ( (int)result >= 0 )
  {
    v8 = 4;
    v4 = PnpCtxRegQueryValue(v3, v10, L"DevModeEverEnabled", &v9, &v6, &v8);
    PnpCtxRegCloseKey(v5, v10);
    if ( v4 < 0 || !v6 )
    {
      PipResetMatchingFilteredDevices(
        v1,
        L"System\\CurrentControlSet\\Control\\StateSeparation\\PnP\\ResetDevices\\Classes",
        128LL);
      PipResetMatchingFilteredDevices(
        v1,
        L"System\\CurrentControlSet\\Control\\StateSeparation\\PnP\\ResetDevices\\Services",
        2LL);
    }
    return (unsigned int)v4;
  }
  return result;
}
