/*
 * XREFs of _lambda_52c51082f408f1fc2e7511a6afc05a6d_::operator() @ 0x14018B4D0
 * Callers:
 *     _DXGKCALLONEXIT__lambda_52c51082f408f1fc2e7511a6afc05a6d____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140065598 (_DXGKCALLONEXIT__lambda_52c51082f408f1fc2e7511a6afc05a6d____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x140002748 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 *     McTemplateK0qtqqq_EtwWriteTransfer @ 0x140066CD0 (McTemplateK0qtqqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     DxgkWriteDiagEntry @ 0x1403757E0 (DxgkWriteDiagEntry.c)
 */

char __fastcall lambda_52c51082f408f1fc2e7511a6afc05a6d_::operator()(__int64 a1)
{
  unsigned int *v1; // rsi
  char *v2; // rbx
  int *v3; // rdi
  int *v4; // r14
  int v5; // r8d
  int v6; // edx
  int v7; // eax
  int CurrentProcessSessionId; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // r15d
  __int64 v12; // r9
  int v14; // [rsp+58h] [rbp-29h] BYREF
  unsigned int v15; // [rsp+5Ch] [rbp-25h] BYREF
  int v16; // [rsp+60h] [rbp-21h] BYREF
  int v17; // [rsp+64h] [rbp-1Dh] BYREF
  int v18; // [rsp+68h] [rbp-19h] BYREF
  __int64 v19; // [rsp+70h] [rbp-11h] BYREF
  _DWORD v20[2]; // [rsp+78h] [rbp-9h] BYREF
  __int64 v21; // [rsp+80h] [rbp-1h]
  __int128 v22; // [rsp+88h] [rbp+7h]
  __int64 v23; // [rsp+98h] [rbp+17h]
  int v24; // [rsp+A0h] [rbp+1Fh]
  int v25; // [rsp+A4h] [rbp+23h]
  int v26; // [rsp+A8h] [rbp+27h]
  int v27; // [rsp+ACh] [rbp+2Bh]
  int v28; // [rsp+B0h] [rbp+2Fh]
  int v29; // [rsp+B4h] [rbp+33h]

  v21 = 0LL;
  v25 = 0;
  v1 = *(unsigned int **)(a1 + 24);
  v2 = *(char **)(a1 + 16);
  v3 = *(int **)a1;
  v4 = *(int **)(a1 + 8);
  v22 = 0LL;
  v5 = (unsigned __int8)*v2;
  v6 = *v3;
  v7 = *v4 + (*v1 << 16);
  v24 = 0;
  v23 = 0LL;
  v21 = 0LL;
  v20[0] = 6;
  v20[1] = 64;
  v22 = 0LL;
  v26 = 76;
  v27 = v7;
  v28 = v6;
  v29 = v5;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v20);
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  v11 = CurrentProcessSessionId;
  if ( (unsigned int)dword_14015B660 > 5 )
  {
    LOBYTE(CurrentProcessSessionId) = tlgKeywordOn((__int64)&dword_14015B660, 0x400000000000LL);
    if ( (_BYTE)CurrentProcessSessionId )
    {
      v14 = (unsigned __int8)*v2;
      v15 = *v1;
      v16 = *v4;
      v17 = *v3;
      v18 = v11;
      v19 = 33556480LL;
      LOBYTE(CurrentProcessSessionId) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                                          v15,
                                          (__int64)&unk_140138820,
                                          v10,
                                          v12,
                                          (__int64)&v19,
                                          (__int64)&v18,
                                          (__int64)&v17,
                                          (__int64)&v16,
                                          (__int64)&v15,
                                          (__int64)&v14);
    }
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
    LOBYTE(CurrentProcessSessionId) = McTemplateK0qtqqq_EtwWriteTransfer(
                                        (unsigned __int8)*v2,
                                        v9,
                                        v10,
                                        *v3,
                                        *v2,
                                        *v4,
                                        *v1,
                                        v11);
  return CurrentProcessSessionId;
}
