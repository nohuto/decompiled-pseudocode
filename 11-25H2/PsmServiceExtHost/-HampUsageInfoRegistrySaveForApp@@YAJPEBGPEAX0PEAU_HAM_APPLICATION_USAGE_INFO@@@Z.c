/*
 * XREFs of ?HampUsageInfoRegistrySaveForApp@@YAJPEBGPEAX0PEAU_HAM_APPLICATION_USAGE_INFO@@@Z @ 0x18005AE30
 * Callers:
 *     ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800165E0 (-HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x180001008 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTe.c)
 *     ?HampSystemOpenAppRegistryKey@@YAJPEBGPEAXKPEAPEAUHKEY__@@@Z @ 0x18005B110 (-HampSystemOpenAppRegistryKey@@YAJPEBGPEAXKPEAPEAUHKEY__@@@Z.c)
 *     ?HampUsageInfoRegistryCommit@@YAJPEAU_HAM_APPLICATION_USAGE_INFO@@PEAUHKEY__@@@Z @ 0x18005B330 (-HampUsageInfoRegistryCommit@@YAJPEAU_HAM_APPLICATION_USAGE_INFO@@PEAUHKEY__@@@Z.c)
 */

__int64 __fastcall HampUsageInfoRegistrySaveForApp(
        const unsigned __int16 *a1,
        void *a2,
        const unsigned __int16 *a3,
        struct _HAM_APPLICATION_USAGE_INFO *a4)
{
  bool v5; // zf
  const wchar_t *v7; // r15
  signed int v8; // ebx
  LSTATUS v9; // eax
  LSTATUS v10; // eax
  LSTATUS v11; // eax
  int v12; // edi
  signed int v14; // [rsp+58h] [rbp+7h] BYREF
  HKEY v15; // [rsp+60h] [rbp+Fh] BYREF
  HKEY v16; // [rsp+68h] [rbp+17h] BYREF
  HKEY phkResult; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v18; // [rsp+78h] [rbp+27h] BYREF
  __int64 v19; // [rsp+80h] [rbp+2Fh] BYREF
  const wchar_t *v20; // [rsp+88h] [rbp+37h] BYREF
  HKEY hKey; // [rsp+D0h] [rbp+7Fh] BYREF

  v5 = *(_QWORD *)a4 == -1LL;
  v7 = a1;
  hKey = 0LL;
  phkResult = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  if ( v5 && *((_QWORD *)a4 + 1) == -1LL && *((_QWORD *)a4 + 2) == -1LL && *((_QWORD *)a4 + 3) == -1LL )
  {
    v12 = 4096;
    v8 = 0;
  }
  else
  {
    v8 = HampSystemOpenAppRegistryKey(a1, a2, (unsigned int)a3, &hKey);
    if ( v8 < 0 )
    {
      v12 = 0x2000;
    }
    else
    {
      v9 = RegCreateKeyExW(hKey, L"HAM\\AUI", 0, 0LL, 0, 4u, 0LL, &phkResult, 0LL);
      v8 = v9;
      if ( v9 > 0 )
        v8 = (unsigned __int16)v9 | 0xC0070000;
      if ( v8 < 0 )
      {
        v12 = 12288;
      }
      else
      {
        v10 = RegCreateKeyExW(phkResult, a3, 0, 0LL, 0, 4u, 0LL, &v16, 0LL);
        v8 = v10;
        if ( v10 > 0 )
          v8 = (unsigned __int16)v10 | 0xC0070000;
        if ( v8 < 0 )
        {
          v12 = 0x4000;
        }
        else
        {
          v11 = RegCreateKeyExW(v16, L"V1", 0, 0LL, 0, 4u, 0LL, &v15, 0LL);
          v8 = v11;
          if ( v11 > 0 )
            v8 = (unsigned __int16)v11 | 0xC0070000;
          if ( v8 < 0 )
          {
            v12 = 20480;
          }
          else
          {
            v8 = HampUsageInfoRegistryCommit(a4, v15);
            if ( v8 < 0 )
            {
              v12 = 24576;
            }
            else
            {
              v8 = 0;
              v12 = 0;
            }
          }
        }
      }
    }
    if ( v15 )
      RegCloseKey(v15);
    if ( v16 )
      RegCloseKey(v16);
    a1 = (const unsigned __int16 *)phkResult;
    if ( phkResult )
      RegCloseKey(phkResult);
    if ( hKey )
      RegCloseKey(hKey);
  }
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 0x40) != 0 && (qword_1800E72C8 & 0x40) == qword_1800E72C8 )
  {
    v18 = *((_QWORD *)a4 + 1);
    v19 = *(_QWORD *)a4;
    LODWORD(hKey) = v12;
    v14 = v8;
    v20 = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)a1,
      byte_1800D333F,
      (__int64)a3,
      (__int64)a4,
      &v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v14,
      (__int64)&hKey);
  }
  return (unsigned int)v8;
}
