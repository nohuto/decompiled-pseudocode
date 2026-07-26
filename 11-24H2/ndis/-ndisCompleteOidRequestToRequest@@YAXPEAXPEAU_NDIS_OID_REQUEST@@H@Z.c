/*
 * XREFs of ?ndisCompleteOidRequestToRequest@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H@Z @ 0x140062A70
 * Callers:
 *     ?ndisLegacyRequest@@YAHPEAXPEAU_NDIS_REQUEST@@@Z @ 0x140007950 (-ndisLegacyRequest@@YAHPEAXPEAU_NDIS_REQUEST@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisCompleteOidRequestToRequest(
        void (__fastcall **a1)(_QWORD, _QWORD, _QWORD),
        struct _NDIS_OID_REQUEST *a2,
        unsigned int a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebp
  KIRQL v6; // bl
  unsigned int v7; // eax

  v3 = *(_QWORD *)&a2->NdisReserved[24];
  v4 = a3;
  if ( *(_DWORD *)(v3 + 32) == 1 )
  {
    v7 = 0;
    if ( a3 != -1071448017 )
      v7 = a3;
    v4 = v7;
  }
  *(_QWORD *)(v3 + 60) = *(_QWORD *)&a2->DATA.METHOD_INFORMATION.OutputBufferLength;
  ExFreePoolWithTag(a2, 0);
  v6 = KfRaiseIrql(2u);
  a1[19](a1[4], v3, v4);
  KeLowerIrql(v6);
}
