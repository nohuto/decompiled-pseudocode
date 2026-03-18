/*
 * XREFs of ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x140053624
 * Callers:
 *     McGenControlCallbackV2 @ 0x1400534E0 (McGenControlCallbackV2.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U1@U3@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@353AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x140003398 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U1@U3@U1@U-$.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 *     McTemplateK0qxq_EtwWriteTransfer @ 0x1400600DC (McTemplateK0qxq_EtwWriteTransfer.c)
 *     ?CaptureSchedulerLogs@DXGGLOBAL@@QEAAXXZ @ 0x1401872EC (-CaptureSchedulerLogs@DXGGLOBAL@@QEAAXXZ.c)
 *     ?DxgkDisableStablePowerState@@YAXXZ @ 0x1401CE5CC (-DxgkDisableStablePowerState@@YAXXZ.c)
 *     ?DxgkEnableClockCalibration@@YAXE@Z @ 0x1401CE5EC (-DxgkEnableClockCalibration@@YAXE@Z.c)
 *     ?DxgkEnableFormattingBuffer@@YAXH@Z @ 0x1401CE610 (-DxgkEnableFormattingBuffer@@YAXH@Z.c)
 *     ?DxgkEnableStablePowerState@@YAXXZ @ 0x1401CE634 (-DxgkEnableStablePowerState@@YAXXZ.c)
 *     DpiControlEtwLogging @ 0x14022F240 (DpiControlEtwLogging.c)
 *     ?DxgkReportGlobalState@@YAXXZ @ 0x1403B2A8C (-DxgkReportGlobalState@@YAXXZ.c)
 */

void __fastcall DxgkEtwEnableCallback(int a1, char a2, __int64 a3, int a4)
{
  char v4; // bl
  DXGGLOBAL *Global; // rax
  __int64 v7; // r8
  bool v8; // cl
  __int64 v9; // rcx
  unsigned __int8 v10; // cl
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // [rsp+60h] [rbp-20h] BYREF
  int v15; // [rsp+64h] [rbp-1Ch] BYREF
  __int64 v16; // [rsp+68h] [rbp-18h] BYREF
  __int64 v17; // [rsp+70h] [rbp-10h] BYREF
  __int64 v18; // [rsp+78h] [rbp-8h] BYREF
  char v19; // [rsp+A0h] [rbp+20h] BYREF
  __int16 v20; // [rsp+B8h] [rbp+38h] BYREF

  v4 = 1;
  if ( a1 == 2 && bTracingEnabled )
  {
    if ( a3 == 0x4000000 )
    {
      Global = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::CaptureSchedulerLogs(Global);
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qxq_EtwWriteTransfer(2, a2, a3, a4, qword_14015B4C0, a2);
      DxgkReportGlobalState();
    }
    goto LABEL_7;
  }
  if ( qword_14015B4C0 == g_OldAnyKeywords )
    goto LABEL_7;
  v7 = 4096LL;
  v8 = (qword_14015B4C0 & 0x1000) != 0 && (qword_14015B4C0 & 0x2000) == 0;
  if ( (g_OldAnyKeywords & 0x1000) != 0 )
  {
    if ( (qword_14015B4C0 & 0x1000) == 0 )
      DxgkDisableStablePowerState();
  }
  else if ( (qword_14015B4C0 & 0x1000) != 0 && v8 )
  {
    DxgkEnableStablePowerState();
  }
  v9 = qword_14015B4C0;
  if ( _bittest64((const signed __int64 *)&g_OldAnyKeywords, 0xAu) )
  {
    if ( (qword_14015B4C0 & 0x400) != 0 )
      goto LABEL_28;
    v9 = 0LL;
  }
  else
  {
    if ( (qword_14015B4C0 & 0x400) == 0 )
      goto LABEL_28;
    LOBYTE(v9) = 1;
  }
  LOBYTE(v7) = a2;
  DpiControlEtwLogging(v9, qword_14015B4C0 & 0x3000, v7);
LABEL_28:
  if ( _bittest64((const signed __int64 *)&g_OldAnyKeywords, 0xEu) )
  {
    if ( !_bittest64(&qword_14015B4C0, 0xEu) )
    {
      DxgkEnableFormattingBuffer(0);
      v10 = 0;
      goto LABEL_33;
    }
  }
  else if ( _bittest64(&qword_14015B4C0, 0xEu) )
  {
    DxgkEnableFormattingBuffer(1);
    v10 = 1;
LABEL_33:
    DxgkEnableClockCalibration(v10);
  }
  if ( (unsigned int)dword_14015B660 > 5 && tlgKeywordOn((__int64)&dword_14015B660, 0x400000000800LL) )
  {
    LOBYTE(v11) = *((_BYTE *)DXGGLOBAL::GetGlobal() + 305640);
    v16 = qword_14015B4C8;
    v14 = (unsigned __int8)byte_14015B4D8;
    v17 = qword_14015B4C0;
    v19 = v11;
    v15 = 1;
    v20 = 2;
    v18 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      v11,
      (__int64)&unk_14013A0AA,
      v12,
      v13,
      (__int64)&v18,
      (__int64)&v20,
      (__int64)&v15,
      (__int64)&v17,
      (__int64)&v14,
      (__int64)&v16,
      (__int64)&v19);
  }
LABEL_7:
  if ( (qword_14015B4C0 & 0x461C8ED7) == 0 || (qword_14015B4C8 & 0xFFFFFFFFB9E37128uLL) != 0 )
    v4 = 0;
  bTracingEnabled = v4;
  g_OldAnyKeywords = qword_14015B4C0;
}
