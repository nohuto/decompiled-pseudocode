/*
 * XREFs of ?HangIsProbablyReal@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800AF5A4
 * Callers:
 *     ?OnTimer@?$CWatchdogTimer@$00@@AEAAXXZ @ 0x1800AF9C4 (-OnTimer@-$CWatchdogTimer@$00@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800020BC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     ?DeviceJustExitedFromSleep@?$CWatchdogTimer_Old@$00@@AEAA_NXZ @ 0x1800ADD3C (-DeviceJustExitedFromSleep@-$CWatchdogTimer_Old@$00@@AEAA_NXZ.c)
 *     ?IsVirtualMachine@?$CWatchdogTimer_Old@$00@@AEAA_NXZ @ 0x1800AF864 (-IsVirtualMachine@-$CWatchdogTimer_Old@$00@@AEAA_NXZ.c)
 *     ?ProcessHasBeenRunningLongEnough@?$CWatchdogTimer@$00@@AEAAJPEA_N@Z @ 0x1800AFCBC (-ProcessHasBeenRunningLongEnough@-$CWatchdogTimer@$00@@AEAAJPEA_N@Z.c)
 */

char __fastcall CWatchdogTimer<1>::HangIsProbablyReal(__int64 a1)
{
  _DWORD *v2; // rcx
  int v3; // ecx
  _DWORD *v4; // rcx
  int v5; // ecx
  LARGE_INTEGER v6; // rcx
  _DWORD *v7; // rcx
  int v8; // ecx
  _DWORD *v9; // rcx
  int v10; // ecx
  char v12; // [rsp+38h] [rbp+10h] BYREF
  int v13; // [rsp+40h] [rbp+18h] BYREF

  if ( IsDebuggerPresent() )
  {
    v2 = *(_DWORD **)(a1 + 8);
    if ( *v2 > 5u && tlgKeywordOn((__int64)v2, 1LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        v3,
        (int)&unk_1801A8B16);
    return 0;
  }
  if ( (unsigned __int8)CWatchdogTimer_Old<1>::IsVirtualMachine() )
  {
    v4 = *(_DWORD **)(a1 + 8);
    if ( *v4 > 5u && tlgKeywordOn((__int64)v4, 1LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        v5,
        (int)&unk_1801A8AF2);
    return 0;
  }
  v13 = 0;
  RtlGetDeviceFamilyInfoEnum(0LL, &v13, 0LL);
  if ( v13 == 10 )
  {
    v7 = *(_DWORD **)(a1 + 8);
    if ( *v7 > 5u && tlgKeywordOn((__int64)v7, 1LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        v8,
        (int)&unk_1801A8ACB);
    return 0;
  }
  if ( *(_BYTE *)(a1 + 40) )
  {
    if ( CWatchdogTimer_Old<1>::DeviceJustExitedFromSleep(v6) )
    {
      v9 = *(_DWORD **)(a1 + 8);
      if ( *v9 > 5u && tlgKeywordOn((__int64)v9, 1LL) )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
          v10,
          (int)&unk_1801A8AA8);
      return 0;
    }
    v12 = 0;
    if ( (int)CWatchdogTimer<1>::ProcessHasBeenRunningLongEnough(a1, &v12) < 0 )
      return 0;
    if ( !v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 48));
      return 0;
    }
  }
  return 1;
}
