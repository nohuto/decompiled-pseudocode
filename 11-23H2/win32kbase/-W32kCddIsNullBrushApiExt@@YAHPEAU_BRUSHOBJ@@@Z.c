/*
 * XREFs of ?W32kCddIsNullBrushApiExt@@YAHPEAU_BRUSHOBJ@@@Z @ 0x1C00AB970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall W32kCddIsNullBrushApiExt(struct _BRUSHOBJ *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_1C02945F0 && (int)qword_1C02945F0() >= 0 && qword_1C02945F8 )
    return (unsigned int)qword_1C02945F8(a1);
  return v1;
}
