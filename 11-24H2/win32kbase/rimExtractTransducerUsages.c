/*
 * XREFs of rimExtractTransducerUsages @ 0x1400ACEBC
 * Callers:
 *     rimPopulateContactFrameData @ 0x1400AD6BC (rimPopulateContactFrameData.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U2@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@4333333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140006380 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U2@U1@U1@U1@U1@U1@U1@U-$_tlgWra.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 */

__int64 __fastcall rimExtractTransducerUsages(__int64 a1, USHORT a2, CHAR *Report, ULONG ReportLength, __int64 a5)
{
  __int64 v6; // rbx
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r12
  NTSTATUS v11; // r13d
  NTSTATUS v12; // eax
  int v13; // r14d
  NTSTATUS v14; // r15d
  __int16 v16; // r8
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // edi
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rbx
  ULONG v25; // [rsp+88h] [rbp-11h] BYREF
  ULONG v26; // [rsp+8Ch] [rbp-Dh] BYREF
  ULONG UsageValue; // [rsp+90h] [rbp-9h] BYREF
  unsigned int v28; // [rsp+94h] [rbp-5h] BYREF
  int v29; // [rsp+98h] [rbp-1h] BYREF
  int v30; // [rsp+9Ch] [rbp+3h] BYREF
  int v31; // [rsp+A0h] [rbp+7h] BYREF
  ULONG v32; // [rsp+A4h] [rbp+Bh] BYREF
  ULONG v33; // [rsp+A8h] [rbp+Fh] BYREF
  BOOL v34; // [rsp+ACh] [rbp+13h] BYREF
  BOOL v35; // [rsp+B0h] [rbp+17h] BYREF
  BOOL v36; // [rsp+B4h] [rbp+1Bh] BYREF
  __int64 v37; // [rsp+B8h] [rbp+1Fh] BYREF
  __int64 v38; // [rsp+F8h] [rbp+5Fh] BYREF

  v6 = a5;
  PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a1 + 440) + 16LL);
  v38 = *(_QWORD *)(a1 + 456);
  if ( !*(_QWORD *)(a5 + 2848) )
  {
    v26 = 0;
    v25 = 0;
    UsageValue = 0;
    v11 = HidP_GetUsageValue(HidP_Input, 0xDu, a2, 0x91u, &UsageValue, PreparsedData, Report, ReportLength);
    LODWORD(a5) = HidP_GetUsageValue(HidP_Input, 0xDu, a2, 0x5Bu, &v26, PreparsedData, Report, ReportLength);
    v12 = HidP_GetUsageValue(HidP_Input, 0xDu, a2, 0x6Eu, &v25, PreparsedData, Report, ReportLength);
    v13 = a5;
    v14 = v12;
    if ( (int)a5 >= 0 )
    {
      v16 = UsageValue;
      v17 = v26 | ((unsigned __int64)v25 << 32);
      *(_WORD *)(v6 + 2856) = UsageValue;
      v18 = v38;
      *(_QWORD *)(v6 + 2848) = v17;
      if ( (*(_DWORD *)(v18 + 368) & 0x8000) != 0 && v11 >= 0 && v16 && v17 )
      {
        *(_DWORD *)(v6 + 2860) = 1;
        *(_WORD *)(v6 + 2590) = v16;
        *(_QWORD *)(v6 + 2592) = v17;
      }
      else if ( !v17 )
      {
        return 0LL;
      }
      v19 = *(_DWORD *)(v6 + 2496);
      v20 = *(_QWORD *)(W32GetUserSessionState(v17) + 264);
      if ( *(_QWORD *)(v6 + 2848) != v20 || (v20 = v19 % 0x64, (unsigned int)v20 < 2) )
      {
        if ( (unsigned int)dword_14029AF48 > 5 && tlgKeywordOn((__int64)&dword_14029AF48, 0x800000000000LL) )
        {
          v23 = *(_QWORD *)(a1 + 440);
          v29 = *(_DWORD *)(v6 + 64);
          v30 = *(_DWORD *)(v6 + 2860);
          v31 = *(unsigned __int16 *)(v6 + 2856);
          v32 = v25;
          v33 = v26;
          v37 = 2048LL;
          v28 = v19;
          LOWORD(a5) = *(_WORD *)(v23 + 112);
          LOWORD(v38) = *(_WORD *)(v23 + 110);
          v34 = v11 >= 0;
          v35 = v14 >= 0;
          v36 = v13 >= 0;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
            v23,
            (__int64)&unk_140279B21,
            v21,
            v22,
            (__int64)&v36,
            (__int64)&v35,
            (__int64)&v34,
            (__int64)&v38,
            (__int64)&a5,
            (__int64)&v33,
            (__int64)&v32,
            (__int64)&v31,
            (__int64)&v30,
            (__int64)&v29,
            (__int64)&v28,
            (__int64)&v37);
        }
        v24 = *(_QWORD *)(v6 + 2848);
        *(_QWORD *)(W32GetUserSessionState(v20) + 264) = v24;
      }
    }
  }
  return 0LL;
}
