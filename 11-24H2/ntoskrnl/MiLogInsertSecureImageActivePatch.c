/*
 * XREFs of MiLogInsertSecureImageActivePatch @ 0x1407F5714
 * Callers:
 *     MmInsertSecureImageActivePatch @ 0x1407F67F4 (MmInsertSecureImageActivePatch.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall MiLogInsertSecureImageActivePatch(int a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // r8
  int v8; // r9d
  __int64 v9; // r10
  int v10; // r11d
  int v11; // [rsp+20h] [rbp-99h]
  int v12; // [rsp+28h] [rbp-91h]
  int v13; // [rsp+40h] [rbp-79h] BYREF
  int v14; // [rsp+44h] [rbp-75h] BYREF
  int v15; // [rsp+48h] [rbp-71h] BYREF
  int v16; // [rsp+4Ch] [rbp-6Dh] BYREF
  int v17; // [rsp+50h] [rbp-69h] BYREF
  int v18; // [rsp+54h] [rbp-65h] BYREF
  __int64 v19; // [rsp+58h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+60h] [rbp-59h] BYREF
  int *v21; // [rsp+80h] [rbp-39h]
  int v22; // [rsp+88h] [rbp-31h]
  int v23; // [rsp+8Ch] [rbp-2Dh]
  int *v24; // [rsp+90h] [rbp-29h]
  int v25; // [rsp+98h] [rbp-21h]
  int v26; // [rsp+9Ch] [rbp-1Dh]
  int *v27; // [rsp+A0h] [rbp-19h]
  int v28; // [rsp+A8h] [rbp-11h]
  int v29; // [rsp+ACh] [rbp-Dh]
  int *v30; // [rsp+B0h] [rbp-9h]
  int v31; // [rsp+B8h] [rbp-1h]
  int v32; // [rsp+BCh] [rbp+3h]
  int *v33; // [rsp+C0h] [rbp+7h]
  int v34; // [rsp+C8h] [rbp+Fh]
  int v35; // [rsp+CCh] [rbp+13h]
  int *v36; // [rsp+D0h] [rbp+17h]
  int v37; // [rsp+D8h] [rbp+1Fh]
  int v38; // [rsp+DCh] [rbp+23h]
  __int64 *v39; // [rsp+E0h] [rbp+27h]
  int v40; // [rsp+E8h] [rbp+2Fh]
  int v41; // [rsp+ECh] [rbp+33h]

  if ( *(_QWORD *)&qword_140E37658
    && **(_DWORD **)&qword_140E37658 > 5u
    && tlgKeywordOn(*(__int64 *)&qword_140E37658, 0x400000000020LL) )
  {
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v41 = 0;
    v13 = a6;
    v21 = &v13;
    v24 = &v14;
    v27 = &v15;
    v30 = &v16;
    v33 = &v17;
    v18 = a5;
    v36 = &v18;
    v19 = 2164260864LL;
    v39 = &v19;
    v17 = v8;
    v22 = 4;
    v25 = 4;
    v28 = 4;
    v31 = 4;
    v34 = 4;
    v37 = 4;
    v14 = a1;
    v15 = v10;
    v16 = v7;
    v40 = 8;
    tlgWriteEx_EtwWriteEx(v9, (unsigned __int8 *)&byte_140057DAF, v7, 1u, v11, v12, 9u, &v20);
  }
}
