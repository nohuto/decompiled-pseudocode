/*
 * XREFs of _lambda_49e79ef9181f572942092d934c66ae7a_::operator() @ 0x140082A10
 * Callers:
 *     _DXGKCALLONEXIT__lambda_49e79ef9181f572942092d934c66ae7a____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1400828B0 (_DXGKCALLONEXIT__lambda_49e79ef9181f572942092d934c66ae7a____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400401E4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 *     ?CleanSwitchInProgressInternal@DISPLAY_MUX_MGR@@AEAAXXZ @ 0x1400839E0 (-CleanSwitchInProgressInternal@DISPLAY_MUX_MGR@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

__int64 __fastcall lambda_49e79ef9181f572942092d934c66ae7a_::operator()(int **a1)
{
  int *v2; // r8
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp-19h] BYREF
  __int64 v8; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v10; // [rsp+60h] [rbp+17h]
  int v11; // [rsp+68h] [rbp+1Fh]
  int v12; // [rsp+6Ch] [rbp+23h]
  __int64 v13; // [rsp+70h] [rbp+27h]
  int v14; // [rsp+78h] [rbp+2Fh]
  int v15; // [rsp+7Ch] [rbp+33h]
  int *v16; // [rsp+80h] [rbp+37h]
  int v17; // [rsp+88h] [rbp+3Fh]
  int v18; // [rsp+8Ch] [rbp+43h]

  if ( (unsigned int)dword_14015E5A8 > 5 && tlgKeywordOn((__int64)&dword_14015E5A8, 512LL) )
  {
    v2 = *a1;
    v18 = 0;
    v15 = 0;
    v12 = 0;
    v3 = *(_QWORD *)v2;
    v17 = 4;
    v14 = 16;
    v11 = 8;
    v7 = *(_DWORD *)(v3 + 88);
    v4 = *(_QWORD *)v2 + 40LL;
    v8 = 2048LL;
    v5 = *(_QWORD *)v2;
    v13 = v4;
    v16 = &v7;
    v10 = &v8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14015E5A8, byte_14013EF64, (const GUID *)(v5 + 24), 0LL, 5u, &v9);
  }
  if ( *a1[1] >= 0 )
  {
    result = WdLogSingleEntry1(4LL, *(_QWORD *)a1[3]);
    WdLogGlobalForLineNumber = 3120;
  }
  else
  {
    DISPLAY_MUX_MGR::CleanSwitchInProgressInternal((DISPLAY_MUX_MGR *)a1[2]);
    result = WdLogSingleEntry2(2LL, *(unsigned int *)(*(_QWORD *)*a1 + 88LL), *(int *)(*(_QWORD *)*a1 + 80LL));
    WdLogGlobalForLineNumber = 3115;
  }
  return result;
}
