/*
 * XREFs of ?MockDriverStateCreateDurationLiveDump@@YAXPEAX@Z @ 0x1401DDDA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U?$_tlgWrapSz@G@@U2@U1@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5555AEBU?$_tlgWrapSz@G@@435555@Z @ 0x140003B60 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U3@U3@U3@.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403D3630 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 */

void __fastcall MockDriverStateCreateDurationLiveDump(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // [rsp+A0h] [rbp-19h] BYREF
  int v7; // [rsp+A4h] [rbp-15h] BYREF
  int v8; // [rsp+A8h] [rbp-11h] BYREF
  int v9; // [rsp+ACh] [rbp-Dh] BYREF
  int v10; // [rsp+B0h] [rbp-9h] BYREF
  int v11; // [rsp+B4h] [rbp-5h] BYREF
  int v12; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v13; // [rsp+C0h] [rbp+7h]
  __int64 v14; // [rsp+C8h] [rbp+Fh] BYREF
  void *v15; // [rsp+D0h] [rbp+17h] BYREF
  __int64 v16; // [rsp+D8h] [rbp+1Fh] BYREF
  __int64 v17; // [rsp+E0h] [rbp+27h] BYREF
  _BYTE v18[40]; // [rsp+E8h] [rbp+2Fh] BYREF
  __int16 v19; // [rsp+120h] [rbp+67h] BYREF
  __int16 v20; // [rsp+128h] [rbp+6Fh] BYREF
  int v21; // [rsp+130h] [rbp+77h] BYREF
  int IsDebuggerPresent; // [rsp+138h] [rbp+7Fh] BYREF

  v1 = *a1;
  if ( *a1 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v18,
      (struct DXGADAPTER *)v1,
      1);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v1);
    if ( *(_DWORD *)(v1 + 200) == 1 )
    {
      v13 = *(_QWORD *)(v1 + 412);
      if ( (unsigned int)dword_14015E650 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_14015E650, 0x400000020000LL) )
        {
          LOBYTE(v2) = 1;
          v21 = *(unsigned __int8 *)(v1 + 209);
          v17 = 0x1000000LL;
          IsDebuggerPresent = (unsigned __int8)WdIsDebuggerPresent(v2);
          v6 = *(_DWORD *)(v1 + 3216);
          v7 = *(unsigned __int8 *)(v1 + 3053);
          v19 = *(_WORD *)(v1 + 3004);
          v14 = *(_QWORD *)(v1 + 2008);
          v15 = *(void **)(v1 + 2000);
          v8 = *(_DWORD *)(v1 + 436);
          v9 = *(_DWORD *)(v1 + 432);
          v10 = *(_DWORD *)(v1 + 428);
          v11 = *(_DWORD *)(v1 + 424);
          v12 = *(_DWORD *)(v1 + 420);
          v16 = v13;
          v20 = 1;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v3,
            (__int64)&unk_14013DD52,
            v4,
            v5,
            (__int64)&v20,
            (__int64)&v17,
            (__int64)&v16,
            (__int64)&v12,
            (__int64)&v11,
            (__int64)&v10,
            (__int64)&v9,
            (__int64)&v8,
            &v15,
            (__int64)&v14,
            (__int64)&v19,
            (__int64)&v7,
            (__int64)&v6,
            (__int64)&IsDebuggerPresent,
            (__int64)&v21);
        }
      }
    }
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
  }
  DxgCreateLiveDumpWithWdLogs(403LL, 2067LL);
}
