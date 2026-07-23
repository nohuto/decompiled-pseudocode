/*
 * XREFs of RtlLocateExtendedFeature @ 0x140237160
 * Callers:
 *     RtlpWalkFrameChain @ 0x140233800 (RtlpWalkFrameChain.c)
 *     RtlpxVirtualUnwind @ 0x1402345C0 (RtlpxVirtualUnwind.c)
 *     RtlpUnwindPrologue @ 0x140235620 (RtlpUnwindPrologue.c)
 *     RtlpVirtualPopShadowStack @ 0x1402375E0 (RtlpVirtualPopShadowStack.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1403D43F8 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     KiContinuePreviousModeUser @ 0x1403D49D0 (KiContinuePreviousModeUser.c)
 *     KeVerifyContextXStateCetU @ 0x1403D59C0 (KeVerifyContextXStateCetU.c)
 *     KiInitializeContextThread @ 0x1403FF414 (KiInitializeContextThread.c)
 *     PspAllocateThread @ 0x1408FAFD4 (PspAllocateThread.c)
 *     PspSetupUserShadowStack @ 0x140914B74 (PspSetupUserShadowStack.c)
 * Callees:
 *     RtlpLocateXStateChunk @ 0x140421880 (RtlpLocateXStateChunk.c)
 */

PVOID __cdecl RtlLocateExtendedFeature(PCONTEXT_EX ContextEx, ULONG FeatureId, PULONG Length)
{
  ULONG v3; // edi
  __int64 v4; // rbp
  char v5; // bl
  __int64 XStateChunk; // rsi
  __int64 v7; // r10
  _DWORD *v8; // r11
  int v9; // eax
  __int64 v10; // r9
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  _DWORD *v15; // rdx

  v3 = FeatureId - 2;
  if ( FeatureId - 2 > 0x3D )
    return 0LL;
  v4 = 1LL << FeatureId;
  if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & (1LL << FeatureId)) == 0 )
    return 0LL;
  v5 = MEMORY[0xFFFFF780000003EC];
  if ( (MEMORY[0xFFFFF780000003EC] & 0xFFFFFFF8) != 0 )
    return 0LL;
  XStateChunk = RtlpLocateXStateChunk(ContextEx);
  if ( !XStateChunk )
    return 0LL;
  if ( v8 )
  {
    if ( (v5 & 2) != 0 )
      v9 = *(_DWORD *)(4 * v7 - 0x87FFFFFF9FCLL);
    else
      v9 = *(_DWORD *)(8 * v7 - 0x87FFFFFFC0CLL);
    *v8 = v9;
  }
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
  {
    v10 = *(_QWORD *)(XStateChunk + 8);
    if ( (v4 & v10) == 0 )
      return 0LL;
    v12 = 576LL;
    if ( (unsigned int)v7 > 2 )
    {
      v13 = 4LL;
      v14 = v3;
      v15 = (_DWORD *)0xFFFFF7800000060CLL;
      do
      {
        if ( (v13 & v10) != 0 )
        {
          if ( (v13 & MEMORY[0xFFFFF780000005F8]) != 0 )
            LODWORD(v12) = (v12 + 63) & 0xFFFFFFC0;
          v12 = (unsigned int)(*v15 + v12);
        }
        v13 = __ROL8__(v13, 1);
        ++v15;
        --v14;
      }
      while ( v14 );
    }
    if ( (v4 & MEMORY[0xFFFFF780000005F8]) != 0 )
      v12 = ((_DWORD)v12 + 63) & 0xFFFFFFC0;
  }
  else
  {
    v12 = *(unsigned int *)(8 * v7 - 0x87FFFFFFC10LL);
  }
  return (PVOID)(XStateChunk + v12 - 512);
}
