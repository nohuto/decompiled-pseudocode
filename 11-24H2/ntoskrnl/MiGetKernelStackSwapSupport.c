/*
 * XREFs of MiGetKernelStackSwapSupport @ 0x1403C3FE0
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1403C6F10 (MmOutSwapWorkingSet.c)
 * Callees:
 *     MiMakePageFilePte @ 0x140215C78 (MiMakePageFilePte.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1403C4190 (MiAllocateWorkingSetSwapSupport.c)
 *     MiFindFreePageFileSpace @ 0x1403C438C (MiFindFreePageFileSpace.c)
 *     MiPageFileLargestBitmapsRun @ 0x1403C5B54 (MiPageFileLargestBitmapsRun.c)
 */

__int64 __fastcall MiGetKernelStackSwapSupport(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned int v3; // edi
  __int64 v6; // rbp
  unsigned int v7; // r15d
  _QWORD *v8; // r14
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 WorkingSetSwapSupport; // rax
  __int64 PageFilePte; // rax
  __int64 v13; // r8
  unsigned __int64 *v14; // rdx
  unsigned int v16; // ebx

  v2 = -1;
  v3 = 0;
  v6 = *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(a2 + 1198));
  v7 = *(_DWORD *)(v6 + 18520);
  if ( !v7 )
    return 3221225799LL;
  v8 = (_QWORD *)(v6 + 18528);
  do
  {
    if ( (*(_BYTE *)(*v8 + 172LL) & 0x50) == 0 )
    {
      if ( v2 == -1
        || (v16 = MiPageFileLargestBitmapsRun(*v8),
            v16 > (unsigned int)MiPageFileLargestBitmapsRun(*(_QWORD *)(v6 + 8LL * v2 + 18528))) )
      {
        v2 = v3;
      }
    }
    ++v3;
    ++v8;
  }
  while ( v3 < v7 );
  if ( v2 == -1 )
    return 3221225799LL;
  v9 = *(_DWORD *)(a2 + 896);
  if ( !v9 )
    return 3221225738LL;
  HIDWORD(v10) = 0;
  if ( v9 > 0xFFFFFFFF / ((unsigned int)KeKernelStackSize >> 12) )
    v9 = 0xFFFFFFFF / ((unsigned int)KeKernelStackSize >> 12);
  LODWORD(v10) = 0xFFFFFFFF % ((unsigned int)KeKernelStackSize >> 12);
  WorkingSetSwapSupport = MiAllocateWorkingSetSwapSupport(2 * v9, v10);
  *(_QWORD *)(a1 + 56) = WorkingSetSwapSupport;
  if ( !WorkingSetSwapSupport )
    return 3221225626LL;
  PageFilePte = MiMakePageFilePte(0LL);
  *v14 = v13 ^ (v13 ^ PageFilePte) & 0xFFFFFFFFFFFF0FFFuLL;
  *(_DWORD *)(a1 + 72) = MiFindFreePageFileSpace(v6, v14, v9 * ((unsigned int)KeKernelStackSize >> 12), 33LL);
  return 0LL;
}
