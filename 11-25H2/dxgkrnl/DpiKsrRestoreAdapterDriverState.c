/*
 * XREFs of DpiKsrRestoreAdapterDriverState @ 0x14024A310
 * Callers:
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ??1DXGK_ENUMERATE_KSR_MEMORY_CONTEXT@@QEAA@XZ @ 0x140248E58 (--1DXGK_ENUMERATE_KSR_MEMORY_CONTEXT@@QEAA@XZ.c)
 *     ?DpiClaimPersistedMemoryBlock@@YAJPEAU_FDO_CONTEXT@@_KPEBU_GUID@@@Z @ 0x140248F80 (-DpiClaimPersistedMemoryBlock@@YAJPEAU_FDO_CONTEXT@@_KPEBU_GUID@@@Z.c)
 *     DpiKsrIsSoftBoot @ 0x14024A150 (DpiKsrIsSoftBoot.c)
 */

__int64 __fastcall DpiKsrRestoreAdapterDriverState(struct _FDO_CONTEXT *a1)
{
  int v3; // edi
  __int64 i; // rbx
  __int64 v5; // rdx
  char *v6; // r14
  __int64 j; // rbx
  __int64 v8; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v9[256]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE *v10; // [rsp+130h] [rbp+28h]
  __int64 v11; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v12[256]; // [rsp+140h] [rbp+38h] BYREF
  _BYTE *v13; // [rsp+240h] [rbp+138h]

  if ( !DpiKsrIsSoftBoot() )
    return 0LL;
  v11 = 0x2000000000LL;
  v13 = v12;
  memset(v12, 0, sizeof(v12));
  v8 = 0x2000000000LL;
  v10 = v9;
  memset(v9, 0, sizeof(v9));
  KsrEnumeratePersistedMemory((char *)a1 + 4928, DpiKsrEnumeratePersistedMemoryCallback, &v11);
  v3 = 0;
  for ( i = 0LL; (unsigned int)i < (unsigned int)v11; i = (unsigned int)(i + 1) )
  {
    v3 = DpiClaimPersistedMemoryBlock(a1, *(_QWORD *)&v13[8 * i], (const struct _GUID *)a1 + 308);
    if ( v3 < 0 )
    {
      WdLogSingleEntry1(2LL, -1073741801LL);
      WdLogGlobalForLineNumber = 885;
      v6 = (char *)a1 + 4944;
LABEL_13:
      LOBYTE(v5) = 1;
      KsrFreePersistedMemory((char *)a1 + 4928, v5);
      KsrFreePersistedMemory(v6, 0LL);
      goto LABEL_14;
    }
  }
  v6 = (char *)a1 + 4944;
  KsrEnumeratePersistedMemory((char *)a1 + 4944, DpiKsrEnumeratePersistedMemoryCallback, &v8);
  for ( j = 0LL; (unsigned int)j < (unsigned int)v8; j = (unsigned int)(j + 1) )
  {
    v3 = DpiClaimPersistedMemoryBlock(a1, *(_QWORD *)&v10[8 * j], (const struct _GUID *)a1 + 309);
    if ( v3 < 0 )
    {
      WdLogSingleEntry1(2LL, -1073741801LL);
      WdLogGlobalForLineNumber = 906;
      goto LABEL_13;
    }
  }
LABEL_14:
  DXGK_ENUMERATE_KSR_MEMORY_CONTEXT::~DXGK_ENUMERATE_KSR_MEMORY_CONTEXT((PVOID *)&v8);
  DXGK_ENUMERATE_KSR_MEMORY_CONTEXT::~DXGK_ENUMERATE_KSR_MEMORY_CONTEXT((PVOID *)&v11);
  return (unsigned int)v3;
}
