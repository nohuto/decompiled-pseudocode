/*
 * XREFs of RtlpMUIGetAllInstalledLang @ 0x18014173C
 * Callers:
 *     RtlGetFileMUIPath @ 0x1800A9A40 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x18014080C (RtlpAddLanguagesToMultiSZ.c)
 */

char __fastcall RtlpMUIGetAllInstalledLang(__int64 a1, char **a2, _QWORD *a3)
{
  char v6; // bl
  char *v7; // r9
  __int64 v8; // rdx
  unsigned int v9; // eax
  unsigned int v10; // edi
  _WORD *v11; // r9
  unsigned int v13; // [rsp+40h] [rbp-20h] BYREF
  char *Heap; // [rsp+48h] [rbp-18h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v16; // [rsp+98h] [rbp+38h] BYREF

  v13 = 520;
  v6 = 0;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
  v7 = Heap;
  if ( Heap )
  {
    v8 = *(_QWORD *)(a1 + 24);
    v9 = 0;
    v16 = 0;
    v10 = 0;
    v15 = 0LL;
    if ( *(_WORD *)(v8 + 6) )
    {
      do
      {
        v11 = (_WORD *)(*(_QWORD *)(v8 + 16) + 28LL * v10);
        if ( (*v11 & 0x1000) == 0 )
          RtlpAddLanguagesToMultiSZ((const void **)&Heap, &v16, &v13, v11, a1, (__int64)&v15, 0);
        v8 = *(_QWORD *)(a1 + 24);
        ++v10;
      }
      while ( v10 < *(unsigned __int16 *)(v8 + 6) );
      v7 = Heap;
      v9 = v16;
    }
    if ( (v9 & 1) == 0 )
    {
      *(_WORD *)&v7[v9] = 0;
      v6 = 1;
      *a2 = Heap;
      *a3 = v15;
    }
  }
  return v6;
}
