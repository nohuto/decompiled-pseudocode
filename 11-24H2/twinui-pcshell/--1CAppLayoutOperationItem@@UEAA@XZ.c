/*
 * XREFs of ??1CAppLayoutOperationItem@@UEAA@XZ @ 0x1806C6E44
 * Callers:
 *     ??_GCAppLayoutAnimationData@@UEAAPEAXI@Z @ 0x1806C6E70 (--_GCAppLayoutAnimationData@@UEAAPEAXI@Z.c)
 *     ??_GCAppLayoutOperationItem@@UEAAPEAXI@Z @ 0x1806C7280 (--_GCAppLayoutOperationItem@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CAppLayoutOperationItem::~CAppLayoutOperationItem(CAppLayoutOperationItem *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
