/*
 * XREFs of NdisSetThreadObjectCompartmentId @ 0x140173530
 * Callers:
 *     ?ndisNsiSetThreadInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1400709E0 (-ndisNsiSetThreadInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     ndisCmSetThreadState @ 0x14004D090 (ndisCmSetThreadState.c)
 */

__int64 __fastcall NdisSetThreadObjectCompartmentId(struct _KTHREAD *a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return ndisCmSetThreadState(a1, &v3, 0LL);
}
