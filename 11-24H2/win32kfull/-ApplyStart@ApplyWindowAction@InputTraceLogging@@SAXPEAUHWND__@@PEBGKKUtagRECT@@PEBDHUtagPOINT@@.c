/*
 * XREFs of ?ApplyStart@ApplyWindowAction@InputTraceLogging@@SAXPEAUHWND__@@PEBGKKUtagRECT@@PEBDHUtagPOINT@@UtagSIZE@@032I422@Z @ 0x1402D24E4
 * Callers:
 *     ?LogApplyWindowActionStart@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D3128 (-LogApplyWindowActionStart@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U2@U2@U1@U3@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapSz@G@@44444435444444444444444@Z @ 0x14000546C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapSz@D_ea_14000546C.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::ApplyWindowAction::ApplyStart(
        HWND a1,
        const unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        struct tagRECT *a5,
        const char *a6,
        int a7,
        struct tagPOINT a8,
        struct tagSIZE a9,
        HWND a10,
        const char *a11)
{
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r10d
  __int64 v15; // r11
  LONG cy; // [rsp+15Ch] [rbp-44h] BYREF
  LONG cx; // [rsp+160h] [rbp-40h] BYREF
  LONG y; // [rsp+164h] [rbp-3Ch] BYREF
  LONG x; // [rsp+168h] [rbp-38h] BYREF
  int v20; // [rsp+16Ch] [rbp-34h] BYREF
  int v21; // [rsp+170h] [rbp-30h] BYREF
  int v22; // [rsp+174h] [rbp-2Ch] BYREF
  LONG bottom; // [rsp+178h] [rbp-28h] BYREF
  LONG right; // [rsp+17Ch] [rbp-24h] BYREF
  LONG top; // [rsp+180h] [rbp-20h] BYREF
  LONG left; // [rsp+184h] [rbp-1Ch] BYREF
  const char *v27; // [rsp+188h] [rbp-18h] BYREF
  HWND v28; // [rsp+190h] [rbp-10h] BYREF
  __int64 v29; // [rsp+198h] [rbp-8h] BYREF
  const char *v30; // [rsp+1A0h] [rbp+0h] BYREF
  HWND v31; // [rsp+1A8h] [rbp+8h] BYREF

  if ( (unsigned int)dword_140398B80 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_140398B80, 0x80000LL) )
    {
      v20 = v13;
      v21 = v14;
      v29 = v15;
      v31 = a1;
      v27 = a11;
      v28 = a10;
      cx = a9.cx;
      x = a8.x;
      cy = a9.cy;
      v22 = a7;
      v30 = a6;
      y = a8.y;
      bottom = a5->bottom;
      right = a5->right;
      top = a5->top;
      left = a5->left;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_140398B80,
        (__int64)&unk_140368B4F,
        v12,
        v13,
        (__int64)&v31,
        (__int64)&left,
        (__int64)&top,
        (__int64)&right,
        (__int64)&bottom,
        &v30,
        (__int64)&v22,
        &v29,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&x,
        (__int64)&y,
        (__int64)&cx,
        (__int64)&cy,
        (__int64)&v28,
        &v27);
    }
  }
}
