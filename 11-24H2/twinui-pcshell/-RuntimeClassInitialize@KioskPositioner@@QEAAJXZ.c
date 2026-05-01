/*
 * XREFs of ?RuntimeClassInitialize@KioskPositioner@@QEAAJXZ @ 0x1800DBCDC
 * Callers:
 *     ??$MakeAndInitialize@VKioskPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800DBC30 (--$MakeAndInitialize@VKioskPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z @ 0x1800460A4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z.c)
 *     ?LoadAssignedAccessConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1801FE1D4 (-LoadAssignedAccessConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguratio.c)
 *     ??$?4U?$default_delete@VPrimaryAppProxyBase@@@std@@$0A@@?$unique_ptr@VPrimaryAppProxyBase@@U?$default_delete@VPrimaryAppProxyBase@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1804F050C (--$-4U-$default_delete@VPrimaryAppProxyBase@@@std@@$0A@@-$unique_ptr@VPrimaryAppProxyBase@@U-$de.c)
 *     ??1?$_Optional_destruct_base@UKioskPositionerConfiguration@KioskPositioner@@$0A@@std@@QEAA@XZ @ 0x1804F0F40 (--1-$_Optional_destruct_base@UKioskPositionerConfiguration@KioskPositioner@@$0A@@std@@QEAA@XZ.c)
 *     ??_GKioskPositionerConfiguration@KioskPositioner@@QEAAPEAXI@Z @ 0x1804F1254 (--_GKioskPositionerConfiguration@KioskPositioner@@QEAAPEAXI@Z.c)
 *     ?LoadShellLauncherConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1804F24EC (-LoadShellLauncherConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguration.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KioskPositioner::RuntimeClassInitialize(KioskPositioner *this)
{
  CImmersiveShellComponent *v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  const char *v6; // r9
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 AssignedAccessConfiguration; // rax
  unsigned int v10; // edx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  char v14; // [rsp+28h] [rbp-30h]
  char v15; // [rsp+30h] [rbp-28h]
  _BYTE v16[32]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (KioskPositioner *)((char *)this + 40);
  try
  {
    v3 = CImmersiveShellComponent::RegisterServiceInformation(v2, &GUID_4318ccd5_092f_4ad4_9bc2_6962f0b2d986);
    v5 = v3;
    if ( v3 >= 0 )
    {
      KioskPositioner::LoadShellLauncherConfiguration(v4, &v13);
      if ( v15 )
        goto LABEL_12;
      AssignedAccessConfiguration = KioskPositioner::LoadAssignedAccessConfiguration(v8, v16);
      v11 = AssignedAccessConfiguration;
      if ( *(_BYTE *)(AssignedAccessConfiguration + 16) )
      {
        if ( v15 )
        {
          std::unique_ptr<PrimaryAppProxyBase>::operator=<std::default_delete<PrimaryAppProxyBase>,0>(
            &v13,
            AssignedAccessConfiguration);
          v14 = *(_BYTE *)(v11 + 8);
        }
        else
        {
          v12 = *(_QWORD *)AssignedAccessConfiguration;
          *(_QWORD *)v11 = 0LL;
          v13 = v12;
          v14 = *(_BYTE *)(v11 + 8);
          v15 = 1;
        }
      }
      else if ( v15 )
      {
        KioskPositioner::KioskPositionerConfiguration::`scalar deleting destructor'(
          (KioskPositioner::KioskPositionerConfiguration *)&v13,
          v10);
        v15 = 0;
      }
      std::_Optional_destruct_base<KioskPositioner::KioskPositionerConfiguration,0>::~_Optional_destruct_base<KioskPositioner::KioskPositionerConfiguration,0>(v16);
      if ( v15 )
      {
LABEL_12:
        *((_BYTE *)this + 632) = 1;
        std::unique_ptr<PrimaryAppProxyBase>::operator=<std::default_delete<PrimaryAppProxyBase>,0>(
          (char *)this + 640,
          &v13);
        *((_BYTE *)this + 633) = v14;
      }
      std::_Optional_destruct_base<KioskPositioner::KioskPositionerConfiguration,0>::~_Optional_destruct_base<KioskPositioner::KioskPositionerConfiguration,0>(&v13);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F8,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v3);
      result = v5;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x208,
                           (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v6);
  }
  return result;
}
