/*
 * XREFs of MmNotifyProcessInSwapTrigger @ 0x1402D6BB8
 * Callers:
 *     KiInSwapSingleProcess @ 0x1402D5EF4 (KiInSwapSingleProcess.c)
 *     KiRequestProcessInSwap @ 0x1402DFA90 (KiRequestProcessInSwap.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x14042C374 (_tlgCreate1Sz_char.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall MmNotifyProcessInSwapTrigger(__int64 a1)
{
  char result; // al
  __int64 v2; // r9
  __int64 v3; // r9
  int v4; // ecx
  int v5; // r10d
  int v6; // r8d
  int v7; // [rsp+20h] [rbp-39h]
  int v8; // [rsp+28h] [rbp-31h]
  int v9; // [rsp+40h] [rbp-19h] BYREF
  __int64 v10; // [rsp+48h] [rbp-11h] BYREF
  __int64 v11[4]; // [rsp+50h] [rbp-9h] BYREF
  _BYTE v12[16]; // [rsp+70h] [rbp+17h] BYREF
  int *v13; // [rsp+80h] [rbp+27h]
  int v14; // [rsp+88h] [rbp+2Fh]
  int v15; // [rsp+8Ch] [rbp+33h]
  __int64 *v16; // [rsp+90h] [rbp+37h]
  int v17; // [rsp+98h] [rbp+3Fh]
  int v18; // [rsp+9Ch] [rbp+43h]

  result = HIBYTE(*(_DWORD *)(a1 + 1208)) & 0x30;
  if ( result == 32 && *(_QWORD *)&qword_140E37658 && **(_DWORD **)&qword_140E37658 > 5u )
  {
    result = tlgKeywordOn(*(_QWORD *)&qword_140E37658, 8LL);
    if ( result )
    {
      tlgCreate1Sz_char(v12, v2 + 824);
      v4 = *(_DWORD *)(v3 + 464);
      v15 = 0;
      v18 = 0;
      v13 = &v9;
      v16 = &v10;
      v9 = v4;
      v14 = 4;
      v10 = 0x1000000LL;
      v17 = v5;
      return tlgWriteEx_EtwWriteEx(v6, (int)&byte_140056ACD, v6, v5 - 7, v7, v8, 5u, (__int64)v11);
    }
  }
  return result;
}
