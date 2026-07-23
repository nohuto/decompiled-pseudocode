/*
 * XREFs of EmonSetIntervalInternalOriginal @ 0x14055C504
 * Callers:
 *     EmonSetIntervalOriginal @ 0x14055C560 (EmonSetIntervalOriginal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EmonSetIntervalInternalOriginal(int a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v4; // r10
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // r9
  __int64 v8; // rdx

  v4 = a2;
  v5 = 0LL;
  result = KiProcessorBlock[a4];
  v7 = *(_QWORD *)(result + 88);
  if ( *(_DWORD *)(v7 + 4) )
  {
    do
    {
      v8 = *(_QWORD *)(v7 + 16);
      if ( *(_DWORD *)(v8 + 48 * v5 + 36) == a1 && !*(_DWORD *)(v8 + 48 * v5 + 24) )
        *(_QWORD *)(v8 + 48 * v5) = v4;
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < *(_DWORD *)(v7 + 4) );
  }
  return result;
}
