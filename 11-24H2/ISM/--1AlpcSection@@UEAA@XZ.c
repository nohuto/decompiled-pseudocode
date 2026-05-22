/*
 * XREFs of ??1AlpcSection@@UEAA@XZ @ 0x18010CCFC
 * Callers:
 *     ??_GAlpcSection@@UEAAPEAXI@Z @ 0x18010CF20 (--_GAlpcSection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Reset@SipcWin32Handle@@QEAAXXZ @ 0x180094EA0 (-Reset@SipcWin32Handle@@QEAAXXZ.c)
 *     ?SendAlpcDisconnect@AlpcSection@@CAJPEAXAEBVSipcSectionId@@@Z @ 0x180110514 (-SendAlpcDisconnect@AlpcSection@@CAJPEAXAEBVSipcSectionId@@@Z.c)
 *     ?SendXvmmDisconnect@AlpcSection@@CAJ_K@Z @ 0x180110628 (-SendXvmmDisconnect@AlpcSection@@CAJ_K@Z.c)
 *     ?Unmap@AlpcSection@@CAJPEAX00@Z @ 0x180110818 (-Unmap@AlpcSection@@CAJPEAX00@Z.c)
 *     SipcFailFast @ 0x1801108AC (SipcFailFast.c)
 */

void __fastcall AlpcSection::~AlpcSection(AlpcSection *this)
{
  unsigned __int64 v2; // rcx
  int v3; // eax
  void *v4; // rdx
  int v5; // eax

  *(_QWORD *)this = &AlpcSection::`vftable';
  v2 = *((_QWORD *)this + 14);
  if ( v2 )
  {
    if ( (*((_DWORD *)this + 22) & 0xFFFFFFFB) != 0 )
    {
      v3 = AlpcSection::SendXvmmDisconnect(v2);
      if ( v3 < 0 )
      {
        SipcFailFast((unsigned int)v3);
        __debugbreak();
      }
    }
  }
  v4 = (void *)*((_QWORD *)this + 12);
  if ( v4 )
  {
    v5 = AlpcSection::Unmap(*((void **)this + 4), v4, *((void **)this + 13));
    if ( v5 < 0 )
    {
      SipcFailFast((unsigned int)v5);
      __debugbreak();
    }
    if ( *((_DWORD *)this + 22) == 1 )
      AlpcSection::SendAlpcDisconnect(*((void **)this + 12), (AlpcSection *)((char *)this + 56));
  }
  SipcWin32Handle::Reset((void **)this + 12);
  *(_QWORD *)this = &SipcSection::`vftable';
}
