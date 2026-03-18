/*
 * XREFs of ?InternalQueryInterface@?$CMILCOMBaseT@VISwapChainBuffer@@V1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802CD904
 * Callers:
 *     ?QueryInterface@CLegacySwapChainBuffer@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802CE5F0 (-QueryInterface@CLegacySwapChainBuffer@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILCOMBaseT<ISwapChainBuffer,ISwapChainBuffer,CMilObjectDeleter>::InternalQueryInterface(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  int v5; // edi
  __int64 v6; // rax

  v5 = -2147024809;
  if ( a3 )
  {
    v6 = *a2 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = a2[1] - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v6 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 216LL))(a1);
      if ( v5 < 0 )
      {
        *a3 = 0LL;
        return (unsigned int)v5;
      }
    }
    else
    {
      *a3 = a1;
      v5 = 0;
    }
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a1 + 8));
  }
  return (unsigned int)v5;
}
