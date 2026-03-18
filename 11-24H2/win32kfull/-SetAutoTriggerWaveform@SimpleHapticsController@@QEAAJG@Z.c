/*
 * XREFs of ?SetAutoTriggerWaveform@SimpleHapticsController@@QEAAJG@Z @ 0x1402F0220
 * Callers:
 *     ?SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1402EC7A4 (-SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140005D0C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x1400069DC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$01@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1402EFD74 (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall SimpleHapticsController::SetAutoTriggerWaveform(PHIDP_PREPARSED_DATA *this, unsigned __int16 a2)
{
  ULONG v2; // r15d
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int Caps; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  UCHAR *v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  const char *v14; // [rsp+48h] [rbp-81h] BYREF
  USHORT ValueCapsLength[8]; // [rsp+50h] [rbp-79h] BYREF
  struct _HIDP_CAPS Capabilities; // [rsp+60h] [rbp-69h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+A0h] [rbp-29h] BYREF

  v2 = a2;
  memset_0(&Capabilities, 0, sizeof(Capabilities));
  ValueCapsLength[0] = 1;
  memset_0(&ValueCaps, 0, sizeof(ValueCaps));
  if ( (unsigned int)dword_140398C60 > 4 )
  {
    v14 = "SimpleHapticsController::SetAutoTriggerWaveform entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<2>>(
      v4,
      (__int64)&unk_140369B96,
      v5,
      v6,
      &v14);
  }
  Caps = HidP_GetCaps(this[2], &Capabilities);
  if ( Caps >= 0 )
  {
    v10 = (UCHAR *)Win32AllocPoolZInit(Capabilities.FeatureReportByteLength, 1667787091LL);
    if ( !v10 )
    {
      Caps = -1073741670;
      goto LABEL_21;
    }
    Caps = HidP_GetSpecificValueCaps(HidP_Feature, 0xEu, 0, 0x20u, &ValueCaps, ValueCapsLength, this[2]);
    if ( Caps >= 0 )
    {
      *v10 = ValueCaps.ReportID;
      Caps = SimpleHapticsController::SendDeviceIOControl(
               (SimpleHapticsController *)this,
               0xB0192u,
               0LL,
               0LL,
               v10,
               Capabilities.FeatureReportByteLength,
               0LL);
      if ( Caps >= 0 )
      {
        Caps = HidP_SetUsageValue(
                 HidP_Feature,
                 0xEu,
                 ValueCaps.LinkCollection,
                 0x20u,
                 v2,
                 this[2],
                 (PCHAR)v10,
                 Capabilities.FeatureReportByteLength);
        if ( Caps >= 0 )
        {
          Caps = SimpleHapticsController::SendDeviceIOControl(
                   (SimpleHapticsController *)this,
                   0xB0191u,
                   v10,
                   Capabilities.FeatureReportByteLength,
                   0LL,
                   0,
                   0LL);
          if ( Caps >= 0 || (unsigned int)dword_140398C60 <= 2 )
            goto LABEL_20;
          goto LABEL_19;
        }
        if ( (unsigned int)dword_140398C60 > 2 )
        {
LABEL_19:
          v14 = "Function failed.";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (__int64)&dword_140398C60,
            (__int64)&unk_140369A7F,
            v11,
            v12,
            &v14);
        }
      }
      else if ( (unsigned int)dword_140398C60 > 2 )
      {
        goto LABEL_19;
      }
    }
    else if ( (unsigned int)dword_140398C60 > 2 )
    {
      goto LABEL_19;
    }
LABEL_20:
    Win32FreePool(v10);
    goto LABEL_21;
  }
  if ( (unsigned int)dword_140398C60 > 2 )
  {
    v14 = "Function failed.";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_140398C60,
      (__int64)&unk_140369A7F,
      v8,
      v9,
      &v14);
  }
LABEL_21:
  if ( (unsigned int)dword_140398C60 > 4 )
  {
    v14 = "SimpleHapticsController::SetAutoTriggerWaveform exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_140398C60,
      (__int64)&unk_140369B27,
      v8,
      v9,
      &v14);
  }
  return (unsigned int)Caps;
}
