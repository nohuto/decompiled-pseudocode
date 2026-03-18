/*
 * XREFs of ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00D2140
 * Callers:
 *     GrePtInRegion @ 0x1C0008190 (GrePtInRegion.c)
 *     GreEqualRgn @ 0x1C000AE90 (GreEqualRgn.c)
 *     GreIsValidRegion @ 0x1C000C820 (GreIsValidRegion.c)
 *     bDeleteRegion @ 0x1C003DA20 (bDeleteRegion.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C003EDB0 (SetOrCreateRectRgnIndirectPublic.c)
 *     SetRectRgnIndirect @ 0x1C003F040 (SetRectRgnIndirect.c)
 *     GreDeleteObject @ 0x1C00472A0 (GreDeleteObject.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C004A2E0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004B888 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreGetRegionData @ 0x1C005AA00 (GreGetRegionData.c)
 *     GreCopyVisRgn @ 0x1C005BA60 (GreCopyVisRgn.c)
 *     GreOffsetRgn @ 0x1C005BF60 (GreOffsetRgn.c)
 *     GreCombineRgn @ 0x1C005C1D0 (GreCombineRgn.c)
 *     EngDeleteRgn @ 0x1C008A130 (EngDeleteRgn.c)
 *     GreSetRectRgn @ 0x1C008A530 (GreSetRectRgn.c)
 *     GreRectInRegion @ 0x1C0098880 (GreRectInRegion.c)
 *     GreGetRgnBox @ 0x1C0099280 (GreGetRgnBox.c)
 *     EngEqualRgn @ 0x1C016A8F0 (EngEqualRgn.c)
 *     InitializeGre @ 0x1C02DB800 (InitializeGre.c)
 * Callees:
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1C003E4A0 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C003ED80 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     HmgLock @ 0x1C0042980 (HmgLock.c)
 *     HmgPentryFromPobj @ 0x1C0042F00 (HmgPentryFromPobj.c)
 *     PushThreadGuardedObject @ 0x1C0049F70 (PushThreadGuardedObject.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     ?GrepIsPreviousModeKernel@@YAHXZ @ 0x1C008A720 (-GrepIsPreviousModeKernel@@YAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00ADF88 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C015622C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

RGNOBJAPI *__fastcall RGNOBJAPI::RGNOBJAPI(RGNOBJAPI *this, HRGN a2, int a3, int a4)
{
  char *v8; // rcx
  __int64 v9; // rax
  int v10; // ebx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rdi
  __int64 ProcessWow64Process; // rax
  __int64 v18; // rdx
  int v19; // ecx
  __int64 v20; // rdi
  char v21; // cl
  int v23; // [rsp+54h] [rbp-54h] BYREF
  char *v24; // [rsp+58h] [rbp-50h] BYREF
  __int64 v25; // [rsp+60h] [rbp-48h] BYREF
  struct _RECTL v26; // [rsp+68h] [rbp-40h] BYREF
  __int64 v27; // [rsp+78h] [rbp-30h]

  v25 = (__int64)this;
  *(_QWORD *)this = 0LL;
  v8 = (char *)this + 8;
  *(_OWORD *)v8 = 0LL;
  *((_OWORD *)v8 + 1) = 0LL;
  PushThreadGuardedObject(
    v8,
    (unsigned __int64)this & ((unsigned __int128)-(__int128)(unsigned __int64)v8 >> 64),
    (__int64)UnexpectedThreadTerminationHandler<RGNOBJAPI>::OnUnexpectedThreadTerminationStatic);
  v9 = HmgLock((unsigned int)a2, 4);
  *(_QWORD *)this = v9;
  v24 = (char *)this + 40;
  *((_QWORD *)this + 5) = a2;
  *((_DWORD *)this + 12) = a3;
  if ( !v9 )
    return this;
  v10 = 1;
  if ( a4 && *(_WORD *)(v9 + 12) != 1 )
  {
    if ( (unsigned int)dword_1C02883D8 > 5 && tlgKeywordOn((__int64)&dword_1C02883D8, 0x400000000000LL) )
    {
      v23 = 0;
      v25 = 0x1000000LL;
      LODWORD(v24) = 82559;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C02883D8,
        (unsigned int)&unk_1C0256E2C,
        v11,
        v12,
        (__int64)&v24,
        (__int64)&v25,
        (__int64)&v23);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
    goto LABEL_34;
  }
  if ( *(_DWORD *)(v9 + 80) )
  {
    if ( !(unsigned int)GrepIsPreviousModeKernel() )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v10 = 0;
    }
    goto LABEL_32;
  }
  v14 = *(_QWORD *)(HmgPentryFromPobj((_DWORD *)v9) + 16);
  if ( !v14 )
    goto LABEL_32;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
  v16 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v16 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( !v16 )
  {
    DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    goto LABEL_32;
  }
  ProcessWow64Process = PsGetProcessWow64Process(*(_QWORD *)v16);
  v18 = *(unsigned int *)(v16 + 292);
  v19 = *(_DWORD *)(v16 + 292);
  if ( ProcessWow64Process )
    v20 = v18 ^ (unsigned int)__ROR4__(v14, 32 - (v19 & 0x1F));
  else
    v20 = __ROR8__(v14, 64 - (v19 & 0x3Fu)) ^ v18;
  if ( v20 )
  {
    v26 = *(struct _RECTL *)v20;
    v27 = *(_QWORD *)(v20 + 16);
    v21 = _mm_cvtsi128_si32((__m128i)v26);
    if ( (v21 & 0x11) == 0x10 )
    {
      if ( (v21 & 0x20) == 0 )
        goto LABEL_32;
      if ( v26.top == 1 )
      {
        RGNOBJ::vSet(this);
LABEL_30:
        *(_DWORD *)v20 &= ~0x20u;
        goto LABEL_32;
      }
      if ( v26.top != 2 )
        goto LABEL_32;
      if ( (((v26.right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((HIDWORD(v27) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((v27 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((v26.bottom & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
      {
        RGNOBJ::vSet(this, (const struct _RECTL *const)&v26.right);
        goto LABEL_30;
      }
    }
    v10 = 0;
  }
LABEL_32:
  if ( !v10 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
LABEL_34:
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  return this;
}
