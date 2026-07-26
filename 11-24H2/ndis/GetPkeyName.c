/*
 * XREFs of GetPkeyName @ 0x14015C8D0
 * Callers:
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x14015C830 (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall GetPkeyName(unsigned int *a1, wchar_t *a2)
{
  int v3; // [rsp+20h] [rbp-78h]
  int v4; // [rsp+28h] [rbp-70h]
  int v5; // [rsp+30h] [rbp-68h]
  int v6; // [rsp+38h] [rbp-60h]
  int v7; // [rsp+40h] [rbp-58h]
  int v8; // [rsp+48h] [rbp-50h]
  int v9; // [rsp+50h] [rbp-48h]
  int v10; // [rsp+58h] [rbp-40h]
  int v11; // [rsp+60h] [rbp-38h]
  int v12; // [rsp+68h] [rbp-30h]
  unsigned int v13; // [rsp+70h] [rbp-28h]

  v13 = a1[4];
  v12 = *((unsigned __int8 *)a1 + 15);
  v11 = *((unsigned __int8 *)a1 + 14);
  v10 = *((unsigned __int8 *)a1 + 13);
  v9 = *((unsigned __int8 *)a1 + 12);
  v8 = *((unsigned __int8 *)a1 + 11);
  v7 = *((unsigned __int8 *)a1 + 10);
  v6 = *((unsigned __int8 *)a1 + 9);
  v5 = *((unsigned __int8 *)a1 + 8);
  v4 = *((unsigned __int16 *)a1 + 3);
  v3 = *((unsigned __int16 *)a1 + 2);
  return swprintf_s(
           a2,
           0x2DuLL,
           L"{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\%04x",
           *a1,
           v3,
           v4,
           v5,
           v6,
           v7,
           v8,
           v9,
           v10,
           v11,
           v12,
           v13);
}
