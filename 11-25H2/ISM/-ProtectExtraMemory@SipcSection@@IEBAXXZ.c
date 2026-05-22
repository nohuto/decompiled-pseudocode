/*
 * XREFs of ?ProtectExtraMemory@SipcSection@@IEBAXXZ @ 0x180085A34
 * Callers:
 *     ?Attach@AlpcSection@@CAJPEBVAlpcPort@@PEAX_K12AEAVSipcSectionId@@PEAPEAV1@@Z @ 0x18010B744 (-Attach@AlpcSection@@CAJPEBVAlpcPort@@PEAX_K12AEAVSipcSectionId@@PEAPEAV1@@Z.c)
 *     ?Create@AlpcSection@@SAJPEBVAlpcPort@@_KAEBVSipcSectionId@@PEAXPEAPEAV1@@Z @ 0x18010BB24 (-Create@AlpcSection@@SAJPEBVAlpcPort@@_KAEBVSipcSectionId@@PEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ?ProtectMemory@SipcSection@@AEBAJ_K0K@Z @ 0x18009AB3C (-ProtectMemory@SipcSection@@AEBAJ_K0K@Z.c)
 */

void __fastcall SipcSection::ProtectExtraMemory(SipcSection *this)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // rdi
  unsigned __int64 v4; // rbx

  v1 = *((_QWORD *)this + 6);
  v2 = *((_QWORD *)this + 5);
  v4 = (v2 - 40) & 0xFFFFFFFFFFFFF000uLL;
  if ( v1 >= v4 )
    v4 = *((_QWORD *)this + 6);
  SipcSection::ProtectMemory(this, v1, v4 - v1, 1u);
  SipcSection::ProtectMemory(this, v4, v2 - v4, 2u);
}
