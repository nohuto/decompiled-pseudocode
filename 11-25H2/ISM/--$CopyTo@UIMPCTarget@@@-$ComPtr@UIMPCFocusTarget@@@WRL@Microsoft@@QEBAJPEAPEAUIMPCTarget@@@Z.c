/*
 * XREFs of ??$CopyTo@UIMPCTarget@@@?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEBAJPEAPEAUIMPCTarget@@@Z @ 0x18009A9FC
 * Callers:
 *     ?HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z @ 0x1800FB750 (-HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IMPCFocusTarget>::CopyTo<IMPCTarget>(_QWORD *a1, __int64 a2)
{
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_b1814bf0_3b70_4438_85b7_b79ea0945ec5, a2);
}
