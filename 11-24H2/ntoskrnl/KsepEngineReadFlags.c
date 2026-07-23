/*
 * XREFs of KsepEngineReadFlags @ 0x140C2E280
 * Callers:
 *     KsepEngineInitialize @ 0x140C2D410 (KsepEngineInitialize.c)
 * Callees:
 *     KsepLogInfo @ 0x140488AF8 (KsepLogInfo.c)
 *     KsepLogError @ 0x140488B28 (KsepLogError.c)
 *     KsepDebugPrint @ 0x1404CC7D8 (KsepDebugPrint.c)
 *     RtlAssert @ 0x1405E6890 (RtlAssert.c)
 *     KsepRegistryQueryDWORD @ 0x14073E998 (KsepRegistryQueryDWORD.c)
 *     KsepRegistryCloseKey @ 0x140942610 (KsepRegistryCloseKey.c)
 *     KsepRegistryOpenKey @ 0x14094390C (KsepRegistryOpenKey.c)
 */

__int64 __fastcall KsepEngineReadFlags(unsigned int *a1)
{
  unsigned int v1; // esi
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rax
  unsigned int v6; // edi
  __int64 v7; // rax
  NTSTATUS v8; // eax
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rax
  int v14; // [rsp+60h] [rbp+38h] BYREF
  int v15; // [rsp+68h] [rbp+40h] BYREF
  int v16; // [rsp+70h] [rbp+48h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+50h] BYREF

  KeyHandle = 0LL;
  v16 = 0;
  v1 = 0;
  if ( !a1 )
  {
    v3 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    dword_140F0F684[2 * v3] = -1073740768;
    KsepHistoryErrors[2 * v3] = 262244;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("Engine != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x64u, 0LL);
  }
  *a1 = 0;
  v4 = KsepRegistryOpenKey(
         (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Policies\\Microsoft\\Compatibility",
         0LL,
         &KeyHandle);
  if ( v4 )
  {
    if ( v4 == -1073741772 )
      a1[2] |= 2u;
  }
  else
  {
    v14 = 0;
    v15 = 0;
    if ( !KsepRegistryQueryDWORD(KeyHandle, L"DisableDeviceFlags", &v14) && v14 == 1 )
    {
      a1[2] |= 4u;
      v1 = 2;
    }
    if ( !KsepRegistryQueryDWORD(KeyHandle, L"DisableDriverShims", &v15) && v15 == 1 )
    {
      v1 |= 1u;
      a1[2] |= 8u;
    }
    v5 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v5]) = 0;
    LODWORD(KsepHistoryMessages[v5]) = 262275;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(0LL, (int)"KSE: Engine has group policy flags: %08x\n", v1);
    KsepLogInfo(0LL, (__int64)"KSE: Engine has group policy flags: %08x\n", v1);
    KsepRegistryCloseKey(KeyHandle);
    KeyHandle = 0LL;
  }
  v6 = KsepRegistryOpenKey(
         (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility",
         0LL,
         &KeyHandle);
  if ( v6 == -1073741772 )
  {
    a1[2] |= 1u;
LABEL_18:
    v6 = 0;
    goto LABEL_35;
  }
  if ( (v6 & 0x80000000) == 0 )
  {
    v8 = KsepRegistryQueryDWORD(KeyHandle, L"DisableFlags", &v16);
    v6 = v8;
    if ( v8 == -1073741772 )
      goto LABEL_18;
    if ( v8 >= 0 )
    {
      v10 = v16 & 3;
      *a1 = v10;
      if ( (v10 & 1) != 0 )
        a1[2] |= 0x20u;
      if ( (v10 & 2) != 0 )
        a1[2] |= 0x10u;
      v11 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
      HIDWORD(KsepHistoryMessages[v11]) = 0;
      LODWORD(KsepHistoryMessages[v11]) = 262343;
      if ( (KsepDebugFlag & 1) != 0 )
        KsepDebugPrint(0LL, (int)"KSE: Engine initialized with registry flags: %08x\n", *a1);
      KsepLogInfo(0LL, (__int64)"KSE: Engine initialized with registry flags: %08x\n", *a1);
    }
    else
    {
      v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      dword_140F0F684[2 * v9] = v6;
      KsepHistoryErrors[2 * v9] = 262326;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(0LL, (int)"KSE: Error reading compatibility value [%ws]: status: %08x\n", L"DisableFlags", v6);
      KsepLogError(0LL, (__int64)"KSE: Error reading compatibility value [%ws]: status: %08x\n", L"DisableFlags", v6);
    }
  }
  else
  {
    v7 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    dword_140F0F684[2 * v7] = v6;
    KsepHistoryErrors[2 * v7] = 262304;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(0LL, (int)"KSE: Error reading compatibility key: status: %08x\n", v6);
    KsepLogError(0LL, (__int64)"KSE: Error reading compatibility key: status: %08x\n", v6);
  }
LABEL_35:
  *a1 |= v1;
  v12 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
  HIDWORD(KsepHistoryMessages[v12]) = 0;
  LODWORD(KsepHistoryMessages[v12]) = 262354;
  if ( (KsepDebugFlag & 1) != 0 )
    KsepDebugPrint(0LL, (int)"KSE: Engine flags (after registry/group policy): %08x\n", *a1);
  KsepLogInfo(0LL, (__int64)"KSE: Engine flags (after registry/group policy): %08x\n", *a1);
  KsepRegistryCloseKey(KeyHandle);
  return v6;
}
