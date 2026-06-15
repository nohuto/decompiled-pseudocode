/*
 * XREFs of ??R?$default_delete@VCStreamClassPolicyGains@@@std@@QEBAXPEAVCStreamClassPolicyGains@@@Z @ 0x18003C038
 * Callers:
 *     ??$?4U?$default_delete@VCStreamClassPolicyGains@@@std@@$0A@@?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18003BD18 (--$-4U-$default_delete@VCStreamClassPolicyGains@@@std@@$0A@@-$unique_ptr@VCStreamClassPolicyGain.c)
 *     ??1?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@std@@QEAA@XZ @ 0x18003BF44 (--1-$unique_ptr@VCStreamClassPolicyGains@@U-$default_delete@VCStreamClassPolicyGains@@@std@@@std.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002067C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CStreamClassPolicyGains@@QEAA@XZ @ 0x18003BF64 (--1CStreamClassPolicyGains@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<CStreamClassPolicyGains>::operator()(__int64 a1, CStreamClassPolicyGains *a2)
{
  if ( a2 )
  {
    CStreamClassPolicyGains::~CStreamClassPolicyGains(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x1A8);
  }
}
