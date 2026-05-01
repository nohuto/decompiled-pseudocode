/*
 * XREFs of ??1CAppLayoutItem@@UEAA@XZ @ 0x180211FB0
 * Callers:
 *     ??_ECAppLayoutItem@@UEAAPEAXI@Z @ 0x180211F70 (--_ECAppLayoutItem@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CAppLayoutItem::~CAppLayoutItem(CAppLayoutItem *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 6);
  *((_DWORD *)this + 5) = -1073741823;
}
