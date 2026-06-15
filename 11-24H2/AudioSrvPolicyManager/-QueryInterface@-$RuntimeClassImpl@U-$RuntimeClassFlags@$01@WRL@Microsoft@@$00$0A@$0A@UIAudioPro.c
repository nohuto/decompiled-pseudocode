/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000E420
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800333D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800333D0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::QueryInterface(
        __int64 a1,
        int *a2,
        _QWORD *a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  int v5; // r10d

  v3 = a1;
  v4 = 0;
  *a3 = 0LL;
  v5 = *a2;
  if ( *(_QWORD *)a2 == __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || v5 == -135935609
    && a2[1] == *(_DWORD *)&GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200.Data2
    && a2[2] == *(_DWORD *)GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200.Data4
    && a2[3] == *(_DWORD *)&GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200.Data4[4]
    || (v3 = a1 + 8, v5 == 782865528)
    && a2[1] == *(_DWORD *)&GUID_2ea99478_7574_414c_8ba3_0c615b1716a4.Data2
    && a2[2] == *(_DWORD *)GUID_2ea99478_7574_414c_8ba3_0c615b1716a4.Data4
    && a2[3] == *(_DWORD *)&GUID_2ea99478_7574_414c_8ba3_0c615b1716a4.Data4[4] )
  {
    *a3 = v3;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v4;
}
