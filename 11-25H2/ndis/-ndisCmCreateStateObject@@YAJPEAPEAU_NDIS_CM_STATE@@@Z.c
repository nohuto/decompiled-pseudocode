/*
 * XREFs of ?ndisCmCreateStateObject@@YAJPEAPEAU_NDIS_CM_STATE@@@Z @ 0x14004D290
 * Callers:
 *     ndisCmSetThreadState @ 0x14004D090 (ndisCmSetThreadState.c)
 *     ?NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z @ 0x140152150 (-NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCmCreateStateObject(struct _NDIS_CM_STATE **a1)
{
  __int64 result; // rax
  _QWORD v3[2]; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v4[4]; // [rsp+60h] [rbp-38h] BYREF
  __int128 v5; // [rsp+80h] [rbp-18h]

  v3[1] = L"\\Device\\NDIS";
  v3[0] = 1703960LL;
  v4[0] = 48LL;
  v4[3] = 576LL;
  v4[1] = 0LL;
  v4[2] = v3;
  v5 = 0LL;
  result = ObCreateObject(0LL, qword_1401275C8, v4, 0LL, 0LL, 16, 0, 0, a1);
  if ( (int)result >= 0 )
    *(_OWORD *)*a1 = 0LL;
  return result;
}
