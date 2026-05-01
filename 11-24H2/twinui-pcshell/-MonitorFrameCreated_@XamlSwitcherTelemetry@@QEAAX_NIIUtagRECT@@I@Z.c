/*
 * XREFs of ?MonitorFrameCreated_@XamlSwitcherTelemetry@@QEAAX_NIIUtagRECT@@I@Z @ 0x18011A58C
 * Callers:
 *     ?CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1801DD5E8 (-CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?Provider@XamlSwitcherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18011AE3C (-Provider@XamlSwitcherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18011AFA4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemp.c)
 */

void __fastcall XamlSwitcherTelemetry::MonitorFrameCreated_(
        XamlSwitcherTelemetry *this,
        unsigned __int8 a2,
        int a3,
        int a4,
        struct tagRECT *a5,
        unsigned int a6)
{
  int v7; // esi
  int v9; // r8d
  int v10; // r9d
  const struct _tlgProvider_t *v11; // r10
  LONG bottom; // [rsp+78h] [rbp+17h] BYREF
  LONG right; // [rsp+7Ch] [rbp+1Bh] BYREF
  LONG top; // [rsp+80h] [rbp+1Fh] BYREF
  LONG left; // [rsp+84h] [rbp+23h] BYREF
  int v16; // [rsp+88h] [rbp+27h] BYREF
  int v17; // [rsp+8Ch] [rbp+2Bh] BYREF
  int v18; // [rsp+90h] [rbp+2Fh] BYREF
  __int64 v19; // [rsp+98h] [rbp+37h] BYREF
  XamlSwitcherTelemetry *v20; // [rsp+B8h] [rbp+57h] BYREF

  v20 = this;
  v7 = a2;
  v11 = XamlSwitcherLogging::Provider();
  if ( *(_DWORD *)v11 > 5u
    && (*((_QWORD *)v11 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v11 + 3) & 0x400000000000LL) == *((_QWORD *)v11 + 3) )
  {
    LODWORD(v20) = a6;
    v19 = 0x1000000LL;
    bottom = a5->bottom;
    right = a5->right;
    top = a5->top;
    left = a5->left;
    v16 = a4;
    v17 = a3;
    v18 = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (_DWORD)v11,
      (unsigned int)&unk_180821AF8,
      v9,
      v10,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&left,
      (__int64)&top,
      (__int64)&right,
      (__int64)&bottom,
      (__int64)&v20,
      (__int64)&v19);
  }
}
