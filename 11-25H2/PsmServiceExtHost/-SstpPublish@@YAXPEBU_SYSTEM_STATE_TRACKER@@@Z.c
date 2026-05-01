/*
 * XREFs of ?SstpPublish@@YAXPEBU_SYSTEM_STATE_TRACKER@@@Z @ 0x1800561E4
 * Callers:
 *     ?SstpOnStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180054550 (-SstpOnStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?SstpStart@@YAJPEAU_SYSTEM_STATE_TRACKER@@@Z @ 0x18009C770 (-SstpStart@@YAJPEAU_SYSTEM_STATE_TRACKER@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18005627C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall SstpPublish(const struct _SYSTEM_STATE_TRACKER *a1)
{
  int *v1; // rbx
  int v2; // eax
  int v3; // r9d
  int v4; // [rsp+40h] [rbp+8h] BYREF
  int v5; // [rsp+48h] [rbp+10h] BYREF

  v1 = (int *)((char *)a1 + 20);
  v2 = RtlPublishWnfStateData(*(_QWORD *)((char *)a1 + 220), 0LL, (char *)a1 + 20, 4LL, 0LL);
  if ( (unsigned int)dword_1800E7278 > 4 && (byte_1800E7288 & 1) != 0 && (qword_1800E7290 & 1) == qword_1800E7290 )
  {
    v4 = *v1;
    v5 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1800E7278,
      (unsigned int)&unk_1800DA3EB,
      v2,
      v3,
      (__int64)&v5,
      (__int64)&v4);
  }
}
