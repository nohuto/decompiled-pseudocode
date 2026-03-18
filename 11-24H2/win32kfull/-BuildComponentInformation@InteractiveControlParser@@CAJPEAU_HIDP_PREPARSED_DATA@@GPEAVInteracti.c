/*
 * XREFs of ?BuildComponentInformation@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAVInteractiveControlDevice@@@Z @ 0x1402F06C4
 * Callers:
 *     ?BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveControlDevice@@@Z @ 0x1402F0A78 (-BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveC.c)
 * Callees:
 *     ?SendDeviceIOControl@InteractiveControlDevice@@QEAAJKPEAXK0KPEAK@Z @ 0x1402EC4FC (-SendDeviceIOControl@InteractiveControlDevice@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?CreateAndLinkComponent@InteractiveControlParser@@CAJPEAU_HIDP_VALUE_CAPS@@HPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@@Z @ 0x1402F0C84 (-CreateAndLinkComponent@InteractiveControlParser@@CAJPEAU_HIDP_VALUE_CAPS@@HPEAU_INTERACTIVECTRL.c)
 *     ?FreeComponentInformation@InteractiveControlParser@@CAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z @ 0x1402F1054 (-FreeComponentInformation@InteractiveControlParser@@CAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall InteractiveControlParser::BuildComponentInformation(
        PHIDP_PREPARSED_DATA PreparsedData,
        __int64 a2,
        struct InteractiveControlDevice *a3)
{
  char *v3; // r15
  struct _HIDP_VALUE_CAPS *ValueCaps; // r14
  struct _HIDP_BUTTON_CAPS *v7; // rsi
  NTSTATUS SpecificValueCaps; // eax
  NTSTATUS v9; // ebx
  UCHAR *v10; // rbx
  USHORT i; // di
  NTSTATUS SpecificButtonCaps; // eax
  USHORT j; // di
  USHORT ButtonCapsLength[2]; // [rsp+40h] [rbp-59h] BYREF
  USHORT ValueCapsLength[2]; // [rsp+44h] [rbp-55h] BYREF
  USHORT v17; // [rsp+48h] [rbp-51h] BYREF
  struct tagINTERACTIVECTRL_COMPONENT_ENTRY *v18; // [rsp+50h] [rbp-49h] BYREF
  unsigned int v19; // [rsp+58h] [rbp-41h] BYREF
  struct _HIDP_VALUE_CAPS v20; // [rsp+60h] [rbp-39h] BYREF

  v3 = (char *)a3 + 72;
  ValueCapsLength[0] = 0;
  ButtonCapsLength[0] = 0;
  ValueCaps = 0LL;
  v7 = 0LL;
  memset_0(&v20, 0, sizeof(v20));
  v17 = 1;
  v18 = 0LL;
  *((_QWORD *)v3 + 15) = v3 + 112;
  *((_QWORD *)v3 + 14) = v3 + 112;
  SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 0, 0, 0, 0LL, ValueCapsLength, PreparsedData);
  v9 = SpecificValueCaps;
  if ( !SpecificValueCaps || SpecificValueCaps == -1072627705 )
  {
    if ( ValueCapsLength[0] )
    {
      ValueCaps = (struct _HIDP_VALUE_CAPS *)Win32AllocPoolZInit(72LL * ValueCapsLength[0], 1819440195LL);
      if ( !ValueCaps )
      {
        v9 = -1073741670;
LABEL_30:
        InteractiveControlParser::FreeComponentInformation((struct _INTERACTIVECTRL_CAPABILITIES *)v3);
        return (unsigned int)v9;
      }
      if ( HidP_GetSpecificValueCaps(HidP_Input, 0, 0, 0, ValueCaps, ValueCapsLength, PreparsedData) >= 0 )
      {
        if ( HidP_GetSpecificValueCaps(HidP_Feature, 1u, 0, 0x48u, &v20, &v17, PreparsedData) >= 0 )
        {
          v10 = (UCHAR *)Win32AllocPoolZInit(*((unsigned __int16 *)v3 + 6), 1819440195LL);
          *v10 = v20.ReportID;
          InteractiveControlDevice::SendDeviceIOControl(a3, 0xB0192u, 0LL, 0, v10, *((unsigned __int16 *)v3 + 6), &v19);
          Win32FreePool(v10);
        }
        for ( i = 0; i < ValueCapsLength[0]; ++i )
        {
          v9 = InteractiveControlParser::CreateAndLinkComponent(
                 &ValueCaps[i],
                 0,
                 (struct _INTERACTIVECTRL_CAPABILITIES *)v3,
                 &v18);
          if ( v9 < 0 )
            goto LABEL_26;
          if ( v18 && ValueCaps[i].LinkCollection == v20.LinkCollection )
            *((_DWORD *)v18 + 31) = 1;
        }
      }
    }
    SpecificButtonCaps = HidP_GetSpecificButtonCaps(HidP_Input, 0, 0, 0, 0LL, ButtonCapsLength, PreparsedData);
    v9 = SpecificButtonCaps;
    if ( (!SpecificButtonCaps || SpecificButtonCaps == -1072627705) && ButtonCapsLength[0] )
    {
      v7 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPoolZInit(72LL * ButtonCapsLength[0], 1819440195LL);
      if ( v7 )
      {
        v9 = HidP_GetSpecificButtonCaps(HidP_Input, 0, 0, 0, v7, ButtonCapsLength, PreparsedData);
        if ( v9 >= 0 )
        {
          for ( j = 0; j < ButtonCapsLength[0]; ++j )
          {
            v9 = InteractiveControlParser::CreateAndLinkComponent(
                   (struct _HIDP_VALUE_CAPS *)&v7[j],
                   1,
                   (struct _INTERACTIVECTRL_CAPABILITIES *)v3,
                   &v18);
            if ( v9 < 0 )
              break;
          }
        }
      }
      else
      {
        v9 = -1073741670;
      }
    }
    if ( ValueCaps )
LABEL_26:
      Win32FreePool(ValueCaps);
    if ( v7 )
      Win32FreePool(v7);
  }
  if ( v9 < 0 )
    goto LABEL_30;
  return (unsigned int)v9;
}
