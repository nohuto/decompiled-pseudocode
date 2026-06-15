/*
 * XREFs of ?GetEffectPackDevNodeRegistryRoot@@YAJPEBGPEAPEAUHKEY__@@@Z @ 0x140076C9C
 * Callers:
 *     ?GetEffectPackFxPropertyStore@@YAJU_GUID@@PEAPEAUIPropertyStore@@@Z @ 0x14005701C (-GetEffectPackFxPropertyStore@@YAJU_GUID@@PEAPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1400659C0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall GetEffectPackDevNodeRegistryRoot(DEVINSTID_W pDeviceID, PHKEY phkDevice)
{
  CONFIGRET v3; // eax
  DWORD v4; // eax
  __int64 v5; // rdx
  CONFIGRET v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DEVNODE pdnDevInst; // [rsp+48h] [rbp+10h] BYREF

  *phkDevice = 0LL;
  pdnDevInst = 0;
  v3 = CM_Locate_DevNodeW(&pdnDevInst, pDeviceID, 0);
  v4 = CM_MapCrToWin32Err(v3, 0x507u);
  if ( v4 )
  {
    v5 = 40LL;
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             v5,
             (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp",
             (const char *)v4);
  }
  v7 = CM_Open_DevNode_Key(pdnDevInst, 0x20019u, 0, 1u, phkDevice, 1u);
  v4 = CM_MapCrToWin32Err(v7, 0x507u);
  if ( v4 )
  {
    v5 = 41LL;
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             v5,
             (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp",
             (const char *)v4);
  }
  return 0LL;
}
