/*
 * XREFs of ?SetScaleFactorOverride@@YAJAEAU_LUID@@IHPEAU_DPI_INFORMATION@@@Z @ 0x1C01652E0
 * Callers:
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C0166C90 (DrvDisplayConfigSetScaleFactorOverride.c)
 *     DrvDxgkUpgradeLegacyDpiSettings @ 0x1C0166F60 (DrvDxgkUpgradeLegacyDpiSettings.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SetScaleFactorOverride(struct _LUID *a1, __int64 a2, unsigned int a3, struct _DPI_INFORMATION *a4)
{
  unsigned int v6; // esi
  __int64 DxgkWin32kInterface; // rax

  v6 = a2;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  return (*(__int64 (__fastcall **)(struct _LUID *, _QWORD, _QWORD, struct _DPI_INFORMATION *))(DxgkWin32kInterface + 608))(
           a1,
           v6,
           a3,
           a4);
}
