/*
 * XREFs of ?OnInputConfigChanged@SystemContextManager@@QEAAXXZ @ 0x18000BB70
 * Callers:
 *     ?Broadcast@InputConfigContextProvider@@AEAAXXZ @ 0x18000BA1C (-Broadcast@InputConfigContextProvider@@AEAAXXZ.c)
 * Callees:
 *     ?GetCurrentContext@InputConfigContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x18000CAD0 (-GetCurrentContext@InputConfigContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 *     ?GetInstance@InputConfigContextProvider@@SAPEAV1@XZ @ 0x18000F1DC (-GetInstance@InputConfigContextProvider@@SAPEAV1@XZ.c)
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x18007AA64 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessInputConfigMessage@SystemContextManager@@AEAAJAEBUInputConfigContextMessage@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x1800945D0 (-ProcessInputConfigMessage@SystemContextManager@@AEAAJAEBUInputConfigContextMessage@@PEAVBamoSys.c)
 *     ?_Throw_bad_variant_access@std@@YAXXZ @ 0x18009B664 (-_Throw_bad_variant_access@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SystemContextManager::OnInputConfigChanged(SystemContextManager *this)
{
  struct InputConfigContextProvider *Instance; // rax
  int v3; // eax
  int v4[6]; // [rsp+20h] [rbp-28h] BYREF
  char v5; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_QWORD *)this + 7) != *((_QWORD *)this + 8) )
  {
    v5 = 0;
    Instance = InputConfigContextProvider::GetInstance();
    if ( (int)InputConfigContextProvider::GetCurrentContext(Instance, v4) >= 0 )
    {
      if ( v5 != 1 )
        std::_Throw_bad_variant_access();
      v3 = SystemContextManager::ProcessInputConfigMessage(this, (const struct InputConfigContextMessage *)v4, 0LL);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x5A,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\systemcontext\\manager\\systemcontextmanager.cpp",
          (const char *)(unsigned int)v3,
          v4[0]);
    }
    std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy(v4);
  }
}
