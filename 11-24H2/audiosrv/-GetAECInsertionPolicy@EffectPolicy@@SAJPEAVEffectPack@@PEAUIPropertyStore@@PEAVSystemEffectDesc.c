/*
 * XREFs of ?GetAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180034E44
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180035060 (-AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@U_GUID@@@Z @ 0x180030D88 (-IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180032B00 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180032B38 (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?IsAPOModeSupported@EffectPack@@QEAAHW4FXEnablementConsideration@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180033924 (-IsAPOModeSupported@EffectPack@@QEAAHW4FXEnablementConsideration@@U_GUID@@W4__MIDL___MIDL_itf_au.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EffectPolicy::GetAECInsertionPolicy(
        struct EffectPack *a1,
        struct IPropertyStore *a2,
        struct SystemEffectDescriptor *a3,
        struct _GUID *a4,
        enum INBOX_AEC_INSERTION_POLICY *a5,
        struct _AEC_POLICY_RESULTS *a6)
{
  __int64 v9; // rax
  unsigned int v10; // r14d
  int v11; // esi
  const WCHAR *v12; // r8
  int v13; // ecx
  int IsAPOModeSupported; // eax
  int v15; // eax
  __int64 *v16; // rdx
  __int64 v17; // rcx
  int v18; // edx
  __int64 v20; // rax
  unsigned int pvData[4]; // [rsp+40h] [rbp-30h] BYREF
  void *Block[2]; // [rsp+50h] [rbp-20h] BYREF
  DWORD pcbData[4]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v9 = *(_QWORD *)&a4->Data1 - *(_QWORD *)&GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data1;
  if ( *(_QWORD *)&a4->Data1 == *(_QWORD *)&GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data1 )
    v9 = *(_QWORD *)a4->Data4 - *(_QWORD *)GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data4;
  v10 = v9 == 0;
  pvData[0] = 0;
  v11 = 4;
  pcbData[0] = 4;
  v12 = L"InboxAECPolicyCommsTmp";
  if ( v9 )
    v12 = L"InboxAECPolicy";
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          v12,
          0x18u,
          0LL,
          pvData,
          pcbData)
    && pvData[0] < 4 )
  {
    v10 = pvData[0];
    *((_DWORD *)a6 + 1) = pvData[0];
  }
  if ( v10 == 1 )
  {
    *(_DWORD *)a5 = 0;
LABEL_12:
    *((_DWORD *)a6 + 16) = 0;
LABEL_29:
    *((_DWORD *)a6 + 15) = *(_DWORD *)a5;
    return 0LL;
  }
  if ( v10 == 3 )
  {
    *(_DWORD *)a5 = 1;
    goto LABEL_12;
  }
  v13 = *(_DWORD *)(*((_QWORD *)a1 + 198) + 64LL);
  *((_DWORD *)a6 + 2) = v13 == 3;
  if ( v13 == 3 )
  {
    *(_DWORD *)a5 = 1;
    *((_DWORD *)a6 + 16) = 1;
    goto LABEL_29;
  }
  *(struct _GUID *)Block = *a4;
  *((_DWORD *)a6 + 3) = EffectPack::IsConnectorModeSupported(a1, *((unsigned int *)a3 + 12), 0, Block);
  *(struct _GUID *)Block = *a4;
  IsAPOModeSupported = EffectPack::IsAPOModeSupported(a1, 0LL, (__int128 *)Block, *((_DWORD *)a3 + 12));
  *((_DWORD *)a6 + 4) = IsAPOModeSupported;
  if ( !*((_DWORD *)a6 + 3) && !IsAPOModeSupported )
  {
    *(_DWORD *)a5 = 2;
    *((_DWORD *)a6 + 16) = 3;
    goto LABEL_29;
  }
  Block[0] = 0LL;
  Block[1] = 0LL;
  v15 = 0;
  v16 = (__int64 *)*((_QWORD *)a3 + 2);
  if ( !v16 )
  {
LABEL_26:
    if ( !v15 )
    {
      *((_DWORD *)a6 + 9) = 0;
      v11 = 2;
    }
    *(_DWORD *)a5 = v11;
    *((_DWORD *)a6 + 16) = v11;
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(Block);
    goto LABEL_29;
  }
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(Block, v16);
  v17 = *((_QWORD *)a3 + 2);
  v18 = *(_DWORD *)(v17 + 8);
  if ( LODWORD(Block[1]) == v18 )
  {
    v20 = 48LL;
    if ( v18 <= 0 )
      v20 = 64LL;
    v15 = *(_DWORD *)(v20 + v17);
    goto LABEL_26;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBA,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFB,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpolicy.cpp",
    (const char *)0x8007000ELL);
  if ( Block[0] )
    free(Block[0]);
  return 2147942414LL;
}
