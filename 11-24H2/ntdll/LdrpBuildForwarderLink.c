/*
 * XREFs of LdrpBuildForwarderLink @ 0x1800DA890
 * Callers:
 *     LdrpLoadDllInternal @ 0x180037E60 (LdrpLoadDllInternal.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall LdrpBuildForwarderLink(__int64 a1, unsigned __int64 i, __int64 a3, char *a4)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // rsi
  char *SchedulerSharedDataSlot; // r8
  char *v8; // rcx
  __int64 v10; // rbp
  __int64 v11; // rbx
  int v12; // r8d
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  char *Heap; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // rdx
  _QWORD *v19; // r8
  int v20; // edx

  v4 = 0;
  v5 = i;
  if ( a1 )
  {
    SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
      {
        v8 = &SchedulerSharedDataSlot[8 * (unsigned int)i];
        if ( !*(_QWORD *)v8 )
        {
          if ( v8 )
            *(_QWORD *)v8 = &LdrpModuleDatatableLock;
          break;
        }
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&LdrpModuleDatatableLock, 0LL) )
      RtlpAcquireSRWLockExclusiveContended((unsigned __int64)&LdrpModuleDatatableLock, i, SchedulerSharedDataSlot, a4);
    v10 = *(_QWORD *)(a1 + 152);
    if ( *(_DWORD *)(v10 + 24) || (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v11 = *(_QWORD *)(v5 + 152);
      if ( v10 != v11
        && (*(_DWORD *)(v11 + 56) != 9 || *(_DWORD *)(v11 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v11 - 56LL) & 0x20) == 0) )
      {
        v14 = *(_QWORD **)(v10 + 40);
        if ( !v14 )
        {
LABEL_23:
          Heap = (char *)RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2359296, 0x20uLL);
          if ( Heap )
          {
            *((_DWORD *)Heap + 6) |= 1u;
            v17 = *(_QWORD **)(v10 + 40);
            if ( v17 )
            {
              *(_QWORD *)Heap = *v17;
              *v17 = Heap;
            }
            else
            {
              *(_QWORD *)Heap = Heap;
            }
            *(_QWORD *)(v10 + 40) = Heap;
            v18 = Heap + 16;
            *((_QWORD *)Heap + 1) = v11;
            v19 = *(_QWORD **)(v11 + 48);
            if ( v19 )
            {
              *v18 = *v19;
              *v19 = v18;
            }
            else
            {
              *v18 = v18;
            }
            *(_QWORD *)(v11 + 48) = v18;
            v20 = *((_DWORD *)Heap + 6);
            *((_QWORD *)Heap + 3) = v10;
            if ( (v20 & 1) != 0 )
              *((_DWORD *)Heap + 6) = v10 ^ ((unsigned __int8)v20 ^ (unsigned __int8)v10) & 1;
          }
          else
          {
            v4 = -1073741801;
          }
          goto LABEL_17;
        }
        v15 = *(_QWORD **)(v10 + 40);
        while ( 1 )
        {
          v15 = (_QWORD *)*v15;
          if ( v15[1] == v11 )
            break;
          if ( v15 == v14 )
            goto LABEL_23;
        }
      }
      v12 = *(_DWORD *)(v11 + 24);
      if ( (unsigned int)(v12 - 2) <= 0xFFFFFFFC )
        *(_DWORD *)(v11 + 24) = v12 - 1;
    }
    else
    {
      v4 = -1073741515;
    }
LABEL_17:
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  }
  return v4;
}
