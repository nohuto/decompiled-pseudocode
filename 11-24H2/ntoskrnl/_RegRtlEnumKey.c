/*
 * XREFs of _RegRtlEnumKey @ 0x14097D9B4
 * Callers:
 *     _RegRtlCopyTreeInternal @ 0x1408212E0 (_RegRtlCopyTreeInternal.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14097BA80 (_CmGetDeviceContainerIdFromBase.c)
 *     _RegRtlDeleteTreeInternal @ 0x14097C270 (_RegRtlDeleteTreeInternal.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x14097D12C (_PnpGetGenericStorePropertyKeys.c)
 *     PiCMEnumerateSubKeys @ 0x14097D49C (PiCMEnumerateSubKeys.c)
 *     _PnpCtxRegEnumKey @ 0x14097D774 (_PnpCtxRegEnumKey.c)
 *     _RegRtlEnumKeyWithCallback @ 0x14097D7A0 (_RegRtlEnumKeyWithCallback.c)
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x140A9D60C (PiDqDeleteUserObjectFromLoadedHives.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwEnumerateKey @ 0x1406A79F0 (ZwEnumerateKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RegRtlEnumKey(HANDLE KeyHandle, ULONG a2, char *a3, unsigned int *a4)
{
  _DWORD *v7; // rsi
  unsigned __int64 v8; // rdi
  unsigned int v9; // ebx
  ULONG Length; // r15d
  char *v12; // rbp
  NTSTATUS v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // ecx
  _DWORD *Pool2; // rax
  NTSTATUS v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-B8h] BYREF
  ULONG Index; // [rsp+34h] [rbp-B4h]
  char v22; // [rsp+38h] [rbp-B0h] BYREF

  Index = a2;
  ResultLength = 0;
  v7 = 0LL;
  if ( a3 )
  {
    v8 = 2LL * *a4;
    if ( v8 > 0xFFFFFFFF )
      return (unsigned int)-1073741675;
    if ( (unsigned int)v8 > 0x60 )
    {
      Length = 2 * *a4;
      goto LABEL_11;
    }
  }
  else
  {
    LODWORD(v8) = 0;
  }
  Length = 96;
LABEL_11:
  v12 = &v22;
  if ( (unsigned int)v8 > 0x60 )
    v12 = a3;
  v13 = ZwEnumerateKey(KeyHandle, a2, KeyBasicInformation, v12, Length, &ResultLength);
  v9 = v13;
  if ( !v13 || v13 == -2147483643 )
  {
    v14 = *((_DWORD *)v12 + 3);
    v15 = v14 + 2;
    if ( v14 + 2 < v14 )
      return (unsigned int)-1073741675;
    v9 = 0;
    *a4 = v15 >> 1;
    if ( v15 > (unsigned int)v8 )
      return (unsigned int)-1073741789;
    if ( ResultLength > Length )
    {
      if ( (unsigned int)v8 >= 0xFFFFFFF0 )
        return (unsigned int)-1073741675;
      Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, (unsigned int)(v8 + 16), 0x4C474552u);
      v7 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      v12 = (char *)Pool2;
      v17 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, Pool2, v8 + 16, &ResultLength);
      v9 = v17;
      if ( v17 && v17 != -2147483643 )
      {
LABEL_7:
        ExFreePoolWithTag(v7, 0);
        return v9;
      }
      v18 = v7[3];
      v19 = v18 + 2;
      if ( v18 + 2 < v18 )
      {
        v9 = -1073741675;
        goto LABEL_7;
      }
      v9 = 0;
      *a4 = v19 >> 1;
      if ( v19 > (unsigned int)v8 )
      {
        v9 = -1073741789;
        goto LABEL_7;
      }
    }
    memmove(a3, v12 + 16, *((unsigned int *)v12 + 3));
    *(_WORD *)&a3[2 * *a4 - 2] = 0;
    if ( !v7 )
      return v9;
    goto LABEL_7;
  }
  return v9;
}
