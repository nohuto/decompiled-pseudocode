/*
 * XREFs of SdbpEscapeQuoteInMsg @ 0x1800959C0
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x18003F648 (SdbShouldBlockPackageLaunch.c)
 * Callees:
 *     AslStringDuplicate @ 0x18009E508 (AslStringDuplicate.c)
 */

_WORD *__fastcall SdbpEscapeQuoteInMsg(__int16 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  __int16 v5; // dx
  __int16 *v6; // r8
  __int64 v7; // rax
  bool v8; // zf
  _WORD *Heap; // rdx
  _WORD *v10; // rcx
  __int16 v11; // ax
  _WORD *v12; // r9
  _WORD *v13; // r8
  __int16 v14; // ax
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  if ( !a1 )
    return 0LL;
  v5 = *a1;
  v6 = a1;
  if ( !*a1 )
    goto LABEL_15;
  do
  {
    ++v3;
    v7 = v2 + 1;
    v8 = v5 == 34;
    v5 = *++v6;
    if ( !v8 )
      v7 = v2;
    v2 = v7;
  }
  while ( v5 );
  if ( v7 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2 * (v3 + v7) + 2);
    v10 = Heap;
    if ( Heap )
    {
      v11 = *a1;
      if ( *a1 )
      {
        v12 = Heap;
        v13 = Heap;
        do
        {
          if ( v11 == 34 )
          {
            *v10 = 92;
            v10 = v12 + 1;
            v13 = v12 + 1;
          }
          v14 = *a1++;
          *v10 = v14;
          v10 = v13 + 1;
          v12 = ++v13;
          v11 = *a1;
        }
        while ( *a1 );
      }
      *v10 = 0;
      return Heap;
    }
  }
  else
  {
LABEL_15:
    AslStringDuplicate(&v15, a1);
    return (_WORD *)v15;
  }
  return v10;
}
