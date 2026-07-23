/*
 * XREFs of _RegRtlEnumValue @ 0x14097E62C
 * Callers:
 *     _RegRtlCopyTreeInternal @ 0x1408212E0 (_RegRtlCopyTreeInternal.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x14097D12C (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpCtxRegEnumValue @ 0x14097E5DC (_PnpCtxRegEnumValue.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x14097EBEC (DrvDbGetDeviceIdDriverInfMatches.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x14097F518 (_PnpGetGenericStorePropertyLocales.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140980664 (DrvDbSetDeviceIdDriverInfMatches.c)
 * Callees:
 *     ZwEnumerateValueKey @ 0x1406A7610 (ZwEnumerateValueKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RegRtlEnumValue(
        HANDLE KeyHandle,
        ULONG Index,
        void *a3,
        _DWORD *a4,
        _DWORD *a5,
        void *a6,
        unsigned int *a7)
{
  unsigned __int64 v9; // rax
  KEY_VALUE_INFORMATION_CLASS v12; // ebp
  ULONG Length; // ebx
  _DWORD *Pool2; // rsi
  unsigned int v15; // edi
  size_t v16; // r8
  __int64 v17; // rbx
  ULONG v19; // ecx
  unsigned int v20; // eax
  __int64 v21; // rbx
  size_t v22; // r8
  ULONG ResultLength[4]; // [rsp+30h] [rbp-38h] BYREF

  ResultLength[0] = 0;
  v9 = 2LL * (unsigned int)*a4;
  if ( !a7 )
  {
    v12 = KeyValueBasicInformation;
    if ( v9 <= 0xFFFFFFFF )
    {
      Length = v9 + 16;
      if ( (int)v9 + 16 >= (unsigned int)v9 )
        goto LABEL_4;
    }
    return (unsigned int)-1073741675;
  }
  v12 = KeyValueFullInformation;
  if ( v9 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v19 = v9 + 24;
  if ( (int)v9 + 24 < (unsigned int)v9 )
    return (unsigned int)-1073741675;
  Length = v19 + *a7;
  if ( Length < v19 )
    return (unsigned int)-1073741675;
LABEL_4:
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, Length, 0x4C474552u);
  if ( Pool2 )
  {
    v15 = ZwEnumerateValueKey(KeyHandle, Index, v12, Pool2, Length, ResultLength);
    if ( !v15 || v15 == -2147483643 )
    {
      if ( v12 )
      {
        if ( a5 )
          *a5 = Pool2[1];
        if ( v15
          || (unsigned int)*a4 < ((unsigned __int64)(unsigned int)Pool2[4] >> 1) + 1
          || (v20 = Pool2[3], *a7 < v20) )
        {
          v15 = -1073741789;
          *a4 = (Pool2[4] >> 1) + 1;
          *a7 = Pool2[3];
        }
        else
        {
          v21 = Pool2[4] >> 1;
          *a7 = v20;
          v22 = (unsigned int)Pool2[4];
          *a4 = v21;
          memmove(a3, Pool2 + 5, v22);
          *((_WORD *)a3 + v21) = 0;
          memmove(a6, (char *)Pool2 + (unsigned int)Pool2[2], (unsigned int)Pool2[3]);
        }
      }
      else
      {
        if ( a5 )
          *a5 = Pool2[1];
        if ( v15 || (v16 = (unsigned int)Pool2[2], (unsigned int)*a4 < (v16 >> 1) + 1) )
        {
          v15 = -1073741789;
          LODWORD(v17) = (Pool2[2] >> 1) + 1;
        }
        else
        {
          v17 = (unsigned int)v16 >> 1;
          memmove(a3, Pool2 + 3, v16);
          *((_WORD *)a3 + v17) = 0;
        }
        *a4 = v17;
      }
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v15;
}
