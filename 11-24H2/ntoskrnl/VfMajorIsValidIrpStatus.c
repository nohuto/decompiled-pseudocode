/*
 * XREFs of VfMajorIsValidIrpStatus @ 0x140B92FB4
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140B83FA0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x140B841A0 (ViGenericVerifyIrpStackUpward.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VfMajorIsValidIrpStatus(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  unsigned int v5; // edi
  __int64 v7; // rax

  v4 = *a1;
  v5 = a2;
  if ( (unsigned __int8)v4 > 0x1Bu )
    v7 = ((_BYTE)v4 != 0xFF) + 28LL;
  else
    v7 = *a1;
  if ( (!*((_QWORD *)&unk_140FFEC40 + 12 * v7) || (unsigned int)guard_dispatch_icall_no_overrides(a1, a2, v4, a4))
    && qword_140FFF6C0 )
  {
    return guard_dispatch_icall_no_overrides(a1, v5, v4, a4);
  }
  else
  {
    return 0LL;
  }
}
