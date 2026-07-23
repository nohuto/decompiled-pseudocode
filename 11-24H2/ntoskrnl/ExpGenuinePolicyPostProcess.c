/*
 * XREFs of ExpGenuinePolicyPostProcess @ 0x1407B8DD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x1406A9FB0 (ZwQueryLicenseValue.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     sub_1407B873C @ 0x1407B873C (sub_1407B873C.c)
 *     ExpOsProductCacheProviderHelper @ 0x1407B94A8 (ExpOsProductCacheProviderHelper.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpGenuinePolicyPostProcess(
        _QWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        unsigned int a4,
        _DWORD *a5,
        _BYTE *a6)
{
  int v9; // ebx
  void *v10; // rdi
  bool v11; // zf
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 Pool2; // rax
  __int64 v16; // rcx
  int v17; // eax
  _BYTE v19[8]; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-38h] BYREF
  int Data; // [rsp+50h] [rbp-30h] BYREF
  int v22; // [rsp+54h] [rbp-2Ch] BYREF
  ULONG ResultDataSize; // [rsp+58h] [rbp-28h] BYREF
  _DWORD *v24; // [rsp+60h] [rbp-20h]
  __int128 v25; // [rsp+68h] [rbp-18h]

  v24 = a5;
  v22 = 0;
  *a6 = 0;
  v9 = 0;
  v10 = 0LL;
  ResultDataSize = 4;
  Data = 0;
  v25 = 0LL;
  v20 = 0;
  if ( *a1 )
  {
    v9 = sub_1407B873C(a2, a3, a4, a5, 2);
    *a6 = 1;
    return (unsigned int)v9;
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
          return (unsigned int)v9;
        goto LABEL_11;
      }
      v11 = *(_WORD *)a3 == 1;
    }
    if ( v11 )
      return (unsigned int)v9;
  }
LABEL_11:
  v9 = ZwQueryLicenseValue((PUNICODE_STRING)&stru_140B3DDB8, 0LL, &Data, 4u, &ResultDataSize);
  if ( v9 >= 0 && Data == 1 )
    return (unsigned int)v9;
  if ( !qword_140FD83C8 )
    return (unsigned int)-1073741637;
  v9 = guard_dispatch_icall_no_overrides(&v22, v12);
  if ( v9 < 0 )
    return (unsigned int)v9;
  if ( !qword_140FD8388 )
    return (unsigned int)-1073741637;
  v9 = ExpOsProductCacheProviderHelper(v13, &qword_140B3D050, 0LL, 0LL, 0, &v20, v19);
  if ( v9 == -1073741789 )
  {
    v14 = v20;
    Pool2 = ExAllocatePool2(0x100uLL, v20, 0x20534C53u);
    v10 = (void *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v9 = ExpOsProductCacheProviderHelper(v16, &qword_140B3D050, 0LL, Pool2, v14, &v20, v19);
  }
  if ( v9 >= 0 )
  {
    v17 = guard_dispatch_icall_no_overrides(3LL, v10);
    v9 = v17;
    if ( v17 < 0 )
    {
      if ( v17 == -1073741198 )
        goto LABEL_23;
    }
    else if ( (v25 & 0x40) != 0 )
    {
LABEL_23:
      v9 = 0;
      goto LABEL_26;
    }
    if ( v17 >= 0 )
    {
LABEL_26:
      if ( !v22 )
      {
        v9 = sub_1407B873C(a2, a3, a4, v24, 2);
        *a6 = 1;
      }
    }
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)v9;
}
