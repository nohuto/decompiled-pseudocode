/*
 * XREFs of ?LogRemoteVsyncTimeout@BLTQUEUE@@AEAAXXZ @ 0x140282700
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x140093270 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400401E4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 *     _tlgWriteAgg @ 0x140060208 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

void __fastcall BLTQUEUE::LogRemoteVsyncTimeout(BLTQUEUE *this)
{
  unsigned int v1; // r9d
  __int64 v2; // [rsp+30h] [rbp-9h] BYREF
  __int64 v3; // [rsp+38h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+40h] [rbp+7h] BYREF
  __int64 *v5; // [rsp+60h] [rbp+27h]
  int v6; // [rsp+68h] [rbp+2Fh]
  int v7; // [rsp+6Ch] [rbp+33h]
  __int64 *v8; // [rsp+70h] [rbp+37h]
  int v9; // [rsp+78h] [rbp+3Fh]
  int v10; // [rsp+7Ch] [rbp+43h]

  if ( (unsigned int)dword_14015E5A8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_14015E5A8, 0x400000000800LL) )
    {
      v10 = 0;
      v7 = 0;
      v8 = &v2;
      v9 = 8;
      v5 = &v3;
      v6 = 8;
      v2 = 33556480LL;
      v3 = 1LL;
      tlgWriteAgg((__int64)&dword_14015E5A8, (unsigned __int8 *)dword_140140E68, 0LL, 4u, &v4);
      v1 = dword_14015E5A8;
    }
    if ( v1 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_14015E5A8, 2048LL) )
        tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14015E5A8, byte_140140E46, 0LL, 0LL, 2u, &v4);
    }
  }
}
