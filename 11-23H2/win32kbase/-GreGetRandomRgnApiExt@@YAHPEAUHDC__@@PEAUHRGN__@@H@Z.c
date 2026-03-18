/*
 * XREFs of ?GreGetRandomRgnApiExt@@YAHPEAUHDC__@@PEAUHRGN__@@H@Z @ 0x1C01690B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreGetRandomRgnApiExt(HDC a1, HRGN a2, unsigned int a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( qword_1C0294460 && (int)qword_1C0294460() >= 0 )
  {
    if ( qword_1C0294468 )
      return (unsigned int)qword_1C0294468(a1, a2, a3);
    else
      return (unsigned int)-1;
  }
  return v3;
}
