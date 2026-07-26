/*
 * XREFs of ??$ndisDataPathExpandStackCallback@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAX@Z @ 0x140020E40
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140020E10 (-ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisDataPathExpandStackCallback<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
        struct _NDIS_FILTER_BLOCK **Parameter)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  void (__fastcall *v4)(__int64); // r9
  __int64 v5; // r10

  if ( ndisIsFilterVerified(*Parameter) )
    (*((void (__fastcall **)(__int64, __int64, __int64, _QWORD, void (__fastcall *)(__int64)))ndisVerifierNdisDispatch
     + 17))(
      v5,
      v1,
      v3,
      *(_QWORD *)(v2 + 776),
      v4);
  else
    v4(v5);
}
