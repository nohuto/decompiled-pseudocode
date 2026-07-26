/*
 * XREFs of ndisEtwCaptureMiniportMatchingHardwareId @ 0x1400A10F8
 * Callers:
 *     ndisEtwWriteMiniportRundown @ 0x1400A13F8 (ndisEtwWriteMiniportRundown.c)
 * Callees:
 *     ?reset@?$KArray@_W$00@Rtl@@AEAAXXZ @ 0x140001908 (-reset@-$KArray@_W$00@Rtl@@AEAAXXZ.c)
 *     ?resize@?$KArray@_W$00@Rtl@@QEAA_N_K@Z @ 0x1400019EC (-resize@-$KArray@_W$00@Rtl@@QEAA_N_K@Z.c)
 */

__int64 __fastcall ndisEtwCaptureMiniportMatchingHardwareId(PDEVICE_OBJECT Pdo, __int64 a2)
{
  __int64 v4; // rdi
  _WORD *v5; // rsi
  __int64 v7; // [rsp+40h] [rbp-10h] BYREF
  PVOID Data; // [rsp+48h] [rbp-8h]
  ULONG RequiredSize; // [rsp+90h] [rbp+40h] BYREF
  ULONG Type; // [rsp+98h] [rbp+48h] BYREF

  Rtl::KArray<wchar_t,1>::resize(a2, 0LL);
  v7 = 0LL;
  Data = 0LL;
  RequiredSize = 0;
  Type = 0;
  if ( IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_MatchingDeviceId, 0, 0, 0, 0LL, &RequiredSize, &Type) != -1073741789
    || Type != 18
    || (RequiredSize & 1) != 0
    || !Rtl::KArray<wchar_t,1>::resize((__int64)&v7, (unsigned __int64)RequiredSize >> 1) )
  {
    goto LABEL_11;
  }
  v4 = HIDWORD(v7);
  if ( !HIDWORD(v7) )
    goto LABEL_10;
  v5 = Data;
  if ( IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_MatchingDeviceId, 0, 0, RequiredSize, Data, &RequiredSize, &Type) )
    goto LABEL_11;
  if ( !v4 )
LABEL_10:
    __fastfail(5u);
  if ( !v5[v4 - 1] )
  {
    Rtl::KArray<wchar_t,1>::reset(a2);
    *(_DWORD *)a2 = v7;
    v7 = 0LL;
    *(_QWORD *)(a2 + 8) = v5;
    *(_DWORD *)(a2 + 4) = v4;
    Data = 0LL;
    Rtl::KArray<wchar_t,1>::reset((__int64)&v7);
    return 0LL;
  }
LABEL_11:
  Rtl::KArray<wchar_t,1>::reset((__int64)&v7);
  return 1LL;
}
