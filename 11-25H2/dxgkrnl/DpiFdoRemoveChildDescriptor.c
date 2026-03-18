/*
 * XREFs of DpiFdoRemoveChildDescriptor @ 0x14023E4B8
 * Callers:
 *     DpiFdoHandleTargetConnectionState @ 0x14023BD30 (DpiFdoHandleTargetConnectionState.c)
 *     DpiFdoRemoveChildDescriptors @ 0x14023E500 (DpiFdoRemoveChildDescriptors.c)
 * Callees:
 *     DpiFdoReleaseChildDescriptor @ 0x14040A068 (DpiFdoReleaseChildDescriptor.c)
 */

__int64 __fastcall DpiFdoRemoveChildDescriptor(__int64 a1, _QWORD *a2)
{
  _QWORD **v2; // r8
  void **v3; // rcx

  if ( *(_DWORD *)a2 == 1 )
    --*(_DWORD *)(a1 + 3616);
  v2 = (_QWORD **)a2[4];
  if ( v2[1] != a2 + 4 || (v3 = (void **)a2[5], *v3 != a2 + 4) )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = v3;
  return DpiFdoReleaseChildDescriptor(a2);
}
