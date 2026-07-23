/*
 * XREFs of RtlpIsQualifiedLanguage @ 0x180001530
 * Callers:
 *     <none>
 * Callees:
 *     LdrpCalcAllocSize @ 0x18000228C (LdrpCalcAllocSize.c)
 *     RtlpTraverseParents @ 0x1800022C0 (RtlpTraverseParents.c)
 *     RtlpFreeTraverseNodes @ 0x180014820 (RtlpFreeTraverseNodes.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlpIsQualifiedLanguage(__int64 a1, __int16 *a2, char a3)
{
  int v5; // esi
  SIZE_T v6; // rax
  char *Heap; // rax
  char *v8; // rdi
  unsigned int v9; // ebx
  bool v10; // zf
  unsigned __int16 v11; // ax
  char *v13; // rcx
  __int64 v14; // r9
  __int16 v15; // r8
  __int16 v16; // r8

  v5 = a1;
  if ( a1 && a2 )
  {
    v6 = LdrpCalcAllocSize(42LL, 8LL);
    if ( v6 )
    {
      Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v6);
      v8 = Heap;
      if ( Heap )
      {
        v9 = 0;
        v10 = (unsigned __int8)RtlpTraverseParents((_DWORD)a2, (_DWORD)Heap, v5, 0, 0, 42) == 0;
        v11 = 0;
        if ( v10 )
          v9 = -1073741823;
        do
        {
          if ( v11 && *(_DWORD *)&v8[8 * v11 + 4] )
          {
            v13 = v8 + 2;
            v14 = v11;
            do
            {
              if ( *(_DWORD *)(v13 + 2) )
              {
                if ( *((_WORD *)v13 - 1) )
                {
                  v15 = *(_WORD *)&v8[8 * v11];
                  if ( v15 )
                  {
                    if ( *((_WORD *)v13 - 1) == v15 )
                      v9 = -1073741823;
                  }
                }
                if ( *(__int16 *)v13 > 0 )
                {
                  v16 = *(_WORD *)&v8[8 * v11 + 2];
                  if ( v16 > 0 && *(_WORD *)v13 == v16 )
                    v9 = -1073741823;
                }
              }
              v13 += 8;
              --v14;
            }
            while ( v14 );
          }
          ++v11;
        }
        while ( (__int16)v11 < 42 );
        if ( a3 == 1 && *a2 < 0 )
          v9 = -1073741823;
        if ( v8 )
          RtlpFreeTraverseNodes(v8);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      return (unsigned int)-1073741675;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v9;
}
