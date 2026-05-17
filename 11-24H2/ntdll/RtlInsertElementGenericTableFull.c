/*
 * XREFs of RtlInsertElementGenericTableFull @ 0x1800C00C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlSplay @ 0x1800C0330 (RtlSplay.c)
 *     memmove @ 0x180167400 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall RtlInsertElementGenericTableFull(
        __int64 a1,
        const void *a2,
        unsigned __int64 a3,
        bool *a4,
        _QWORD *a5,
        int a6)
{
  size_t v7; // rbp
  __int64 (__fastcall *v10)(__int64, unsigned int, unsigned __int64); // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  _QWORD *v14; // rdx

  v7 = (unsigned int)a3;
  if ( a6 == 1 )
  {
    v12 = a5;
LABEL_16:
    *(_QWORD *)a1 = RtlSplay(v12);
    if ( a4 )
      *a4 = a6 != 1;
    return v12 + 5;
  }
  if ( (int)a3 + 40 >= (unsigned int)a3 )
  {
    v10 = *(__int64 (__fastcall **)(__int64, unsigned int, unsigned __int64))(a1 + 48);
    v11 = (_QWORD *)(v10 == RtlAllocateHeap ? RtlAllocateHeap(a1, (int)a3 + 40, a3) : ((__int64 (*)(void))v10)());
    v12 = v11;
    if ( v11 )
    {
      *v11 = v11;
      v11[1] = 0LL;
      v11[2] = 0LL;
      v13 = v11 + 3;
      v14 = *(_QWORD **)(a1 + 16);
      if ( *v14 != a1 + 8 )
        __fastfail(3u);
      *v13 = a1 + 8;
      v12[4] = v14;
      *v14 = v13;
      *(_QWORD *)(a1 + 16) = v13;
      ++*(_DWORD *)(a1 + 36);
      if ( a6 )
      {
        if ( a6 == 2 )
          a5[1] = v12;
        else
          a5[2] = v12;
        *v12 = a5;
      }
      else
      {
        *(_QWORD *)a1 = v12;
      }
      memmove(v12 + 5, a2, v7);
      goto LABEL_16;
    }
  }
  if ( a4 )
    *a4 = 0;
  return 0LL;
}
