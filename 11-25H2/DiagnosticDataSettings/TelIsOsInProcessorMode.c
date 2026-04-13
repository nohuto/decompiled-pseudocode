/*
 * XREFs of TelIsOsInProcessorMode @ 0x1800044C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180001460 (__security_check_cookie.c)
 *     memset_0 @ 0x180001F2A (memset_0.c)
 *     ?CloseHeapPointer@@YAXPEAX@Z @ 0x1800029C4 (-CloseHeapPointer@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000326C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180003290 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?TelpGetTelemetryClientRegPath@@YAPEAGXZ @ 0x180003468 (-TelpGetTelemetryClientRegPath@@YAPEAGXZ.c)
 *     TelpIsDeviceAzureADJoined @ 0x1800035E4 (TelpIsDeviceAzureADJoined.c)
 *     TelIsProcessorModeAllowed @ 0x1800046D0 (TelIsProcessorModeAllowed.c)
 */

__int64 __fastcall TelIsOsInProcessorMode(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int IsDeviceAzureADJoined; // ebx
  __int64 v5; // rdx
  __int64 v7; // rcx
  unsigned __int16 *TelemetryClientRegPath; // rbx
  __int64 v9; // r8
  WCHAR *v10; // rcx
  __int64 v11; // rdx
  WCHAR v12; // ax
  WCHAR *v13; // rax
  signed int v14; // edi
  __int64 v15; // rdx
  int v16; // eax
  unsigned __int64 v17; // r9
  LSTATUS ValueW; // eax
  _BYTE v19[4]; // [rsp+40h] [rbp-C0h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-BCh] BYREF
  __int64 pvData; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR SubKey[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  if ( !a1 )
  {
    IsDeviceAzureADJoined = -2147024809;
    v5 = 1642LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(retaddr, (void *)v5, a3, (const char *)IsDeviceAzureADJoined);
    return IsDeviceAzureADJoined;
  }
  if ( !(unsigned int)TelIsProcessorModeAllowed() )
  {
    IsDeviceAzureADJoined = 0;
    goto LABEL_10;
  }
  v19[0] = 0;
  IsDeviceAzureADJoined = TelpIsDeviceAzureADJoined(v19);
  if ( (IsDeviceAzureADJoined & 0x80000000) != 0 )
  {
    v5 = 1655LL;
    goto LABEL_3;
  }
  if ( !v19[0] )
  {
LABEL_10:
    *a1 = 0;
    return IsDeviceAzureADJoined;
  }
  *a1 = 1;
  pvData = 1LL;
  memset_0(SubKey, 0, 0x208uLL);
  TelemetryClientRegPath = TelpGetTelemetryClientRegPath(v7);
  if ( !TelemetryClientRegPath )
  {
    IsDeviceAzureADJoined = -2147467259;
    v5 = 1674LL;
    goto LABEL_3;
  }
  v9 = (char *)TelemetryClientRegPath - (char *)SubKey;
  v10 = SubKey;
  v11 = 260LL;
  do
  {
    if ( v11 == -2147483386 )
      break;
    v12 = *(WCHAR *)((char *)v10 + v9);
    if ( !v12 )
      break;
    *v10++ = v12;
    --v11;
  }
  while ( v11 );
  v13 = v10 - 1;
  if ( v11 )
    v13 = v10;
  *v13 = 0;
  v14 = v11 == 0 ? 0x8007007A : 0;
  if ( !v11 )
  {
    v15 = 1677LL;
LABEL_30:
    v17 = (unsigned int)v14;
    goto LABEL_31;
  }
  v16 = StringCchCatW(SubKey, v11, (char *)L"\\RegionalSettings");
  v14 = v16;
  if ( v16 < 0 )
  {
    v17 = (unsigned int)v16;
    v15 = 1678LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(retaddr, (void *)v15, v9, (const char *)v17);
    goto LABEL_32;
  }
  pcbData = 8;
  ValueW = RegGetValueW(HKEY_LOCAL_MACHINE, SubKey, L"IsProcessorMode", 0x10040u, 0LL, &pvData, &pcbData);
  v14 = ValueW;
  if ( ValueW > 0 )
    v14 = (unsigned __int16)ValueW | 0x80070000;
  if ( v14 >= 0 && pvData == 1 )
  {
    *a1 = 1;
  }
  else
  {
    *a1 = 0;
    if ( v14 < 0 )
    {
      v15 = 1687LL;
      goto LABEL_30;
    }
  }
LABEL_32:
  CloseHeapPointer(TelemetryClientRegPath);
  return (unsigned int)v14;
}
