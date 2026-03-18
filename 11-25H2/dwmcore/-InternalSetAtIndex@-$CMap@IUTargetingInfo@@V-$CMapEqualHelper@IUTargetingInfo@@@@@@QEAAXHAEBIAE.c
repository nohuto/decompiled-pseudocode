/*
 * XREFs of ?InternalSetAtIndex@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAXHAEBIAEBUTargetingInfo@@@Z @ 0x1801B1508
 * Callers:
 *     ?SetAtIndex@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHHAEBIAEBUTargetingInfo@@@Z @ 0x1801B1498 (-SetAtIndex@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHHAEBIAEBUTarget.c)
 *     ?Add@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHAEBIAEBUTargetingInfo@@@Z @ 0x1801B1718 (-Add@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHAEBIAEBUTargetingInfo@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F114C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CMap<unsigned int,TargetingInfo,CMapEqualHelper<unsigned int,TargetingInfo>>::InternalSetAtIndex(
        __int64 *a1,
        int a2,
        unsigned int *a3,
        __int64 a4)
{
  __int64 v5; // rcx
  __int64 result; // rax
  _DWORD *v7; // rdx
  _DWORD *v8; // rcx
  __int64 (__fastcall ****v9)(_QWORD); // rcx

  v5 = a2;
  result = *a1;
  v7 = (_DWORD *)(*a1 + 4LL * a2);
  if ( v7 )
  {
    result = *a3;
    *v7 = result;
  }
  v8 = (_DWORD *)(a1[1] + 16 * v5);
  if ( v8 )
  {
    *v8 = *(_DWORD *)a4;
    v9 = (__int64 (__fastcall ****)(_QWORD))(v8 + 2);
    *v9 = *(__int64 (__fastcall ****)(_QWORD))(a4 + 8);
    return Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v9);
  }
  return result;
}
