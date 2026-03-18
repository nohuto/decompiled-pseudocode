/*
 * XREFs of RtlLocateExtendedFeature @ 0x140281BD0
 * Callers:
 *     RtlpWalkFrameChain @ 0x14027E270 (RtlpWalkFrameChain.c)
 *     RtlpxVirtualUnwind @ 0x14027F030 (RtlpxVirtualUnwind.c)
 *     RtlpUnwindPrologue @ 0x140280090 (RtlpUnwindPrologue.c)
 *     RtlpVirtualPopShadowStack @ 0x140282050 (RtlpVirtualPopShadowStack.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1403E6858 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     KiContinuePreviousModeUser @ 0x1403E6E30 (KiContinuePreviousModeUser.c)
 *     KeVerifyContextXStateCetU @ 0x1403E7E20 (KeVerifyContextXStateCetU.c)
 *     KiInitializeContextThread @ 0x140406F34 (KiInitializeContextThread.c)
 *     PspAllocateThread @ 0x1408A49BC (PspAllocateThread.c)
 *     PspSetupUserShadowStack @ 0x1408DDFB8 (PspSetupUserShadowStack.c)
 * Callees:
 *     RtlpLocateXStateChunk @ 0x14042FDD0 (RtlpLocateXStateChunk.c)
 */

__int64 __fastcall RtlLocateExtendedFeature(__int64 a1, int a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbp
  char v4; // bl
  __int64 XStateChunk; // rsi
  __int64 v6; // r10
  _DWORD *v7; // r11
  int v8; // eax
  __int64 v9; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  _DWORD *v14; // rdx

  v2 = a2 - 2;
  if ( (unsigned int)(a2 - 2) > 0x3D )
    return 0LL;
  v3 = 1LL << a2;
  if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & (1LL << a2)) == 0 )
    return 0LL;
  v4 = MEMORY[0xFFFFF780000003EC];
  if ( (MEMORY[0xFFFFF780000003EC] & 0xFFFFFFF8) != 0 )
    return 0LL;
  XStateChunk = RtlpLocateXStateChunk(a1);
  if ( !XStateChunk )
    return 0LL;
  if ( v7 )
  {
    if ( (v4 & 2) != 0 )
      v8 = *(_DWORD *)(4 * v6 - 0x87FFFFFF9FCLL);
    else
      v8 = *(_DWORD *)(8 * v6 - 0x87FFFFFFC0CLL);
    *v7 = v8;
  }
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
  {
    v9 = *(_QWORD *)(XStateChunk + 8);
    if ( (v3 & v9) == 0 )
      return 0LL;
    v11 = 576LL;
    if ( (unsigned int)v6 > 2 )
    {
      v12 = 4LL;
      v13 = v2;
      v14 = (_DWORD *)0xFFFFF7800000060CLL;
      do
      {
        if ( (v12 & v9) != 0 )
        {
          if ( (v12 & MEMORY[0xFFFFF780000005F8]) != 0 )
            LODWORD(v11) = (v11 + 63) & 0xFFFFFFC0;
          v11 = (unsigned int)(*v14 + v11);
        }
        v12 = __ROL8__(v12, 1);
        ++v14;
        --v13;
      }
      while ( v13 );
    }
    if ( (v3 & MEMORY[0xFFFFF780000005F8]) != 0 )
      v11 = ((_DWORD)v11 + 63) & 0xFFFFFFC0;
  }
  else
  {
    v11 = *(unsigned int *)(8 * v6 - 0x87FFFFFFC10LL);
  }
  return XStateChunk + v11 - 512;
}
