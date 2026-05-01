/*
 * XREFs of ?HampHostCheckSetStaticDonation@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003667C
 * Callers:
 *     ?HampDepGroupPopulateIndependentHostList@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x180036534 (-HampDepGroupPopulateIndependentHostList@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@PEAU_HAM_DEP_HO.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@44@Z @ 0x180001C54 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     ?HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18007D694 (-HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 */

void __fastcall HampHostCheckSetStaticDonation(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 *v1; // rax
  unsigned __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  int v11; // edx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // [rsp+70h] [rbp+8h] BYREF
  __int64 v18; // [rsp+78h] [rbp+10h] BYREF
  __int64 v19; // [rsp+80h] [rbp+18h] BYREF
  __int64 v20; // [rsp+88h] [rbp+20h] BYREF

  v1 = (__int64 *)*((_QWORD *)a1 + 89);
  if ( v1 )
  {
    v7 = *v1;
    v4 = *(_QWORD *)(v7 + 80);
    v3 = *(_QWORD *)(v7 + 456);
    v5 = v4;
    v8 = *(_QWORD *)(v4 + 1016);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 456);
      if ( v9 > v3 )
        v3 = v9;
    }
    v10 = *(_QWORD *)(v4 + 960);
    v6 = v3;
    if ( v10 )
    {
      if ( v10 > v3 && HampHostCanStaticallyDonateCommit(a1, v10) < 0 )
      {
        *(_QWORD *)(v4 + 960) = 0LL;
        if ( (unsigned int)dword_1800E72B0 > 4 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1800E72B0, 8LL) )
          {
            v17 = v12;
            v14 = 1200LL;
            if ( a1 )
              v14 = (__int64)a1 + 1136;
            v15 = *(_QWORD *)v14;
            v16 = (unsigned int)(v11 + 24);
            v18 = v15;
            v19 = *((_QWORD *)a1 - 4);
            if ( v4 )
              v16 = v4 - 32;
            v20 = *(_QWORD *)v16;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
              v16,
              (__int64)&unk_1800D2F72,
              v12,
              v13,
              (__int64)&v17,
              (__int64)&v20,
              (__int64)&v19,
              (__int64)&v18);
          }
        }
      }
    }
  }
  else
  {
    v3 = 0LL;
    v4 = 0LL;
    v5 = 0LL;
    v6 = 0LL;
  }
  if ( v4 )
  {
    if ( v3 <= *(_QWORD *)(v5 + 960) )
      v6 = *(_QWORD *)(v5 + 960);
  }
  else
  {
    v6 = 0LL;
  }
  *((_QWORD *)a1 + 121) = v6;
}
