/*
 * XREFs of CmpLogTransactionAbortedByName @ 0x1407D0878
 * Callers:
 *     CmpLogTransactionAbortedWithChildName @ 0x140863F7C (CmpLogTransactionAbortedWithChildName.c)
 *     CmSetValueKey @ 0x140869F98 (CmSetValueKey.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall CmpLogTransactionAbortedByName(unsigned __int16 *a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rbx
  int v7; // [rsp+30h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-9h] BYREF
  _DWORD *v9; // [rsp+60h] [rbp+17h]
  int v10; // [rsp+68h] [rbp+1Fh]
  int v11; // [rsp+6Ch] [rbp+23h]
  __int64 v12; // [rsp+70h] [rbp+27h]
  _DWORD v13[2]; // [rsp+78h] [rbp+2Fh] BYREF
  int *v14; // [rsp+80h] [rbp+37h]
  int v15; // [rsp+88h] [rbp+3Fh]
  int v16; // [rsp+8Ch] [rbp+43h]

  if ( a4 )
  {
    v5 = a4;
    do
    {
      if ( (unsigned int)dword_140E09E08 > 4 && tlgKeywordOn((__int64)&dword_140E09E08, 1LL) )
      {
        v11 = 0;
        v13[1] = 0;
        v16 = 0;
        v9 = v13;
        v12 = *((_QWORD *)a1 + 1);
        v13[0] = *a1;
        v14 = &v7;
        v10 = 2;
        v7 = a2;
        v15 = 4;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E09E08,
          (unsigned __int8 *)byte_1400542F9,
          0LL,
          0LL,
          5u,
          &v8);
      }
      --v5;
    }
    while ( v5 );
  }
}
