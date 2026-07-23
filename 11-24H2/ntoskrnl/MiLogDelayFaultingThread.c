/*
 * XREFs of MiLogDelayFaultingThread @ 0x140681634
 * Callers:
 *     MiDelayFaultingThread @ 0x140260C98 (MiDelayFaultingThread.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void MiLogDelayFaultingThread()
{
  __int64 v0; // r8
  unsigned int v1; // r9d
  __int64 v2; // r10
  __int64 v3; // r11
  int Blink_high; // eax
  int v5; // [rsp+20h] [rbp-79h]
  int v6; // [rsp+28h] [rbp-71h]
  int v7; // [rsp+40h] [rbp-59h] BYREF
  int v8; // [rsp+44h] [rbp-55h] BYREF
  int v9; // [rsp+48h] [rbp-51h] BYREF
  int v10; // [rsp+4Ch] [rbp-4Dh] BYREF
  int v11; // [rsp+50h] [rbp-49h] BYREF
  __int64 v12; // [rsp+58h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+60h] [rbp-39h] BYREF
  int *v14; // [rsp+80h] [rbp-19h]
  int v15; // [rsp+88h] [rbp-11h]
  int v16; // [rsp+8Ch] [rbp-Dh]
  int *v17; // [rsp+90h] [rbp-9h]
  int v18; // [rsp+98h] [rbp-1h]
  int v19; // [rsp+9Ch] [rbp+3h]
  int *v20; // [rsp+A0h] [rbp+7h]
  int v21; // [rsp+A8h] [rbp+Fh]
  int v22; // [rsp+ACh] [rbp+13h]
  int *v23; // [rsp+B0h] [rbp+17h]
  int v24; // [rsp+B8h] [rbp+1Fh]
  int v25; // [rsp+BCh] [rbp+23h]
  __int64 *v26; // [rsp+C0h] [rbp+27h]
  int v27; // [rsp+C8h] [rbp+2Fh]
  int v28; // [rsp+CCh] [rbp+33h]
  int *v29; // [rsp+D0h] [rbp+37h]
  int v30; // [rsp+D8h] [rbp+3Fh]
  int v31; // [rsp+DCh] [rbp+43h]

  if ( *(_QWORD *)&qword_140E37658
    && **(_DWORD **)&qword_140E37658 > 5u
    && tlgKeywordOn(*(__int64 *)&qword_140E37658, 1LL) )
  {
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v7 = (unsigned __int16)v1;
    v14 = &v7;
    v15 = 4;
    v8 = HIWORD(v1) & 1;
    v17 = &v8;
    v20 = &v9;
    v18 = 4;
    v21 = 4;
    v9 = (v1 >> 17) & 1;
    Blink_high = HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink);
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v10 = Blink_high;
    v23 = &v10;
    v26 = &v12;
    v29 = &v11;
    v24 = 4;
    v27 = 8;
    v30 = 4;
    v12 = v3;
    v11 = v0;
    tlgWriteEx_EtwWriteEx(v2, (unsigned __int8 *)&byte_1400583A7, v0, 1u, v5, v6, 8u, &v13);
  }
}
