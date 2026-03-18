/*
 * XREFs of ?RemoveHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x1802C5AFC
 * Callers:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x1801D8CA0 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ?DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ @ 0x1801D8DBC (-DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?UnmanageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z @ 0x1801D920C (-UnmanageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z.c)
 *     ??1CD2DResource@@MEAA@XZ @ 0x1801FE840 (--1CD2DResource@@MEAA@XZ.c)
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x18006DBC8 (McTemplateU0t_EventWriteTransfer.c)
 *     ?IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ @ 0x1801E0470 (-IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801E4A58 (McTemplateU0qq_EventWriteTransfer.c)
 */

void __fastcall CD2DContext::RemoveHwProtectedResource(CD2DContext *this)
{
  int v1; // r8d
  CD2DContext *v3; // rcx
  char IsHardwareProtectionDisabled; // al
  char v5; // dl

  v1 = *((_DWORD *)this + 108);
  *((_DWORD *)this + 108) = v1 - 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_HW_PROTECTED_ENTITY_CHANGE,
      v1,
      v1 - 1);
  if ( !*((_DWORD *)this + 108) )
  {
    CD2DContext::IsHardwareProtectionDisabled(this);
    *((_BYTE *)this + 436) = 0;
    IsHardwareProtectionDisabled = CD2DContext::IsHardwareProtectionDisabled(v3);
    if ( v5 != IsHardwareProtectionDisabled && (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0t_EventWriteTransfer(
        (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (__int64)&EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE,
        0LL);
  }
}
