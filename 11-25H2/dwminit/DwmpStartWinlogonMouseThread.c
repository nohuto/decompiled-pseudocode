/*
 * XREFs of DwmpStartWinlogonMouseThread @ 0x18000DDC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@4@Z @ 0x180001008 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008888 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CKstBase@@QEAA@XZ @ 0x18000F93C (--1CKstBase@@QEAA@XZ.c)
 *     ?Start@CKstBase@@AEAAJPEBG@Z @ 0x1800102FC (-Start@CKstBase@@AEAAJPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 DwmpStartWinlogonMouseThread()
{
  HANDLE ProcessHeap; // rax
  CKstBase *v2; // rax
  CKstBase *v3; // rbx
  int v4; // eax
  const unsigned __int16 *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // edi
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  HANDLE v12; // rax
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  GUID *v15; // [rsp+50h] [rbp+8h] BYREF
  GUID *v16; // [rsp+58h] [rbp+10h] BYREF
  __int64 v17; // [rsp+60h] [rbp+18h] BYREF

  if ( gpKstWinLogon )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x74E,
      (__int64)"onecoreuap\\windows\\dwm\\dwminit\\dll\\dwminit.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  gpKstWinLogon = 0LL;
  ProcessHeap = GetProcessHeap();
  v2 = (CKstBase *)HeapAlloc(ProcessHeap, 8u, 0x30uLL);
  v3 = v2;
  if ( !v2 )
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x730,
      (__int64)"onecoreuap\\windows\\dwm\\dwminit\\dll\\dwminit.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_16;
  }
  *((_QWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 1) = 0LL;
  *((_QWORD *)v2 + 2) = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  *(_QWORD *)v2 = &CKstWinLogon::`vftable';
  v4 = ((__int64 (__fastcall *)(CKstBase *))CKstWinLogon::`vftable')(v2);
  v9 = v4;
  if ( v4 < 0 )
  {
    v10 = (unsigned int)v4;
    v11 = 1842LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\dwm\\dwminit\\dll\\dwminit.cpp",
      (const char *)v10);
    CKstBase::~CKstBase(v3);
    v12 = GetProcessHeap();
    HeapFree(v12, 0, v3);
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x750,
      (__int64)"onecoreuap\\windows\\dwm\\dwminit\\dll\\dwminit.cpp",
      (const char *)v9);
    return v9;
  }
  if ( ((*((_QWORD *)v3 + 2) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v13 = CKstBase::Start(v3, v5);
    v9 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
        (const char *)(unsigned int)v13);
      v10 = v9;
      v11 = 1844LL;
      goto LABEL_6;
    }
  }
  gpKstWinLogon = v3;
  if ( (unsigned int)dword_180019000 > 5
    && (qword_180019010 & 0x400000000000LL) != 0
    && (qword_180019018 & 0x400000000000LL) == qword_180019018 )
  {
    v17 = 0x1000000LL;
    v15 = &gDwmInitTargetAppSessionGuid;
    v16 = &gDwmInitTelemetryActivityId;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>>(
      v6,
      (__int64)&unk_18001570F,
      v7,
      v8,
      (__int64)&v17,
      (__int64 *)&v16,
      &v15);
  }
  return 0LL;
}
