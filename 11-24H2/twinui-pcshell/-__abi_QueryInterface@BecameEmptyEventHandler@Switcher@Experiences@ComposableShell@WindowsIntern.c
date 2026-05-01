/*
 * XREFs of ?__abi_QueryInterface@BecameEmptyEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x180188BE0
 * Callers:
 *     ?__abi_QueryInterface@BecameEmptyEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1806AF390 (-__abi_QueryInterface@BecameEmptyEventHandler@Switcher@Experiences@ComposableShell@_ea_1806AF390.c)
 *     ?__abi_QueryInterface@BecameEmptyEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1806AF3A0 (-__abi_QueryInterface@BecameEmptyEventHandler@Switcher@Experiences@ComposableShell@_ea_1806AF3A0.c)
 * Callees:
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1801884FC (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     ?Increment@__abi_FTMWeakRefData@@QECAKXZ @ 0x180188F14 (-Increment@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x1801B79B8 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::BecameEmptyEventHandler::__abi_QueryInterface(
        _QWORD *a1,
        Platform::Guid *a2,
        void **a3)
{
  void **v3; // r11
  _QWORD *v4; // r10
  __int64 v5; // r8
  struct Platform::Guid *v6; // r9
  _QWORD *v7; // rcx

  v3 = a3;
  v4 = a1;
  if ( !*(_DWORD *)a2
    && *((_DWORD *)a2 + 1) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && *((_DWORD *)a2 + 2) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *((_DWORD *)a2 + 3) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || *(_DWORD *)a2 == -485029060
    && *((_DWORD *)a2 + 1) == *(_DWORD *)&_uuidof__AVBecameEmptyEventHandler_Switcher_Experiences_ComposableShell_WindowsInternal__.Data2
    && *((_DWORD *)a2 + 2) == *(_DWORD *)_uuidof__AVBecameEmptyEventHandler_Switcher_Experiences_ComposableShell_WindowsInternal__.Data4
    && *((_DWORD *)a2 + 3) == *(_DWORD *)&_uuidof__AVBecameEmptyEventHandler_Switcher_Experiences_ComposableShell_WindowsInternal__.Data4[4]
    || (-(__int64)(a1[4] != 0LL) & (unsigned __int64)(a1 + 3)) != 0
    && *(_DWORD *)a2 == -1796592748
    && *((_DWORD *)a2 + 1) == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
    && *((_DWORD *)a2 + 2) == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
    && *((_DWORD *)a2 + 3) == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
  {
    v7 = a1 + 3;
    goto LABEL_11;
  }
  if ( Platform::Guid::Equals(
         a2,
         &_uuidof__AVBecameEmptyEventHandler_Switcher_Experiences_ComposableShell_WindowsInternal__) )
  {
    v7 = (_QWORD *)v5;
LABEL_11:
    *v3 = v4;
    __abi_FTMWeakRefData::Increment(v7);
    return 0LL;
  }
  if ( (-(__int64)(*(_QWORD *)(v5 + 8) != 0LL) & v5) != 0 )
    return (unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                           (__abi_FTMWeakRefData *)(v5 & -(__int64)(v4[4] != 0LL)),
                           v6,
                           v3) != 0
         ? 0x80004002
         : 0;
  else
    return 2147500034LL;
}
