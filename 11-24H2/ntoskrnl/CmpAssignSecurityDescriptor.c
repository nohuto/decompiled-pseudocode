/*
 * XREFs of CmpAssignSecurityDescriptor @ 0x140880648
 * Callers:
 *     CmpCreateTombstone @ 0x140668414 (CmpCreateTombstone.c)
 * Callees:
 *     CmpGetSecurityDescriptorNodeEx @ 0x14088067C (CmpGetSecurityDescriptorNodeEx.c)
 */

__int64 __fastcall CmpAssignSecurityDescriptor(ULONG_PTR a1, __int64 a2, __int64 a3, void *Src)
{
  return CmpGetSecurityDescriptorNodeEx(a1, Src, 0, a3 + 44);
}
