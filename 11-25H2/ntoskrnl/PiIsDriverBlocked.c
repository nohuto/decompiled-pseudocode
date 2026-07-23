/*
 * XREFs of PiIsDriverBlocked @ 0x1409ADF08
 * Callers:
 *     PiLookupInDDB @ 0x1409AF79C (PiLookupInDDB.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14025D590 (VslGetNestedPageProtectionFlags.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     KeIsKernelCetEnabled @ 0x14045663C (KeIsKernelCetEnabled.c)
 *     ExIsProcessorFeaturePresent @ 0x1404ECC40 (ExIsProcessorFeaturePresent.c)
 *     wcsrchr @ 0x1404FDA00 (wcsrchr.c)
 *     Feature_HvciScanHvptHandling__private_IsEnabledDeviceUsageNoInline @ 0x1405A2FD8 (Feature_HvciScanHvptHandling__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PnpLogEvent @ 0x140717360 (PnpLogEvent.c)
 *     PiIsHVCIEnabled @ 0x140718CD8 (PiIsHVCIEnabled.c)
 *     PiNotifyCiDriverBlocked @ 0x140718D24 (PiNotifyCiDriverBlocked.c)
 *     PnpTraceDriverBlocked @ 0x140726648 (PnpTraceDriverBlocked.c)
 *     SdbQueryDataEx @ 0x1407F2498 (SdbQueryDataEx.c)
 *     SdbReadEntryInformation @ 0x1407F2948 (SdbReadEntryInformation.c)
 *     PiUpdateDriverDBCache @ 0x140A706C4 (PiUpdateDriverDBCache.c)
 *     SdbGetDatabaseMatch @ 0x140A75B28 (SdbGetDatabaseMatch.c)
 */

__int64 __fastcall PiIsDriverBlocked(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int128 *a5)
{
  __int64 v6; // rdx
  unsigned int DatabaseMatch; // eax
  __int64 v9; // r8
  unsigned int v10; // r13d
  unsigned int v11; // ebx
  char v12; // di
  BOOLEAN IsProcessorFeaturePresent; // al
  wchar_t *v14; // rax
  const WCHAR *v15; // rdi
  int v16; // edx
  __int64 v18; // [rsp+30h] [rbp-61h]
  int v19; // [rsp+40h] [rbp-51h] BYREF
  int v20; // [rsp+44h] [rbp-4Dh] BYREF
  int v21; // [rsp+48h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-41h] BYREF
  __int64 v23; // [rsp+60h] [rbp-31h]
  _OWORD v24[2]; // [rsp+68h] [rbp-29h] BYREF
  __int64 v25; // [rsp+88h] [rbp-9h]

  v19 = 0;
  v25 = 0LL;
  v6 = *(_QWORD *)(a2 + 8);
  v23 = a3;
  memset(v24, 0, sizeof(v24));
  DatabaseMatch = SdbGetDatabaseMatch(a1, v6, a3, a3, a4);
  v10 = DatabaseMatch;
  if ( !DatabaseMatch )
  {
    v11 = 0;
LABEL_38:
    PiUpdateDriverDBCache(a2, v23, v9, v11, v24);
    if ( v11 + 1073740949 <= 1 )
    {
      if ( a5 )
      {
        v16 = v19;
        *a5 = v24[0];
        if ( (v16 & 0x70) != 0 )
          PiNotifyCiDriverBlocked(a5, v16, (const void **)a2);
      }
    }
    return v11;
  }
  v20 = 4;
  v21 = 4;
  if ( (unsigned int)SdbQueryDataEx(a1, DatabaseMatch, v9, (int)&v21, &v19, (__int64)&v20, v18) )
    goto LABEL_24;
  v11 = 0;
  if ( !(unsigned int)Feature_HvciScanHvptHandling__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_7;
  v12 = v19;
  if ( (v19 & 0x40) != 0 )
  {
    if ( (VslGetNestedPageProtectionFlags(0LL) & 0x4000) != 0 )
    {
      v12 = 64;
      v11 = -1073740949;
      v19 = 64;
      goto LABEL_8;
    }
LABEL_7:
    v12 = v19;
  }
LABEL_8:
  if ( (v12 & 0x20) != 0 && KeIsKernelCetEnabled() )
  {
    v12 = 32;
    v11 = -1073740949;
    v19 = 32;
  }
  if ( (v12 & 0x10) != 0 )
  {
    if ( PiIsHVCIEnabled() )
    {
      v12 = 16;
      v11 = -1073740949;
      v19 = 16;
    }
    else
    {
      v12 = v19;
    }
  }
  if ( (v12 & 0x70) == 0 )
  {
    if ( (v12 & 4) == 0
      || (IsProcessorFeaturePresent = ExIsProcessorFeaturePresent(9u), v12 = v19, IsProcessorFeaturePresent) )
    {
      v11 = ((v12 & 1) != 0) - 1073740949;
    }
  }
  if ( (v12 & 8) != 0
    && (PnpSetupInProgress || PnpSetupOOBEInProgress || PnpSetupUpgradeInProgress || PnpSetupRollbackActiveInProgress) )
  {
LABEL_24:
    v11 = -1073740949;
  }
  if ( !(unsigned int)SdbReadEntryInformation(a1, v10, (__int64)v24) && (PiLoggedErrorEventsMask & 0x100) == 0 )
  {
    PiLoggedErrorEventsMask |= 0x100u;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"READ DRIVER ID FAILED");
    PnpLogEvent((const void **)&DestinationString, 0LL, -1073740947, 0LL, 0);
  }
  if ( v11 == -1073740949 || v11 == -1073740948 )
  {
    v14 = wcsrchr(*(const wchar_t **)(a2 + 8), 0x5Cu);
    v15 = v14 ? v14 + 1 : *(const WCHAR **)(a2 + 8);
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, v15);
    PnpLogEvent((const void **)&DestinationString, 0LL, v11, v24, 0x10u);
    PnpTraceDriverBlocked();
    if ( v11 == -1073740949 )
      goto LABEL_38;
  }
  if ( v11 == -1073740948 || !v11 )
    goto LABEL_38;
  return v11;
}
