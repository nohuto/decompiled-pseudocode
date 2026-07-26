/*
 * XREFs of ??$ndisCallNextDatapathHandler@$00AEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@K@ZAEAPEAXAEAPEAU1@AEAKAEAKAEAK@@YAXAEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z0AEAPEAU0@AEAK55@Z @ 0x140062B30
 * Callers:
 *     ??$ndisDataPathExpandStackCallback@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAX@Z @ 0x140098880 (--$ndisDataPathExpandStackCallback@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisCallNextDatapathHandler<1,void * &,void (*&)(void *,_NET_BUFFER_LIST *,unsigned long),void * &,_NET_BUFFER_LIST * &,unsigned long &,unsigned long &,unsigned long &>(
        __int64 *a1,
        __int64 (__fastcall **a2)(__int64, __int64, _QWORD),
        __int64 *a3,
        __int64 *a4,
        unsigned int *a5,
        int a6,
        unsigned int *a7)
{
  __int64 v7; // r11
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64, _QWORD); // rax
  __int64 v10; // rdx

  v7 = *a4;
  v8 = *a3;
  v9 = *a2;
  v10 = *a1;
  if ( ndisVerifierNdisDispatch && *(_BYTE *)v10 == 5 && *(_QWORD *)(v10 + 776) )
    return (*((__int64 (__fastcall **)(__int64, __int64, _QWORD))ndisVerifierNdisDispatch + 13))(v8, v7, *a5);
  else
    return v9(v8, v7, *a7);
}
