/*
 * XREFs of ?InternalQueryInterface@?$CMILCOMBaseT@VID2DBitmapCacheSource@@V1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180042190
 * Callers:
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180040E14 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ @ 0x180041A04 (-ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?QueryInterface@CColorKeyBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180224320 (-QueryInterface@CColorKeyBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILCOMBaseT<ID2DBitmapCacheSource,ID2DBitmapCacheSource,CMilObjectDeleter>::InternalQueryInterface(
        volatile signed __int32 *a1,
        _QWORD *a2,
        volatile signed __int32 **a3)
{
  int v5; // esi
  __int64 v6; // rax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = -2147024809;
  if ( a3 )
  {
    v6 = *a2 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = a2[1] - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v6 )
    {
      v5 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 120LL))(a1);
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
    if ( _InterlockedAdd(a1 + 2, 1u) <= 0 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v8);
  }
  return (unsigned int)v5;
}
