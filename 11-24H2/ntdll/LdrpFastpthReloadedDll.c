/*
 * XREFs of LdrpFastpthReloadedDll @ 0x180046270
 * Callers:
 *     LdrpLoadDllInternal @ 0x180037E60 (LdrpLoadDllInternal.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     LdrpFindLoadedDllByName @ 0x180044B80 (LdrpFindLoadedDllByName.c)
 *     LdrpIncrementModuleLoadCount @ 0x180046500 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x180047D50 (LdrpDereferenceModule.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180049230 (LdrpDecrementModuleLoadCountEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     LdrpLogEtwHotPatchStatus @ 0x180091078 (LdrpLogEtwHotPatchStatus.c)
 *     LdrpDrainWorkQueue @ 0x1800AB680 (LdrpDrainWorkQueue.c)
 *     LdrpDropLastInProgressCount @ 0x1800ACA84 (LdrpDropLastInProgressCount.c)
 */

__int64 __fastcall LdrpFastpthReloadedDll(unsigned __int64 a1, __int16 a2, __int64 a3, _QWORD *a4)
{
  int Count; // edi
  unsigned __int16 *v7; // rax
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // rsi
  int v13; // edx
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  char *Heap; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // rdx
  _QWORD *v19; // r8
  int v20; // edx
  int v21; // [rsp+58h] [rbp+10h] BYREF

  v21 = 0;
  Count = -1073741275;
  if ( (a2 & 0x20) != 0 )
  {
    v7 = (unsigned __int16 *)a1;
    a1 = 0LL;
  }
  else
  {
    if ( (a2 & 0x200) == 0 )
      return 3221226021LL;
    v7 = 0LL;
  }
  result = LdrpFindLoadedDllByName(v7, a1, a2, a4, (__int64)&v21);
  if ( (int)result >= 0 )
  {
    v9 = *a4;
    if ( *(_DWORD *)(*a4 + 268LL) == 9 )
    {
      Count = -1073740608;
      LdrpLogEtwHotPatchStatus(LdrpImageEntry + 88, v9, 0, -1073740608, 2);
      goto LABEL_19;
    }
    if ( v21 != 9 )
      goto LABEL_19;
    Count = LdrpIncrementModuleLoadCount(v9);
    if ( Count < 0 )
      goto LABEL_19;
    Count = 0;
    v10 = *a4;
    if ( !a3 )
    {
LABEL_16:
      if ( Count >= 0 )
        return (unsigned int)Count;
      if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
      {
        LdrpDecrementModuleLoadCountEx(*a4, 0LL);
      }
      else
      {
        LdrpDrainWorkQueue(0LL);
        LdrpDecrementModuleLoadCountEx(*a4, 0LL);
        LdrpDropLastInProgressCount();
      }
LABEL_19:
      LdrpDereferenceModule((PVOID)*a4);
      *a4 = 0LL;
      return (unsigned int)Count;
    }
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    v11 = *(_QWORD *)(a3 + 152);
    if ( *(_DWORD *)(v11 + 24) || (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v12 = *(_QWORD *)(v10 + 152);
      if ( v11 != v12
        && (*(_DWORD *)(v12 + 56) != 9 || *(_DWORD *)(v12 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v12 - 56LL) & 0x20) == 0) )
      {
        v14 = *(_QWORD **)(v11 + 40);
        if ( !v14 )
        {
LABEL_28:
          Heap = (char *)RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2359296, 0x20uLL);
          if ( Heap )
          {
            *((_DWORD *)Heap + 6) |= 1u;
            v17 = *(_QWORD **)(v11 + 40);
            if ( v17 )
            {
              *(_QWORD *)Heap = *v17;
              *v17 = Heap;
            }
            else
            {
              *(_QWORD *)Heap = Heap;
            }
            *(_QWORD *)(v11 + 40) = Heap;
            v18 = Heap + 16;
            *((_QWORD *)Heap + 1) = v12;
            v19 = *(_QWORD **)(v12 + 48);
            if ( v19 )
            {
              *v18 = *v19;
              *v19 = v18;
            }
            else
            {
              *v18 = v18;
            }
            *(_QWORD *)(v12 + 48) = v18;
            v20 = *((_DWORD *)Heap + 6);
            *((_QWORD *)Heap + 3) = v11;
            if ( (v20 & 1) != 0 )
              *((_DWORD *)Heap + 6) = v11 ^ ((unsigned __int8)v20 ^ (unsigned __int8)v11) & 1;
          }
          else
          {
            Count = -1073741801;
          }
          goto LABEL_15;
        }
        v15 = *(_QWORD **)(v11 + 40);
        while ( 1 )
        {
          v15 = (_QWORD *)*v15;
          if ( v15[1] == v12 )
            break;
          if ( v15 == v14 )
            goto LABEL_28;
        }
      }
      v13 = *(_DWORD *)(v12 + 24);
      if ( (unsigned int)(v13 - 2) <= 0xFFFFFFFC )
        *(_DWORD *)(v12 + 24) = v13 - 1;
    }
    else
    {
      Count = -1073741515;
    }
LABEL_15:
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    goto LABEL_16;
  }
  return result;
}
