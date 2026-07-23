/*
 * XREFs of MiScrubProcessLargePage @ 0x1407FE2B0
 * Callers:
 *     MiScrubActiveLargePage @ 0x1407FE198 (MiScrubActiveLargePage.c)
 * Callees:
 *     MiIsVadLargePrivate @ 0x1402903A0 (MiIsVadLargePrivate.c)
 *     MiIdentifyPfnWrapper @ 0x140311220 (MiIdentifyPfnWrapper.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     MiScrubLargeMappedPage @ 0x14068E678 (MiScrubLargeMappedPage.c)
 */

__int64 __fastcall MiScrubProcessLargePage(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // edi
  __int64 v7; // r9
  __int64 v8; // rax
  void *v9; // rbx
  __int64 v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+30h] [rbp-28h]
  int v14; // [rsp+70h] [rbp+18h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v6 = 0;
  if ( MiIdentifyPfnWrapper(48 * a2 - 0x220000000000LL, &v12) != MiPageSizes[a3] )
    return 0LL;
  if ( (v12 & 0x70) != 0x60 )
    return 0LL;
  if ( (v12 & 0xF) != 0xD )
    return 0LL;
  if ( v13 > 0x7FFFFFFEFFFFLL )
    return 0LL;
  if ( LODWORD(KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink) != (((unsigned __int64)v12 >> 9) & 0xFFFFFFFFFFFFLL) )
    return 0LL;
  v8 = MiObtainReferencedVadEx(v13, 0LL, &v14, v7);
  v9 = (void *)v8;
  if ( !v8 )
    return 0LL;
  if ( MiIsVadLargePrivate(v8) && (*(_DWORD *)(v10 + 48) & 0x4200000) != 0x4200000 )
    v6 = MiScrubLargeMappedPage(a1, a2, a3, (__int64 *)&v12);
  MiUnlockAndDereferenceVad(v9);
  return v6;
}
