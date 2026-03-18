/*
 * XREFs of ?DxgkEngReleaseDCApiExt@@YAHPEAUHDC__@@0@Z @ 0x1C0168F90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngReleaseDCApiExt(HDC a1, HDC a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( qword_1C02944C0 && (int)qword_1C02944C0() >= 0 && qword_1C02944C8 )
    return (unsigned int)qword_1C02944C8(a1, a2);
  return v2;
}
