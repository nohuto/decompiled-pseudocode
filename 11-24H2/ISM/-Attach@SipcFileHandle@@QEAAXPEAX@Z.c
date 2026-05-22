/*
 * XREFs of ?Attach@SipcFileHandle@@QEAAXPEAX@Z @ 0x18010D848
 * Callers:
 *     ?Share@AlpcSection@@QEAAJG_NPEA_K@Z @ 0x180083EB0 (-Share@AlpcSection@@QEAAJG_NPEA_K@Z.c)
 * Callees:
 *     ?Reset@SipcFileHandle@@QEAAXXZ @ 0x18009BAC8 (-Reset@SipcFileHandle@@QEAAXXZ.c)
 */

void __fastcall SipcFileHandle::Attach(HANDLE *this, HANDLE a2)
{
  if ( a2 != *this )
  {
    SipcFileHandle::Reset(this);
    *this = a2;
  }
}
