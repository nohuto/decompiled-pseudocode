/*
 * XREFs of ProcessNVMeCompletionQueues @ 0x14012D930
 * Callers:
 *     WaitForNVMeCommandCompleteWithCustomTimeout @ 0x1400BFF70 (WaitForNVMeCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     NvmeInvokeCompletionDpcRoutineAtDispatchLevel @ 0x14012ACC8 (NvmeInvokeCompletionDpcRoutineAtDispatchLevel.c)
 */

void __fastcall ProcessNVMeCompletionQueues(_QWORD *SystemArgument2, unsigned __int16 a2, char a3, unsigned int a4)
{
  __int64 v4; // r12
  bool v7; // r15
  unsigned int v8; // ebp
  unsigned __int64 v9; // rdx
  struct _KDPC *v10; // rcx
  __int64 v11; // r10
  struct _KDPC *v12; // rcx
  unsigned __int64 v13; // r10
  struct _KDPC *v14; // rcx
  signed __int32 v15[14]; // [rsp+0h] [rbp-38h] BYREF

  v4 = a4;
  v7 = a3 || (*(_DWORD *)(SystemArgument2[131] + 76LL) & 1) != 0;
  v8 = 0;
  if ( a2 == 0xFFFF || *((_DWORD *)SystemArgument2 + 227) <= 1u )
  {
    v11 = SystemArgument2[107];
    if ( (*(_WORD *)(*(_QWORD *)v11 + 16LL * *(unsigned __int16 *)(v11 + 34) + 14) & 1) != *(_WORD *)(v11 + 36) )
    {
      if ( !a3 && *((_DWORD *)SystemArgument2 + 226) != 3 )
      {
        *(_DWORD *)(SystemArgument2[115] + 12LL) = 1 << *(_BYTE *)(v11 + 24);
        _InterlockedOr(v15, 0);
      }
      v12 = (struct _KDPC *)(*(_QWORD *)(v11 + 64) + ((unsigned __int64)a4 << 6));
      if ( v7 )
        NvmeInvokeCompletionDpcRoutineAtDispatchLevel(
          v12,
          (PVOID)(a3 != 0),
          (volatile signed __int32 *)v11,
          (char *)SystemArgument2);
      else
        KeInsertQueueDpc(v12, (PVOID)v11, SystemArgument2);
    }
    if ( SystemArgument2[108] && *((_WORD *)SystemArgument2 + 13) )
    {
      do
      {
        v13 = SystemArgument2[108] + ((unsigned __int64)v8 << 7);
        if ( (*(_WORD *)(*(_QWORD *)v13 + 16LL * *(unsigned __int16 *)(v13 + 34) + 14) & 1) != *(_WORD *)(v13 + 36) )
        {
          if ( !a3 && *((_DWORD *)SystemArgument2 + 226) != 3 )
          {
            *(_DWORD *)(SystemArgument2[115] + 12LL) = 1 << *(_BYTE *)(v13 + 24);
            _InterlockedOr(v15, 0);
          }
          v14 = (struct _KDPC *)(*(_QWORD *)(v13 + 64) + (v4 << 6));
          if ( v7 )
            NvmeInvokeCompletionDpcRoutineAtDispatchLevel(
              v14,
              (PVOID)(a3 != 0),
              (volatile signed __int32 *)v13,
              (char *)SystemArgument2);
          else
            KeInsertQueueDpc(v14, (PVOID)v13, SystemArgument2);
        }
        ++v8;
      }
      while ( v8 < *((unsigned __int16 *)SystemArgument2 + 13) );
    }
  }
  else
  {
    if ( a2 )
      v9 = ((unsigned __int64)a2 << 7) + SystemArgument2[108] - 128LL;
    else
      v9 = SystemArgument2[107];
    if ( !a3 && *((_DWORD *)SystemArgument2 + 226) != 3 )
    {
      *(_DWORD *)(SystemArgument2[115] + 12LL) = 1 << *(_BYTE *)(v9 + 24);
      _InterlockedOr(v15, 0);
    }
    v10 = (struct _KDPC *)(*(_QWORD *)(v9 + 64) + ((unsigned __int64)a4 << 6));
    if ( v7 )
      NvmeInvokeCompletionDpcRoutineAtDispatchLevel(
        v10,
        (PVOID)(a3 != 0),
        (volatile signed __int32 *)v9,
        (char *)SystemArgument2);
    else
      KeInsertQueueDpc(v10, (PVOID)v9, SystemArgument2);
  }
}
