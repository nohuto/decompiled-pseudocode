/*
 * XREFs of ??1XLATEMEMOBJ@@QEAA@XZ @ 0x1403119CC
 * Callers:
 *     NtGdiUpdateColors @ 0x14030F8B0 (NtGdiUpdateColors.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400CB47C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 */

void __fastcall XLATEMEMOBJ::~XLATEMEMOBJ(Gre::Base **this)
{
  Gre::Base *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    FreeThreadBufferWithTag(v2);
    *this = 0LL;
  }
  EXLATEOBJ::vAltUnlock(this);
}
