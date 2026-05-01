/*
 * XREFs of ?HasWindowFocusUpdatedFrequently@SnapEducationHandler@@AEAA_NXZ @ 0x18014FF30
 * Callers:
 *     ?OnApplicationViewChanged@SnapEducationHandler@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18014F430 (-OnApplicationViewChanged@SnapEducationHandler@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 * Callees:
 *     <none>
 */

bool __fastcall SnapEducationHandler::HasWindowFocusUpdatedFrequently(SnapEducationHandler *this)
{
  unsigned __int64 v2; // rcx
  __int64 v4; // r8
  unsigned int v5; // r9d
  __int64 v6; // r10

  v2 = *((_QWORD *)this + 8);
  if ( v2 >= *((unsigned __int8 *)this + 25) )
    return 0;
  v4 = *((_QWORD *)this + 7);
  v5 = 0;
  v6 = v4 + v2;
  while ( v4 != v6 )
    v5 += *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8 * (v4++ & (*((_QWORD *)this + 6) - 1LL))) + 48LL);
  return v5 > *((unsigned __int8 *)this + 24);
}
