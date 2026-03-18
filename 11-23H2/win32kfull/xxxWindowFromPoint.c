/*
 * XREFs of xxxWindowFromPoint @ 0x1C0062EB8
 * Callers:
 *     NtUserWindowFromPoint @ 0x1C0062E70 (NtUserWindowFromPoint.c)
 *     NtUserWindowFromPhysicalPoint @ 0x1C01DFA30 (NtUserWindowFromPhysicalPoint.c)
 * Callees:
 *     ?xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHK@Z @ 0x1C0062FAC (-xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHK@Z.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C0063064 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C0072DBC (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     _tlgKeywordOn @ 0x1C00D9324 (_tlgKeywordOn.c)
 *     GetThreadDesktopWindow @ 0x1C00E9600 (GetThreadDesktopWindow.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x1C014FB76 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@33334AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01E30D0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U1@U1@U1@U1@U2@U-$_tlgWrapSz@D@@@-$_tlgWri.c)
 */

__int64 __fastcall xxxWindowFromPoint(struct tagPOINT a1)
{
  __int64 result; // rax
  struct tagWND **v3; // rdi
  struct tagWND *v4; // rcx
  HWND v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 WindowDetails; // rax
  __int128 v15; // xmm1
  int v16; // [rsp+70h] [rbp-49h] BYREF
  LONG v17; // [rsp+74h] [rbp-45h] BYREF
  __int64 v18; // [rsp+78h] [rbp-41h] BYREF
  __int128 v19; // [rsp+80h] [rbp-39h] BYREF
  __int128 v20; // [rsp+90h] [rbp-29h]
  __int64 v21; // [rsp+A0h] [rbp-19h]
  __int128 v22; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v23; // [rsp+B8h] [rbp-1h] BYREF
  __int128 v24; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v25; // [rsp+D0h] [rbp+17h]
  _BYTE v26[56]; // [rsp+D8h] [rbp+1Fh] BYREF
  LONG y; // [rsp+124h] [rbp+6Bh]
  __int64 v28; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v29; // [rsp+130h] [rbp+77h] BYREF
  __int64 v30; // [rsp+138h] [rbp+7Fh] BYREF

  y = a1.y;
  v24 = 0LL;
  v25 = 0LL;
  result = GetThreadDesktopWindow(0LL);
  v3 = (struct tagWND **)result;
  if ( result )
  {
    ThreadLock(result, &v24);
    if ( (unsigned int)IsWindowDesktopComposed(v3) )
    {
      v4 = v3[14];
      v19 = 0LL;
      *(_QWORD *)&v20 = 0LL;
      ThreadLock(v4, &v19);
      v5 = xxxDCEWindowHitTest(v3[14], 0, 0LL, 0LL, a1, 0LL, 5u);
      ThreadUnlock1(v7, v6, v8);
    }
    else
    {
      v5 = xxxWindowHitTest2((struct tagWND *)v3, a1, 0LL, 1u);
    }
    ThreadUnlock1(v10, v9, v11);
    LOBYTE(v12) = 1;
    v13 = HMValidateHandleNoSecure(v5, v12);
    if ( (unsigned __int8)InputTraceLogging::Enabled(0LL) )
    {
      WindowDetails = InputTraceLogging::GetWindowDetails(v26, v13);
      v15 = *(_OWORD *)(WindowDetails + 16);
      v19 = *(_OWORD *)WindowDetails;
      v21 = *(_QWORD *)(WindowDetails + 32);
      v20 = v15;
      if ( (unsigned int)dword_1C0359080 > 4 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0359080, 2LL) )
        {
          v22 = v19;
          LODWORD(v28) = HIDWORD(v21);
          LODWORD(v29) = v21;
          LODWORD(v30) = HIDWORD(v20);
          v16 = DWORD2(v20);
          v23 = v20;
          v17 = y;
          LODWORD(v18) = a1.x;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
            (int)&dword_1C0359080,
            (int)&dword_1C031BEC1,
            (__int64)&v18,
            (__int64)&v17,
            (__int64)&v23,
            (__int64)&v16,
            (__int64)&v30,
            (__int64)&v29,
            (__int64)&v28,
            (__int64)&v22 + 8,
            (__int64)&v22);
        }
      }
    }
    return v13;
  }
  return result;
}
