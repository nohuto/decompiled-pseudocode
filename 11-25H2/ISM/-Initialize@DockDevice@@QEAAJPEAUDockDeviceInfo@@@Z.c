/*
 * XREFs of ?Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x1800DE14C
 * Callers:
 *     ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DA4E0 (-OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030470 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009BB68 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E57C (--_U@YAPEAX_K@Z.c)
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D0F78 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x1800DCC1C (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 *     ??$make_unique@$$BY0A@G$0A@@std@@YA?AV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@0@_K@Z @ 0x1800DDC34 (--$make_unique@$$BY0A@G$0A@@std@@YA-AV-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@std@@@0@_K.c)
 *     ?GetPanelIdFromDeviceInterfaceId@PanelHelper@@SAJPEBG_KPEAG@Z @ 0x180107F6C (-GetPanelIdFromDeviceInterfaceId@PanelHelper@@SAJPEBG_KPEAG@Z.c)
 */

__int64 __fastcall DockDevice::Initialize(DockDevice *this, struct DockDeviceInfo *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  struct _HIDP_CAPS *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  unsigned __int64 v11; // rdx
  const struct std::nothrow_t *v12; // rdx
  int PanelIdFromDeviceInterfaceId; // eax
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r12
  int HIDCapabilities; // eax
  unsigned int v16; // ebx
  struct _HIDP_CAPS *v18; // r15
  ULONG NumberLinkCollectionNodes; // eax
  size_t v20; // rbx
  struct _HIDP_CAPS *v21; // r14
  NTSTATUS LinkCollectionNodes; // eax
  const struct std::nothrow_t *v23; // rdx
  ULONG i; // ecx
  size_t v25; // rbx
  struct _HIDP_CAPS *ValueCaps; // r14
  USHORT v27; // r8
  NTSTATUS SpecificValueCaps; // eax
  const struct std::nothrow_t *v29; // rdx
  USHORT *v30; // rcx
  NTSTATUS v31; // eax
  USHORT ValueCapsLength; // [rsp+40h] [rbp-79h] BYREF
  struct _HIDP_CAPS *v33; // [rsp+48h] [rbp-71h] BYREF
  USHORT v34[2]; // [rsp+50h] [rbp-69h] BYREF
  ULONG LinkCollectionNodesLength; // [rsp+54h] [rbp-65h] BYREF
  __int128 v36; // [rsp+58h] [rbp-61h] BYREF
  __int128 v37; // [rsp+68h] [rbp-51h]
  __int64 v38; // [rsp+78h] [rbp-41h]
  struct _HIDP_VALUE_CAPS v39; // [rsp+80h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v4 = *((_QWORD *)this + 2);
  v5 = *((_QWORD *)this + 1);
  v36 = 0LL;
  LODWORD(v36) = 4;
  v37 = 0LL;
  v38 = 0LL;
  v6 = RIMGetDeviceProperties(v5, v4, &v36);
  if ( v6 >= 0 )
  {
    std::make_unique<unsigned short [0],0>(&v33, DWORD2(v36));
    v7 = v33;
    v8 = *((_QWORD *)this + 2);
    v9 = *((_QWORD *)this + 1);
    *(_QWORD *)&v37 = v33;
    v10 = RIMGetDeviceProperties(v9, v8, &v36);
    if ( v10 >= 0 )
    {
      PanelIdFromDeviceInterfaceId = PanelHelper::GetPanelIdFromDeviceInterfaceId(
                                       &v7->Usage,
                                       v11,
                                       (unsigned __int16 *)a2 + 774);
      if ( PanelIdFromDeviceInterfaceId < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x25,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
          (const char *)(unsigned int)PanelIdFromDeviceInterfaceId);
    }
    else
    {
      wil::details::in1diag3::_Log_NtStatus(
        retaddr,
        (void *)0x1F,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
        (const char *)(unsigned int)v10);
    }
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v33, v12);
  }
  else
  {
    wil::details::in1diag3::_Log_NtStatus(
      retaddr,
      (void *)0x17,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
      (const char *)(unsigned int)v6);
  }
  PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 6);
  v33 = 0LL;
  HIDCapabilities = HIDDevice::GetHIDCapabilities((PHIDP_PREPARSED_DATA *)this, &v33);
  v16 = HIDCapabilities;
  if ( HIDCapabilities >= 0 )
  {
    v18 = v33;
    NumberLinkCollectionNodes = v33->NumberLinkCollectionNodes;
    LinkCollectionNodesLength = NumberLinkCollectionNodes;
    if ( (_WORD)NumberLinkCollectionNodes )
    {
      v20 = saturated_mul(NumberLinkCollectionNodes, 0x18uLL);
      v21 = (struct _HIDP_CAPS *)operator new[](v20);
      memset_0(v21, 0, v20);
      v33 = v21;
      LinkCollectionNodes = HidP_GetLinkCollectionNodes(
                              (PHIDP_LINK_COLLECTION_NODE)v21,
                              &LinkCollectionNodesLength,
                              PreparsedData);
      if ( LinkCollectionNodes >= 0 )
      {
        for ( i = 0; i < LinkCollectionNodesLength; ++i )
        {
          v23 = (const struct std::nothrow_t *)(3LL * i);
          if ( *(&v21->UsagePage + 12 * i) == 1 && *(&v21->Usage + 12 * i) == 213 )
          {
            *((_BYTE *)a2 + 1663) = 1;
            *((_WORD *)a2 + 832) = i;
            break;
          }
        }
      }
      else
      {
        wil::details::in1diag3::_Log_NtStatus(
          retaddr,
          (void *)0x37,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
          (const char *)(unsigned int)LinkCollectionNodes);
      }
      VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v33, v23);
    }
    if ( *((_BYTE *)a2 + 1663) )
    {
      ValueCapsLength = v18->NumberInputValueCaps;
      v25 = saturated_mul(ValueCapsLength, 0x48uLL);
      ValueCaps = (struct _HIDP_CAPS *)operator new[](v25);
      memset_0(ValueCaps, 0, v25);
      v27 = *((_WORD *)a2 + 832);
      v33 = ValueCaps;
      SpecificValueCaps = HidP_GetSpecificValueCaps(
                            HidP_Input,
                            1u,
                            v27,
                            0,
                            (PHIDP_VALUE_CAPS)ValueCaps,
                            &ValueCapsLength,
                            PreparsedData);
      if ( SpecificValueCaps >= 0 )
      {
        if ( ValueCapsLength )
        {
          v30 = &ValueCaps->Reserved[15];
          v29 = (const struct std::nothrow_t *)ValueCapsLength;
          do
          {
            if ( v30[8] == 48 )
            {
              *((_DWORD *)a2 + 417) = *(_DWORD *)v30;
              *((_DWORD *)a2 + 419) = *((_DWORD *)v30 + 1) + 1;
            }
            else if ( v30[8] == 49 )
            {
              *((_DWORD *)a2 + 418) = *(_DWORD *)v30;
              *((_DWORD *)a2 + 420) = *((_DWORD *)v30 + 1) + 1;
            }
            v30 += 36;
            v29 = (const struct std::nothrow_t *)((char *)v29 - 1);
          }
          while ( v29 );
        }
      }
      else
      {
        wil::details::in1diag3::_Log_NtStatus(
          retaddr,
          (void *)0x52,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
          (const char *)(unsigned int)SpecificValueCaps);
      }
      VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v33, v29);
    }
    memset_0(&v39, 0, sizeof(v39));
    v34[0] = 1;
    v31 = HidP_GetSpecificValueCaps(HidP_Input, 1u, 0, 0xD0u, &v39, v34, PreparsedData);
    if ( v31 >= 0 )
    {
      *((_BYTE *)a2 + 1662) = v39.ReportCount > 1u;
      return 0LL;
    }
    else
    {
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0x70,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
               (const char *)(unsigned int)v31);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
      (const char *)(unsigned int)HIDCapabilities);
    return v16;
  }
}
