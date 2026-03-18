/*
 * XREFs of NtCreateKeyedEvent @ 0x1407B2A40
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateKeyedEvent(__int64 *a1, __int64 a2, int a3, int a4)
{
  __int64 *v4; // rbx
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8[5]; // [rsp+60h] [rbp-28h] BYREF

  v4 = a1;
  v8[0] = 0LL;
  LOBYTE(a1) = KeGetCurrentThread()->PreviousMode;
  if ( (_BYTE)a1 && ((unsigned __int8)v4 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  *v4 = 0LL;
  if ( a4 )
    return 3221225714LL;
  result = ObCreateObjectEx((_DWORD)a1, (_DWORD)ExpKeyedEventObjectType, a3, (unsigned __int8)a1);
  if ( (int)result >= 0 )
  {
    v6 = 8LL;
    v7 = 64LL;
    do
    {
      *(_QWORD *)(v6 - 8) = 0LL;
      *(_QWORD *)(v6 + 8) = v6;
      *(_QWORD *)v6 = v6;
      v6 += 24LL;
      --v7;
    }
    while ( v7 );
    result = ObInsertObjectEx(0LL, 0LL, 0, 0LL, (__int64)v8);
    if ( (int)result >= 0 )
    {
      *v4 = v8[0];
      return (unsigned int)result;
    }
  }
  return result;
}
