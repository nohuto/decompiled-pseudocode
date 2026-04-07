/*
 * XREFs of ?HasChanged@CDisplayModeChangeHelper@@SA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180055F14
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18008D05C (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?IsNewConnectVariant@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x1800560E0 (-IsNewConnectVariant@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet.c)
 *     ?IsDisconnect@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0@Z @ 0x180056250 (-IsDisconnect@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0@Z.c)
 *     ?IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180056264 (-IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@.c)
 *     ?IsModeChangeBetweenDuplicateAndExtend@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x1800563F0 (-IsModeChangeBetweenDuplicateAndExtend@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800586C0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

__int64 __fastcall CDisplayModeChangeHelper::HasChanged(CDWMDisplaySet *this, CDWMDisplaySet *a2, __int64 a3, int a4)
{
  unsigned int IsNewConnectVariant; // ebx
  unsigned int v9; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v10; // [rsp+34h] [rbp-4Ch] BYREF
  _DWORD v11[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v12; // [rsp+40h] [rbp-40h]
  void *v13; // [rsp+48h] [rbp-38h]
  int v14; // [rsp+50h] [rbp-30h]
  int v15; // [rsp+54h] [rbp-2Ch]
  void *v16; // [rsp+58h] [rbp-28h]
  int v17; // [rsp+60h] [rbp-20h]
  int v18; // [rsp+64h] [rbp-1Ch]
  int *v19; // [rsp+68h] [rbp-18h]
  int v20; // [rsp+70h] [rbp-10h]
  int v21; // [rsp+74h] [rbp-Ch]

  if ( (unsigned int)dword_180125130 > 5 && (byte_180125140 & 2) != 0 && (qword_180125148 & 2) == qword_180125148 )
  {
    v9 = *((_DWORD *)a2 + 16);
    v10 = *((_DWORD *)this + 16);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (_DWORD)this,
      (unsigned int)&unk_180111652,
      a3,
      a4,
      (__int64)&v10,
      (__int64)&v9);
  }
  IsNewConnectVariant = CDisplayModeChangeHelper::IsNewConnectVariant(this, a2);
  if ( !IsNewConnectVariant )
  {
    IsNewConnectVariant = CDisplayModeChangeHelper::IsModeChangeBetweenDuplicateAndExtend(this, a2);
    if ( !IsNewConnectVariant )
    {
      IsNewConnectVariant = CDisplayModeChangeHelper::IsModeChangeToSecondScreenOnlyOrRevert(this, a2, a3);
      if ( !IsNewConnectVariant )
        IsNewConnectVariant = CDisplayModeChangeHelper::IsDisconnect(this, a2);
    }
  }
  if ( (unsigned int)dword_180125130 > 5 && (byte_180125140 & 2) != 0 && (qword_180125148 & 2) == qword_180125148 )
  {
    v21 = 0;
    v19 = (int *)&v10;
    v11[1] = 5;
    v13 = off_180125138;
    v10 = IsNewConnectVariant;
    v20 = 4;
    v11[0] = 184549376;
    v12 = 2LL;
    v14 = *(unsigned __int16 *)off_180125138;
    v16 = &unk_1801115B4;
    v15 = 2;
    v17 = 72;
    v18 = 1;
    v9 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwEventWriteTransfer(qword_180125150, v11);
  }
  return IsNewConnectVariant;
}
