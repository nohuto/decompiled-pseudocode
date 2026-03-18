/*
 * XREFs of ??1DXGDOORBELL@@IEAA@XZ @ 0x1401D7950
 * Callers:
 *     ?DestroyDoorbell@DXGHWQUEUE@@QEAAXXZ @ 0x1401D8240 (-DestroyDoorbell@DXGHWQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x140043DA0 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 */

void __fastcall DXGDOORBELL::~DXGDOORBELL(DXGDOORBELL *this)
{
  if ( *(_DWORD *)this )
    DXGPROCESS::FreeHandleSafe(
      *(DXGPROCESS **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 40LL),
      *(_DWORD *)this);
}
