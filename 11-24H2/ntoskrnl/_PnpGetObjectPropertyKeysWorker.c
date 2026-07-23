/*
 * XREFs of _PnpGetObjectPropertyKeysWorker @ 0x14097CED0
 * Callers:
 *     _PnpGetObjectPropertyKeys @ 0x14097C800 (_PnpGetObjectPropertyKeys.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAE28 (_PnpOpenObjectRegKey.c)
 *     _PnpGetMappedPropertyKeysDispatch @ 0x14097D050 (_PnpGetMappedPropertyKeysDispatch.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x14097D12C (_PnpGetGenericStorePropertyKeys.c)
 */

__int64 __fastcall PnpGetObjectPropertyKeysWorker(
        _QWORD *a1,
        WCHAR *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        unsigned int a8,
        _DWORD *a9,
        __int16 a10)
{
  int v10; // r13d
  int v13; // r12d
  signed int MappedPropertyKeysDispatch; // ebx
  int v15; // r9d
  __int64 v16; // r8
  unsigned int v17; // eax
  int v18; // edx
  unsigned int v19; // edx
  unsigned int v21; // [rsp+50h] [rbp-10h] BYREF
  int v22; // [rsp+54h] [rbp-Ch] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-8h] BYREF

  v10 = (int)a1;
  Handle = 0LL;
  v21 = 0;
  v13 = (int)a2;
  v22 = 0;
  if ( a10 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *a9 = 0;
    if ( a4
      || (MappedPropertyKeysDispatch = PnpOpenObjectRegKey(a1, a2, a3, 33554433, 0, (__int64)&Handle),
          MappedPropertyKeysDispatch >= 0) )
    {
      MappedPropertyKeysDispatch = PnpGetMappedPropertyKeysDispatch(v10, v13, a3, a4, a5, a6, a7, a8, (__int64)&v21);
      if ( (unsigned int)(MappedPropertyKeysDispatch + 1073741790) <= 1 || !MappedPropertyKeysDispatch )
      {
        if ( v21 >= a8 )
        {
          v16 = 0LL;
          v17 = 0;
        }
        else
        {
          v16 = a7 + 20LL * v21;
          v17 = a8 - v21;
        }
        v18 = (int)Handle;
        LOBYTE(v15) = a6;
        if ( a4 )
          v18 = a4;
        MappedPropertyKeysDispatch = PnpGetGenericStorePropertyKeys(v10, v18, a5, v15, v16, v17, (__int64)&v22);
        if ( (unsigned int)(MappedPropertyKeysDispatch + 1073741790) <= 1 || !MappedPropertyKeysDispatch )
        {
          v19 = v21 + v22;
          *a9 = v21 + v22;
          MappedPropertyKeysDispatch = a8 < v19 ? 0xC0000023 : 0;
        }
      }
    }
    if ( Handle )
      ZwClose(Handle);
  }
  return (unsigned int)MappedPropertyKeysDispatch;
}
