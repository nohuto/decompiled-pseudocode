/*
 * XREFs of ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x14012A4D8
 * Callers:
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402DEDC4 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1402DF3B8 (-SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1402EC5E4 (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x140005910 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012B408 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x140203D08 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?SendDeviceIOControl@InteractiveControlDevice@@QEAAJKPEAXK0KPEAK@Z @ 0x1402EC4FC (-SendDeviceIOControl@InteractiveControlDevice@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1402F126C (-GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall InteractiveControlDevice::SetComponentResolution(__int64 a1, int a2, int a3, _DWORD *a4)
{
  unsigned int v4; // r12d
  int v5; // r14d
  CHAR *v9; // r15
  ULONG v10; // r13d
  const char *v12; // rdx
  int v13; // ecx
  const char *v14; // rax
  char *v15; // rbx
  const char *v16; // rsi
  NTSTATUS SpecificValueCaps; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  ULONG LogicalMin; // esi
  __int64 v22; // rax
  int ScaledComponentValue; // eax
  _DWORD *v24; // rsi
  int v25; // eax
  int v26; // eax
  const char *v27; // rcx
  USHORT ValueCapsLength; // [rsp+44h] [rbp-BCh] BYREF
  USHORT v30[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v31; // [rsp+4Ch] [rbp-B4h]
  const char *v32; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v33; // [rsp+58h] [rbp-A8h]
  const char *v34; // [rsp+60h] [rbp-A0h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+70h] [rbp-90h] BYREF
  struct _HIDP_VALUE_CAPS v36; // [rsp+C0h] [rbp-40h] BYREF

  v4 = 0;
  v31 = a3;
  v5 = a3;
  v33 = a4;
  ValueCapsLength = 1;
  v9 = 0LL;
  memset_0(&ValueCaps, 0, sizeof(ValueCaps));
  v10 = 2;
  if ( a4 && !*a4 )
  {
    if ( *(_DWORD *)(a1 + 64) )
      goto LABEL_10;
    if ( !*((_DWORD *)InteractiveControlManager::Instance() + 21)
      && *((_DWORD *)InteractiveControlManager::Instance() + 25) )
    {
      v10 = 3;
    }
  }
  if ( !*(_DWORD *)(a1 + 64) && *((_DWORD *)InteractiveControlManager::Instance() + 29) )
    v5 = *((_DWORD *)InteractiveControlManager::Instance() + 27);
LABEL_10:
  if ( a2 == 1 )
    return 3221225659LL;
  if ( a2 != 2 )
  {
    if ( a2 == 3 )
    {
      v5 = (v5 << 8) / *((_DWORD *)InteractiveControlManager::Instance() + 35);
    }
    else if ( a2 != 4 )
    {
      return 3221225659LL;
    }
  }
  v12 = (const char *)(a1 + 184);
  v13 = a2;
  v14 = *(const char **)(a1 + 184);
  while ( v14 != v12 )
  {
    v15 = (char *)v14;
    v16 = v14;
    v14 = *(const char **)v14;
    v34 = v14;
    if ( *((_DWORD *)v15 + 4) == v13 )
    {
      SpecificValueCaps = HidP_GetSpecificValueCaps(
                            HidP_Feature,
                            1u,
                            *((_WORD *)v15 + 15),
                            0x48u,
                            &ValueCaps,
                            &ValueCapsLength,
                            *(PHIDP_PREPARSED_DATA *)(a1 + 256));
      v4 = SpecificValueCaps;
      if ( SpecificValueCaps < 0 )
      {
        if ( SpecificValueCaps != -1072627708 )
        {
          if ( (unsigned int)dword_140398C28 > 2 )
          {
            v31 = *((_DWORD *)v15 + 28);
            v34 = "Failed to updated device resolution multiplier. Keeping existing actual resolution.";
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (__int64)&dword_140398C28,
              (__int64)&unk_140369596,
              v18,
              v19,
              &v34);
          }
          break;
        }
        if ( (unsigned int)dword_140398C28 > 4 )
        {
          v32 = "Device does not support resolution multiplier. Falling back to OS based scaling.";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
            (unsigned int)&dword_140398C28,
            (unsigned int)&unk_1403690A7,
            0,
            0,
            (__int64)&v32);
        }
        v4 = 0;
      }
      else
      {
        if ( !*((_DWORD *)InteractiveControlManager::Instance() + 21)
          && (v20 = v5 * (__int64)*((int *)v15 + 30)) != 0
          && v5 )
        {
          LogicalMin = ValueCaps.LogicalMin;
          v22 = *((int *)v15 + 29) / v20;
          if ( (int)v22 >= ValueCaps.LogicalMin )
          {
            LogicalMin = *((int *)v15 + 29) / v20;
            if ( (int)v22 > ValueCaps.LogicalMax )
              LogicalMin = ValueCaps.LogicalMax;
          }
        }
        else
        {
          LogicalMin = ValueCaps.LogicalMax;
        }
        if ( *((_DWORD *)v15 + 31) != LogicalMin || v33 && *v33 != *(_DWORD *)(a1 + 60) )
        {
          if ( !v9 )
          {
            v9 = (CHAR *)Win32AllocPoolZInit(*(unsigned __int16 *)(a1 + 84), 1819440195LL);
            if ( !v9 )
              return (unsigned int)-1073741670;
          }
          *v9 = ValueCaps.ReportID;
          if ( (int)InteractiveControlDevice::SendDeviceIOControl(
                      (InteractiveControlDevice *)a1,
                      0xB0192u,
                      0LL,
                      0,
                      v9,
                      *(unsigned __int16 *)(a1 + 84),
                      0LL) >= 0 )
          {
            if ( v33 )
            {
              memset_0(&v36, 0, sizeof(v36));
              v30[0] = 1;
              HidP_GetSpecificValueCaps(HidP_Feature, 0xEu, 0, 0x20u, &v36, v30, *(PHIDP_PREPARSED_DATA *)(a1 + 256));
              HidP_SetUsageValue(
                HidP_Feature,
                0xEu,
                v36.LinkCollection,
                0x20u,
                v10,
                *(PHIDP_PREPARSED_DATA *)(a1 + 256),
                v9,
                *(unsigned __int16 *)(a1 + 84));
            }
            if ( HidP_SetUsageValue(
                   HidP_Feature,
                   1u,
                   ValueCaps.LinkCollection,
                   0x48u,
                   LogicalMin,
                   *(PHIDP_PREPARSED_DATA *)(a1 + 256),
                   v9,
                   *(unsigned __int16 *)(a1 + 84)) >= 0
              && (int)InteractiveControlDevice::SendDeviceIOControl(
                        (InteractiveControlDevice *)a1,
                        0xB0191u,
                        v9,
                        *(unsigned __int16 *)(a1 + 84),
                        0LL,
                        0,
                        0LL) >= 0 )
            {
              *((_DWORD *)v15 + 31) = LogicalMin;
            }
          }
        }
        ScaledComponentValue = InteractiveControlParser::GetScaledComponentValue(
                                 (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)v15,
                                 1);
        v24 = v33;
        *((_DWORD *)v15 + 28) = ScaledComponentValue;
        if ( v24 )
          *(_DWORD *)(a1 + 60) = *v24;
        v16 = v15;
      }
      if ( *((_DWORD *)InteractiveControlManager::Instance() + 21) )
      {
        if ( v5 )
          v25 = v5;
        else
          v25 = *((_DWORD *)v15 + 28);
        *((_DWORD *)v15 + 28) = v25;
      }
      if ( *((_DWORD *)InteractiveControlManager::Instance() + 31) )
      {
        if ( *((_DWORD *)InteractiveControlManager::Instance() + 31) == 1 )
          v26 = *((_DWORD *)v15 + 28);
        else
          v26 = 1;
        v27 = v16;
      }
      else
      {
        v26 = v31;
        if ( !v31 )
          v26 = *((_DWORD *)v15 + 28);
        v27 = v15;
      }
      *((_DWORD *)v27 + 27) = v26;
      v12 = (const char *)(a1 + 184);
      *((_DWORD *)v15 + 26) = 0;
      v14 = v34;
      v13 = a2;
    }
  }
  if ( v9 )
    Win32FreePool(v9);
  return v4;
}
