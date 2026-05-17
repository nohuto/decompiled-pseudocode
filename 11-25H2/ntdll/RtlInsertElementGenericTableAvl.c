/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x180072830
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlCompareUnicodeStrings @ 0x180073150 (RtlCompareUnicodeStrings.c)
 *     RebalanceNode @ 0x180073500 (RebalanceNode.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall RtlInsertElementGenericTableAvl(unsigned __int16 *a1, _QWORD *a2, unsigned __int64 a3, bool *a4)
{
  __int64 *i; // rbx
  size_t v5; // r13
  __int64 **v6; // r15
  __int64 (__fastcall *v10)(); // rax
  int v11; // eax
  __int64 *v12; // rsi
  int v13; // r14d
  __int64 (__fastcall *v15)(char *, unsigned int, unsigned __int64); // rax
  __int64 Heap; // rax
  __int64 *v17; // r8
  __int64 *j; // rdx
  bool v19; // zf
  char v20; // al
  __int64 v21; // rdx
  int v22; // [rsp+20h] [rbp-38h]

  i = 0LL;
  v5 = (unsigned int)a3;
  v6 = (__int64 **)(a1 + 8);
  if ( *((_DWORD *)a1 + 11) )
  {
    for ( i = *v6; ; i = (__int64 *)i[2] )
    {
      while ( 1 )
      {
        v10 = (__int64 (__fastcall *)())*((_QWORD *)a1 + 9);
        if ( v10 == RtlCompareUnicodeString )
        {
          LOBYTE(v22) = (_BYTE)i + 32;
          v11 = RtlCompareUnicodeStrings(
                  *((_QWORD *)a1 + 1),
                  (unsigned __int64)*a1 >> 1,
                  a2[1],
                  (unsigned __int64)*(unsigned __int16 *)a2 >> 1,
                  v22);
        }
        else
        {
          v11 = ((__int64 (__fastcall *)(unsigned __int16 *, _QWORD *, __int64 *))v10)(a1, a2, i + 4);
        }
        if ( v11 )
          break;
        if ( !i[1] )
        {
          v13 = 2;
          goto LABEL_16;
        }
        i = (__int64 *)i[1];
      }
      if ( v11 != 1 )
      {
        v12 = i;
        v13 = 1;
        goto LABEL_12;
      }
      if ( !i[2] )
        break;
    }
    v13 = 3;
  }
  else
  {
    v13 = 0;
  }
LABEL_16:
  v12 = 0LL;
  if ( (int)v5 + 32 >= (unsigned int)v5 )
  {
    v15 = (__int64 (__fastcall *)(char *, unsigned int, unsigned __int64))*((_QWORD *)a1 + 10);
    if ( v15 == RtlAllocateHeap )
    {
      Heap = RtlAllocateHeap((char *)a1, (int)v5 + 32, a3);
      v6 = (__int64 **)(a1 + 8);
    }
    else
    {
      Heap = ((__int64 (__fastcall *)(unsigned __int16 *))v15)(a1);
    }
    v12 = (__int64 *)Heap;
  }
  if ( v12 )
  {
    *(_OWORD *)v12 = 0LL;
    *((_OWORD *)v12 + 1) = 0LL;
    ++*((_DWORD *)a1 + 11);
    if ( !v13 )
    {
      *v6 = v12;
      *v12 = (__int64)a1;
      *((_DWORD *)a1 + 12) = 1;
      memmove(v12 + 4, a2, v5);
      goto LABEL_12;
    }
    v17 = v12;
    if ( v13 == 2 )
      i[1] = (__int64)v12;
    else
      i[2] = (__int64)v12;
    *v12 = (__int64)i;
    *((_BYTE *)a1 + 24) = -1;
    for ( j = (__int64 *)*v12; ; i = j )
    {
      v19 = j[1] == (_QWORD)v17;
      v20 = -1;
      v21 = *((unsigned __int8 *)i + 24);
      if ( !v19 )
        v20 = 1;
      if ( (_BYTE)v21 )
        break;
      j = (__int64 *)*i;
      v17 = i;
      *((_BYTE *)i + 24) = v20;
    }
    if ( (_BYTE)v21 == v20 )
    {
      RebalanceNode(i, v21, v17, a4);
    }
    else
    {
      *((_BYTE *)i + 24) = 0;
      if ( !*((_BYTE *)a1 + 24) )
      {
        ++*((_DWORD *)a1 + 12);
        memmove(v12 + 4, a2, v5);
        goto LABEL_12;
      }
    }
    memmove(v12 + 4, a2, v5);
LABEL_12:
    if ( a4 )
      *a4 = v13 != 1;
    *((_DWORD *)a1 + 10) = 0;
    *((_QWORD *)a1 + 4) = 0LL;
    return v12 + 4;
  }
  if ( a4 )
    *a4 = 0;
  return 0LL;
}
