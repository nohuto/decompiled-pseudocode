/*
 * XREFs of GreResetDCInternal @ 0x1C02AD2F8
 * Callers:
 *     NtGdiResetDC @ 0x1C02C4030 (NtGdiResetDC.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0010D04 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     _tlgKeywordOn @ 0x1C00D9324 (_tlgKeywordOn.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C027449C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

__int64 __fastcall GreResetDCInternal(HDC a1, __int64 a2, int *a3, __int64 a4, __int64 a5)
{
  HDC v5; // r14
  int *v6; // r13
  BOOL v7; // esi
  int v8; // r12d
  HDC v9; // r15
  unsigned int v10; // edi
  DC *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  DC *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  int v18; // r13d
  BOOL v19; // r14d
  HDC v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  DC *v23; // rdx
  __int64 v24; // rcx
  void (__fastcall *v25)(_QWORD, _QWORD); // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  bool v29; // zf
  void (__fastcall *v30)(__int64, _QWORD, _QWORD); // rax
  int v32; // [rsp+28h] [rbp-A1h]
  __int64 v33; // [rsp+58h] [rbp-71h] BYREF
  int v34; // [rsp+60h] [rbp-69h] BYREF
  int v35; // [rsp+64h] [rbp-65h] BYREF
  __int64 v36; // [rsp+68h] [rbp-61h] BYREF
  DC *v37[2]; // [rsp+70h] [rbp-59h] BYREF
  _BYTE v38[32]; // [rsp+80h] [rbp-49h] BYREF
  DC *v39[2]; // [rsp+A0h] [rbp-29h] BYREF
  char v40[104]; // [rsp+B0h] [rbp-19h] BYREF

  v5 = a1;
  v6 = a3;
  v7 = 0;
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v39, a1);
  v11 = v39[0];
  if ( !v39[0] )
  {
LABEL_6:
    EngSetLastError(6u);
LABEL_7:
    v15 = v39[0];
    goto LABEL_8;
  }
  if ( *((_WORD *)v39[0] + 6) > 1u )
  {
    if ( (unsigned int)dword_1C0354098 > 5 && tlgKeywordOn((__int64)&dword_1C0354098, 0x400000000000LL) )
    {
      v35 = 0;
      LODWORD(v33) = v14;
      v36 = 0x1000000LL;
      v34 = 67261;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v12,
        byte_1C031E89C,
        v13,
        v14,
        (__int64)&v34,
        (__int64)&v36,
        (__int64)&v33,
        (__int64)&v35);
    }
    goto LABEL_6;
  }
  v8 = *((_DWORD *)v39[0] + 9) & 0x800;
  if ( v8 )
  {
    DC::bMakeInfoDC(v39[0], 0);
    v11 = v39[0];
  }
  v16 = *((_QWORD *)v11 + 6);
  v17 = *(_QWORD *)(v16 + 1680);
  *(_QWORD *)(v16 + 1680) = 0LL;
  v15 = v39[0];
  v36 = v17;
  if ( (*((_DWORD *)v39[0] + 9) & 0x100) == 0 && *((_DWORD *)v39[0] + 8) != 1 && (*(_DWORD *)(v16 + 40) & 0x80u) != 0 )
  {
    v18 = *((_DWORD *)v39[0] + 27);
    v19 = *((_QWORD *)v39[0] + 62) != 0LL;
    v7 = v19;
    if ( XDCOBJ::bCleanDC((XDCOBJ *)v39, 0) )
    {
      if ( *(_DWORD *)(v16 + 8) == 1 )
      {
        v20 = (HDC)hdcOpenDCW(&word_1C03123AC, a2, 0LL, 0LL, *(_QWORD *)(v16 + 2536), v36, a4, a5, 0);
        v9 = v20;
        if ( v20 )
        {
          *(_QWORD *)(v16 + 2536) = 0LL;
          DCOBJ::DCOBJ((DCOBJ *)v37, v20);
          v23 = v37[0];
          if ( v37[0] )
          {
            if ( v18 > 0 )
            {
              *((_DWORD *)v37[0] + 27) = *((_DWORD *)v37[0] + 26);
              v23 = v37[0];
            }
            *((_QWORD *)v23 + 259) = *((_QWORD *)v39[0] + 259);
            *((_QWORD *)v39[0] + 259) = 0LL;
            v24 = *((_QWORD *)v39[0] + 260);
            *((_QWORD *)v37[0] + 260) = v24;
            *((_QWORD *)v39[0] + 260) = 0LL;
            v25 = *(void (__fastcall **)(_QWORD, _QWORD))(v16 + 2720);
            if ( v25 )
              v25(*(_QWORD *)(v16 + 1768), *(_QWORD *)(*((_QWORD *)v37[0] + 6) + 1768LL));
            GreAcquireHmgrSemaphore(v24, v23, v21, v22);
            LOBYTE(v32) = 1;
            HmgSwapLockedHandleContents(a1, 0LL, v9, 0LL, v32);
            GreReleaseHmgrSemaphore(v26);
            v10 = 1;
          }
          else
          {
            EngSetLastError(6u);
          }
          if ( v37[0] )
            XDCOBJ::vUnlockFast((XDCOBJ *)v37);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v38);
          v7 = v19;
        }
      }
    }
    v5 = a1;
    v6 = a3;
    goto LABEL_7;
  }
LABEL_8:
  if ( v15 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v39);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v40);
  if ( v10 )
  {
    GrepDeleteDC(v9, 0x400000LL);
    DCOBJ::DCOBJ((DCOBJ *)v37, v5);
    if ( v37[0] )
    {
      v33 = *((_QWORD *)v37[0] + 6);
      if ( v7 )
      {
        if ( !PDEVOBJ::bMakeSurface((PDEVOBJ *)&v33, 0LL) )
          goto LABEL_38;
        DC::pSurface(v37[0], *(struct SURFACE **)(v33 + 2528));
        v27 = v33;
        v28 = *(_QWORD *)(v33 + 2528);
        v29 = (*(_DWORD *)(v28 + 112) & 0x2000000) == 0;
        *v6 = *(_DWORD *)(v28 + 112) & 0x2000000;
        if ( !v29 )
          *((_QWORD *)v37[0] + 64) = *(_QWORD *)(*(_QWORD *)(v27 + 2528) + 56LL);
        DC::bSetDefaultRegion(v37[0]);
        v30 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(v33 + 2944);
        if ( v30 )
          v30((*(_QWORD *)(v33 + 2528) + 24LL) & -(__int64)(*(_QWORD *)(v33 + 2528) != 0LL), 0LL, 0LL);
        else
LABEL_38:
          v10 = 0;
        if ( !v10 )
          goto LABEL_44;
      }
      else
      {
        *v6 = 0;
      }
      if ( v8 )
        DC::bMakeInfoDC(v37[0], 1);
    }
    else
    {
      EngSetLastError(6u);
      v10 = 0;
    }
LABEL_44:
    if ( v37[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v37);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v38);
  }
  return v10;
}
