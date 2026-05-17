/*
 * XREFs of RtlpHpRemoteStackSerializeWriter @ 0x180143FF0
 * Callers:
 *     <none>
 * Callees:
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpHpRemoteStackSerializeWriter(char *Src, size_t Size, __int64 a3)
{
  size_t v4; // rdi
  _QWORD *v6; // r15
  unsigned __int64 *v7; // r14
  __int64 v8; // rdx
  void *v9; // rcx
  size_t v10; // rsi
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 result; // rax

  *(_QWORD *)(a3 + 32) += Size;
  v4 = Size;
  if ( *(_DWORD *)(a3 + 28) != -1073741789 && Size )
  {
    v6 = (_QWORD *)(a3 + 48);
    v7 = (unsigned __int64 *)(a3 + 56);
    while ( 1 )
    {
      v8 = *(_QWORD *)(a3 + 72);
      v9 = (void *)(v8 + *v6);
      if ( v8 + v4 <= *v7 )
        break;
      v10 = *v7 - v8;
      memmove(v9, Src, v10);
      v4 -= v10;
      Src += v10;
      v11 = *(_QWORD *)(a3 + 64) + *v7;
      *(_QWORD *)(a3 + 64) = v11;
      if ( v11 >= *(_QWORD *)(a3 + 8) )
      {
        *(_DWORD *)(a3 + 28) = -1073741789;
        return 0LL;
      }
      NtUnmapViewOfSection(-1LL);
      v12 = *v7;
      v13 = *(_QWORD *)(a3 + 8) - *(_QWORD *)(a3 + 64);
      *v6 = 0LL;
      if ( v12 >= v13 )
        v12 = v13;
      *v7 = v12;
      result = ZwMapViewOfSection(*(_QWORD *)a3, -1LL, v6, 0LL, v12, a3 + 64, v7, 2, 0, 4);
      if ( (int)result < 0 )
        return result;
      *(_QWORD *)(a3 + 72) = 0LL;
    }
    memmove(v9, Src, v4);
    *(_QWORD *)(a3 + 72) += v4;
  }
  return 0LL;
}
