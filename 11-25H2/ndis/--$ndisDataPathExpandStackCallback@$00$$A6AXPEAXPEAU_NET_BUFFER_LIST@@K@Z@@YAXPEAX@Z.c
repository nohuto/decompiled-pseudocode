/*
 * XREFs of ??$ndisDataPathExpandStackCallback@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAX@Z @ 0x140098880
 * Callers:
 *     <none>
 * Callees:
 *     ??$ndisCallNextDatapathHandler@$00AEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@K@ZAEAPEAXAEAPEAU1@AEAKAEAKAEAK@@YAXAEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z0AEAPEAU0@AEAK55@Z @ 0x140062B30 (--$ndisCallNextDatapathHandler@$00AEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@K@ZAEAPEAXAEAPEAU1@AEA.c)
 */

void __fastcall ndisDataPathExpandStackCallback<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>(PVOID Parameter)
{
  int v1; // [rsp+28h] [rbp-20h]

  ndisCallNextDatapathHandler<1,void * &,void (*&)(void *,_NET_BUFFER_LIST *,unsigned long),void * &,_NET_BUFFER_LIST * &,unsigned long &,unsigned long &,unsigned long &>(
    (__int64 *)Parameter,
    (__int64 (__fastcall **)(__int64, __int64, _QWORD))Parameter + 2,
    (__int64 *)Parameter + 1,
    (__int64 *)Parameter + 3,
    (unsigned int *)Parameter + 8,
    v1,
    (unsigned int *)Parameter + 10);
}
