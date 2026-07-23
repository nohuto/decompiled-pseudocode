/*
 * XREFs of PspCopyAndFixupParameters @ 0x1408DF930
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x1408DF5FC (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ObDuplicateObject @ 0x14083C270 (ObDuplicateObject.c)
 */

__int64 __fastcall PspCopyAndFixupParameters(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int *v4; // rsi
  size_t v5; // r13
  struct _LIST_ENTRY *v6; // rbx
  struct _KPROCESS *Process; // r10
  char PreviousMode; // r9
  signed __int64 v9; // rdi
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v12; // rax
  struct _LIST_ENTRY *v13; // rax
  struct _LIST_ENTRY *v14; // rax
  struct _LIST_ENTRY *v15; // rax
  struct _LIST_ENTRY *v16; // rax
  struct _LIST_ENTRY *v17; // rax
  struct _LIST_ENTRY *v18; // rax
  struct _LIST_ENTRY *v19; // rax
  struct _LIST_ENTRY *v20; // rax
  struct _LIST_ENTRY *v21; // rax
  __int64 result; // rax
  int v23; // eax
  __int64 *v24; // r14
  __int64 v25; // rdi
  void *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // [rsp+80h] [rbp+8h]
  char v29; // [rsp+88h] [rbp+10h]
  __int64 v30; // [rsp+90h] [rbp+18h] BYREF
  struct _KPROCESS *v31; // [rsp+98h] [rbp+20h]

  v28 = a1;
  v30 = 0LL;
  v4 = *(unsigned int **)(a3 + 216);
  v5 = *((_QWORD *)v4 + 126) + *v4;
  v6 = *(struct _LIST_ENTRY **)(a3 + 224);
  Process = KeGetCurrentThread()->ApcState.Process;
  v31 = Process;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v29 = PreviousMode;
  if ( (*(_BYTE *)(a3 + 16) & 0x40) != 0 && (*(_BYTE *)(a3 + 17) & 1) == 0 )
    v4[2] |= 0x4000u;
  if ( *(_DWORD *)(a3 + 88) == 3 && (int)v4[4] > 0 )
  {
    v23 = ObDuplicateObject(a1, *((void **)v4 + 2), Process, &v30, 0, 0, 6, PreviousMode);
    a1 = v28;
    Process = v31;
    PreviousMode = v29;
    if ( v23 >= 0 )
      *((_QWORD *)v4 + 2) = v30;
  }
  if ( a2 )
  {
    v24 = (__int64 *)(v4 + 8);
    v25 = 0LL;
    while ( (unsigned int)v25 < 3 )
    {
      v26 = *(void **)&a2[2 * v25];
      if ( v26 )
      {
        if ( (int)v26 < 0 )
        {
          v27 = 0LL;
          v30 = 0LL;
          result = 3221225480LL;
        }
        else
        {
          result = ObDuplicateObject(a1, v26, Process, &v30, 0, 0, 6, PreviousMode);
          v27 = v30;
        }
        if ( (int)result >= 0 )
        {
          *v24 = v27;
        }
        else if ( a2 == v4 + 8 )
        {
          return result;
        }
      }
      ++v24;
      v25 = (unsigned int)(v25 + 1);
      a1 = v28;
      Process = v31;
      PreviousMode = v29;
    }
  }
  v9 = (char *)v6 - (char *)v4;
  memmove(v6, v4, v5);
  Flink = v6[4].Flink;
  if ( Flink )
    v6[4].Flink = (struct _LIST_ENTRY *)((char *)Flink + v9);
  Blink = v6[5].Blink;
  if ( Blink )
    v6[5].Blink = (struct _LIST_ENTRY *)((char *)Blink + v9);
  v12 = v6[6].Blink;
  if ( v12 )
    v6[6].Blink = (struct _LIST_ENTRY *)((char *)v12 + v9);
  v13 = v6[7].Blink;
  if ( v13 )
    v6[7].Blink = (struct _LIST_ENTRY *)((char *)v13 + v9);
  v14 = v6[11].Blink;
  if ( v14 )
    v6[11].Blink = (struct _LIST_ENTRY *)((char *)v14 + v9);
  v15 = v6[12].Blink;
  if ( v15 )
    v6[12].Blink = (struct _LIST_ENTRY *)((char *)v15 + v9);
  v16 = v6[13].Blink;
  if ( v16 )
    v6[13].Blink = (struct _LIST_ENTRY *)((char *)v16 + v9);
  v17 = v6[14].Blink;
  if ( v17 )
    v6[14].Blink = (struct _LIST_ENTRY *)((char *)v17 + v9);
  v18 = v6[65].Blink;
  if ( v18 )
    v6[65].Blink = (struct _LIST_ENTRY *)((char *)v18 + v9);
  v19 = v6[66].Blink;
  if ( v19 )
    v6[66].Blink = (struct _LIST_ENTRY *)((char *)v19 + v9);
  v20 = v6[67].Flink;
  if ( v20 )
    v6[67].Flink = (struct _LIST_ENTRY *)((char *)v20 + v9);
  v21 = v6[8].Flink;
  if ( v21 )
    v6[8].Flink = (struct _LIST_ENTRY *)((char *)v21 + v9);
  KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Blink[2].Flink = v6;
  return 0LL;
}
