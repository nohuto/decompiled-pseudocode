/*
 * XREFs of SmEtwLogStoreCorruption @ 0x14060BA08
 * Callers:
 *     ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@J@Z @ 0x14060A408 (-StDmPageError@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall SmEtwLogStoreCorruption(REGHANDLE *a1, __int64 a2, __int64 a3, void *a4, char a5, __int64 *a6)
{
  BOOLEAN result; // al
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  REGHANDLE v9; // rcx
  __int64 v10; // [rsp+40h] [rbp-69h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-61h] BYREF
  PHYSICAL_ADDRESS v12; // [rsp+50h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-49h] BYREF
  PVOID *p_BaseAddress; // [rsp+70h] [rbp-39h]
  int v15; // [rsp+78h] [rbp-31h]
  int v16; // [rsp+7Ch] [rbp-2Dh]
  PHYSICAL_ADDRESS *v17; // [rsp+80h] [rbp-29h]
  int v18; // [rsp+88h] [rbp-21h]
  int v19; // [rsp+8Ch] [rbp-1Dh]
  char *v20; // [rsp+90h] [rbp-19h]
  int v21; // [rsp+98h] [rbp-11h]
  int v22; // [rsp+9Ch] [rbp-Dh]
  __int64 *v23; // [rsp+A0h] [rbp-9h]
  int v24; // [rsp+A8h] [rbp-1h]
  int v25; // [rsp+ACh] [rbp+3h]
  char *v26; // [rsp+B0h] [rbp+7h]
  int v27; // [rsp+B8h] [rbp+Fh]
  int v28; // [rsp+BCh] [rbp+13h]
  char *v29; // [rsp+C0h] [rbp+17h]
  int v30; // [rsp+C8h] [rbp+1Fh]
  int v31; // [rsp+CCh] [rbp+23h]
  __int64 v32; // [rsp+110h] [rbp+67h] BYREF

  v32 = a3;
  BaseAddress = a4;
  v10 = *a6;
  result = EtwEventEnabled(*a1, (PCEVENT_DESCRIPTOR)StEventStoreCorruption);
  if ( result )
  {
    UserData.Reserved = 0;
    v16 = 0;
    UserData.Ptr = (ULONGLONG)&v32;
    p_BaseAddress = &BaseAddress;
    UserData.Size = 8;
    v15 = 8;
    PhysicalAddress = MmGetPhysicalAddress(BaseAddress);
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v9 = *a1;
    v12 = PhysicalAddress;
    v17 = &v12;
    v20 = &a5;
    v23 = &v10;
    v26 = (char *)&v10 + 1;
    v29 = (char *)&v10 + 4;
    v18 = 8;
    v21 = 2;
    v24 = 1;
    v27 = 1;
    v30 = 4;
    return EtwWriteEx(v9, (PCEVENT_DESCRIPTOR)StEventStoreCorruption, 0LL, 1u, 0LL, 0LL, 7u, &UserData);
  }
  return result;
}
