/*
 * XREFs of RtlpIsQualifiedLanguage @ 0x1800806B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlpTraverseParents @ 0x180033FF0 (RtlpTraverseParents.c)
 *     RtlpFreeTraverseNodes @ 0x1800345A0 (RtlpFreeTraverseNodes.c)
 *     LdrpCalcAllocSize @ 0x18007EF4C (LdrpCalcAllocSize.c)
 */

__int64 __fastcall RtlpIsQualifiedLanguage(__int64 a1, __int16 *a2, char a3)
{
  unsigned __int64 v6; // rax
  __int64 Heap; // rax
  unsigned __int64 v8; // rdi
  unsigned int v9; // ebx
  bool v10; // zf
  unsigned __int16 v11; // ax
  unsigned __int64 v13; // rcx
  __int64 v14; // r9
  __int16 v15; // r8
  __int16 v16; // r8

  if ( a1 && a2 )
  {
    v6 = LdrpCalcAllocSize(0x2Au, 8uLL);
    if ( v6 )
    {
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v6);
      v8 = Heap;
      if ( Heap )
      {
        v9 = 0;
        v10 = RtlpTraverseParents(a2, Heap, a1, 0LL, 0, 42) == 0;
        v11 = 0;
        if ( v10 )
          v9 = -1073741823;
        do
        {
          if ( v11 && *(_DWORD *)(v8 + 8LL * v11 + 4) )
          {
            v13 = v8 + 2;
            v14 = v11;
            do
            {
              if ( *(_DWORD *)(v13 + 2) )
              {
                if ( *(_WORD *)(v13 - 2) )
                {
                  v15 = *(_WORD *)(v8 + 8LL * v11);
                  if ( v15 )
                  {
                    if ( *(_WORD *)(v13 - 2) == v15 )
                      v9 = -1073741823;
                  }
                }
                if ( *(__int16 *)v13 > 0 )
                {
                  v16 = *(_WORD *)(v8 + 8LL * v11 + 2);
                  if ( v16 > 0 && *(_WORD *)v13 == v16 )
                    v9 = -1073741823;
                }
              }
              v13 += 8LL;
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
