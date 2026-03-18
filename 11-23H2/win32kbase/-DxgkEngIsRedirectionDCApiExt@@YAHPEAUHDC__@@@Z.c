/*
 * XREFs of ?DxgkEngIsRedirectionDCApiExt@@YAHPEAUHDC__@@@Z @ 0x1C0168D90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngIsRedirectionDCApiExt(HDC a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_1C02944B0 && (int)qword_1C02944B0() >= 0 && qword_1C02944B8 )
    return (unsigned int)qword_1C02944B8(a1);
  return v1;
}
