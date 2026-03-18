/*
 * XREFs of NtCreateKeyedEvent @ 0x1407C51C0
 * Callers:
 *     <none>
 * Callees:
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ObCreateObjectEx @ 0x14089C4F0 (ObCreateObjectEx.c)
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
    result = ObInsertObjectEx(0LL, 0, 0LL, (__int64)v8);
    if ( (int)result >= 0 )
    {
      *v4 = v8[0];
      return (unsigned int)result;
    }
  }
  return result;
}
