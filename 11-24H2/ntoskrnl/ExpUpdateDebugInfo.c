/*
 * XREFs of ExpUpdateDebugInfo @ 0x1408495B4
 * Callers:
 *     ExHandleLogBadReference @ 0x14042D470 (ExHandleLogBadReference.c)
 *     ObDuplicateObject @ 0x14083C270 (ObDuplicateObject.c)
 *     ObCloseHandleTableEntry @ 0x140848260 (ObCloseHandleTableEntry.c)
 *     ExCreateHandleEx @ 0x1408490F0 (ExCreateHandleEx.c)
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     ExDupHandleTable @ 0x140891770 (ExDupHandleTable.c)
 *     ExDestroyHandle @ 0x1408961C0 (ExDestroyHandle.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140233100 (RtlWalkFrameChain.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExReferenceHandleDebugInfo @ 0x1409E16F8 (ExReferenceHandleDebugInfo.c)
 *     ExDereferenceHandleDebugInfo @ 0x140A00380 (ExDereferenceHandleDebugInfo.c)
 */

__int64 __fastcall ExpUpdateDebugInfo(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v8; // r14
  char v9; // r12
  int v10; // eax
  int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rsi
  ULONG v14; // eax
  __int64 v15; // rcx
  int v16; // ebx
  ULONG v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // edx
  int v20; // eax
  __int64 v21; // r8
  unsigned int v22; // eax
  _OWORD *v23; // rcx
  __int64 v24; // rax

  result = ExReferenceHandleDebugInfo();
  v8 = result;
  if ( result )
  {
    v9 = 0;
    if ( (*(_DWORD *)(result + 8) & 3) != 0 )
    {
      ExAcquireFastMutex((PKGUARDED_MUTEX)(result + 16));
      v9 = 1;
    }
    v10 = *(_DWORD *)(v8 + 8);
    if ( (v10 & 1) != 0 )
    {
      *(_DWORD *)(v8 + 8) = v10 & 0x3FFFFFFE | 0x80000000;
      *(_DWORD *)(v8 + 72) = 0;
      memset_0((void *)(v8 + 80), 0, 160LL * *(unsigned int *)(v8 + 4) + 80);
    }
    v11 = *(_DWORD *)(v8 + 8);
    if ( (v11 & 2) != 0 && a4 == 2 )
    {
      if ( (v11 & 0x40000000) != 0 )
      {
        v18 = 0;
        v19 = *(_DWORD *)(v8 + 4) - 1;
      }
      else
      {
        v18 = 1;
        v19 = *(_DWORD *)(v8 + 72);
      }
      while ( v18 <= v19 )
      {
        v21 = 160LL * v18;
        if ( *(_DWORD *)(v21 + v8 + 104) == 1 && *(_QWORD *)(v21 + v8 + 96) == a3 )
        {
          v22 = *(_DWORD *)(v8 + 72);
          *(_DWORD *)(v8 + 72) = v22 - 1;
          v23 = (_OWORD *)(v21 + v8);
          v24 = 160LL * (v22 % *(_DWORD *)(v8 + 4)) + v8;
          v23[5] = *(_OWORD *)(v24 + 80);
          v23[6] = *(_OWORD *)(v24 + 96);
          v23[7] = *(_OWORD *)(v24 + 112);
          v23[8] = *(_OWORD *)(v24 + 128);
          v23[9] = *(_OWORD *)(v24 + 144);
          v23[10] = *(_OWORD *)(v24 + 160);
          v23[11] = *(_OWORD *)(v24 + 176);
          v23[12] = *(_OWORD *)(v24 + 192);
          v23[13] = *(_OWORD *)(v24 + 208);
          v23[14] = *(_OWORD *)(v24 + 224);
          *(_DWORD *)(v24 + 104) = 0;
          break;
        }
        ++v18;
      }
    }
    else
    {
      v12 = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v8 + 72)) % *(_DWORD *)(v8 + 4);
      if ( !v12 )
      {
        v20 = *(_DWORD *)(v8 + 8) | 0x40000000;
        *(_DWORD *)(v8 + 8) = v20;
        if ( (v20 & 4) != 0 )
          __debugbreak();
      }
      v13 = v8 + 160LL * v12 + 80;
      *(_OWORD *)v13 = *(_OWORD *)(a2 + 1288);
      *(_QWORD *)(v13 + 16) = a3;
      *(_DWORD *)(v13 + 24) = a4;
      v14 = RtlWalkFrameChain((PVOID *)(v13 + 32), 0x10u, 0x300u);
      v15 = v14 - 3;
      if ( v14 <= 3 )
        v15 = 0LL;
      v16 = v15;
      v17 = RtlWalkFrameChain((PVOID *)(v13 + 8 * (v15 + 4)), 16 - v15, 1u);
      memset_0((void *)(v13 + 8 * (v16 + v17 + 4LL)), 0, 8LL * (16 - (v16 + v17)));
    }
    if ( v9 )
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v8 + 16));
    return ExDereferenceHandleDebugInfo(a1, v8);
  }
  return result;
}
