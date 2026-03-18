/*
 * XREFs of ExpGenuinePolicyPostProcess @ 0x1407A94D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x14069DD40 (ZwQueryLicenseValue.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     sub_1407A8E3C @ 0x1407A8E3C (sub_1407A8E3C.c)
 *     ExpOsProductCacheProviderHelper @ 0x1407A9BA8 (ExpOsProductCacheProviderHelper.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 v12; // rcx
  int v13; // ebx
  __int64 Pool2; // rax
  __int64 v15; // rcx
  int v16; // eax
  _BYTE v18[8]; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v19[3]; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v20[3]; // [rsp+54h] [rbp-2Ch] BYREF
  _DWORD *v21; // [rsp+60h] [rbp-20h]
  __int128 v22; // [rsp+68h] [rbp-18h]

  v21 = a5;
  v20[0] = 0;
  *a6 = 0;
  v9 = 0;
  v10 = 0LL;
  v20[1] = 4;
  v19[2] = 0;
  v22 = 0LL;
  v19[0] = 0;
  if ( *a1 )
  {
    v9 = sub_1407A8E3C(a2, a3, a4, a5, 2);
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
  v9 = guard_dispatch_icall_no_overrides(v20);
  if ( (v9 & 0x80000000) != 0 )
    return v9;
  if ( !qword_140FD7378 )
    return (unsigned int)-1073741637;
  v9 = ExpOsProductCacheProviderHelper(v12, &qword_140B2BFD0, 0LL, 0LL, 0, v19, v18);
  if ( v9 == -1073741789 )
  {
    v13 = v19[0];
    Pool2 = ExAllocatePool2(0x100uLL);
    v10 = (void *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v9 = ExpOsProductCacheProviderHelper(v15, &qword_140B2BFD0, 0LL, Pool2, v13, v19, v18);
  }
  if ( (v9 & 0x80000000) != 0 )
    goto LABEL_26;
  v16 = guard_dispatch_icall_no_overrides(3LL);
  v9 = v16;
  if ( v16 < 0 )
  {
    if ( v16 == -1073741198 )
      goto LABEL_21;
  }
  else if ( (v22 & 0x40) != 0 )
  {
LABEL_21:
    v9 = 0;
    goto LABEL_24;
  }
  if ( v16 >= 0 )
  {
LABEL_24:
    if ( !v20[0] )
    {
      v9 = sub_1407A8E3C(a2, a3, a4, v21, 2);
      *a6 = 1;
    }
  }
LABEL_26:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return v9;
}
