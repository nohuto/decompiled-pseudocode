/*
 * XREFs of RtlInsertElementGenericTableFullAvl @ 0x1800714E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RebalanceNode @ 0x180072900 (RebalanceNode.c)
 *     memmove @ 0x180167400 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_OWORD *__fastcall RtlInsertElementGenericTableFullAvl(
        __int64 a1,
        const void *a2,
        unsigned __int64 a3,
        bool *a4,
        __int64 *a5,
        int a6)
{
  size_t v7; // rbp
  __int64 (__fastcall *v10)(__int64, unsigned int, unsigned __int64); // rax
  _OWORD *v11; // rax
  _OWORD *v12; // rbx
  __int64 *v13; // rcx
  _OWORD *v14; // r8
  __int64 *i; // rdx
  bool v16; // zf
  char v17; // al
  __int64 v18; // rdx

  v7 = (unsigned int)a3;
  if ( a6 == 1 )
  {
    v12 = a5;
LABEL_17:
    if ( a4 )
      *a4 = a6 != 1;
    *(_DWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 32) = 0LL;
    return v12 + 2;
  }
  if ( (int)a3 + 32 >= (unsigned int)a3 )
  {
    v10 = *(__int64 (__fastcall **)(__int64, unsigned int, unsigned __int64))(a1 + 80);
    v11 = (_OWORD *)(v10 == RtlAllocateHeap ? RtlAllocateHeap(a1, (int)a3 + 32, a3) : ((__int64 (*)(void))v10)());
    v12 = v11;
    if ( v11 )
    {
      *v11 = 0LL;
      v11[1] = 0LL;
      ++*(_DWORD *)(a1 + 44);
      if ( a6 )
      {
        v13 = a5;
        v14 = v11;
        if ( a6 == 2 )
          a5[1] = (__int64)v11;
        else
          a5[2] = (__int64)v11;
        *(_QWORD *)v11 = a5;
        *(_BYTE *)(a1 + 24) = -1;
        for ( i = *(__int64 **)v11; ; v13 = i )
        {
          v16 = i[1] == (_QWORD)v14;
          v17 = -1;
          v18 = *((unsigned __int8 *)v13 + 24);
          if ( !v16 )
            v17 = 1;
          if ( (_BYTE)v18 )
            break;
          i = (__int64 *)*v13;
          v14 = v13;
          *((_BYTE *)v13 + 24) = v17;
        }
        if ( (_BYTE)v18 == v17 )
        {
          RebalanceNode(v13, v18, v14, 1LL);
        }
        else
        {
          *((_BYTE *)v13 + 24) = 0;
          if ( !*(_BYTE *)(a1 + 24) )
            ++*(_DWORD *)(a1 + 48);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 16) = v11;
        *(_QWORD *)v11 = a1;
        *(_DWORD *)(a1 + 48) = 1;
      }
      memmove(v12 + 2, a2, v7);
      goto LABEL_17;
    }
  }
  if ( a4 )
    *a4 = 0;
  return 0LL;
}
