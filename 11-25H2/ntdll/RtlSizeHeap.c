/*
 * XREFs of RtlSizeHeap @ 0x1800940C0
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180029FF0 (RtlpReAllocateHeapInternal.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x180092DD0 (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlDebugSizeHeap @ 0x180093080 (RtlDebugSizeHeap.c)
 *     RtlpScanHeapAllocBlocks @ 0x180093C84 (RtlpScanHeapAllocBlocks.c)
 *     RtlpAllocationSize @ 0x1800ABD54 (RtlpAllocationSize.c)
 *     RtlpDumpEntryInfo @ 0x180120268 (RtlpDumpEntryInfo.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x180028990 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlpProbeUserBufferSafe @ 0x180055450 (RtlpProbeUserBufferSafe.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x1800554D0 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlCompareMemory @ 0x1801674A0 (RtlCompareMemory.c)
 */

SIZE_T __cdecl RtlSizeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  __int64 v3; // r15
  unsigned __int64 v4; // rbx
  int v7; // r12d
  int v8; // eax
  char *v9; // r10
  __int64 v10; // r11
  unsigned __int64 v11; // r8
  char v12; // cl
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  char v15; // r9
  SIZE_T v16; // rdi
  ULONG v18; // edi
  char v19; // al
  unsigned __int64 v20; // r8
  __int64 v21; // r9
  char v22; // dl
  __int64 v23; // rdx
  int v24; // ecx
  unsigned int v25; // r8d
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  int v30; // edx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  char v33; // cl
  unsigned __int64 v34; // r9
  __int64 v35; // r8
  int v36; // r10d
  unsigned __int64 v37; // r11
  __int64 v38; // r8
  _QWORD *v39; // rcx
  __int64 v40; // rdx
  int v41; // eax
  unsigned __int64 v42; // rdx
  char v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rax
  int v46; // eax
  struct _TEB *v47; // rbx

  v3 = 0LL;
  v4 = (unsigned __int64)BaseAddress;
  if ( !HeapHandle )
    RtlpLogHeapFailure(19, 0LL, (__int64)BaseAddress, 0LL, 0LL, 0LL);
  if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
  {
    v18 = *((_DWORD *)HeapHandle + 29) | Flags;
    if ( (v18 & 0x61000000) != 0 && (v18 & 0x10000000) == 0 )
      return RtlDebugSizeHeap((__int64)HeapHandle, v18, (char *)v4);
    if ( (*((_BYTE *)HeapHandle + 120) & 1) == 0 )
    {
      if ( (v4 & 0xF) != 0 )
      {
        v24 = 9;
      }
      else
      {
        v4 -= 16LL;
        _m_prefetchw((const void *)v4);
        if ( *(_BYTE *)(v4 + 15) == 5 )
          v4 -= 16LL * *(unsigned __int8 *)(v4 + 14);
        if ( (*(_BYTE *)(v4 + 15) & 0x3F) != 0 )
        {
LABEL_21:
          if ( !v4 )
          {
            v47 = NtCurrentTeb();
            v47->LastStatusValue = -1073741811;
            v47->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741811);
            return -1LL;
          }
          v19 = *(_BYTE *)(v4 + 15);
          if ( v19 == 4 )
          {
            if ( *((_DWORD *)HeapHandle + 31) )
            {
              v46 = *(_DWORD *)(v4 + 8);
              if ( (v46 & *((_DWORD *)HeapHandle + 31)) != 0 )
                LOWORD(v46) = *((_WORD *)HeapHandle + 68) ^ v46;
            }
            else
            {
              LOWORD(v46) = *(_WORD *)(v4 + 8);
            }
            return *(_QWORD *)(v4 - 16) - (unsigned __int16)v46;
          }
          if ( v19 >= 0 )
          {
            if ( *((_DWORD *)HeapHandle + 31) )
            {
              LODWORD(v21) = *(_DWORD *)(v4 + 8);
              if ( ((unsigned int)v21 & *((_DWORD *)HeapHandle + 31)) != 0 )
                LOWORD(v21) = *((_WORD *)HeapHandle + 68) ^ v21;
            }
            else
            {
              LOWORD(v21) = *(_WORD *)(v4 + 8);
            }
            v20 = v4 >> 4;
          }
          else
          {
            v20 = v4 >> 4;
            if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((v4 >> 4) ^ *(_WORD *)(v4 + 8) ^ (unsigned __int16)HeapHandle) )
              v21 = 0LL;
            else
              v21 = *(_QWORD *)(v4
                              - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)(v4 >> 4) ^ *(_DWORD *)(v4 + 8) ^ (unsigned int)HeapHandle) >> 12));
            LOWORD(v21) = *(_WORD *)(v21 + 36);
          }
          v22 = *(_BYTE *)(v4 + 15);
          if ( v22 == 5 )
            return 16LL * (unsigned __int16)v21
                 - (*(unsigned __int16 *)(v4 + 12) ^ (unsigned __int64)*((unsigned __int16 *)HeapHandle + 70));
          if ( (v22 & 0x40) != 0 )
            return 16LL * (unsigned __int16)v21 - *(unsigned __int16 *)(v4 + 16LL * (*(_BYTE *)(v4 + 15) & 0x3F) + 12);
          if ( (v22 & 0x3F) == 0x3F )
          {
            if ( v22 >= 0 )
            {
              if ( *((_DWORD *)HeapHandle + 31) )
              {
                v26 = *(_DWORD *)(v4 + 8);
                if ( (v26 & *((_DWORD *)HeapHandle + 31)) != 0 )
                {
                  v23 = *(_QWORD *)(v4 + 16LL * (unsigned __int16)(*((_WORD *)HeapHandle + 68) ^ v26));
                  return 16LL * (unsigned __int16)v21 - v23;
                }
              }
              else
              {
                LOWORD(v26) = *(_WORD *)(v4 + 8);
              }
            }
            else
            {
              v25 = RtlpLFHKey ^ *(_DWORD *)(v4 + 8) ^ (unsigned int)HeapHandle ^ v20;
              if ( !(_WORD)v25 )
                v3 = *(_QWORD *)(v4 - ((unsigned __int64)v25 >> 12));
              LOWORD(v26) = *(_WORD *)(v3 + 36);
            }
            v23 = *(_QWORD *)(v4 + 16LL * (unsigned __int16)v26);
          }
          else
          {
            v23 = *(_BYTE *)(v4 + 15) & 0x3F;
          }
          return 16LL * (unsigned __int16)v21 - v23;
        }
        v24 = 8;
      }
      RtlpLogHeapFailure(v24, (__int64)HeapHandle, v4, 0LL, 0LL, 0LL);
      v4 = 0LL;
      goto LABEL_21;
    }
    v4 = (unsigned __int64)RtlpProbeUserBufferSafe((__int64)HeapHandle, v4);
    goto LABEL_21;
  }
  v7 = *((_DWORD *)HeapHandle + 5);
  if ( !v4 || (v4 & 0xF) != 0 )
  {
LABEL_12:
    v16 = -1LL;
LABEL_13:
    RtlpLogHeapFailure(9, (__int64)HeapHandle, v4, 0LL, 0LL, 0LL);
    return v16;
  }
  if ( (_WORD)v4 )
  {
    v8 = 0;
LABEL_8:
    v9 = (char *)HeapHandle + 192 * v8 + 320;
    v10 = *(_QWORD *)v9;
    v11 = v4 & *(_QWORD *)v9;
    if ( (char *)(RtlpHpHeapGlobals ^ *(_QWORD *)(v11 + 0x10) ^ v11) == v9 )
    {
      v12 = v9[8];
      v13 = v11 + 32 * ((unsigned __int64)(unsigned int)(v4 - v11) >> v12);
      v14 = -32LL * *(unsigned __int8 *)(v13 + 26) + v13;
      v15 = *(_BYTE *)(v14 + 24);
      if ( (v15 & 3) == 3 && (v11 + ((__int64)(v14 - v11) >> 5 << v12) == v4 || (v15 & 0xCu) >= 8) )
      {
        if ( v14 )
        {
          v33 = v9[8];
          v34 = (v10 & v14) + ((__int64)(v14 - (v10 & v14)) >> 5 << v33);
          if ( v4 <= v34 )
          {
            v45 = *(unsigned int *)(v14 + 4);
            v16 = (unsigned __int64)*(unsigned __int8 *)(v14 + 31) << v33;
          }
          else
          {
            if ( (*(_BYTE *)(v14 + 24) & 0xC) == 8 )
            {
              v35 = *((_QWORD *)v9 + 3);
              v36 = *(_DWORD *)((v10 & v14) + ((__int64)(v14 - (v10 & v14)) >> 5 << v33) + 0x28);
              v37 = (((unsigned int)v4
                    - (((unsigned int)(v34 >> 12) ^ (unsigned int)qword_1801CFEC8 ^ *(_DWORD *)(v34 + 40)) >> 16)
                    - (unsigned int)v34)
                   * (unsigned __int64)*(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(v34 + 44) << 6)
                                                       + v35
                                                       + 72)) >> 32;
              if ( (_DWORD)v4
                 - (((unsigned int)(v34 >> 12) ^ (unsigned int)qword_1801CFEC8 ^ *(_DWORD *)(v34 + 40)) >> 16)
                 - (_DWORD)v34 == (_DWORD)v37 * (unsigned __int16)((v34 >> 12) ^ qword_1801CFEC8 ^ *(_WORD *)(v34 + 40)) )
              {
                v38 = 1LL << (v37 & 0x1F);
                v39 = (_QWORD *)(v34 + 8 * ((v37 >> 5) + 8));
                if ( (*(_DWORD *)v39 & (unsigned int)v38) != 0 )
                {
                  v40 = (unsigned __int16)qword_1801CFEC8 ^ (unsigned int)(unsigned __int16)((v34 >> 12) ^ v36);
                  if ( (HIDWORD(*v39) & v38) != 0 )
                  {
                    v41 = *(_WORD *)(v40 + v4 - 2) & 0x3FF;
                    if ( *(__int16 *)(v40 + v4 - 2) < 0 )
                      v41 = 1;
                    LODWORD(v40) = v40 - v41;
                  }
                  v16 = (unsigned int)v40;
                }
                else
                {
                  v16 = -1LL;
                }
                goto LABEL_74;
              }
LABEL_80:
              v16 = -1LL;
              goto LABEL_74;
            }
            v42 = v4 - 16;
            v43 = *(_BYTE *)(*((_QWORD *)v9 + 4) + 4LL) & 1;
            if ( v43 && (v4 & 0xFFF) == 0 )
              v42 = v4 - 32;
            if ( ((RtlpHpHeapGlobals ^ v42 ^ *(_QWORD *)v42) & 0xFF000000000000LL) == 0 )
              goto LABEL_80;
            v44 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v42 ^ (unsigned int)*(_QWORD *)v42) >> 16)) - 16;
            if ( v43 && ((v42 + 32) & 0xFFF) == 0 )
              v44 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v42 ^ (unsigned int)*(_QWORD *)v42) >> 16)) - 32;
            v16 = (unsigned int)v44;
            if ( (*(_DWORD *)(v42 + 8) & 0x100) == 0 )
              goto LABEL_74;
            if ( *(__int16 *)(v44 + v4 - 2) < 0 )
            {
              v16 = (unsigned int)v44 - 1LL;
              goto LABEL_74;
            }
            v45 = *(_WORD *)(v44 + v4 - 2) & 0x1FFF;
          }
          v16 -= v45;
          goto LABEL_74;
        }
      }
    }
    goto LABEL_12;
  }
  v27 = RtlCSparseBitmapBitmaskRead((__int64)&::BaseAddress, 2 * ((v4 - qword_1801D0978) >> 20));
  if ( v27 )
  {
    v8 = v27 - 1;
    if ( v8 != 2 )
      goto LABEL_8;
  }
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)HeapHandle + 8);
  v28 = *((_QWORD *)HeapHandle + 10);
  v29 = *((_QWORD *)HeapHandle + 9);
  if ( (v28 & 1) != 0 )
  {
    if ( !v29 )
      goto LABEL_88;
    v29 ^= (unsigned __int64)HeapHandle + 72;
  }
  v30 = v28 & 1;
  if ( !v29 )
    goto LABEL_88;
  do
  {
    v31 = *(_QWORD *)(v29 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( v4 >= v31 )
    {
      if ( v4 <= v31 )
        break;
      v32 = *(_QWORD *)(v29 + 8);
      if ( v30 && v32 )
      {
        v29 ^= v32;
        continue;
      }
LABEL_58:
      v29 = v32;
      continue;
    }
    v32 = *(_QWORD *)v29;
    if ( !v30 || !v32 )
      goto LABEL_58;
    v29 ^= v32;
  }
  while ( v29 );
  if ( v29 )
  {
    v16 = (*(_QWORD *)(v29 + 32) & 0xFFFFFFFFFFFFF000uLL) - *(unsigned __int16 *)(v29 + 24);
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)HeapHandle + 8);
    goto LABEL_74;
  }
LABEL_88:
  v16 = -1LL;
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)HeapHandle + 8);
LABEL_74:
  if ( v16 == -1LL )
    goto LABEL_13;
  if ( (v7 & 0x2000) != 0 && RtlCompareMemory((const void *)(v16 + v4), &CheckHeapFillPattern, 0x10uLL) != 16 )
    goto LABEL_12;
  return v16;
}
