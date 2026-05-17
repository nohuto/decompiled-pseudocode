/*
 * XREFs of RtlInsertElementGenericTable @ 0x1800BFF40
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlSplay @ 0x1800C0330 (RtlSplay.c)
 *     memmove @ 0x180167400 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall RtlInsertElementGenericTable(__int64 a1, const void *a2, unsigned __int64 a3, bool *a4)
{
  _QWORD *v4; // rax
  __int64 v5; // r15
  size_t v6; // r13
  _QWORD *v10; // rbx
  int v11; // eax
  int v12; // ebp
  __int64 (__fastcall *v13)(__int64, unsigned int, unsigned __int64); // rax
  _QWORD *v14; // rax
  _QWORD *v15; // r14
  _QWORD *v16; // rax
  _QWORD *v17; // r8

  v4 = *(_QWORD **)a1;
  v5 = 0LL;
  v6 = (unsigned int)a3;
  v10 = 0LL;
  if ( *(_QWORD *)a1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = v4;
        v11 = (*(__int64 (__fastcall **)(__int64, const void *, _QWORD *))(a1 + 40))(a1, a2, v4 + 5);
        if ( v11 )
          break;
        v4 = (_QWORD *)v10[1];
        if ( !v4 )
        {
          v12 = 2;
          goto LABEL_5;
        }
      }
      if ( v11 != 1 )
        break;
      v4 = (_QWORD *)v10[2];
      if ( !v4 )
      {
        v12 = 3;
        goto LABEL_5;
      }
    }
    v15 = v10;
    v12 = 1;
    goto LABEL_15;
  }
  v12 = 0;
LABEL_5:
  if ( (int)v6 + 40 >= (unsigned int)v6 )
  {
    v13 = *(__int64 (__fastcall **)(__int64, unsigned int, unsigned __int64))(a1 + 48);
    v14 = (_QWORD *)(v13 == RtlAllocateHeap
                   ? RtlAllocateHeap(a1, (int)v6 + 40, a3)
                   : ((__int64 (__fastcall *)(__int64))v13)(a1));
    v15 = v14;
    if ( v14 )
    {
      *v14 = v14;
      v14[1] = 0LL;
      v14[2] = 0LL;
      v16 = v14 + 3;
      v17 = *(_QWORD **)(a1 + 16);
      if ( *v17 != a1 + 8 )
        __fastfail(3u);
      *v16 = a1 + 8;
      v16[1] = v17;
      *v17 = v16;
      *(_QWORD *)(a1 + 16) = v16;
      ++*(_DWORD *)(a1 + 36);
      if ( v12 )
      {
        if ( v12 == 2 )
          v10[1] = v15;
        else
          v10[2] = v15;
        *v15 = v10;
      }
      else
      {
        *(_QWORD *)a1 = v15;
      }
      memmove(v15 + 5, a2, v6);
LABEL_15:
      *(_QWORD *)a1 = RtlSplay(v15);
      if ( a4 )
        *a4 = v12 != 1;
      return v15 + 5;
    }
  }
  if ( a4 )
    *a4 = 0;
  return (_QWORD *)v5;
}
