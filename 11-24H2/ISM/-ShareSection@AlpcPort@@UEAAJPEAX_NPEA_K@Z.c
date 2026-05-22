/*
 * XREFs of ?ShareSection@AlpcPort@@UEAAJPEAX_NPEA_K@Z @ 0x1801107B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Share@AlpcSection@@QEAAJG_NPEA_K@Z @ 0x180083EB0 (-Share@AlpcSection@@QEAAJG_NPEA_K@Z.c)
 *     ?FindSection@SipcPort@@IEAAPEAVSipcSection@@PEAX@Z @ 0x18010EDF4 (-FindSection@SipcPort@@IEAAPEAVSipcSection@@PEAX@Z.c)
 */

__int64 __fastcall AlpcPort::ShareSection(AlpcPort *this, void *a2, char a3, unsigned __int64 *a4)
{
  AlpcSection *Section; // rax
  __int64 v7; // r11

  Section = SipcPort::FindSection(this, a2);
  if ( Section )
    return AlpcSection::Share(Section, *(_WORD *)(v7 + 496), a3, a4);
  else
    return 2147942487LL;
}
