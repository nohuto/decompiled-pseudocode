/*
 * XREFs of _PnpSetObjectPropertyWorker @ 0x1408B6520
 * Callers:
 *     _PnpSetObjectProperty @ 0x1408B6258 (_PnpSetObjectProperty.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _PnpValidatePropertyData @ 0x1408B6740 (_PnpValidatePropertyData.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1408B6F54 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAE28 (_PnpOpenObjectRegKey.c)
 *     _PnpSetGenericStoreProperty @ 0x14097C974 (_PnpSetGenericStoreProperty.c)
 *     _PnpSetMappedPropertyDispatch @ 0x140A51824 (_PnpSetMappedPropertyDispatch.c)
 */

__int64 __fastcall PnpSetObjectPropertyWorker(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        ULONG SecurityDescriptorLength,
        int a10)
{
  const wchar_t *v13; // r15
  int v14; // ebx
  int v15; // eax
  int v16; // edx
  int v17; // r9d
  HANDLE Handle[2]; // [rsp+50h] [rbp-38h] BYREF

  Handle[0] = 0LL;
  if ( (_WORD)a10 || !a8 && SecurityDescriptorLength )
    return (unsigned int)-1073741811;
  v13 = (const wchar_t *)(a8 & -(__int64)(SecurityDescriptorLength != 0));
  v14 = PnpValidatePropertyData(v13, SecurityDescriptorLength);
  if ( v14 >= 0 )
  {
    v15 = PnpSetMappedPropertyDispatch(a1, a2, a3, a4, a5, a6, a7, (__int64)v13, SecurityDescriptorLength, a10);
    v14 = v15;
    if ( v15 >= 0 )
    {
      if ( a3 >= 7 )
      {
        v17 = a4;
LABEL_11:
        PnpObjectRaisePropertyChangeEvent(a1, a2, a3, v17, a5, a6);
      }
    }
    else
    {
      if ( v15 != -1073741802 )
        goto LABEL_12;
      if ( a4 )
      {
        v16 = a4;
LABEL_8:
        v14 = PnpSetGenericStoreProperty(a1, v16, a5, a6, a7, (__int64)v13, SecurityDescriptorLength);
        if ( v14 < 0 )
          goto LABEL_12;
        v17 = (int)Handle[0];
        if ( a4 )
          v17 = a4;
        goto LABEL_11;
      }
      v14 = PnpOpenObjectRegKey(a1, a2, a3, 33554439, 0, (__int64)Handle);
      if ( v14 >= 0 )
      {
        v16 = (int)Handle[0];
        goto LABEL_8;
      }
    }
  }
LABEL_12:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v14;
}
