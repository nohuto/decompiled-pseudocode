/*
 * XREFs of _OpenClipboard @ 0x1401057A8
 * Callers:
 *     NtUserOpenClipboard @ 0x140104A10 (NtUserOpenClipboard.c)
 *     xxxSnapWindow @ 0x1402641A0 (xxxSnapWindow.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x140103DDC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x140105EAC (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 */

__int64 __fastcall OpenClipboard(__int64 a1, int *a2)
{
  int v2; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct tagWINDOWSTATION *v7; // rdi
  struct tagTHREADINFO *v8; // rbp
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF
  int v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 )
    *a2 = 0;
  if ( a1 && *(char *)(*(_QWORD *)(a1 + 40) + 19LL) < 0 )
  {
    UserSetLastError(87);
  }
  else
  {
    v7 = CheckClipboardAccess();
    if ( v7 )
    {
      v8 = PtiCurrent(v6, v5);
      v9 = (struct tagTHREADINFO *)*((_QWORD *)v7 + 10);
      if ( a1 == *((_QWORD *)v7 + 12) )
      {
        if ( v8 == v9 )
          return 1LL;
LABEL_8:
        v15[0] = (char *)v7 + 96;
        v15[1] = a1;
        HMAssignmentLock(v15, 0LL);
        *((_QWORD *)v7 + 10) = v8;
        if ( a2 )
        {
          v10 = *((_QWORD *)v7 + 14);
          if ( !v10 || *((_QWORD *)v8 + 58) != *(_QWORD *)(*(_QWORD *)(v10 + 16) + 464LL) )
            v2 = 1;
          *a2 = v2;
          *(_DWORD *)(*((_QWORD *)v8 + 58) + 704LL) = *((_DWORD *)v7 + 35);
        }
        return 1LL;
      }
      if ( !v9 )
        goto LABEL_8;
      UserSetLastError(5);
      if ( (unsigned int)dword_140398BB8 > 5
        && (qword_140398BC8 & 0x400000000000LL) != 0
        && (qword_140398BD0 & 0x400000000000LL) == qword_140398BD0 )
      {
        v14 = *(_QWORD *)(*((_QWORD *)v7 + 10) + 464LL);
        v17 = v14 + 984;
        v16 = *(_DWORD *)(v14 + 56);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v14,
          (__int64)&unk_1403674E4,
          v12,
          v13,
          (__int64)&v16,
          &v17);
      }
    }
  }
  return 0LL;
}
