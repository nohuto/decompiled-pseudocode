/*
 * XREFs of ?ProcessSetSourceModifiers@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATION_SETSOURCEMODIFIERS@@@Z @ 0x1801C21B0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B80C0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??4?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z @ 0x180139730 (--4-$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulation::ProcessSetSourceModifiers(
        CManipulation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MANIPULATION_SETSOURCEMODIFIERS *a3)
{
  __int64 Resource; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x2Cu);
  Microsoft::WRL::ComPtr<CVisual>::operator=((__int64 *)this + 62, Resource);
  v7 = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 3), 0x2Cu);
  Microsoft::WRL::ComPtr<CVisual>::operator=((__int64 *)this + 63, v7);
  v8 = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 4), 0x2Cu);
  Microsoft::WRL::ComPtr<CVisual>::operator=((__int64 *)this + 64, v8);
  v9 = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 5), 0x2Cu);
  Microsoft::WRL::ComPtr<CVisual>::operator=((__int64 *)this + 65, v9);
  v10 = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 6), 0x2Cu);
  Microsoft::WRL::ComPtr<CVisual>::operator=((__int64 *)this + 66, v10);
  (*(void (__fastcall **)(CManipulation *, __int64, CManipulation *))(*(_QWORD *)this + 80LL))(this, 13LL, this);
  return 0LL;
}
