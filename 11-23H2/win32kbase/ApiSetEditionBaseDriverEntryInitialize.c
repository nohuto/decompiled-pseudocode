/*
 * XREFs of ApiSetEditionBaseDriverEntryInitialize @ 0x1C007C604
 * Callers:
 *     Win32UserInitialize @ 0x1C02DBF90 (Win32UserInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetEditionBaseDriverEntryInitialize()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( qword_1C02950B0 && (int)qword_1C02950B0() >= 0 )
  {
    if ( qword_1C02950B8 )
      return (unsigned int)qword_1C02950B8();
    else
      return (unsigned int)-1073741637;
  }
  return v0;
}
