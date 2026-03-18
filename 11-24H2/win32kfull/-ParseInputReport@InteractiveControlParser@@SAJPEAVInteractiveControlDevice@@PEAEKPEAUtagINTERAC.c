/*
 * XREFs of ?ParseInputReport@InteractiveControlParser@@SAJPEAVInteractiveControlDevice@@PEAEKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x14021B4C0
 * Callers:
 *     ?ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z @ 0x1402ECB08 (-ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x140006C18 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgP.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x140006CE8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_t.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x140203D08 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z @ 0x1402F0F38 (-FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1402F126C (-GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall InteractiveControlParser::ParseInputReport(
        struct InteractiveControlDevice *a1,
        PCHAR Report,
        ULONG ReportLength,
        struct tagINTERACTIVECTRL_INFO *a4)
{
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r9
  NTSTATUS ScaledUsageValue; // r14d
  int v7; // r13d
  struct InteractiveControlDevice *v9; // r12
  struct InteractiveControlDevice *v10; // rax
  struct InteractiveControlDevice *v11; // rbx
  USAGE *v12; // r15
  int v13; // ecx
  NTSTATUS v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  NTSTATUS Usages; // eax
  __int64 v19; // rdx
  int DigitizerForDevice; // eax
  __int64 v21; // rcx
  ULONG v23; // eax
  __int16 v24; // cx
  NTSTATUS v25; // eax
  int ScaledComponentValue; // eax
  int v27; // r8d
  int v28; // eax
  int v29; // r9d
  int v30; // eax
  int v31; // r9d
  int v32; // r10d
  int v33; // eax
  __int16 v34; // ax
  ULONG v35; // [rsp+50h] [rbp-49h]
  ULONG UsageValue; // [rsp+54h] [rbp-45h] BYREF
  CHAR *v37; // [rsp+58h] [rbp-41h]
  struct _HIDP_PREPARSED_DATA *v38; // [rsp+60h] [rbp-39h]
  ULONG UsageLength; // [rsp+68h] [rbp-31h] BYREF
  int v40; // [rsp+6Ch] [rbp-2Dh]
  ULONG v41; // [rsp+70h] [rbp-29h]
  int v42; // [rsp+74h] [rbp-25h]
  NTSTATUS v43; // [rsp+78h] [rbp-21h]
  const char *v44; // [rsp+80h] [rbp-19h] BYREF
  __int64 v45; // [rsp+88h] [rbp-11h] BYREF
  const char *v46; // [rsp+90h] [rbp-9h] BYREF
  USHORT UsageList[4]; // [rsp+98h] [rbp-1h] BYREF
  __int16 v48; // [rsp+A0h] [rbp+7h]

  v35 = ReportLength;
  v45 = 0LL;
  v37 = Report;
  PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)a1 + 32);
  ScaledUsageValue = 0;
  v38 = PreparsedData;
  v7 = 0;
  UsageLength = 5;
  *(_OWORD *)a4 = 0LL;
  *((_QWORD *)a4 + 2) = 0LL;
  *((_DWORD *)a4 + 6) = 0;
  v9 = (struct InteractiveControlDevice *)*((_QWORD *)a1 + 23);
  *(_QWORD *)UsageList = 0LL;
  v48 = 0;
  if ( v9 == (struct InteractiveControlDevice *)((char *)a1 + 184) )
    return (unsigned int)ScaledUsageValue;
  v10 = (struct InteractiveControlDevice *)((char *)a1 + 184);
  do
  {
    UsageValue = 0;
    v11 = v9;
    v12 = (USAGE *)v9;
    v9 = *(struct InteractiveControlDevice **)v9;
    if ( *((_DWORD *)v11 + 25) )
      continue;
    v13 = *((_DWORD *)v11 + 4);
    if ( ((v13 - 1) & 0xFFFFFFF9) != 0 || v13 == 3 )
    {
      ScaledUsageValue = HidP_GetScaledUsageValue(
                           HidP_Input,
                           *((_WORD *)v11 + 12),
                           *((_WORD *)v11 + 15),
                           *((_WORD *)v11 + 40),
                           (PLONG)&UsageValue,
                           PreparsedData,
                           Report,
                           ReportLength);
LABEL_16:
      v17 = UsageValue;
      goto LABEL_17;
    }
    if ( v13 != 1 )
    {
      UsageLength = 5;
      Usages = HidP_GetUsages(
                 HidP_Input,
                 v12[12],
                 v12[15],
                 UsageList,
                 &UsageLength,
                 PreparsedData,
                 Report,
                 ReportLength);
      v19 = 0LL;
      ScaledUsageValue = Usages;
      v15 = 1LL;
      while ( (unsigned int)v19 < UsageLength )
      {
        if ( UsageList[v19] == v12[40] )
        {
          v17 = 1LL;
          UsageValue = 1;
          goto LABEL_17;
        }
        v19 = (unsigned int)(v19 + 1);
      }
      goto LABEL_16;
    }
    v14 = HidP_GetUsageValue(HidP_Input, v12[12], v12[15], v12[40], &UsageValue, PreparsedData, Report, ReportLength);
    v17 = UsageValue;
    ScaledUsageValue = v14;
    if ( (signed int)UsageValue < *((_DWORD *)v11 + 16) || (signed int)UsageValue > *((_DWORD *)v11 + 17) )
      ScaledUsageValue = -2146369535;
LABEL_17:
    if ( ScaledUsageValue < 0 )
    {
      if ( ScaledUsageValue != -2146369535 && (unsigned int)dword_140398C28 > 2 )
      {
        v40 = *((unsigned __int16 *)a1 + 40);
        v41 = v35;
        v42 = *((_DWORD *)v11 + 4);
        v44 = "InteractiveControlParser::ParseInputReport -> HidP_GetUsageValue failed.";
        v43 = ScaledUsageValue;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v17,
          (__int64)&unk_140369D63,
          v15,
          v16,
          &v44);
      }
      ScaledUsageValue = 0;
      goto LABEL_22;
    }
    switch ( *((_DWORD *)v11 + 4) )
    {
      case 1:
        if ( *((_WORD *)v11 + 12) == 1 )
        {
          v34 = *((_WORD *)v11 + 40);
          if ( v34 == 48 )
          {
            LODWORD(v45) = v17;
            goto LABEL_64;
          }
          if ( v34 == 49 )
          {
            HIDWORD(v45) = v17;
LABEL_64:
            *((_DWORD *)a4 + 5) |= *((_DWORD *)v11 + 24);
          }
        }
        v7 = 1;
        goto LABEL_22;
      case 3:
        if ( (_DWORD)v17 )
        {
          if ( *((_DWORD *)v11 + 28) )
          {
            ScaledComponentValue = InteractiveControlParser::GetScaledComponentValue(v11, v17);
            v27 = *((_DWORD *)v11 + 26);
            v28 = v27 + ScaledComponentValue;
            v29 = *((_DWORD *)v11 + 27);
            *((_DWORD *)v11 + 26) = v28;
            v30 = v28 / v29;
            v31 = v30 * v29;
            v32 = v30;
            *((_DWORD *)a4 + 6) = v31;
            if ( (v27 ^ *((_DWORD *)v11 + 26)) < 0 )
            {
              v33 = *((_DWORD *)v11 + 27);
              if ( *((int *)v11 + 26) <= 0 )
                *((_DWORD *)a4 + 6) = v31 - v33;
              else
                *((_DWORD *)a4 + 6) = v31 + v33;
            }
            *((_DWORD *)a4 + 6) = *((_DWORD *)v11 + 27) * v32;
            *((_DWORD *)v11 + 26) -= *((_DWORD *)v11 + 27) * v32;
          }
          else if ( (unsigned int)dword_140398C28 > 2 )
          {
            v25 = *((_DWORD *)v11 + 27);
            v42 = 0;
            v43 = v25;
            v41 = *((_DWORD *)v11 + 26);
            v46 = "InteractiveControlParser::ParseInputReport -> Invalid component configuration";
            v40 = 3;
            LODWORD(v44) = ScaledUsageValue;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v17,
              (__int64)&unk_140369CE7,
              v15,
              v16,
              &v46);
          }
        }
        goto LABEL_22;
      case 5:
      case 7:
        if ( (_DWORD)v17 )
          *((_DWORD *)a4 + 5) |= *((_DWORD *)v11 + 24);
        goto LABEL_22;
    }
    if ( *((_DWORD *)v11 + 4) == 8 && (_DWORD)v17 )
    {
      *((_DWORD *)a4 + 5) |= *((_DWORD *)v11 + 24);
      v23 = InteractiveControlParser::GetScaledComponentValue(v11, v17);
      UsageValue = v23;
      if ( *((_DWORD *)a1 + 43) == 1 )
      {
        *((_DWORD *)a1 + 55) = v23;
      }
      else
      {
        v24 = *((_WORD *)v11 + 40);
        if ( v24 == 72 )
        {
          *((_DWORD *)a1 + 55) = v23;
          goto LABEL_22;
        }
        if ( v24 != 73 )
          goto LABEL_22;
      }
      *((_DWORD *)a1 + 56) = v23;
    }
LABEL_22:
    PreparsedData = v38;
    v10 = (struct InteractiveControlDevice *)((char *)a1 + 184);
    Report = v37;
    ReportLength = v35;
  }
  while ( v9 != v10 );
  if ( v7 )
  {
    if ( *((_QWORD *)a1 + 30) )
      goto LABEL_32;
    if ( *((_DWORD *)a1 + 62) != 100 )
      goto LABEL_30;
    if ( (unsigned int)dword_140398C28 > 3 )
    {
      v46 = "No mapped digitizer found for positional data. Attempting to rematch...";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (__int64)&dword_140398C28,
        byte_140369C78,
        0LL,
        0LL,
        (void **)&v46);
    }
    DigitizerForDevice = InteractiveControlParser::FindDigitizerForDevice(a1);
    *((_DWORD *)a1 + 62) = 0;
    if ( DigitizerForDevice < 0 )
    {
LABEL_30:
      *((_DWORD *)a4 + 5) &= ~2u;
      v7 = 0;
    }
    ++*((_DWORD *)a1 + 62);
    if ( v7 )
    {
LABEL_32:
      v21 = *((_QWORD *)a1 + 30);
      if ( v21 )
        RIMTransformCoordinatesFromDigitizer(v21, &v45, (char *)a4 + 12, (char *)a4 + 4);
    }
  }
  return (unsigned int)ScaledUsageValue;
}
