/*
 * XREFs of ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x14010EF50
 * Callers:
 *     NtGdiResizePalette @ 0x14010EC60 (NtGdiResizePalette.c)
 *     GreRealizePalette @ 0x140266580 (GreRealizePalette.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::RestoreAttributes(XDCOBJ *this)
{
  struct _DC_ATTR *UserAttr; // rax

  if ( *((_DWORD *)this + 2) && (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) != 0 )
  {
    if ( (*((_DWORD *)this + 8) & 2) == 0 )
    {
      UserAttr = XDCOBJ::GetUserAttr(this);
      if ( UserAttr )
        DC::RestoreAttributes(*(DC **)this, UserAttr);
    }
    *(_DWORD *)(*(_QWORD *)this + 44LL) &= ~2u;
    *((_DWORD *)this + 2) = 0;
  }
}
