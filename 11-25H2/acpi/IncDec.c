/*
 * XREFs of IncDec @ 0x140002610
 * Callers:
 *     <none>
 * Callees:
 *     ReadObject @ 0x1400026A0 (ReadObject.c)
 *     PushFrame @ 0x140009A30 (PushFrame.c)
 */

__int64 __fastcall IncDec(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v5; // rbp
  __int64 v6; // r14
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v2 = a2[7];
  v3 = a2[11];
  v5 = a2[10];
  v10 = 0LL;
  v6 = *(unsigned int *)(v2 + 8);
  result = PushFrame(a1, 1414745936, 56, (unsigned int)ProcessIncDec, (__int64)&v10);
  if ( !(_DWORD)result )
  {
    v9 = v10;
    *(_QWORD *)(v10 + 32) = v6;
    *(_QWORD *)(v9 + 40) = v5;
    *(_QWORD *)(v9 + 48) = v3;
    return ReadObject(a1, a2[10], a2[11]);
  }
  return result;
}
