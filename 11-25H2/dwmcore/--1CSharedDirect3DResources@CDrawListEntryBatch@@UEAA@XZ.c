/*
 * XREFs of ??1CSharedDirect3DResources@CDrawListEntryBatch@@UEAA@XZ @ 0x18022944C
 * Callers:
 *     ??_ECSharedDirect3DResources@CDrawListEntryBatch@@UEAAPEAXI@Z @ 0x180229410 (--_ECSharedDirect3DResources@CDrawListEntryBatch@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CDrawListEntryBatch::CSharedDirect3DResources::~CSharedDirect3DResources(
        CDrawListEntryBatch::CSharedDirect3DResources *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 106);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 74);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 38);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 34);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 14);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
}
