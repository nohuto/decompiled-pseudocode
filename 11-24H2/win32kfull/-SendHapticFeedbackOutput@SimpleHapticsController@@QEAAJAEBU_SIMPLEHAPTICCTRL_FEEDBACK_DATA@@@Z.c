/*
 * XREFs of ?SendHapticFeedbackOutput@SimpleHapticsController@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1402EFF68
 * Callers:
 *     ?SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1402EC544 (-SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140005D0C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x140006B48 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U3@@-$_tlgWriteTe.c)
 */

__int64 __fastcall SimpleHapticsController::SendHapticFeedbackOutput(
        SimpleHapticsController *this,
        const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *a2,
        __int64 a3,
        _BYTE *a4)
{
  NTSTATUS v6; // esi
  ULONG v7; // r15d
  int v8; // eax
  ULONG UsageValue; // r14d
  unsigned int i; // edx
  __int64 v11; // rax
  int v12; // ecx
  void *v13; // rcx
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+28h] [rbp-38h]
  ULONG Report; // [rsp+30h] [rbp-30h]
  const char *v17; // [rsp+58h] [rbp-8h] BYREF
  union _LARGE_INTEGER ByteOffset; // [rsp+A0h] [rbp+40h] BYREF
  const char *v19; // [rsp+B0h] [rbp+50h] BYREF
  int v20; // [rsp+B8h] [rbp+58h]

  v6 = 0;
  v7 = 0;
  if ( (unsigned int)dword_140398C60 > 4 )
  {
    LODWORD(v19) = *((_DWORD *)a2 + 3);
    v20 = *((_DWORD *)a2 + 2);
    LOWORD(ByteOffset.LowPart) = *(_WORD *)a2;
    v17 = "SimpleHapticsController::GetReportInfo entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)this,
      (__int64)&unk_140369C15,
      a3,
      (__int64)a4,
      &v17);
  }
  if ( *((_WORD *)this + 36) && (a4 = (_BYTE *)*((_QWORD *)this + 8)) != 0LL && *((_QWORD *)this + 3) )
  {
    v8 = *((_DWORD *)a2 + 2);
    a3 = *(unsigned __int16 *)a2;
    UsageValue = v8 - 1;
    if ( v8 <= 0 )
      UsageValue = 0;
    if ( (unsigned __int16)a3 > 2u )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= *((_DWORD *)this + 22) )
          goto LABEL_19;
        v11 = *((_QWORD *)this + 10) + 8LL * i;
        if ( *(_WORD *)v11 == (_WORD)a3 )
          break;
      }
      if ( !v11 )
      {
LABEL_19:
        v6 = -1073741811;
        goto LABEL_21;
      }
      v12 = *((_DWORD *)a2 + 3);
      if ( v12 > 0 )
        v7 = v12 + *(_DWORD *)(v11 + 4);
    }
    *a4 = 1;
    if ( HidP_SetUsageValue(
           HidP_Output,
           0xEu,
           0,
           0x21u,
           *(unsigned __int16 *)a2,
           *((PHIDP_PREPARSED_DATA *)this + 2),
           *((PCHAR *)this + 8),
           *((unsigned __int16 *)this + 36)) >= 0 )
    {
      HidP_SetUsageValue(
        HidP_Output,
        0xEu,
        0,
        0x24u,
        UsageValue,
        *((PHIDP_PREPARSED_DATA *)this + 2),
        *((PCHAR *)this + 8),
        *((unsigned __int16 *)this + 36));
      HidP_SetUsageValue(
        HidP_Output,
        0xEu,
        0,
        0x25u,
        v7,
        *((PHIDP_PREPARSED_DATA *)this + 2),
        *((PCHAR *)this + 8),
        *((unsigned __int16 *)this + 36));
      HidP_SetUsageValue(
        HidP_Output,
        0xEu,
        0,
        0x23u,
        *((_DWORD *)a2 + 1),
        *((PHIDP_PREPARSED_DATA *)this + 2),
        *((PCHAR *)this + 8),
        *((unsigned __int16 *)this + 36));
      v13 = (void *)*((_QWORD *)this + 3);
      Report = *((unsigned __int16 *)this + 36);
      PreparsedData = (PHIDP_PREPARSED_DATA)*((_QWORD *)this + 8);
      ByteOffset.QuadPart = 0LL;
      v6 = ZwWriteFile(
             v13,
             0LL,
             0LL,
             0LL,
             (PIO_STATUS_BLOCK)((char *)this + 40),
             PreparsedData,
             Report,
             &ByteOffset,
             0LL);
      if ( v6 >= 0 )
      {
        *(_OWORD *)((char *)this + 40) = 0LL;
        v6 = ZwFlushBuffersFile(*((HANDLE *)this + 3), (PIO_STATUS_BLOCK)((char *)this + 40));
      }
    }
  }
  else
  {
    v6 = -1073740701;
  }
LABEL_21:
  if ( (unsigned int)dword_140398C60 > 4 )
  {
    ByteOffset.LowPart = v6;
    v19 = "SimpleHapticsController::SendHapticFeedbackOutput exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_140398C60,
      (__int64)&unk_140369B27,
      a3,
      (__int64)a4,
      &v19);
  }
  return (unsigned int)v6;
}
