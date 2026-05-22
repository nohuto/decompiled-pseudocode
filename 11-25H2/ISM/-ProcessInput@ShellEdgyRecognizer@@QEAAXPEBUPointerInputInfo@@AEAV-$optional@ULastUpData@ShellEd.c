/*
 * XREFs of ?ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV?$optional@ULastUpData@ShellEdgyRecognizer@@@std@@@Z @ 0x180057C0C
 * Callers:
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180088DB0 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4555@Z @ 0x180007EE4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U3@U3@U3@@-$_tlgW.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     ?GetPointerInfoTimePoint@QpcTimeConverter@@QEBA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@PEBUtagPOINTER_INFO@@@Z @ 0x180057F04 (-GetPointerInfoTimePoint@QpcTimeConverter@@QEBA-AV-$time_point@Usteady_clock@chrono@std@@V-$dura.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180057F60 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?DetectInOutIn@ShellEdgyRecognizer@@AEAA_NAEBV?$optional@ULastUpData@ShellEdgyRecognizer@@@std@@@Z @ 0x180057F8C (-DetectInOutIn@ShellEdgyRecognizer@@AEAA_NAEBV-$optional@ULastUpData@ShellEdgyRecognizer@@@std@@.c)
 *     ?HitTestEdgyRegion@ShellEdgyRecognizer@@QEAA?AW4EdgyLocation@1@UtagPOINT@@@Z @ 0x180058010 (-HitTestEdgyRegion@ShellEdgyRecognizer@@QEAA-AW4EdgyLocation@1@UtagPOINT@@@Z.c)
 *     ?CheckForGesture@ShellEdgyRecognizer@@AEAA?AW4GestureRecognizerState@@XZ @ 0x180094E54 (-CheckForGesture@ShellEdgyRecognizer@@AEAA-AW4GestureRecognizerState@@XZ.c)
 *     _o_atan2_0 @ 0x18009D2D8 (_o_atan2_0.c)
 *     ?EdgyLocationToString@ShellEdgyRecognizer@@AEAAPEBGXZ @ 0x18015A6A8 (-EdgyLocationToString@ShellEdgyRecognizer@@AEAAPEBGXZ.c)
 *     ?FailureReasonToString@ShellEdgyRecognizer@@AEAAPEBGXZ @ 0x18015A6F4 (-FailureReasonToString@ShellEdgyRecognizer@@AEAAPEBGXZ.c)
 */

