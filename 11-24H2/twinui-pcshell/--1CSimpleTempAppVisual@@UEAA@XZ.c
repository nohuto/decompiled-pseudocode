/*
 * XREFs of ??1CSimpleTempAppVisual@@UEAA@XZ @ 0x1805498A8
 * Callers:
 *     ??_ECSimpleTempAppVisual@@UEAAPEAXI@Z @ 0x1805498D0 (--_ECSimpleTempAppVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CSimpleTempAppVisual::~CSimpleTempAppVisual(CSimpleTempAppVisual *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
  *((_DWORD *)this + 3) = -1073741823;
}
