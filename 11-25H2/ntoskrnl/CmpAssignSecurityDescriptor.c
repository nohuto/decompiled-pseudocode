/*
 * XREFs of CmpAssignSecurityDescriptor @ 0x14097613C
 * Callers:
 *     CmpCreateTombstone @ 0x14065C944 (CmpCreateTombstone.c)
 * Callees:
 *     CmpGetSecurityDescriptorNodeEx @ 0x140976170 (CmpGetSecurityDescriptorNodeEx.c)
 */

__int64 __fastcall CmpAssignSecurityDescriptor(ULONG_PTR a1, ULONG_PTR a2, __int64 a3, void *Src)
{
  return CmpGetSecurityDescriptorNodeEx(a1, a2, Src, 0, a3 + 44);
}
