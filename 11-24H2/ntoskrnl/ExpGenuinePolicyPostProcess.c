/*
 * XREFs of ExpGenuinePolicyPostProcess @ 0x1407B8980
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x1406A9010 (ZwQueryLicenseValue.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     sub_1407B82EC @ 0x1407B82EC (sub_1407B82EC.c)
 *     ExpOsProductCacheProviderHelper @ 0x1407B9058 (ExpOsProductCacheProviderHelper.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpGenuinePolicyPostProcess(
        _QWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        unsigned int a4,
        _DWORD *a5,
        _BYTE *a6)
{
  unsigned int v9; // ebx
  void *v10; // rdi
  bool v11; // zf
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  int v16; // ebx
  __int64 Pool2; // rax
  __int64 v18; // rcx
  int v19; // eax
  _BYTE v21[8]; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v22[3]; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v23[3]; // [rsp+54h] [rbp-2Ch] BYREF
  _DWORD *v24; // [rsp+60h] [rbp-20h]
  __int128 v25; // [rsp+68h] [rbp-18h]

  v24 = a5;
  v23[0] = 0;
  *a6 = 0;
  v9 = 0;
  v10 = 0LL;
  v23[1] = 4;
  v22[2] = 0;
  v25 = 0LL;
  v22[0] = 0;
  if ( *a1 )
  {
    v9 = sub_1407B82EC(a2, a3, a4, a5, 2);
    *a6 = 1;
    return v9;
  }
  if ( a3 )
  {
    if ( a4 == 1 )
    {
      v11 = *(_BYTE *)a3 == 1;
    }
    else
    {
      if ( a4 != 2 )
      {
        if ( *a3 == 1 )
          return v9;
        goto LABEL_11;
      }
      v11 = *(_WORD *)a3 == 1;
    }
    if ( v11 )
      return v9;
  }
LABEL_11:
  ZwQueryLicenseValue((__int64)L"JL", 0LL);
  if ( !qword_140FD73B8 )
    return (unsigned int)-1073741637;
  v9 = guard_dispatch_icall_no_overrides(v23, v12, v13, v14);
  if ( (v9 & 0x80000000) != 0 )
    return v9;
  if ( !qword_140FD7378 )
    return (unsigned int)-1073741637;
  v9 = ExpOsProductCacheProviderHelper(v15, &qword_140B3B2A0, 0LL, 0LL, 0, v22, v21);
  if ( v9 == -1073741789 )
  {
    v16 = v22[0];
    Pool2 = ExAllocatePool2(0x100uLL);
    v10 = (void *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v9 = ExpOsProductCacheProviderHelper(v18, &qword_140B3B2A0, 0LL, Pool2, v16, v22, v21);
  }
  if ( (v9 & 0x80000000) != 0 )
    goto LABEL_26;
  v19 = guard_dispatch_icall_no_overrides(3LL, v10, 0LL, 0LL);
  v9 = v19;
  if ( v19 < 0 )
  {
    if ( v19 == -1073741198 )
      goto LABEL_21;
  }
  else if ( (v25 & 0x40) != 0 )
  {
LABEL_21:
    v9 = 0;
    goto LABEL_24;
  }
  if ( v19 >= 0 )
  {
LABEL_24:
    if ( !v23[0] )
    {
      v9 = sub_1407B82EC(a2, a3, a4, v24, 2);
      *a6 = 1;
    }
  }
LABEL_26:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return v9;
}
