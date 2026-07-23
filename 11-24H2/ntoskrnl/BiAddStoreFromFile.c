/*
 * XREFs of BiAddStoreFromFile @ 0x14085A128
 * Callers:
 *     BiLoadSystemStore @ 0x140A575F0 (BiLoadSystemStore.c)
 * Callees:
 *     swprintf_s @ 0x140500710 (swprintf_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     BiDoesHiveKeyExist @ 0x140814F40 (BiDoesHiveKeyExist.c)
 *     BiCloseKey @ 0x1408588F0 (BiCloseKey.c)
 *     BiOpenKey @ 0x140859578 (BiOpenKey.c)
 *     BiCreateKey @ 0x1408598CC (BiCreateKey.c)
 *     BiSetRegistryValue @ 0x140859C9C (BiSetRegistryValue.c)
 *     BiLogMessage @ 0x1409A4E48 (BiLogMessage.c)
 *     BiLoadHive @ 0x1409A87E0 (BiLoadHive.c)
 *     BiUnloadHiveByName @ 0x140A81BF0 (BiUnloadHiveByName.c)
 */

__int64 __fastcall BiAddStoreFromFile(__int64 a1, char a2, _QWORD *a3)
{
  unsigned int v6; // r14d
  unsigned int i; // esi
  unsigned int Hive; // ebx
  int v9; // eax
  void *v10; // rsi
  int v11; // eax
  int v13; // eax
  const wchar_t *v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // [rsp+20h] [rbp-50h]
  __int64 v18; // [rsp+20h] [rbp-50h]
  void *v19; // [rsp+38h] [rbp-38h] BYREF
  void *v20; // [rsp+40h] [rbp-30h] BYREF
  wchar_t Dst[12]; // [rsp+48h] [rbp-28h] BYREF

  v20 = 0LL;
  v19 = 0LL;
  v6 = 0;
  if ( (a2 & 0x20) != 0 )
  {
LABEL_24:
    BiLogMessage(4LL, L"Failed to find a key to load store %s. Last attempted key: %ws", a1 + 12, Dst);
    return (unsigned int)-1073741823;
  }
  for ( i = 0; ; ++i )
  {
    if ( i > 0x5F5E0FF )
      goto LABEL_24;
    swprintf_s(Dst, 0xCuLL, L"BCD%08d", i);
    Hive = BiLoadHive(Dst);
    if ( (Hive & 0x80000000) == 0 )
    {
      BiLogMessage(2LL, L"Loaded hive at BCD%08d", i);
      if ( (a2 & 1) == 0 )
      {
LABEL_6:
        v9 = BiOpenKey(0LL, L"Description", 0x2001Fu, &v20);
        v10 = v20;
        Hive = v9;
        if ( v9 < 0 )
        {
          v15 = 4LL;
          if ( v9 == -1073741772 )
          {
            BiLogMessage(4LL, L"A valid store must have a description key.");
            Hive = -1073741476;
          }
          LODWORD(v17) = Hive;
          BiLogMessage(
            v15,
            L"Failed to open description key for store. Store: %s StoreKey: %ws Status: %x",
            a1 + 12,
            Dst,
            v17);
        }
        else
        {
          v11 = BiSetRegistryValue((__int64)v20, L"KeyName", 0LL, 1u, Dst, 0x18u);
          Hive = v11;
          if ( v11 >= 0 )
          {
            *a3 = 0LL;
          }
          else
          {
            LODWORD(v18) = v11;
            BiLogMessage(
              4LL,
              L"Failed to set description key value. Store: %s StoreKey: %ws Status: %x",
              a1 + 12,
              Dst,
              v18);
          }
        }
        if ( v10 )
          BiCloseKey(v10);
        goto LABEL_11;
      }
      v13 = BiCreateKey(0LL, L"Objects", 0x20019u, 0, &v19, 0LL);
      Hive = v13;
      if ( v13 >= 0 )
      {
        BiCloseKey(v19);
        v19 = 0LL;
        v13 = BiCreateKey(0LL, L"Description", 0x20019u, 0, &v19, 0LL);
        Hive = v13;
        if ( v13 >= 0 )
          goto LABEL_6;
        v14 = L"Failed to initialize description key for store. Store: %s StoreKey: %ws Status: %x";
      }
      else
      {
        v14 = L"Failed to initialize objects key for store. Store: %s StoreKey: %ws Status: %x";
      }
      LODWORD(v17) = v13;
      BiLogMessage(4LL, v14, a1 + 12, Dst, v17);
LABEL_11:
      if ( v19 )
        BiCloseKey(v19);
      return Hive;
    }
    if ( Hive != -1073741790 )
      break;
    ++v6;
    if ( BiDoesHiveKeyExist(Dst) )
      v6 = 0;
    if ( v6 >= 0xA )
    {
      BiLogMessage(4LL, L"Too many unexplained failures. File: %s Last status: %x", a1 + 12, 3221225506LL);
      return Hive;
    }
  }
  v16 = 2;
  if ( Hive != -1073741809 )
    v16 = 4;
  BiLogMessage(v16, L"Failed to load hive into key %ws from %s. Status: %x", Dst, a1 + 12, Hive);
  return Hive;
}
