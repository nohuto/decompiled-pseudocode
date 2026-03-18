/*
 * XREFs of ExpUpdateDebugInfo @ 0x140851530
 * Callers:
 *     ExHandleLogBadReference @ 0x14043BEE0 (ExHandleLogBadReference.c)
 *     ObDuplicateObject @ 0x140843A40 (ObDuplicateObject.c)
 *     ObCloseHandleTableEntry @ 0x1408501F0 (ObCloseHandleTableEntry.c)
 *     ExCreateHandleEx @ 0x140851070 (ExCreateHandleEx.c)
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     ExDestroyHandle @ 0x1408B4AF0 (ExDestroyHandle.c)
 *     ExDupHandleTable @ 0x140971B80 (ExDupHandleTable.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     RtlWalkFrameChain @ 0x140348060 (RtlWalkFrameChain.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExReferenceHandleDebugInfo @ 0x1409EC71C (ExReferenceHandleDebugInfo.c)
 *     ExDereferenceHandleDebugInfo @ 0x140A0488C (ExDereferenceHandleDebugInfo.c)
 */

__int64 __fastcall ExpUpdateDebugInfo(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v8; // r14
  char v9; // r12
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edx
  __int64 v14; // r8
  unsigned int v15; // eax
  _OWORD *v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // edx
  int v19; // eax
  __int64 v20; // rsi
  ULONG v21; // eax
  __int64 v22; // rcx
  int v23; // ebx
  ULONG v24; // eax

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
        v12 = 0;
        v13 = *(_DWORD *)(v8 + 4) - 1;
      }
      else
      {
        v12 = 1;
        v13 = *(_DWORD *)(v8 + 72);
      }
      while ( v12 <= v13 )
      {
        v14 = 160LL * v12;
        if ( *(_DWORD *)(v14 + v8 + 104) == 1 && *(_QWORD *)(v14 + v8 + 96) == a3 )
        {
          v15 = *(_DWORD *)(v8 + 72);
          *(_DWORD *)(v8 + 72) = v15 - 1;
          v16 = (_OWORD *)(v14 + v8);
          v17 = 160LL * (v15 % *(_DWORD *)(v8 + 4)) + v8;
          v16[5] = *(_OWORD *)(v17 + 80);
          v16[6] = *(_OWORD *)(v17 + 96);
          v16[7] = *(_OWORD *)(v17 + 112);
          v16[8] = *(_OWORD *)(v17 + 128);
          v16[9] = *(_OWORD *)(v17 + 144);
          v16[10] = *(_OWORD *)(v17 + 160);
          v16[11] = *(_OWORD *)(v17 + 176);
          v16[12] = *(_OWORD *)(v17 + 192);
          v16[13] = *(_OWORD *)(v17 + 208);
          v16[14] = *(_OWORD *)(v17 + 224);
          *(_DWORD *)(v17 + 104) = 0;
          break;
        }
        ++v12;
      }
    }
    else
    {
      v18 = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v8 + 72)) % *(_DWORD *)(v8 + 4);
      if ( !v18 )
      {
        v19 = *(_DWORD *)(v8 + 8) | 0x40000000;
        *(_DWORD *)(v8 + 8) = v19;
        if ( (v19 & 4) != 0 )
          __debugbreak();
      }
      v20 = v8 + 160LL * v18 + 80;
      *(_OWORD *)v20 = *(_OWORD *)(a2 + 1288);
      *(_QWORD *)(v20 + 16) = a3;
      *(_DWORD *)(v20 + 24) = a4;
      v21 = RtlWalkFrameChain((PVOID *)(v20 + 32), 0x10u, 0x300u);
      v22 = v21 - 3;
      if ( v21 <= 3 )
        v22 = 0LL;
      v23 = v22;
      v24 = RtlWalkFrameChain((PVOID *)(v20 + 8 * (v22 + 4)), 16 - v22, 1u);
      memset_0((void *)(v20 + 8 * (v23 + v24 + 4LL)), 0, 8LL * (16 - (v23 + v24)));
    }
    if ( v9 )
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v8 + 16));
    return ExDereferenceHandleDebugInfo(a1, v8);
  }
  return result;
}
