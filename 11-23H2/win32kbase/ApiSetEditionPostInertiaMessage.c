/*
 * XREFs of ApiSetEditionPostInertiaMessage @ 0x1C0207294
 * Callers:
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01E1BC4 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionPostInertiaMessage(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // edi

  v5 = 0;
  if ( qword_1C0296A40 && (int)qword_1C0296A40() >= 0 && qword_1C0296A48 )
    return (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))qword_1C0296A48)(
                           a1,
                           a2,
                           a3,
                           a4,
                           a5);
  return v5;
}
