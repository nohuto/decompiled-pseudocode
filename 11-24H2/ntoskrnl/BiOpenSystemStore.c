/*
 * XREFs of BiOpenSystemStore @ 0x1409C0FC0
 * Callers:
 *     BcdOpenSystemStore @ 0x140811DB0 (BcdOpenSystemStore.c)
 *     BcdOpenStore @ 0x1409C2038 (BcdOpenStore.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x1404A7F74 (BiSetFirmwareModified.c)
 *     BiWasFirmwareModified @ 0x1404BFC0C (BiWasFirmwareModified.c)
 *     _wcsnicmp @ 0x1404FE4F0 (_wcsnicmp.c)
 *     wcstoul @ 0x1405007D0 (wcstoul.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     BcdForciblyUnloadStore @ 0x140811C84 (BcdForciblyUnloadStore.c)
 *     BiCloseKey @ 0x14085CB80 (BiCloseKey.c)
 *     BiOpenKey @ 0x14085D808 (BiOpenKey.c)
 *     BiGetFirmwareType @ 0x14085DE80 (BiGetFirmwareType.c)
 *     BiIsSystemStore @ 0x14085E2C0 (BiIsSystemStore.c)
 *     BiUnloadHiveByHandle @ 0x14085EDB0 (BiUnloadHiveByHandle.c)
 *     BiCloseStore @ 0x14085EF8C (BiCloseStore.c)
 *     BiLoadSystemStore @ 0x14085F450 (BiLoadSystemStore.c)
 *     BiLogMessage @ 0x1409BE7F8 (BiLogMessage.c)
 *     BiEnumerateSubKeys @ 0x1409BFD40 (BiEnumerateSubKeys.c)
 *     BiOpenKeyNonBcd @ 0x1409C12C4 (BiOpenKeyNonBcd.c)
 *     BiBindEfiNamespaceObjects @ 0x1409C1ADC (BiBindEfiNamespaceObjects.c)
 *     BiIsWinPEBoot @ 0x1409C1B7C (BiIsWinPEBoot.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  const WCHAR **v11; // r14
  __int64 i; // rsi
  bool v13; // si
  int v14; // eax
  char v15; // r13
  int v16; // eax
  HANDLE v17; // r14
  bool v19; // cf
  int v20; // eax
  PVOID v21; // r15
  const wchar_t **v22; // rbx
  __int64 v23; // r12
  int v24; // eax
  PVOID v25; // r15
  const wchar_t **v26; // rbx
  __int64 v27; // r12
  int v28; // eax
  HANDLE v29; // rsi
  HANDLE v30; // rsi
  bool IsSystemStore; // al
  int v32; // eax
  int v33; // eax
  ULONG v34; // [rsp+20h] [rbp-48h] BYREF
  __int64 v35; // [rsp+28h] [rbp-40h] BYREF
  HANDLE v36; // [rsp+30h] [rbp-38h] BYREF
  PVOID v37; // [rsp+38h] [rbp-30h] BYREF
  HANDLE v38; // [rsp+40h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-20h] BYREF
  PVOID P[3]; // [rsp+50h] [rbp-18h] BYREF
  ULONG v43; // [rsp+C0h] [rbp+58h] BYREF
  int v44; // [rsp+C8h] [rbp+60h]

  *a1 = 0LL;
  v2 = 0LL;
  v43 = 0;
  Handle = 0LL;
  P[0] = 0LL;
  v3 = a2;
  v35 = 0LL;
  v44 = 0;
  BiLogMessage();
  v38 = 0LL;
  v34 = 0;
  v37 = 0LL;
  v36 = 0LL;
  IsWinPEBoot = BiIsWinPEBoot();
  if ( (v3 & 1) != 0 )
  {
    v5 = BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 983103LL, &v36);
    v6 = v36;
    if ( v5 >= 0 )
    {
      v20 = BiEnumerateSubKeys(v36, &v37, &v34);
      v21 = v37;
      if ( v20 >= 0 && v34 )
      {
        v22 = (const wchar_t **)v37;
        v23 = v34;
        do
        {
          if ( !wcsnicmp(*v22, L"BCD", 3uLL)
            && wcstoul(*v22 + 3, 0LL, 10) != -1
            && (int)BiOpenKey((__int64)v6, *v22, 0x20019u, &v38) >= 0 )
          {
            v29 = v38;
            if ( BiIsSystemStore((__int64)v38) )
              BcdForciblyUnloadStore((__int64)v29);
            else
              BiUnloadHiveByHandle(v29, 0);
          }
          ++v22;
          --v23;
        }
        while ( v23 );
      }
      if ( v21 )
        ExFreePoolWithTag(v21, 0x4B444342u);
    }
    if ( v6 )
      ZwClose(v6);
  }
  else
  {
    v15 = IsWinPEBoot;
    v16 = BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 983103LL, &v38);
    v17 = v38;
    if ( v16 >= 0 )
    {
      v24 = BiEnumerateSubKeys(v38, &v37, &v34);
      v25 = v37;
      if ( v24 >= 0 && v34 )
      {
        v26 = (const wchar_t **)v37;
        v27 = v34;
        do
        {
          if ( !wcsnicmp(*v26, L"BCD", 3uLL)
            && wcstoul(*v26 + 3, 0LL, 10) != -1
            && (int)BiOpenKey((__int64)v17, *v26, 0x20019u, &v36) >= 0 )
          {
            v30 = v36;
            IsSystemStore = BiIsSystemStore((__int64)v36);
            if ( v15 || !IsSystemStore )
              BiUnloadHiveByHandle(v30, 0);
            else
              BiCloseKey(v30);
          }
          ++v26;
          --v27;
        }
        while ( v27 );
      }
      if ( v25 )
        ExFreePoolWithTag(v25, 0x4B444342u);
    }
    if ( v17 )
      ZwClose(v17);
    v3 = a2;
  }
  v7 = BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 983103LL, &Handle);
  v8 = Handle;
  v9 = v7;
  if ( v7 >= 0 )
  {
    v10 = BiEnumerateSubKeys(Handle, P, &v43);
    v11 = (const WCHAR **)P[0];
    v9 = v10;
    if ( v10 < 0 )
      goto LABEL_24;
    v9 = -1073741275;
    for ( i = 0LL; (unsigned int)i < v43; i = (unsigned int)(i + 1) )
    {
      if ( !wcsnicmp(v11[i], L"BCD", 3uLL) && wcstoul(v11[i] + 3, 0LL, 10) != -1 )
      {
        BiLogMessage();
        v32 = BiOpenKey((__int64)v8, v11[i], 0x20019u, &v35);
        v2 = v35;
        v9 = v32;
        if ( v32 >= 0 )
        {
          if ( BiIsSystemStore(v35) )
          {
            BiLogMessage();
            v9 = 0;
            break;
          }
          BiCloseKey((void *)v2);
        }
      }
    }
    if ( (_DWORD)i == v43 )
    {
      BiLogMessage();
      v35 = 0LL;
      if ( (v3 & 4) != 0 )
      {
        BiLogMessage();
        v9 = -1073741275;
LABEL_24:
        if ( v11 )
          ExFreePoolWithTag(v11, 0x4B444342u);
        goto LABEL_26;
      }
      v33 = BiLoadSystemStore(&v35);
      v2 = v35;
      v9 = v33;
      if ( v33 < 0 )
      {
LABEL_31:
        if ( v2 )
        {
          v19 = v44 != 0;
          v44 = -v44;
          BiCloseStore(v2, v19 ? 2 : 0);
        }
        goto LABEL_24;
      }
      v44 = 1;
    }
    if ( (v3 & 2) != 0 )
    {
      v2 |= 2uLL;
      goto LABEL_23;
    }
    BiLogMessage();
    v13 = BiWasFirmwareModified(v2);
    v14 = BiGetFirmwareType(0LL) - 1;
    if ( !v14 )
      goto LABEL_15;
    v28 = v14 - 1;
    if ( v28 )
    {
      if ( v28 == 1 )
      {
LABEL_15:
        v9 = 0;
        goto LABEL_16;
      }
      v9 = -1073741637;
    }
    else
    {
      v9 = BiBindEfiNamespaceObjects(v2);
      if ( v9 >= 0 )
      {
LABEL_16:
        if ( !v13 )
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
