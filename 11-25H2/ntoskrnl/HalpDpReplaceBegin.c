/*
 * XREFs of HalpDpReplaceBegin @ 0x1406F6BC0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptDpReplaceBegin @ 0x14055F29C (HalpInterruptDpReplaceBegin.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     HalpDpSortApicList @ 0x1406F6DA8 (HalpDpSortApicList.c)
 *     HalpBuildResumeStructures @ 0x140B3CE28 (HalpBuildResumeStructures.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpDpReplaceBegin(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  int v6; // ebx
  __int64 Pool2; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rax
  void *v11; // rcx
  int v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = 0;
  v4 = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 16LL);
  v5 = *(unsigned int *)(*(_QWORD *)(a1 + 8) + 16LL);
  if ( (unsigned int)v4 < (unsigned int)v5 )
    return (unsigned int)-1073741811;
  Pool2 = ExAllocatePool2(0x40uLL);
  v8 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  *(_DWORD *)Pool2 = v5;
  *(_BYTE *)(Pool2 + 45) = (*(_DWORD *)a1 & 2) != 0;
  if ( (_DWORD)v5 )
  {
    *(_QWORD *)(Pool2 + 8) = Pool2 + 128;
    v9 = 4 * v5 + Pool2 + 128;
    *(_QWORD *)(Pool2 + 16) = v9;
    *(_QWORD *)(Pool2 + 24) = v9 + 4 * v4;
    memmove((void *)(Pool2 + 128), (const void *)(*(_QWORD *)(a1 + 8) + 20LL), 4 * v5);
    memmove(*(void **)(v8 + 16), (const void *)(*(_QWORD *)(a1 + 16) + 20LL), 4 * v4);
    HalpDpSortApicList(*(_QWORD *)(v8 + 8), (unsigned int)v5);
    HalpDpSortApicList(*(_QWORD *)(v8 + 16), (unsigned int)v4);
    if ( (*(_DWORD *)a1 & 1) != 0 )
      *(_BYTE *)(v8 + 44) = 1;
    v6 = HalpInterruptDpReplaceBegin(
           *(_QWORD *)(v8 + 8),
           *(_QWORD *)(v8 + 16),
           *(_QWORD *)(v8 + 24),
           *(_DWORD *)v8,
           *(_BYTE *)(v8 + 44),
           *(_BYTE *)(v8 + 45),
           &v13);
    if ( v6 < 0 )
      goto LABEL_14;
    *(_DWORD *)(v8 + 40) = v13;
  }
  if ( !*(_BYTE *)(v8 + 45) )
  {
LABEL_18:
    *a2 = v8;
    return 0;
  }
  if ( !(_DWORD)v5 || (v10 = ExAllocatePool2(0x40uLL), (*(_QWORD *)(v8 + 32) = v10) != 0LL) )
  {
    HalpBuildResumeStructures();
    goto LABEL_18;
  }
  v6 = -1073741670;
LABEL_14:
  v11 = *(void **)(v8 + 32);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x436C6148u);
  ExFreePoolWithTag((PVOID)v8, 0x436C6148u);
  return (unsigned int)v6;
}
