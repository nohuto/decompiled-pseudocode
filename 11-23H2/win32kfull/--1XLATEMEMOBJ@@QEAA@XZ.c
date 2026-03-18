/*
 * XREFs of ??1XLATEMEMOBJ@@QEAA@XZ @ 0x1C02DB690
 * Callers:
 *     NtGdiUpdateColors @ 0x1C02D1F70 (NtGdiUpdateColors.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C007A678 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
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
