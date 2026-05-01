/*
 * XREFs of ?SstpStateChangeTriage@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180054740
 * Callers:
 *     ?SstpOnStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180054550 (-SstpOnStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x180054814 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SstpStateChangeTriage(
        struct _WNF_STATE_NAME a1,
        unsigned int a2,
        struct _WNF_TYPE_ID *a3,
        _DWORD *a4,
        const void *a5,
        unsigned int a6)
{
  int v8; // r9d
  unsigned int i; // ebx
  __int64 v10; // r10
  int v11; // edi
  _BYTE v13[4]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+44h] [rbp-24h] BYREF
  int v15[8]; // [rsp+48h] [rbp-20h] BYREF

  v8 = (int)a5;
  for ( i = 0; i < a4[54]; ++i )
  {
    v10 = 8LL * i;
    if ( *(_QWORD *)&a4[v10 + 6] == a1 )
    {
      v11 = (*(__int64 (__fastcall **)(struct _WNF_STATE_NAME, _QWORD, struct _WNF_TYPE_ID *, _DWORD *, const void *, unsigned int))&a4[v10 + 8])(
              a1,
              a2,
              a3,
              a4,
              a5,
              a6);
      if ( v11 < 0 )
        goto LABEL_5;
      break;
    }
  }
  v11 = 0;
LABEL_5:
  if ( (unsigned int)dword_1800E7278 > 4 && (byte_1800E7288 & 1) != 0 && (qword_1800E7290 & 1) == qword_1800E7290 )
  {
    v14 = a2;
    v13[0] = i;
    v15[0] = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      a1.Data[0],
      (unsigned int)&unk_1800DA42A,
      (_DWORD)a3,
      v8,
      (__int64)v15,
      (__int64)v13,
      (__int64)&v14);
  }
  return (unsigned int)v11;
}
