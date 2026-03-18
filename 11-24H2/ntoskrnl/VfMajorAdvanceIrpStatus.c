/*
 * XREFs of VfMajorAdvanceIrpStatus @ 0x140B92DC8
 * Callers:
 *     IovpCompleteRequest2 @ 0x140BA6DE4 (IovpCompleteRequest2.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VfMajorAdvanceIrpStatus(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  __int64 v6; // r9
  __int64 v7; // rax

  v4 = a2;
  if ( VfVerifyMode <= 2 || (MmVerifierData & 0x1000) == 0 )
    return 0LL;
  v6 = *a1;
  if ( (unsigned __int8)v6 > 0x1Bu )
    v7 = ((_BYTE)v6 != 0xFF) + 28LL;
  else
    v7 = *a1;
  if ( *((_QWORD *)&unk_140FFEC38 + 12 * v7) && (unsigned int)guard_dispatch_icall_no_overrides(a1, a2, a3, v6) )
    return 1LL;
  if ( qword_140FFF6B8 )
    return guard_dispatch_icall_no_overrides(a1, v4, a3, v6);
  else
    return 0LL;
}
