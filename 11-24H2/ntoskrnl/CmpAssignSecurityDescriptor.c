/*
 * XREFs of CmpAssignSecurityDescriptor @ 0x1408844F8
 * Callers:
 *     CmpCreateTombstone @ 0x140666D04 (CmpCreateTombstone.c)
 * Callees:
 *     CmpGetSecurityDescriptorNodeEx @ 0x14088452C (CmpGetSecurityDescriptorNodeEx.c)
 */

__int64 __fastcall CmpAssignSecurityDescriptor(ULONG_PTR a1, ULONG_PTR a2, __int64 a3, void *Src)
{
  return CmpGetSecurityDescriptorNodeEx(a1, a2, Src, 0, a3 + 44);
}
