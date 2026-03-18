/*
 * XREFs of ??1DXGDOORBELL@@IEAA@XZ @ 0x1401D26A0
 * Callers:
 *     ?DestroyDoorbell@DXGHWQUEUE@@QEAAXXZ @ 0x1401D2F90 (-DestroyDoorbell@DXGHWQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x140043B6C (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 */

void __fastcall DXGDOORBELL::~DXGDOORBELL(DXGDOORBELL *this)
{
  if ( *(_DWORD *)this )
    DXGPROCESS::FreeResourceHandleNoRefSafe(
      *(DXGPROCESS **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 40LL),
      *(_DWORD *)this);
}
