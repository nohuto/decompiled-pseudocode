/*
 * XREFs of DrvDbGetRegValueMappedProperty @ 0x140925BB0
 * Callers:
 *     DrvDbGetDriverFileMappedProperty @ 0x140822598 (DrvDbGetDriverFileMappedProperty.c)
 *     DrvDbGetDriverPackageSignerName @ 0x140822C44 (DrvDbGetDriverPackageSignerName.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140924EA0 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1409256C0 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbGetDriverInfFileMappedProperty @ 0x14092603C (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x14092644C (DrvDbGetDriverPackageMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbGetRegValueMappedProperty(
        __int64 a1,
        void *a2,
        __int64 a3,
        _DWORD *a4,
        int *a5,
        unsigned int a6,
        unsigned int *a7)
{
  int v7; // r14d
  int v8; // ebp
  int v9; // eax
  unsigned int v10; // edi
  int *v11; // r13
  const WCHAR *v12; // rdx
  void *v13; // r12
  unsigned int inited; // ebx
  char *p_KeyValueInformation; // rbp
  ULONG Length; // ebx
  NTSTATUS v17; // eax
  unsigned int v18; // eax
  __int64 v20; // rdx
  int v21; // eax
  __int64 Pool2; // rax
  int v23; // [rsp+34h] [rbp-114h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-110h] BYREF
  unsigned int *v25; // [rsp+40h] [rbp-108h]
  HANDLE KeyHandle; // [rsp+48h] [rbp-100h]
  __int64 v27; // [rsp+50h] [rbp-F8h]
  _DWORD *v28; // [rsp+58h] [rbp-F0h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-E8h] BYREF
  char KeyValueInformation; // [rsp+70h] [rbp-D8h] BYREF

  v7 = 0;
  v8 = 0;
  v25 = a7;
  v9 = *(_DWORD *)(a3 + 8);
  v28 = a4;
  v27 = a3;
  KeyHandle = a2;
  v23 = 0;
  if ( v9 == 5 || v9 == 17 )
  {
    v11 = &v23;
    v10 = 4;
  }
  else
  {
    v10 = a6;
    v11 = a5;
  }
  v12 = *(const WCHAR **)(a3 + 16);
  ResultLength = 0;
  DestinationString = 0LL;
  v13 = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, v12);
  if ( (inited & 0x80000000) == 0 )
  {
    if ( v11 && v10 > 0x80 )
    {
      if ( v10 >= 0xFFFFFFF4 )
        return (unsigned int)-1073741675;
      Length = v10 + 12;
      Pool2 = ExAllocatePool2(0x100uLL, v10 + 12, 0x4C474552u);
      v13 = (void *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      p_KeyValueInformation = (char *)Pool2;
    }
    else
    {
      p_KeyValueInformation = &KeyValueInformation;
      Length = 140;
    }
    v17 = ZwQueryValueKey(
            KeyHandle,
            &DestinationString,
            KeyValuePartialInformation,
            p_KeyValueInformation,
            Length,
            &ResultLength);
    inited = v17;
    if ( !v17 || v17 == -2147483643 )
    {
      v18 = v10;
      v10 = *((_DWORD *)p_KeyValueInformation + 2);
      if ( v18 < v10 )
      {
        inited = -1073741789;
      }
      else
      {
        memmove(v11, p_KeyValueInformation + 12, v10);
        v7 = v23;
      }
      v8 = *((_DWORD *)p_KeyValueInformation + 1);
    }
    else
    {
      v8 = 0;
    }
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
  }
  if ( inited == -1073741772 )
    return (unsigned int)-1073741275;
  if ( inited && inited != -1073741789 )
    return inited;
  v20 = v27;
  if ( v8 != *(_DWORD *)(v27 + 24) )
    return (unsigned int)-1073741595;
  *v28 = *(_DWORD *)(v27 + 8);
  v21 = *(_DWORD *)(v20 + 8);
  if ( v21 == 5 )
  {
    *v25 = 2;
    if ( !a5 || a6 < 2 )
      return (unsigned int)-1073741789;
    if ( inited != -1073741789 )
    {
      *(_WORD *)a5 = v7;
      return inited;
    }
    return (unsigned int)-1073741595;
  }
  if ( v21 == 17 )
  {
    *v25 = 1;
    if ( !a5 || !a6 )
      return (unsigned int)-1073741789;
    if ( inited != -1073741789 )
    {
      *(_BYTE *)a5 = -(v7 != 0);
      return inited;
    }
    return (unsigned int)-1073741595;
  }
  *v25 = v10;
  if ( !a5 || a6 < v10 )
    return (unsigned int)-1073741789;
  return inited;
}
