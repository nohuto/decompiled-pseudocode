/*
 * XREFs of ?InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ @ 0x1402EF6C4
 * Callers:
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1402EF3B4 (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140005D0C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1402EFD74 (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?UpdateWaveformInfoList@SimpleHapticsController@@IEAAJGG@Z @ 0x1402F0640 (-UpdateWaveformInfoList@SimpleHapticsController@@IEAAJGG@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall SimpleHapticsController::InitializeSupportedWaveformList(PHIDP_PREPARSED_DATA *this)
{
  unsigned int v2; // edi
  unsigned int v3; // r15d
  int v4; // r12d
  NTSTATUS Caps; // ebx
  struct _HIDP_VALUE_CAPS *ValueCaps; // rsi
  NTSTATUS SpecificValueCaps; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  const char *v10; // rax
  __int64 v11; // rdx
  unsigned int i; // ecx
  UCHAR *p_ReportID; // rcx
  __int16 v14; // ax
  __int64 v15; // rax
  UCHAR *v16; // rax
  CHAR *v17; // r15
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  USHORT v21; // cx
  unsigned int v22; // r12d
  USAGE UsageMin; // r9
  USHORT LinkCollection; // r8
  __int64 v25; // r8
  struct _HIDP_PREPARSED_DATA *ValueCapsLength; // [rsp+30h] [rbp-41h]
  USHORT v28[2]; // [rsp+48h] [rbp-29h] BYREF
  unsigned int v29; // [rsp+4Ch] [rbp-25h]
  ULONG UsageValue[2]; // [rsp+50h] [rbp-21h] BYREF
  struct _HIDP_CAPS Capabilities; // [rsp+58h] [rbp-19h] BYREF

  memset_0(&Capabilities, 0, sizeof(Capabilities));
  v2 = 0;
  v3 = 0;
  v4 = 0;
  Caps = HidP_GetCaps(this[2], &Capabilities);
  v28[0] = Capabilities.NumberFeatureValueCaps;
  if ( Caps >= 0 && Capabilities.NumberFeatureValueCaps )
  {
    ValueCaps = (struct _HIDP_VALUE_CAPS *)Win32AllocPoolZInit(72LL * Capabilities.NumberFeatureValueCaps, 1667787091LL);
    if ( !ValueCaps )
      return (unsigned int)-1073741670;
    SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Feature, 0xAu, 0, 0, ValueCaps, v28, this[2]);
    Caps = SpecificValueCaps;
    if ( SpecificValueCaps >= 0 )
    {
      v11 = v28[0];
      for ( i = 0; i < v28[0]; ++i )
      {
        if ( ValueCaps[i].LinkUsagePage == 14 )
        {
          *((_BYTE *)this + 92) = ValueCaps[i].ReportID;
          break;
        }
      }
      if ( (_DWORD)v11 )
      {
        p_ReportID = &ValueCaps->ReportID;
        v8 = v11;
        do
        {
          if ( *((_WORD *)p_ReportID + 4) == 14 && *p_ReportID == *((_BYTE *)this + 92) )
          {
            v14 = *((_WORD *)p_ReportID + 3);
            if ( v14 == 16 )
            {
              ++v3;
            }
            else if ( v14 == 17 )
            {
              ++v4;
            }
          }
          p_ReportID += 72;
          --v8;
        }
        while ( v8 );
        if ( v3 && v3 == v4 )
        {
          *((_DWORD *)this + 22) = v3;
          v15 = Win32AllocPoolZInit(8LL * v3, 1667787091LL);
          this[10] = (PHIDP_PREPARSED_DATA)v15;
          if ( v15
            && (v16 = (UCHAR *)Win32AllocPoolZInit(Capabilities.FeatureReportByteLength, 1667787091LL),
                (v17 = (CHAR *)v16) != 0LL) )
          {
            *v16 = ValueCaps->ReportID;
            v18 = SimpleHapticsController::SendDeviceIOControl(
                    (SimpleHapticsController *)this,
                    0xB0192u,
                    0LL,
                    0,
                    v16,
                    Capabilities.FeatureReportByteLength,
                    0LL);
            Caps = v18;
            if ( v18 >= 0 )
            {
              v21 = v28[0];
              v22 = 0;
              v29 = 0;
              if ( v28[0] )
              {
                do
                {
                  if ( ValueCaps[v22].LinkUsagePage == 14 && ValueCaps[v22].LinkUsage == 17 )
                  {
                    UsageMin = ValueCaps[v22].Range.UsageMin;
                    LinkCollection = ValueCaps[v22].LinkCollection;
                    ValueCapsLength = this[2];
                    UsageValue[0] = 0;
                    Caps = HidP_GetUsageValue(
                             HidP_Feature,
                             0xAu,
                             LinkCollection,
                             UsageMin,
                             UsageValue,
                             ValueCapsLength,
                             v17,
                             Capabilities.FeatureReportByteLength);
                    if ( Caps < 0 )
                    {
                      v21 = v28[0];
                    }
                    else
                    {
                      v25 = v29;
                      *((_WORD *)this[10] + 4 * v29) = ValueCaps[v22].Range.UsageMin;
                      *((_DWORD *)this[10] + 2 * v25 + 1) = UsageValue[0];
                      v21 = v28[0];
                      v29 = v25 + 1;
                    }
                  }
                  ++v22;
                }
                while ( v22 < v21 );
                if ( v21 )
                {
                  do
                  {
                    if ( ValueCaps[v2].LinkUsagePage == 14 && ValueCaps[v2].LinkUsage == 16 )
                    {
                      SimpleHapticsController::UpdateWaveformInfoList(
                        (SimpleHapticsController *)this,
                        ValueCaps[v2].Range.UsageMin,
                        ValueCaps[v2].PhysicalMin);
                      v21 = v28[0];
                    }
                    ++v2;
                  }
                  while ( v2 < v21 );
                }
              }
            }
            else if ( (unsigned int)dword_140398C60 > 2 )
            {
              v29 = v18;
              *(_QWORD *)UsageValue = "Function failed.";
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                (__int64)&dword_140398C60,
                (__int64)&unk_140369A7F,
                v19,
                v20,
                UsageValue);
            }
            Win32FreePool(v17);
          }
          else
          {
            Caps = -1073741670;
          }
          goto LABEL_46;
        }
      }
      if ( (unsigned int)dword_140398C60 > 2 )
      {
        v29 = -1073741216;
        v10 = "Either there is no waveform or waveform list is not equal to duration list.";
        goto LABEL_45;
      }
    }
    else if ( (unsigned int)dword_140398C60 > 2 )
    {
      v29 = SpecificValueCaps;
      v10 = "Function failed.";
LABEL_45:
      *(_QWORD *)UsageValue = v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (__int64)&dword_140398C60,
        (__int64)&unk_140369A7F,
        v8,
        v9,
        UsageValue);
    }
LABEL_46:
    Win32FreePool(ValueCaps);
  }
  return (unsigned int)Caps;
}