char __fastcall ShellEdgyRecognizer::ProcessInput(ShellEdgyRecognizer *this, __int64 a2, __int64 a3)
{
  int v3; // esi
  int v4; // r12d
  char v5; // r13
  __int64 v6; // r15
  int v8; // eax
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // r14d
  __int64 v13; // rbx
  __int64 v14; // xmm1_8
  int v15; // r8d
  ShellEdgyRecognizer *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v21; // [rsp+60h] [rbp-19h] BYREF
  __int64 v22; // [rsp+68h] [rbp-11h] BYREF
  const WCHAR *v23; // [rsp+70h] [rbp-9h] BYREF
  const WCHAR *v24; // [rsp+78h] [rbp-1h] BYREF
  __int128 v25; // [rsp+80h] [rbp+7h] BYREF
  __int64 v26; // [rsp+90h] [rbp+17h]
  int v27; // [rsp+E0h] [rbp+67h] BYREF
  int v28; // [rsp+F8h] [rbp+7Fh] BYREF

  v8 = *(_DWORD *)this - 1;
  if ( (v8 & 0xFFFFFFFD) == 0 )
    return v8;
  v10 = a2 + 320;
  gsl::details::extent_type<-1>::extent_type<-1>(&v25, *(unsigned int *)(a2 + 316));
  LOBYTE(v8) = v25;
  if ( (_QWORD)v25 != -1LL )
  {
    v3 = 0;
    if ( v10 || !(_QWORD)v25 )
    {
      v4 = 0;
      v5 = 0;
      v6 = v10 + 144 * v25;
      if ( v10 != v6 )
      {
        v10 += 12LL;
        goto LABEL_8;
      }
      goto LABEL_6;
    }
  }
  _o_terminate(v11);
  __debugbreak();
LABEL_28:
  QpcTimeConverter::GetPointerInfoTimePoint((char *)this + 64, &v25, v10 - 12);
  *((_QWORD *)&v25 + 1) = *(_QWORD *)(v10 + 4);
  v26 = *(_QWORD *)(v10 + 44);
  v14 = v26;
  *(_OWORD *)a3 = v25;
  *(_QWORD *)(a3 + 16) = v14;
  if ( *(_BYTE *)(a3 + 24) == (_BYTE)v3 )
    *(_BYTE *)(a3 + 24) = 1;
  while ( 1 )
  {
    v10 += 144LL;
    LOBYTE(v8) = v10 - 12;
    if ( v10 - 12 == v6 )
      break;
LABEL_8:
    if ( (*(_BYTE *)v10 & 4) != 0 )
    {
      ++v4;
      if ( (*(_DWORD *)v10 & 0x2000) != 0 )
      {
        if ( *(_DWORD *)this == v3 )
        {
          *((_DWORD *)this + 5) = *(_DWORD *)(v10 + 44);
          *((_DWORD *)this + 6) = *(_DWORD *)(v10 + 48);
          *((_QWORD *)this + 4) = *(_QWORD *)QpcTimeConverter::GetPointerInfoTimePoint(
                                               (char *)this + 64,
                                               &v27,
                                               v10 - 12);
        }
        *((_DWORD *)this + 10) = *(_DWORD *)(v10 + 44);
        *((_DWORD *)this + 11) = *(_DWORD *)(v10 + 48);
        v5 = 1;
        *((_QWORD *)this + 6) = *(_QWORD *)QpcTimeConverter::GetPointerInfoTimePoint((char *)this + 64, &v28, v10 - 12);
        *((_QWORD *)this + 7) = *(_QWORD *)(v10 + 4);
      }
    }
    if ( (*(_DWORD *)v10 & 0x40000) != 0 )
      goto LABEL_28;
  }
  if ( !v5 )
    goto LABEL_6;
  if ( v4 != 1 )
    goto LABEL_6;
  LOBYTE(v8) = ShellEdgyRecognizer::DetectInOutIn(this, a3);
  if ( (_BYTE)v8 )
    goto LABEL_6;
  if ( *(_DWORD *)this != v3 )
  {
    if ( *(_DWORD *)this != 2 )
      return v8;
    goto LABEL_21;
  }
  v8 = ShellEdgyRecognizer::HitTestEdgyRegion(this, *(_QWORD *)((char *)this + 20));
  if ( !v8 )
  {
LABEL_6:
    *(_DWORD *)this = 1;
    return v8;
  }
  *((_DWORD *)this + 1) = v8;
  *(_DWORD *)this = 2;
LABEL_21:
  v8 = ShellEdgyRecognizer::CheckForGesture(this);
  v12 = v8;
  *(_DWORD *)this = v8;
  if ( ((v8 - 1) & 0xFFFFFFFD) == 0 )
  {
    v13 = *(_QWORD *)((char *)this + 12);
    v22 = v13;
    if ( v13 )
    {
      o_atan2_0();
      LOBYTE(v8) = _o_lround();
    }
    if ( (unsigned int)dword_180244248 > 5 )
    {
      LOBYTE(v8) = tlgKeywordOn((__int64)&dword_180244248, 0x200000000000LL);
      if ( (_BYTE)v8 )
      {
        v21 = HIDWORD(v22);
        v27 = v15;
        v28 = v13;
        v23 = ShellEdgyRecognizer::FailureReasonToString(this);
        LOBYTE(v3) = v12 == 3;
        LODWORD(v22) = v3;
        v24 = ShellEdgyRecognizer::EdgyLocationToString(v16);
        *(_QWORD *)&v25 = 0x1000000LL;
        LOBYTE(v8) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                       v17,
                       (__int64)&unk_1802191C1,
                       v18,
                       v19,
                       (__int64)&v25,
                       &v24,
                       (__int64)&v22,
                       &v23,
                       (__int64)&v21,
                       (__int64)&v28,
                       (__int64)&v27);
      }
    }
  }
  return v8;
}
