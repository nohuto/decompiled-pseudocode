/*
 * XREFs of ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x14003AB80
 * Callers:
 *     GreGetClipBox @ 0x140039310 (GreGetClipBox.c)
 *     HmgCheckDCForPrivateReferences @ 0x14017571C (HmgCheckDCForPrivateReferences.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x14003ABBC (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 */

struct REGION *__fastcall DC::prgnRao(DC *this)
{
  DC *v1; // r8
  struct REGION *result; // rax
  bool v3; // zf
  struct REGION *v4; // r9

  v1 = this;
  if ( !*((_QWORD *)this + 146) )
    return (struct REGION *)*((_QWORD *)v1 + 144);
  if ( (*((_DWORD *)this + 10) & 2) == 0 )
    return (struct REGION *)*((_QWORD *)v1 + 144);
  v3 = (unsigned int)DC::bDpiScaledSurface(this) == 0;
  result = v4;
  if ( v3 )
    return (struct REGION *)*((_QWORD *)v1 + 144);
  return result;
}
