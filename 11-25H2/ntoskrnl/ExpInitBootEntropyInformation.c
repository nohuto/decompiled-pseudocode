/*
 * XREFs of ExpInitBootEntropyInformation @ 0x1407A5590
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall ExpInitBootEntropyInformation(PRTL_RUN_ONCE a1, _DWORD **a2, PVOID *a3)
{
  __int64 v3; // rax
  _DWORD *v5; // rbx
  char *v6; // rdi
  _DWORD *v7; // rcx
  signed __int64 v8; // rdx
  __int64 v9; // r8
  __int128 v10; // xmm0

  v3 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  v5 = *a2;
  v6 = (char *)(*(_QWORD *)(v3 + 240) + 344LL);
  if ( *a2 )
  {
    memset_0(v5, 0, 0x448uLL);
    v7 = v5 + 4;
    v8 = v6 - (char *)v5;
    v9 = 10LL;
    do
    {
      *(v7 - 2) = *(_DWORD *)((char *)v7 + v8 - 8);
      *(_QWORD *)v7 = *(_QWORD *)((char *)v7 + v8);
      v7[2] = *(_DWORD *)((char *)v7 + v8 + 8);
      v7[3] = *(_DWORD *)((char *)v7 + v8 + 12);
      *((_QWORD *)v7 + 2) = *(_QWORD *)((char *)v7 + v8 + 16);
      v7[6] = *(_DWORD *)((char *)v7 + v8 + 24);
      v10 = *(_OWORD *)((char *)v7 + v8 + 28);
      v7 += 26;
      *(_OWORD *)(v7 - 19) = v10;
      *(_OWORD *)(v7 - 15) = *(_OWORD *)((char *)v7 + v8 - 60);
      *(_OWORD *)(v7 - 11) = *(_OWORD *)((char *)v7 + v8 - 44);
      *(_OWORD *)(v7 - 7) = *(_OWORD *)((char *)v7 + v8 - 28);
      --v9;
    }
    while ( v9 );
    *v5 = *(_DWORD *)v6;
    *(_OWORD *)(v5 + 262) = *(_OWORD *)(v6 + 1048);
    *(_OWORD *)(v5 + 266) = *(_OWORD *)(v6 + 1064);
    *(_OWORD *)(v5 + 270) = *(_OWORD *)(v6 + 1080);
  }
  memset(v6, 0, 0x448uLL);
  *a2 = (_DWORD *)-1LL;
  return 1LL;
}
