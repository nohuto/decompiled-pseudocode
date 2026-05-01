/*
 * XREFs of ?RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z @ 0x18008E5E4
 * Callers:
 *     ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18008E4F4 (-RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x180003220 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmpActivityHostIsGpuInterfering(struct _RM_ACTIVITY_HOST *a1, unsigned __int8 *a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v6; // r8
  unsigned __int8 v7; // di
  __int64 v8; // rcx
  __int64 v9; // r9
  struct _RM_ACTIVITY_HOST *v10; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+70h] [rbp+8h] BYREF
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  v2 = *((_QWORD *)a1 + 6);
  v11 = 0LL;
  result = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, unsigned __int64 *))(*(_QWORD *)(v2 + 40) + 88LL))(
             (char *)a1 + 552,
             *((unsigned int *)a1 + 155),
             (char *)a1 + 88,
             *((unsigned int *)a1 + 156),
             *((_QWORD *)a1 + 4),
             *((_BYTE *)a1 + 656) != 0 ? 4 : 0,
             &v11);
  if ( (int)result >= 0 )
  {
    v6 = v11;
    if ( v11 <= *((_QWORD *)a1 + 155) )
    {
      v7 = 0;
    }
    else
    {
      v7 = 1;
      if ( (unsigned int)dword_1800E7278 > 4 && tlgKeywordOn((__int64)&dword_1800E7278, 1LL) )
      {
        v12 = v6;
        v13 = v9;
        v10 = a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v8,
          (__int64)&unk_1800D8DF2,
          v6,
          v9,
          (__int64)&v10,
          (__int64)&v13,
          (__int64)&v12);
        v6 = v11;
      }
      *((_QWORD *)a1 + 155) = v6;
    }
    *a2 = v7;
    return 0LL;
  }
  return result;
}
