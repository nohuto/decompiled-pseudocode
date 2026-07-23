/*
 * XREFs of IopIoRingDispatchRegisterBuffers @ 0x1407143D8
 * Callers:
 *     IopProcessIoRingEntry @ 0x1406F5A58 (IopProcessIoRingEntry.c)
 * Callees:
 *     IopCompleteIoRingEntry @ 0x1403B4AE0 (IopCompleteIoRingEntry.c)
 *     IopExceptionFilter @ 0x140593308 (IopExceptionFilter.c)
 *     IopMcCreateBufferEntry @ 0x14059FA2C (IopMcCreateBufferEntry.c)
 *     IopMcWaitAndCleanupBufferEntry @ 0x14059FE84 (IopMcWaitAndCleanupBufferEntry.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IopIoRingCleanupRegBufferArray @ 0x1407140D4 (IopIoRingCleanupRegBufferArray.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

int __fastcall IopIoRingDispatchRegisterBuffers(__int64 a1, __int64 a2)
{
  char PreviousMode; // r10
  __int64 v4; // r14
  __int64 v5; // r15
  ULONG_PTR *v6; // rsi
  ULONG_PTR *v7; // r12
  __int64 v8; // r8
  signed int BufferEntry; // ebx
  _KPROCESS *Process; // rcx
  __int16 v11; // ax
  bool v13; // cl
  unsigned __int64 v14; // rax
  unsigned int v15; // ecx
  ULONG_PTR *Pool2; // rax
  __int64 v17; // rbx
  size_t v18; // rbx
  volatile void *v19; // r9
  unsigned int v20; // ebx
  ULONG_PTR v21; // rcx
  ULONG_PTR *v22; // rax
  unsigned int v24; // [rsp+24h] [rbp-84h]
  ULONG_PTR *v25; // [rsp+28h] [rbp-80h]
  __int64 v26; // [rsp+50h] [rbp-58h]
  __int64 v27; // [rsp+58h] [rbp-50h]
  __int128 v28; // [rsp+60h] [rbp-48h] BYREF
  char v30; // [rsp+C0h] [rbp+18h]
  bool v31; // [rsp+C8h] [rbp+20h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v30 = PreviousMode;
  LODWORD(v4) = 0;
  LODWORD(v5) = 0;
  v6 = 0LL;
  v24 = *(_DWORD *)(a1 + 176);
  v7 = *(ULONG_PTR **)(a1 + 184);
  *(_DWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = 0LL;
  if ( (*(_DWORD *)(a2 + 4) & 0xFFFFFFFE) != 0 || *(_DWORD *)(a2 + 16) || *(_DWORD *)(a2 + 20) )
  {
    BufferEntry = -1069154303;
  }
  else
  {
    v5 = *(unsigned int *)(a2 + 28);
    v8 = *(_QWORD *)(a2 + 32);
    v27 = v8;
    if ( !(_DWORD)v5 )
    {
      BufferEntry = v8 != 0 ? 0xC000000D : 0;
      goto LABEL_45;
    }
    Process = KeGetCurrentThread()->ApcState.Process;
    v13 = 0;
    if ( Process[1].ReadyTime )
    {
      v11 = WORD2(Process[3].PerProcessorCycleTimes);
      if ( v11 == 332 || v11 == 452 )
        v13 = 1;
    }
    v31 = v13;
    if ( !PreviousMode
      || (!v13 ? (v14 = 16 * v5) : (v14 = 8 * v5), BufferEntry = v14 > 0xFFFFFFFF ? 0xC0000095 : 0, v14 <= 0xFFFFFFFF) )
    {
      v15 = v24;
      if ( (_DWORD)v5 == v24 )
      {
        v6 = v7;
        v7 = 0LL;
      }
      else
      {
        Pool2 = (ULONG_PTR *)ExAllocatePool2(0x101uLL, 8 * v5, 0x42527249u);
        v6 = Pool2;
        if ( !Pool2 )
        {
          BufferEntry = -1073741670;
          goto LABEL_45;
        }
        v17 = v24;
        if ( (unsigned int)v5 < v24 )
          v17 = (unsigned int)v5;
        v18 = 8 * v17;
        memmove(Pool2, v7, v18);
        memset_0(v7, 0, v18);
        v15 = v24;
        v8 = v27;
        PreviousMode = v30;
      }
      v4 = 0LL;
      while ( (unsigned int)v4 < (unsigned int)v5 )
      {
        if ( v31 )
        {
          v19 = (volatile void *)*(unsigned int *)(v8 + 8 * v4);
          v26 = (__int64)v19;
          v20 = *(_DWORD *)(v8 + 8 * v4 + 4);
        }
        else
        {
          v19 = *(volatile void **)(v8 + 16LL * (unsigned int)v4);
          v26 = (__int64)v19;
          v20 = *(_DWORD *)(v8 + 16LL * (unsigned int)v4 + 8);
        }
        if ( (unsigned int)v4 >= v15
          || (v21 = v6[v4]) == 0
          || *(volatile void **)(v21 + 32) != v19
          || *(_DWORD *)(v21 + 40) != v20 )
        {
          if ( PreviousMode )
            ProbeForWrite(v19, v20, 1u);
          v22 = &v6[v4];
          v25 = v22;
          if ( *v22 )
          {
            IopMcWaitAndCleanupBufferEntry(*v22);
            v22 = v25;
            *v25 = 0LL;
          }
          if ( v20 )
          {
            BufferEntry = IopMcCreateBufferEntry(v26, v20, v30, (__int64 *)v22);
            if ( BufferEntry < 0 )
              goto LABEL_45;
          }
          v8 = v27;
        }
        v4 = (unsigned int)(v4 + 1);
        v15 = v24;
        PreviousMode = v30;
      }
      *(_DWORD *)(a1 + 176) = v4;
      *(_QWORD *)(a1 + 184) = v6;
      v6 = 0LL;
      BufferEntry = 0;
    }
  }
LABEL_45:
  if ( v6 )
    IopIoRingCleanupRegBufferArray(v5, v6);
  if ( v7 )
    IopIoRingCleanupRegBufferArray(v24, v7);
  *((_QWORD *)&v28 + 1) = (unsigned int)v4;
  *(_QWORD *)&v28 = (unsigned int)BufferEntry;
  return IopCompleteIoRingEntry(a1, *(_QWORD *)(a2 + 8), &v28, 0);
}
