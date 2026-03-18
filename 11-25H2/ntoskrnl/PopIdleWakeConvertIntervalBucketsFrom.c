/*
 * XREFs of PopIdleWakeConvertIntervalBucketsFrom @ 0x1407524BC
 * Callers:
 *     PopIdleWakeInitialize @ 0x1407525E0 (PopIdleWakeInitialize.c)
 * Callees:
 *     PpmConvertTimeFrom @ 0x1403E7C34 (PpmConvertTimeFrom.c)
 */

void __fastcall PopIdleWakeConvertIntervalBucketsFrom(unsigned int a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 *v4; // rbx
  __int64 v5; // rsi
  __int64 v7; // rdi

  if ( a1 )
  {
    v4 = a3;
    v5 = a1;
    v7 = a2 - (_QWORD)a3;
    do
    {
      *v4 = PpmConvertTimeFrom(*(__int64 *)((char *)v4 + v7), a4);
      ++v4;
      --v5;
    }
    while ( v5 );
  }
}
