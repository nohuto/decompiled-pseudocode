/*
 * XREFs of IopIoRingDispatchRegisterFiles @ 0x140714798
 * Callers:
 *     IopProcessIoRingEntry @ 0x1406F5A58 (IopProcessIoRingEntry.c)
 * Callees:
 *     IopCompleteIoRingEntry @ 0x1403B4AE0 (IopCompleteIoRingEntry.c)
 *     IopExceptionFilter @ 0x140593308 (IopExceptionFilter.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

int __fastcall IopIoRingDispatchRegisterFiles(__int64 a1, __int64 a2)
{
  char PreviousMode; // r8
  __int64 i; // rdi
  int v6; // r9d
  void *v7; // r15
  __int64 v8; // r13
  __int64 v9; // r12
  _KPROCESS *Process; // rdx
  __int16 v11; // ax
  bool v13; // dl
  unsigned __int64 v14; // rax
  __int64 Pool2; // rcx
  __int64 v16; // rdx
  unsigned int v18; // [rsp+20h] [rbp-68h]
  __int128 v19; // [rsp+40h] [rbp-48h] BYREF
  bool v20; // [rsp+A0h] [rbp+18h]

  v18 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LODWORD(i) = 0;
  v6 = *(_DWORD *)(a1 + 192);
  v7 = *(void **)(a1 + 200);
  *(_DWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0LL;
  if ( (*(_DWORD *)(a2 + 4) & 0xFFFFFFFE) != 0 || *(_DWORD *)(a2 + 16) || *(_DWORD *)(a2 + 20) )
  {
    v18 = -1069154303;
    goto LABEL_31;
  }
  v8 = *(unsigned int *)(a2 + 28);
  v9 = *(_QWORD *)(a2 + 32);
  if ( !(_DWORD)v8 )
  {
    v18 = v9 != 0 ? 0xC000000D : 0;
    goto LABEL_31;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v13 = 0;
  if ( Process[1].ReadyTime )
  {
    v11 = WORD2(Process[3].PerProcessorCycleTimes);
    if ( v11 == 332 || v11 == 452 )
      v13 = 1;
  }
  v20 = v13;
  if ( !PreviousMode
    || (!v13 ? (v14 = 8 * v8) : (v14 = 4 * v8), v18 = v14 > 0xFFFFFFFF ? 0xC0000095 : 0, v14 <= 0xFFFFFFFF) )
  {
    if ( (_DWORD)v8 == v6 )
    {
      Pool2 = (__int64)v7;
      v7 = 0LL;
      goto LABEL_22;
    }
    Pool2 = ExAllocatePool2(0x103uLL, 8 * v8, 0x46527249u);
    if ( Pool2 )
    {
LABEL_22:
      for ( i = 0LL; (unsigned int)i < (unsigned int)v8; i = (unsigned int)(i + 1) )
      {
        if ( v20 )
          v16 = *(int *)(v9 + 4 * i);
        else
          v16 = *(_QWORD *)(v9 + 8 * i);
        *(_QWORD *)(Pool2 + 8 * i) = v16;
      }
      *(_DWORD *)(a1 + 192) = i;
      *(_QWORD *)(a1 + 200) = Pool2;
      goto LABEL_31;
    }
    v18 = -1073741670;
  }
LABEL_31:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x46527249u);
  *((_QWORD *)&v19 + 1) = (unsigned int)i;
  *(_QWORD *)&v19 = v18;
  return IopCompleteIoRingEntry(a1, *(_QWORD *)(a2 + 8), &v19, 0);
}
