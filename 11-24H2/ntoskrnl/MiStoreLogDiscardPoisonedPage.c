/*
 * XREFs of MiStoreLogDiscardPoisonedPage @ 0x14068D5F0
 * Callers:
 *     MiStoreDiscardPoisonedPage @ 0x14068D0B8 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall MiStoreLogDiscardPoisonedPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // r8
  int v7; // r9d
  unsigned __int16 *v8; // r10
  __int64 v9; // r11
  int v10; // [rsp+20h] [rbp-91h]
  int v11; // [rsp+28h] [rbp-89h]
  int v12; // [rsp+40h] [rbp-71h] BYREF
  int v13; // [rsp+44h] [rbp-6Dh] BYREF
  int v14; // [rsp+48h] [rbp-69h] BYREF
  __int64 v15; // [rsp+50h] [rbp-61h] BYREF
  __int64 v16; // [rsp+58h] [rbp-59h] BYREF
  __int64 v17; // [rsp+60h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+70h] [rbp-41h] BYREF
  int *v19; // [rsp+90h] [rbp-21h]
  int v20; // [rsp+98h] [rbp-19h]
  int v21; // [rsp+9Ch] [rbp-15h]
  int *v22; // [rsp+A0h] [rbp-11h]
  int v23; // [rsp+A8h] [rbp-9h]
  int v24; // [rsp+ACh] [rbp-5h]
  __int64 *v25; // [rsp+B0h] [rbp-1h]
  int v26; // [rsp+B8h] [rbp+7h]
  int v27; // [rsp+BCh] [rbp+Bh]
  __int64 *v28; // [rsp+C0h] [rbp+Fh]
  int v29; // [rsp+C8h] [rbp+17h]
  int v30; // [rsp+CCh] [rbp+1Bh]
  int *v31; // [rsp+D0h] [rbp+1Fh]
  int v32; // [rsp+D8h] [rbp+27h]
  int v33; // [rsp+DCh] [rbp+2Bh]
  __int64 *v34; // [rsp+E0h] [rbp+2Fh]
  int v35; // [rsp+E8h] [rbp+37h]
  int v36; // [rsp+ECh] [rbp+3Bh]

  if ( !a5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 1712));
    *(_QWORD *)(a1 + 1720) = a2;
  }
  if ( *(_QWORD *)&qword_140E37658
    && **(_DWORD **)&qword_140E37658 > 5u
    && tlgKeywordOn(*(__int64 *)&qword_140E37658, 0x400000000002LL) )
  {
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v36 = 0;
    v19 = &v12;
    v22 = &v13;
    v25 = &v15;
    v28 = &v16;
    v14 = *v8;
    v31 = &v14;
    v34 = &v17;
    v13 = v7;
    v20 = 4;
    v23 = 4;
    v26 = 8;
    v29 = 8;
    v32 = 4;
    v35 = 8;
    v12 = a5;
    v15 = v9;
    v16 = a3;
    v17 = 0x1000000LL;
    tlgWriteEx_EtwWriteEx(v6, (unsigned __int8 *)&byte_140058A77, v6, 1u, v10, v11, 8u, &v18);
  }
}
