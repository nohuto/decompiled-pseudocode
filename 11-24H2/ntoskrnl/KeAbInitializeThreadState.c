/*
 * XREFs of KeAbInitializeThreadState @ 0x140446B84
 * Callers:
 *     KeInitThread @ 0x140B6A948 (KeInitThread.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall KeAbInitializeThreadState(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  unsigned int v3; // r10d
  __int64 v4; // rdx
  char v5; // cl
  __int16 result; // ax
  __int64 v7; // r9
  unsigned int v8; // ecx
  unsigned int v9; // r10d
  __int64 v10; // rdx
  char v11; // cl

  v1 = *(_QWORD *)(a1 + 1136);
  v2 = a1;
  v3 = 0;
  for ( LOBYTE(a1) = *(_BYTE *)(v1 + 12); v3 < (unsigned int)a1; LODWORD(a1) = *(unsigned __int8 *)(v1 + 12) )
  {
    v4 = 88LL * v3;
    v5 = v3++ ^ *(_BYTE *)(v4 + v1 + 24);
    *(_BYTE *)(v4 + v1 + 24) ^= v5 & 0x3F;
  }
  *(_WORD *)(v1 + 10) = 0;
  result = (1LL << a1) - 1;
  *(_WORD *)(v1 + 8) = result;
  v7 = *(_QWORD *)(v2 + 1144);
  if ( v7 )
  {
    LOBYTE(v8) = *(_BYTE *)(v7 + 12);
    v9 = 0;
    if ( (_BYTE)v8 )
    {
      do
      {
        v10 = 88LL * v9;
        v11 = v9++ ^ *(_BYTE *)(v10 + v7 + 24);
        *(_BYTE *)(v10 + v7 + 24) = *(_BYTE *)(v10 + v7 + 24) ^ v11 & 0x3F | 0x80;
        v8 = *(unsigned __int8 *)(v7 + 12);
      }
      while ( v9 < v8 );
    }
    *(_WORD *)(v7 + 10) = 0;
    result = (1LL << v8) - 1;
    *(_WORD *)(v7 + 8) = result;
  }
  *(_DWORD *)(v2 + 116) |= 1u;
  *(_QWORD *)(v2 + 808) = 1LL;
  *(_QWORD *)(v2 + 816) = 1LL;
  return result;
}
