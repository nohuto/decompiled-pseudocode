/*
 * XREFs of ?GetDCompStatisticsAndLogTelemetry@GestureServices@@AEAAXUtagPOINT@@_KPEAVGestureHandler@@@Z @ 0x180140298
 * Callers:
 *     _lambda_80df7c2b76f58973f9ddec3659020abd_::operator() @ 0x18007DFC8 (_lambda_80df7c2b76f58973f9ddec3659020abd_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U1@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@33333334@Z @ 0x180006AA0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@U1@U1@U1@U1@U1@U1@U2@@-$_tlgWriteTemplate@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@33333AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x180006C00 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U3@@-.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     ?CalculateElapsedMicroseconds@InputETW@@SA_K_K0@Z @ 0x1800822E0 (-CalculateElapsedMicroseconds@InputETW@@SA_K_K0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18008A99C (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009B5DC (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UtagCOMPOSITION_TARGET_ID@@V?$allocator@UtagCOMPOSITION_TARGET_ID@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18013F39C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UtagCOMPOSITION_TARGET_ID@@V-$allocator@Ut.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UtagCOMPOSITION_TARGET_ID@@@std@@@std@@YAPEAUtagCOMPOSITION_TARGET_ID@@PEAU1@_KAEAV?$allocator@UtagCOMPOSITION_TARGET_ID@@@0@@Z @ 0x18013F784 (--$_Uninitialized_value_construct_n@V-$allocator@UtagCOMPOSITION_TARGET_ID@@@std@@@std@@YAPEAUta.c)
 *     ?FindDCompTargetIdForPoint@GestureServices@@AEAA?AV?$tuple@V?$optional@UtagCOMPOSITION_TARGET_ID@@@std@@PEBG@std@@UtagPOINT@@IPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x18014015C (-FindDCompTargetIdForPoint@GestureServices@@AEAA-AV-$tuple@V-$optional@UtagCOMPOSITION_TARGET_ID.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GestureServices::GetDCompStatisticsAndLogTelemetry(
        const WCHAR *this,
        POINT a2,
        unsigned __int64 a3,
        const WCHAR **a4)
{
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r12
  int *v8; // rdi
  int Statistics; // eax
  unsigned __int64 v10; // r13
  unsigned int v11; // ecx
  unsigned __int64 v12; // rdx
  char *v13; // rax
  __int64 DCompTargetIdForPoint; // rax
  unsigned __int8 v15; // di
  unsigned int v16; // ebx
  const WCHAR *i; // rax
  int TargetStatistics; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  struct GestureHandler *v22; // r14
  unsigned __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v28; // [rsp+78h] [rbp-88h] BYREF
  const WCHAR *v29; // [rsp+80h] [rbp-80h] BYREF
  const WCHAR **v30; // [rsp+88h] [rbp-78h] BYREF
  const WCHAR *v31; // [rsp+90h] [rbp-70h] BYREF
  __int128 v32; // [rsp+98h] [rbp-68h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-58h]
  __int64 v34; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v35; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v36; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v37; // [rsp+C8h] [rbp-38h] BYREF
  const WCHAR *v38; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v39; // [rsp+D8h] [rbp-28h] BYREF
  const WCHAR *v40; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v41; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v42; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v43[2]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v44; // [rsp+118h] [rbp+18h]
  char v45[8]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v46; // [rsp+128h] [rbp+28h]
  unsigned int v47; // [rsp+138h] [rbp+38h]
  unsigned __int64 v48; // [rsp+148h] [rbp+48h]
  unsigned int v49; // [rsp+150h] [rbp+50h]
  unsigned __int64 v50; // [rsp+160h] [rbp+60h]
  int v51[28]; // [rsp+170h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  v30 = a4;
  v29 = this;
  v31 = a4[13];
  BYTE12(v42) = 0;
  v27 = 0;
  if ( !a3 )
  {
    LODWORD(v28) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgs((__int64)this, 0x20000, 609);
  }
  v6 = 0LL;
  v7 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  *(_OWORD *)v43 = 0LL;
  v44 = 0LL;
  v8 = v51;
  Statistics = NtDCompositionGetStatistics(&v31, v43, 4LL, v51, &v27);
  if ( Statistics < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x274,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\gestureservices.cpp",
      (const char *)(unsigned int)Statistics);
    if ( (_QWORD)v32 )
      std::_Deallocate<16,0>((char *)v32, (const struct std::nothrow_t *)(4 * ((v33 - (__int64)v32) >> 2)));
    return;
  }
  v10 = v43[0];
  if ( v43[0] <= a3 )
  {
    LODWORD(v28) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgs((__int64)retaddr, 0x20000, 631);
  }
  v11 = v27;
  if ( (unsigned int)v27 > 4 )
  {
    v8 = (int *)v32;
    v12 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)&v32 + 1) - v32) >> 2);
    if ( (unsigned int)v27 >= v12 )
    {
      if ( (unsigned int)v27 <= v12 )
        goto LABEL_16;
      if ( (unsigned int)v27 > (unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * ((v33 - (__int64)v32) >> 2)) )
      {
        std::vector<tagCOMPOSITION_TARGET_ID>::_Resize_reallocate<std::_Value_init_tag>(
          (__int64)&v32,
          (unsigned int)v27);
        v11 = v27;
        v8 = (int *)v32;
        goto LABEL_16;
      }
      v13 = std::_Uninitialized_value_construct_n<std::allocator<tagCOMPOSITION_TARGET_ID>>(
              *((char **)&v32 + 1),
              (unsigned int)v27 - v12);
      v11 = v27;
      v8 = (int *)v32;
    }
    else
    {
      v13 = (char *)(v32 + 28LL * (unsigned int)v27);
    }
    *((_QWORD *)&v32 + 1) = v13;
LABEL_16:
    if ( (int)NtDCompositionGetStatistics(&v31, v43, v11, v8, 0LL) >= 0 )
    {
      v11 = v27;
    }
    else
    {
      v8 = v51;
      v11 = 4;
      v27 = 4;
    }
  }
  DCompTargetIdForPoint = GestureServices::FindDCompTargetIdForPoint((__int64)v29, (__int64)v45, a2, v11, (__int64)v8);
  v41 = *(_OWORD *)(DCompTargetIdForPoint + 8);
  v42 = *(_OWORD *)(DCompTargetIdForPoint + 24);
  v40 = *(const WCHAR **)DCompTargetIdForPoint;
  if ( (_QWORD)v32 )
    std::_Deallocate<16,0>((char *)v32, (const struct std::nothrow_t *)(4 * ((v33 - (__int64)v32) >> 2)));
  if ( !BYTE12(v42) )
    goto LABEL_42;
  memset_0(v45, 0, 0x48uLL);
  v28 = 0LL;
  v15 = 1;
  if ( (int)DCompositionGetFrameId(2LL, &v28) < 0 )
  {
    if ( !BYTE12(v42) )
      std::_Throw_bad_optional_access();
    if ( (int)NtDCompositionGetTargetStatistics(&v31, &v41, v45) < 0 )
      goto LABEL_42;
    v6 = v48;
    v7 = v50;
  }
  else
  {
    v16 = 0;
    for ( i = v31; ; i = (const WCHAR *)((char *)v29 + 1) )
    {
      v29 = i;
      if ( (unsigned __int64)i >= v28 )
        break;
      if ( !BYTE12(v42) )
        std::_Throw_bad_optional_access();
      TargetStatistics = NtDCompositionGetTargetStatistics(&v29, &v41, v45);
      if ( TargetStatistics < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2A8,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\ge"
                   "stureservices.cpp",
          (const char *)(unsigned int)TargetStatistics);
        break;
      }
      if ( !v16 && v46 )
      {
        v6 = v48;
        v16 = v47;
      }
      if ( v50 && v49 >= v16 )
      {
        v7 = v50;
        break;
      }
    }
  }
  if ( v6 <= a3 || v7 <= a3 )
LABEL_42:
    v15 = 0;
  if ( v10 > a3 )
  {
    InputETW::CalculateElapsedMicroseconds(a3, v10);
    if ( (unsigned int)dword_180244248 > 5 && tlgKeywordOn((__int64)&dword_180244248, 0x400000000000LL) )
    {
      LODWORD(v28) = v15;
      LODWORD(v29) = v27;
      v34 = v20;
      v35 = v10;
      v36 = a3;
      v22 = (struct GestureHandler *)v30;
      v30 = (const WCHAR **)v30[32];
      v37 = *((unsigned int *)v22 + 34);
      v38 = (const WCHAR *)*((_QWORD *)v22 + 3);
      v39 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v19,
        (__int64)&unk_18021529A,
        v20,
        v21,
        (__int64)&v39,
        &v38,
        (__int64)&v37,
        (__int64)&v30,
        (__int64)&v36,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v29,
        (__int64)&v28);
    }
    else
    {
      v22 = (struct GestureHandler *)v30;
    }
    if ( v15 )
    {
      v23 = InputETW::CalculateElapsedMicroseconds(a3, v6) / 0x3E8;
      InputETW::CalculateElapsedMicroseconds(a3, v7);
      if ( (unsigned int)dword_180244248 > 5 && tlgKeywordOn((__int64)&dword_180244248, 0x400000000000LL) )
      {
        v39 = v25;
        v38 = (const WCHAR *)v23;
        v37 = v7;
        v36 = v6;
        v35 = a3;
        v34 = *((_QWORD *)v22 + 32);
        v30 = (const WCHAR **)*((unsigned int *)v22 + 34);
        v29 = (const WCHAR *)*((_QWORD *)v22 + 3);
        v28 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
          v24,
          (__int64)&unk_1802151EB,
          v25,
          v26,
          (__int64)&v28,
          &v29,
          (__int64)&v30,
          (__int64)&v34,
          (__int64)&v35,
          (__int64)&v36,
          (__int64)&v37,
          (__int64)&v38,
          (__int64)&v39,
          &v40);
      }
    }
  }
}
