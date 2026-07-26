/*
 * XREFs of ??$ndisDataPathExpandStackCallback@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAXPEAX@Z @ 0x140046290
 * Callers:
 *     <none>
 * Callees:
 *     ??$ndisCallNextDatapathHandler@$0A@AEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KK@ZAEAPEAXAEAPEAU1@AEAKAEAKAEAK@@YAXAEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z0AEAPEAU0@AEAK55@Z @ 0x1400462D0 (--$ndisCallNextDatapathHandler@$0A@AEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KK@ZAEAPEAXAEAPEAU1@A.c)
 */

void __fastcall ndisDataPathExpandStackCallback<0,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long)>(
        PVOID Parameter)
{
  ndisCallNextDatapathHandler<0,void * &,void (*&)(void *,_NET_BUFFER_LIST *,unsigned long,unsigned long),void * &,_NET_BUFFER_LIST * &,unsigned long &,unsigned long &,unsigned long &>(
    (_DWORD)Parameter,
    (_DWORD)Parameter + 16,
    (_DWORD)Parameter + 8,
    (_DWORD)Parameter + 24,
    (__int64)Parameter + 32);
}
