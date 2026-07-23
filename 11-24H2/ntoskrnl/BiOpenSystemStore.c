/*
 * XREFs of BiOpenSystemStore @ 0x1409A7610
 * Callers:
 *     BcdOpenSystemStore @ 0x1408124F0 (BcdOpenSystemStore.c)
 *     BcdOpenStore @ 0x1409A8688 (BcdOpenStore.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x1404A29C4 (BiSetFirmwareModified.c)
 *     BiWasFirmwareModified @ 0x1404BB13C (BiWasFirmwareModified.c)
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 *     wcstoul @ 0x1404FE090 (wcstoul.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     BcdForciblyUnloadStore @ 0x1408123C4 (BcdForciblyUnloadStore.c)
 *     BiCloseKey @ 0x1408588F0 (BiCloseKey.c)
 *     BiOpenKey @ 0x140859578 (BiOpenKey.c)
 *     BiGetFirmwareType @ 0x140859BF0 (BiGetFirmwareType.c)
 *     BiIsSystemStore @ 0x14085A030 (BiIsSystemStore.c)
 *     BiLogMessage @ 0x1409A4E48 (BiLogMessage.c)
 *     BiEnumerateSubKeys @ 0x1409A6390 (BiEnumerateSubKeys.c)
 *     BiOpenKeyNonBcd @ 0x1409A7914 (BiOpenKeyNonBcd.c)
 *     BiBindEfiNamespaceObjects @ 0x1409A812C (BiBindEfiNamespaceObjects.c)
 *     BiIsWinPEBoot @ 0x1409A81CC (BiIsWinPEBoot.c)
 *     BiLoadSystemStore @ 0x140A575F0 (BiLoadSystemStore.c)
 *     BiCloseStore @ 0x140A81ABC (BiCloseStore.c)
 *     BiUnloadHiveByHandle @ 0x140A81B58 (BiUnloadHiveByHandle.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiOpenSystemStore(__int64 *a1, char a2)
{
  __int64 v2; // rdi
  char v3; // r13
  char IsWinPEBoot; // al
  int v5; // eax
  HANDLE v6; // r14
  int v7; // eax
  HANDLE v8; // r12
  int v9; // ebx
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  const WCHAR **v13; // r14
  __int64 i; // rsi
  bool v15; // si
  int v16; // eax
  char v17; // r13
  int v18; // eax
  HANDLE v19; // r14
  bool v21; // cf
  int v22; // eax
  PVOID v23; // r15
  const wchar_t **v24; // rbx
  __int64 v25; // r12
  int v26; // eax
  PVOID v27; // r15
  const wchar_t **v28; // rbx
  __int64 v29; // r12
  int v30; // eax
  HANDLE v31; // rsi
  HANDLE v32; // rsi
  bool IsSystemStore; // al
  int v34; // eax
  int v35; // eax
  ULONG v36; // [rsp+20h] [rbp-48h] BYREF
  __int64 v37; // [rsp+28h] [rbp-40h] BYREF
  HANDLE v38; // [rsp+30h] [rbp-38h] BYREF
  PVOID v39; // [rsp+38h] [rbp-30h] BYREF
  HANDLE BcdStoreHandle; // [rsp+40h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-20h] BYREF
  PVOID P[3]; // [rsp+50h] [rbp-18h] BYREF
  ULONG v45; // [rsp+C0h] [rbp+58h] BYREF
  int v46; // [rsp+C8h] [rbp+60h]

  *a1 = 0LL;
  v2 = 0LL;
  v45 = 0;
  Handle = 0LL;
  P[0] = 0LL;
  v3 = a2;
  v37 = 0LL;
  v46 = 0;
  BiLogMessage();
  BcdStoreHandle = 0LL;
  v36 = 0;
  v39 = 0LL;
  v38 = 0LL;
  IsWinPEBoot = BiIsWinPEBoot();
  if ( (v3 & 1) != 0 )
  {
    v5 = BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 983103LL, &v38);
    v6 = v38;
    if ( v5 >= 0 )
    {
      v22 = BiEnumerateSubKeys(v38, &v39, &v36);
      v23 = v39;
      if ( v22 >= 0 && v36 )
      {
        v24 = (const wchar_t **)v39;
        v25 = v36;
        do
        {
          if ( !wcsnicmp(*v24, L"BCD", 3uLL)
            && wcstoul(*v24 + 3, 0LL, 10) != -1
            && (int)BiOpenKey((__int64)v6, *v24, 0x20019u, &BcdStoreHandle) >= 0 )
          {
            v31 = BcdStoreHandle;
            if ( BiIsSystemStore((__int64)BcdStoreHandle) )
              BcdForciblyUnloadStore(v31);
            else
              BiUnloadHiveByHandle(v31, 0LL);
          }
          ++v24;
          --v25;
        }
        while ( v25 );
      }
      if ( v23 )
        ExFreePoolWithTag(v23, 0x4B444342u);
    }
    if ( v6 )
      ZwClose(v6);
  }
  else
  {
    v17 = IsWinPEBoot;
    v18 = BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 983103LL, &BcdStoreHandle);
    v19 = BcdStoreHandle;
    if ( v18 >= 0 )
    {
      v26 = BiEnumerateSubKeys(BcdStoreHandle, &v39, &v36);
      v27 = v39;
      if ( v26 >= 0 && v36 )
      {
        v28 = (const wchar_t **)v39;
        v29 = v36;
        do
        {
          if ( !wcsnicmp(*v28, L"BCD", 3uLL)
            && wcstoul(*v28 + 3, 0LL, 10) != -1
            && (int)BiOpenKey((__int64)v19, *v28, 0x20019u, &v38) >= 0 )
          {
            v32 = v38;
            IsSystemStore = BiIsSystemStore((__int64)v38);
            if ( v17 || !IsSystemStore )
              BiUnloadHiveByHandle(v32, 0LL);
            else
              BiCloseKey(v32);
          }
          ++v28;
          --v29;
        }
        while ( v29 );
      }
      if ( v27 )
        ExFreePoolWithTag(v27, 0x4B444342u);
    }
    if ( v19 )
      ZwClose(v19);
    v3 = a2;
  }
  v7 = BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 983103LL, &Handle);
  v8 = Handle;
  v9 = v7;
  if ( v7 >= 0 )
  {
    v10 = BiEnumerateSubKeys(Handle, P, &v45);
    v13 = (const WCHAR **)P[0];
    v9 = v10;
    if ( v10 < 0 )
      goto LABEL_24;
    v9 = -1073741275;
    for ( i = 0LL; (unsigned int)i < v45; i = (unsigned int)(i + 1) )
    {
      if ( !wcsnicmp(v13[i], L"BCD", 3uLL) && wcstoul(v13[i] + 3, 0LL, 10) != -1 )
      {
        BiLogMessage();
        v34 = BiOpenKey((__int64)v8, v13[i], 0x20019u, &v37);
        v2 = v37;
        v9 = v34;
        if ( v34 >= 0 )
        {
          if ( BiIsSystemStore(v37) )
          {
            BiLogMessage();
            v9 = 0;
            break;
          }
          BiCloseKey((void *)v2);
        }
      }
    }
    if ( (_DWORD)i == v45 )
    {
      BiLogMessage();
      v37 = 0LL;
      if ( (v3 & 4) != 0 )
      {
        BiLogMessage();
        v9 = -1073741275;
LABEL_24:
        if ( v13 )
          ExFreePoolWithTag(v13, 0x4B444342u);
        goto LABEL_26;
      }
      v35 = BiLoadSystemStore(&v37);
      v2 = v37;
      v9 = v35;
      if ( v35 < 0 )
      {
LABEL_31:
        if ( v2 )
        {
          v21 = v46 != 0;
          v46 = -v46;
          BiCloseStore(v2, v21 ? 2 : 0, v11, v12);
        }
        goto LABEL_24;
      }
      v46 = 1;
    }
    if ( (v3 & 2) != 0 )
    {
      v2 |= 2uLL;
      goto LABEL_23;
    }
    BiLogMessage();
    v15 = BiWasFirmwareModified(v2);
    v16 = BiGetFirmwareType(0LL) - 1;
    if ( !v16 )
      goto LABEL_15;
    v30 = v16 - 1;
    if ( v30 )
    {
      if ( v30 == 1 )
      {
LABEL_15:
        v9 = 0;
        goto LABEL_16;
      }
      v9 = -1073741637;
    }
    else
    {
      v9 = BiBindEfiNamespaceObjects((HANDLE)v2);
      v12 = (unsigned int)v9;
      if ( v9 >= 0 )
      {
LABEL_16:
        if ( !v15 )
          BiSetFirmwareModified(v2, 0);
LABEL_23:
        *a1 = v2;
        if ( v9 >= 0 )
          goto LABEL_24;
        goto LABEL_31;
      }
    }
    BiLogMessage();
    goto LABEL_31;
  }
LABEL_26:
  if ( v8 )
    ZwClose(v8);
  return (unsigned int)v9;
}
