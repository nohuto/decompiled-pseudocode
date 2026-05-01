/*
 * XREFs of ?ObservedKeyDown@JointResize@@UEAAJI@Z @ 0x18053A340
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyGhostDivider@JointResize@@AEAAXXZ @ 0x1801D2E38 (-DestroyGhostDivider@JointResize@@AEAAXXZ.c)
 */

__int64 __fastcall JointResize::ObservedKeyDown(JointResize *this, int a2)
{
  if ( a2 == 17 && *((_QWORD *)this + 10) )
    JointResize::DestroyGhostDivider((JointResize *)((char *)this - 112));
  return 0LL;
}
