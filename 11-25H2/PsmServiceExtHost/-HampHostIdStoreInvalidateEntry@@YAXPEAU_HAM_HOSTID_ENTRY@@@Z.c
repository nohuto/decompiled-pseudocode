/*
 * XREFs of ?HampHostIdStoreInvalidateEntry@@YAXPEAU_HAM_HOSTID_ENTRY@@@Z @ 0x18005B658
 * Callers:
 *     ?HampHostIdStoreInvalidateEntryCallback@@YAKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z @ 0x18005B590 (-HampHostIdStoreInvalidateEntryCallback@@YAKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z.c)
 *     ?HampHostIdStoreInvalidatePackageEntriesCallback@@YAKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z @ 0x18005B5B0 (-HampHostIdStoreInvalidatePackageEntriesCallback@@YAKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180014F60 (CemRcObjectDereference.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@4@Z @ 0x18005B8B8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

void __fastcall HampHostIdStoreInvalidateEntry(struct _HAM_HOSTID_ENTRY *a1, __int64 a2, int a3, int a4)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  char *v7; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v8; // [rsp+68h] [rbp+10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  if ( !*((_WORD *)a1 + 304) )
  {
    v5 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
    *((_WORD *)a1 + 304) = 1;
    if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 8) != 0 && (qword_1800E72C8 & 8) == qword_1800E72C8 )
    {
      v7 = (char *)a1 + 96;
      v8 = v5 + 48;
      v9 = *((_QWORD *)a1 + 11);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        (_DWORD)a1,
        (unsigned int)&unk_1800D62B7,
        a3,
        a4,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v7);
    }
    CemRcObjectDereference(a1);
    if ( (int)TpAllocTimer(
                (char *)a1 + 616,
                HampStoreIdReferenceTimeoutCallback,
                a1,
                *(_QWORD *)((*(_QWORD *)((*(_QWORD *)((*(_QWORD *)((*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) - 8) & 0xFFFFFFFFFFFFFFFCuLL)
                                                    - 8) & 0xFFFFFFFFFFFFFFFCuLL)
                                       - 8) & 0xFFFFFFFFFFFFFFFCuLL)
                          + 48)) >= 0 )
    {
      v6 = *((_QWORD *)a1 + 77);
      v10 = -300000000LL;
      TpSetTimer(v6, &v10, 0LL, 0LL);
    }
  }
}
