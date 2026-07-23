/*
 * XREFs of _PnpRegQueryValueIndirect @ 0x1408C3F80
 * Callers:
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1408B42D0 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetDeviceRegPropWorker @ 0x1408C37A0 (_CmGetDeviceRegPropWorker.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x1408C3EF8 (_PnpCtxRegQueryValueIndirect.c)
 *     _PnpGetGenericStoreProperty @ 0x1408C5920 (_PnpGetGenericStoreProperty.c)
 *     _PnpGetObjectPropertyWorker @ 0x1408CB050 (_PnpGetObjectPropertyWorker.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x14097F250 (_CmGetInstallerClassRegPropWorker.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1409AE4D8 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     _PnpCtxRegQueryValue @ 0x1408BA0C4 (_PnpCtxRegQueryValue.c)
 *     _PnpParseIndirectInfString @ 0x1409AD7F4 (_PnpParseIndirectInfString.c)
 *     _PnpParseIndirectResourceString @ 0x1409AD8C4 (_PnpParseIndirectResourceString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpRegQueryValueIndirect(
        __int64 a1,
        void *a2,
        const WCHAR *a3,
        int *a4,
        void *a5,
        ULONG *a6,
        bool *a7)
{
  void *v7; // r14
  void *v8; // rdi
  const WCHAR *v10; // r15
  void *v11; // rbp
  unsigned int inited; // ebx
  char *p_KeyValueInformation; // r15
  ULONG Length; // ebx
  NTSTATUS v16; // eax
  ULONG v17; // ecx
  ULONG v18; // eax
  unsigned int v19; // eax
  __int64 Pool2; // rax
  ULONG v21; // ebp
  _WORD *v22; // rax
  unsigned __int64 i; // rcx
  __int64 v24; // rcx
  int v25; // eax
  int v26; // r8d
  ULONG ResultLength; // [rsp+30h] [rbp-F8h] BYREF
  const WCHAR *v28; // [rsp+38h] [rbp-F0h]
  HANDLE KeyHandle; // [rsp+40h] [rbp-E8h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-E0h] BYREF
  char KeyValueInformation; // [rsp+58h] [rbp-D0h] BYREF

  v7 = a5;
  v8 = 0LL;
  v10 = a3;
  v28 = a3;
  KeyHandle = a2;
  if ( a5 )
  {
    if ( !*a6 )
      v7 = 0LL;
  }
  else
  {
    *a6 = 0;
  }
  if ( a7 )
    *a7 = 0;
  *a4 = 0;
  ResultLength = 0;
  v11 = 0LL;
  DestinationString = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, a3);
  if ( (inited & 0x80000000) == 0 )
  {
    if ( v7 && *a6 > 0x80 )
    {
      v19 = *a6 + 12;
      if ( v19 < 0xC )
        return (unsigned int)-1073741675;
      Length = *a6 + 12;
      Pool2 = ExAllocatePool2(0x100uLL, v19, 0x4C474552u);
      v11 = (void *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      p_KeyValueInformation = (char *)Pool2;
    }
    else
    {
      p_KeyValueInformation = &KeyValueInformation;
      Length = 140;
    }
    v16 = ZwQueryValueKey(
            KeyHandle,
            &DestinationString,
            KeyValuePartialInformation,
            p_KeyValueInformation,
            Length,
            &ResultLength);
    inited = v16;
    if ( !v16 || v16 == -2147483643 )
    {
      v17 = *a6;
      v18 = *((_DWORD *)p_KeyValueInformation + 2);
      *a6 = v18;
      if ( v17 < v18 )
        inited = -1073741789;
      else
        memmove(v7, p_KeyValueInformation + 12, *((unsigned int *)p_KeyValueInformation + 2));
      *a4 = *((_DWORD *)p_KeyValueInformation + 1);
    }
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    v10 = v28;
  }
  if ( (!inited || inited == -1073741789) && a7 )
  {
    v26 = *a4;
    switch ( v26 )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 7:
        v21 = *a6;
        if ( inited )
        {
          while ( v21 <= 0xFFFE )
          {
            if ( v8 )
              ExFreePoolWithTag(v8, 0);
            v8 = (void *)ExAllocatePool2(0x100uLL, v21, 0x52504E50u);
            if ( !v8 )
              return inited;
            ResultLength = v21;
            v25 = PnpCtxRegQueryValue(v24, KeyHandle, v10, 0LL, v8, &ResultLength);
            if ( v25 != -1073741789 )
            {
              if ( v25 )
                goto LABEL_34;
              v7 = v8;
              goto LABEL_39;
            }
            if ( ResultLength <= v21 )
              goto LABEL_34;
            v21 = ResultLength;
          }
        }
        else
        {
          if ( !v7 )
            return inited;
LABEL_39:
          v22 = v7;
          for ( i = (unsigned __int64)v21 >> 1; i; --i )
          {
            if ( !*v22 )
              break;
            ++v22;
          }
          if ( i
            && ((unsigned __int8)PnpParseIndirectInfString(v7) || (unsigned __int8)PnpParseIndirectResourceString(v7)) )
          {
            *a7 = 1;
          }
        }
        if ( v8 )
LABEL_34:
          ExFreePoolWithTag(v8, 0);
        break;
      case 4:
      case 5:
      case 6:
      case 8:
      case 9:
      case 10:
      case 11:
        *a7 = 0;
        return inited;
      default:
        *a7 = (_WORD)v26 == 25;
        return inited;
    }
  }
  return inited;
}
