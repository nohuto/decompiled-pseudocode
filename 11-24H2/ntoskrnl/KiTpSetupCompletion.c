/*
 * XREFs of KiTpSetupCompletion @ 0x14073C114
 * Callers:
 *     KeSetTracepoint @ 0x14073B5D0 (KeSetTracepoint.c)
 * Callees:
 *     RtlIcParseInstruction @ 0x140BB90E8 (RtlIcParseInstruction.c)
 */

__int64 __fastcall KiTpSetupCompletion(__int64 a1, char a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  char v8; // [rsp+28h] [rbp-30h]
  int v9; // [rsp+29h] [rbp-2Fh]
  __int16 v10; // [rsp+2Dh] [rbp-2Bh]
  char v11; // [rsp+2Fh] [rbp-29h]
  __int64 v12; // [rsp+30h] [rbp-28h]
  __int64 v13; // [rsp+38h] [rbp-20h]
  int v14; // [rsp+40h] [rbp-18h]
  int v15; // [rsp+44h] [rbp-14h]

  v9 = 0;
  v10 = 0;
  v11 = 0;
  v15 = 0;
  v7 = a1;
  v8 = a2;
  v13 = a4;
  v12 = a3;
  v14 = a5;
  return ((__int64 (__fastcall *)(__int64, __int64 *, __int64, __int64))RtlIcParseInstruction)(a1, &v7, a3, a6);
}
