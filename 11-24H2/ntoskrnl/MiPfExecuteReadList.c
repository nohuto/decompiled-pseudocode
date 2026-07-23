/*
 * XREFs of MiPfExecuteReadList @ 0x14093A5EC
 * Callers:
 *     MmPrefetchPagesEx @ 0x140938DE0 (MmPrefetchPagesEx.c)
 *     MmPrefetchForCacheManager @ 0x140939B54 (MmPrefetchForCacheManager.c)
 *     MiPrefetchControlArea @ 0x14093AC84 (MiPrefetchControlArea.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiPageRead @ 0x14025BA74 (MiPageRead.c)
 *     SmPageRead @ 0x1402F6388 (SmPageRead.c)
 *     MiReferenceInPageFile @ 0x140350A90 (MiReferenceInPageFile.c)
 *     MiReadFromMemoryPagefile @ 0x1404CAF64 (MiReadFromMemoryPagefile.c)
 */

int __fastcall MiPfExecuteReadList(__int64 a1, char a2, unsigned int a3, __int64 a4)
{
  _UNKNOWN **v4; // rax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // r14
  __int64 v7; // rbx
  int v8; // r12d
  char v9; // r15
  unsigned int v11; // r9d
  int v12; // edi
  __int64 v13; // rbp
  ULONG_PTR v14; // rax
  int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // r9
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  v4 = &retaddr;
  CurrentThread = KeGetCurrentThread();
  v6 = a1 + 224;
  v7 = *(_QWORD *)(a1 + 224);
  v8 = a2 & 2;
  v9 = 0;
  v11 = a3;
  if ( v7 != a1 + 224 )
  {
    v12 = a2 & 1;
    do
    {
      v13 = *(_QWORD *)(v7 + 256);
      *(_WORD *)(v13 + 10) |= 0x42u;
      *(_DWORD *)(v7 + 184) = *(_DWORD *)(v13 + 40);
      v14 = MiReferenceInPageFile(v7, v11, 0);
      v15 = *(_DWORD *)(v7 + 192);
      if ( v14 )
      {
        v16 = 0LL;
      }
      else
      {
        v16 = *(_QWORD *)(v7 + 200);
        v14 = *(_QWORD *)(v16 + 24);
      }
      *(_QWORD *)(v7 + 200) = v14;
      *(_QWORD *)(v7 + 168) = 0LL;
      *(_QWORD *)(v7 + 232) = *(_QWORD *)(v7 + 240);
      if ( v12 )
      {
        v9 = BYTE4(CurrentThread[1].Queue);
        BYTE4(CurrentThread[1].Queue) = 1;
      }
      if ( v16 && _bittest16((const signed __int16 *)(v16 + 172), 0xBu) )
      {
        MiReadFromMemoryPagefile(v16, v7);
        LODWORD(v4) = 0;
      }
      else
      {
        v17 = v7 + 32;
        if ( (v15 & 0x400) != 0 )
          LODWORD(v4) = SmPageRead(
                          *(_QWORD *)(*(_QWORD *)(v16 + 216) + 184LL),
                          (int *)(v7 + 96),
                          (v7 + 272) | (v8 != 0 ? 1 : 3),
                          v17,
                          v7 + 80);
        else
          LODWORD(v4) = MiPageRead(*(struct _FILE_OBJECT **)(v7 + 200), v13, v7 + 96, v17, v7 + 80, 6, a4);
      }
      if ( v12 )
        BYTE4(CurrentThread[1].Queue) = v9;
      if ( (int)v4 < 0 )
      {
        *(_QWORD *)(v7 + 88) = 0LL;
        *(_DWORD *)(v7 + 80) = (_DWORD)v4;
        LODWORD(v4) = KeSetEvent((PRKEVENT)(v7 + 32), 0, 0);
      }
      v7 = *(_QWORD *)v7;
      v11 = a3;
    }
    while ( v7 != v6 );
  }
  return (int)v4;
}
