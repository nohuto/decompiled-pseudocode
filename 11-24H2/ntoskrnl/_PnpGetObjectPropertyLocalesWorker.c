/*
 * XREFs of _PnpGetObjectPropertyLocalesWorker @ 0x1409802E8
 * Callers:
 *     _PnpGetObjectPropertyLocales @ 0x140980178 (_PnpGetObjectPropertyLocales.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAE28 (_PnpOpenObjectRegKey.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x14097F518 (_PnpGetGenericStorePropertyLocales.c)
 *     _PnpGetMappedPropertyLocalesDispatch @ 0x140980428 (_PnpGetMappedPropertyLocalesDispatch.c)
 */

__int64 __fastcall PnpGetObjectPropertyLocalesWorker(
        _QWORD *a1,
        WCHAR *a2,
        int a3,
        void *a4,
        __int64 a5,
        wchar_t *a6,
        unsigned int a7,
        unsigned int *a8,
        int a9)
{
  HANDLE v9; // rsi
  wchar_t *v13; // rdi
  unsigned int v14; // ebp
  int MappedPropertyLocalesDispatch; // ebx
  HANDLE Handle[2]; // [rsp+50h] [rbp-38h] BYREF

  Handle[0] = 0LL;
  v9 = a4;
  if ( (_WORD)a9 )
    return (unsigned int)-1073741811;
  v13 = a6;
  if ( a6 )
  {
    v14 = a7;
    v13 = (wchar_t *)(-(__int64)(a7 != 0) & (unsigned __int64)a6);
  }
  else
  {
    v14 = 0;
  }
  *a8 = 0;
  MappedPropertyLocalesDispatch = PnpGetMappedPropertyLocalesDispatch(
                                    (_DWORD)a1,
                                    (_DWORD)a2,
                                    a3,
                                    (_DWORD)a4,
                                    a5,
                                    (__int64)v13,
                                    v14,
                                    (__int64)a8,
                                    a9);
  if ( MappedPropertyLocalesDispatch == -1073741802 )
  {
    if ( v9 )
    {
LABEL_6:
      MappedPropertyLocalesDispatch = PnpGetGenericStorePropertyLocales((__int64)a1, (__int64)v9, a5, v13, v14, a8);
      goto LABEL_7;
    }
    MappedPropertyLocalesDispatch = PnpOpenObjectRegKey(a1, a2, a3, 33554433, 0, (__int64)Handle);
    if ( MappedPropertyLocalesDispatch >= 0 )
    {
      v9 = Handle[0];
      goto LABEL_6;
    }
  }
LABEL_7:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)MappedPropertyLocalesDispatch;
}
