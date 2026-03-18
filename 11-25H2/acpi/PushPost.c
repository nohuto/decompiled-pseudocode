/*
 * XREFs of PushPost @ 0x140008C34
 * Callers:
 *     Wait @ 0x140030C40 (Wait.c)
 *     NestAsyncEvalObject @ 0x14006D32C (NestAsyncEvalObject.c)
 *     Unload @ 0x14006F540 (Unload.c)
 *     LoadTable @ 0x14006F600 (LoadTable.c)
 * Callees:
 *     PushFrame @ 0x140009A30 (PushFrame.c)
 */

__int64 __fastcall PushPost(int a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v8; // rdx
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0LL;
  result = PushFrame(a1, 1414745936, 56, a2, (__int64)v9);
  if ( !(_DWORD)result )
  {
    v8 = v9[0];
    *(_QWORD *)(v9[0] + 32LL) = a3;
    *(_QWORD *)(v8 + 40) = a4;
    *(_QWORD *)(v8 + 48) = a5;
  }
  return result;
}
