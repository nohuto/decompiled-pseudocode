/*
 * XREFs of DrvDbDeleteObjectSubKey @ 0x140821D0C
 * Callers:
 *     DrvDbDeleteObjectRegKey @ 0x140821B90 (DrvDbDeleteObjectRegKey.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140412020 (RtlStringCchCopyExW.c)
 *     wcschr @ 0x1404FD650 (wcschr.c)
 *     wcsrchr @ 0x1404FDA40 (wcsrchr.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _PnpCtxRegDeleteKey @ 0x1406F6960 (_PnpCtxRegDeleteKey.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegDeleteValue @ 0x14097AAB4 (_PnpCtxRegDeleteValue.c)
 *     _PnpDeletePropertyWorker @ 0x14097C4B0 (_PnpDeletePropertyWorker.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x14097D12C (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpCtxRegEnumValue @ 0x14097E5DC (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x14097EF98 (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxRegDeleteTree @ 0x140A7F11C (_PnpCtxRegDeleteTree.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbDeleteObjectSubKey(__int64 *a1, __int64 a2, const wchar_t *a3, unsigned int a4)
{
  unsigned int v4; // r15d
  __int64 v6; // rcx
  int v8; // r13d
  void *Pool2; // rdi
  unsigned int v10; // esi
  int v11; // eax
  int InfoKey; // ebx
  int GenericStorePropertyKeys; // eax
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // esi
  int v17; // eax
  __int64 v18; // rbx
  size_t v19; // rbx
  wchar_t *v20; // rax
  wchar_t *v21; // rsi
  HANDLE i; // rax
  int v23; // eax
  int v24; // ecx
  wchar_t *v25; // rax
  bool v26; // zf
  int v27; // eax
  int v28; // ecx
  unsigned int v29; // r14d
  __int64 v30; // rcx
  __int64 v31; // rcx
  int dwFlags; // [rsp+28h] [rbp-38h]
  unsigned int v34; // [rsp+40h] [rbp-20h] BYREF
  int v35; // [rsp+48h] [rbp-18h] BYREF
  int v36; // [rsp+4Ch] [rbp-14h] BYREF
  HANDLE Handle[2]; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v38; // [rsp+A8h] [rbp+48h] BYREF

  v4 = 0;
  v6 = *a1;
  Handle[0] = 0LL;
  v8 = a2;
  v34 = 0;
  Pool2 = 0LL;
  v35 = 0;
  v10 = 0;
  v38 = 0;
  v36 = 0;
  if ( a4 <= 1 )
  {
    v11 = PnpCtxRegDeleteTree(v6, a2, a3);
    goto LABEL_3;
  }
  v11 = PnpCtxRegOpenKey(v6, a2, (_DWORD)a3, 0, 196639, (__int64)Handle);
  if ( v11 < 0 )
  {
LABEL_3:
    InfoKey = 0;
    if ( v11 != -1073741444 )
      InfoKey = v11;
    goto LABEL_65;
  }
  while ( 1 )
  {
    GenericStorePropertyKeys = PnpGetGenericStorePropertyKeys(*a1, Handle[0], 0, 0, (__int64)Pool2, v10, (__int64)&v34);
    InfoKey = GenericStorePropertyKeys;
    if ( GenericStorePropertyKeys != -1073741789 )
      break;
    if ( v34 <= v10 )
    {
      InfoKey = -1073741595;
      goto LABEL_63;
    }
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    v10 = v34;
    Pool2 = (void *)ExAllocatePool2(0x100uLL, 20LL * v34, 0x42444450u);
    if ( !Pool2 )
    {
      InfoKey = -1073741801;
      goto LABEL_65;
    }
  }
  v14 = GenericStorePropertyKeys;
  if ( GenericStorePropertyKeys == -1073741275 || GenericStorePropertyKeys >= 0 )
  {
    if ( GenericStorePropertyKeys != -1073741275 )
      v4 = v10;
    v15 = 0;
    v16 = 0;
    if ( InfoKey != -1073741275 )
      v15 = v14;
    InfoKey = v15;
    if ( v4 )
    {
      do
      {
        v17 = PnpDeletePropertyWorker(*a1, Handle[0], 0, (unsigned int)Pool2 + 20 * v16, 0, dwFlags, 0);
        InfoKey = v17;
        if ( v17 == -1073741275 || v17 == -1073741790 )
        {
          InfoKey = 0;
        }
        else if ( v17 < 0 )
        {
          goto LABEL_63;
        }
        ++v16;
      }
      while ( v16 < v4 );
    }
    if ( InfoKey >= 0 )
    {
      if ( wcschr(a3, 0x5Cu) )
      {
        v18 = -1LL;
        do
          ++v18;
        while ( a3[v18] );
        v19 = v18 + 1;
        v20 = (wchar_t *)ExAllocatePool2(0x100uLL, 2 * v19, 0x42444450u);
        v21 = v20;
        if ( v20 )
        {
          RtlStringCchCopyExW(v20, v19, a3, 0LL, 0LL, 0x900u);
          for ( i = Handle[0]; ; i = 0LL )
          {
            if ( !i )
            {
              v23 = PnpCtxRegOpenKey(*a1, v8, (_DWORD)v21, 0, 196639, (__int64)Handle);
              if ( v23 < 0 )
              {
                InfoKey = 0;
                if ( v23 != -1073741444 )
                  InfoKey = v23;
                goto LABEL_62;
              }
              InfoKey = PnpCtxRegQueryInfoKey(v24, Handle[0], (unsigned int)&v35, 0, (__int64)&v38, 0LL, 0LL);
              if ( InfoKey < 0 || v35 || v38 )
                goto LABEL_62;
              i = Handle[0];
            }
            InfoKey = PnpCtxRegDeleteKey(*a1, (__int64)i, 0LL);
            if ( InfoKey == -1073741444 )
            {
              InfoKey = 0;
            }
            else if ( InfoKey < 0 )
            {
              v26 = InfoKey == -1073741535;
              goto LABEL_60;
            }
            v25 = wcsrchr(v21, 0x5Cu);
            if ( !v25 )
              goto LABEL_62;
            *v25 = 0;
            ZwClose(Handle[0]);
            Handle[0] = 0LL;
          }
        }
LABEL_32:
        InfoKey = -1073741801;
        goto LABEL_63;
      }
      v27 = PnpCtxRegDeleteKey(*a1, (__int64)Handle[0], 0LL);
      InfoKey = v27;
      if ( v27 == -1073741444 )
      {
        InfoKey = 0;
      }
      else if ( v27 == -1073741535 )
      {
        InfoKey = PnpCtxRegQueryInfoKey(v28, Handle[0], 0, 0, (__int64)&v38, (__int64)&v36, 0LL);
        if ( InfoKey >= 0 )
        {
          v29 = v36 + 1;
          if ( v38 )
          {
            v21 = (wchar_t *)ExAllocatePool2(0x100uLL, 2LL * v29, 0x42444450u);
            if ( v21 )
            {
              while ( 1 )
              {
                v38 = v29;
                InfoKey = PnpCtxRegEnumValue(v30, Handle[0], 0LL, v21, &v38, 0LL, 0LL, 0LL);
                if ( InfoKey < 0 )
                  break;
                InfoKey = PnpCtxRegDeleteValue(v31, Handle[0], v21);
                if ( ((InfoKey + 0x80000000) & 0x80000000) == 0 && InfoKey != -1073741772 )
                  goto LABEL_62;
              }
              v26 = InfoKey == -2147483622;
LABEL_60:
              if ( v26 )
                InfoKey = 0;
LABEL_62:
              ExFreePoolWithTag(v21, 0);
              goto LABEL_63;
            }
            goto LABEL_32;
          }
        }
      }
    }
  }
LABEL_63:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
LABEL_65:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)InfoKey;
}
