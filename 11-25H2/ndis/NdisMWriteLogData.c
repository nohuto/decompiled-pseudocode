/*
 * XREFs of NdisMWriteLogData @ 0x1400A95C0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1400EE080 (memmove.c)
 */

NDIS_STATUS __stdcall NdisMWriteLogData(NDIS_HANDLE LogHandle, PVOID LogBuffer, UINT LogBufferSize)
{
  NDIS_STATUS v5; // ebp
  KSPIN_LOCK *v7; // rbx
  UINT v8; // r14d
  __int64 v9; // rax
  __int64 v10; // r14
  char *v11; // rcx
  char *v12; // rdx
  size_t v13; // r8
  UINT v14; // edx
  UINT v15; // r8d
  UINT v16; // ecx
  __int64 v17; // rbx
  unsigned int *v18; // r14
  __int64 v19; // rcx
  unsigned int v20; // esi
  PVOID v21; // rcx
  _DWORD *v22; // rdx
  char *v23; // r15
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // eax
  KIRQL Irql; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  Irql = 0;
  IoAcquireCancelSpinLock(&Irql);
  v7 = (KSPIN_LOCK *)((char *)LogHandle + 8);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)LogHandle + 1);
  v8 = *((_DWORD *)LogHandle + 6);
  if ( LogBufferSize > v8 )
  {
    v5 = -2147483643;
  }
  else
  {
    v9 = *((unsigned int *)LogHandle + 8);
    v10 = v8 - (unsigned int)v9;
    v11 = (char *)LogHandle + v9 + 40;
    v12 = (char *)LogBuffer;
    if ( LogBufferSize > (unsigned int)v10 )
    {
      memmove(v11, LogBuffer, (unsigned int)v10);
      v12 = (char *)LogBuffer + v10;
      v13 = LogBufferSize - (unsigned int)v10;
      v11 = (char *)LogHandle + 40;
    }
    else
    {
      v13 = LogBufferSize;
    }
    memmove(v11, v12, v13);
    v14 = *((_DWORD *)LogHandle + 6);
    v15 = LogBufferSize + *((_DWORD *)LogHandle + 7);
    *((_DWORD *)LogHandle + 7) = v15;
    if ( v15 > v14 )
    {
      *((_DWORD *)LogHandle + 7) = v14;
      v15 = v14;
    }
    v16 = LogBufferSize + *((_DWORD *)LogHandle + 8);
    *((_DWORD *)LogHandle + 8) = v16;
    if ( v16 >= v14 )
    {
      v16 -= v14;
      *((_DWORD *)LogHandle + 8) = v16;
    }
    if ( v15 == v14 )
      *((_DWORD *)LogHandle + 9) = v16;
    v17 = *((_QWORD *)LogHandle + 2);
    if ( v17 )
    {
      *((_QWORD *)LogHandle + 2) = 0LL;
      v18 = (unsigned int *)((char *)LogHandle + 36);
      v19 = *(_QWORD *)(v17 + 8);
      v20 = *(_DWORD *)(v19 + 40);
      if ( v20 > v15 )
        v20 = v15;
      if ( v14 - *v18 < v20 )
      {
        if ( (*(_BYTE *)(v19 + 10) & 5) != 0 )
          v23 = *(char **)(v19 + 24);
        else
          v23 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v19, 0, MmCached, 0LL, 0, 0x40000000u);
        if ( v23 )
        {
          memmove(v23, (char *)LogHandle + *v18 + 40, *((_DWORD *)LogHandle + 6) - *v18);
          memmove(
            &v23[*((unsigned int *)LogHandle + 6) - (unsigned __int64)*v18],
            (char *)LogHandle + 40,
            v20 + *v18 - *((_DWORD *)LogHandle + 6));
        }
        else
        {
          v5 = -1073741670;
        }
        v22 = (char *)LogHandle + 36;
      }
      else
      {
        if ( (*(_BYTE *)(v19 + 10) & 5) != 0 )
          v21 = *(PVOID *)(v19 + 24);
        else
          v21 = MmMapLockedPagesSpecifyCache((PMDL)v19, 0, MmCached, 0LL, 0, 0x40000000u);
        if ( v21 )
          memmove(v21, (char *)LogHandle + *v18 + 40, v20);
        else
          v5 = -1073741670;
        v22 = (char *)LogHandle + 36;
      }
      v24 = *v18;
      *((_DWORD *)LogHandle + 7) -= v20;
      v25 = v20 + v24;
      v26 = *((_DWORD *)LogHandle + 6);
      *v18 = v25;
      if ( v25 >= v26 )
        *v22 = v25 - v26;
      *(_QWORD *)(v17 + 56) = v20;
      _InterlockedExchange64((volatile __int64 *)(v17 + 104), 0LL);
      *(_DWORD *)(v17 + 48) = 0;
      IofCompleteRequest((PIRP)v17, 2);
    }
    v7 = (KSPIN_LOCK *)((char *)LogHandle + 8);
  }
  KeReleaseSpinLockFromDpcLevel(v7);
  IoReleaseCancelSpinLock(Irql);
  return v5;
}
