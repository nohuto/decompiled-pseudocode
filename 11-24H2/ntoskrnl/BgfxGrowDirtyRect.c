/*
 * XREFs of BgfxGrowDirtyRect @ 0x1406994D8
 * Callers:
 *     GxpWriteFrameBufferPixels @ 0x14047D15C (GxpWriteFrameBufferPixels.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 */

__int64 __fastcall BgfxGrowDirtyRect(unsigned int *a1, int *a2, unsigned int a3)
{
  int v6; // r9d
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // eax

  KxAcquireSpinLock(*((PKSPIN_LOCK *)&xmmword_140EF03E0 + 1));
  v6 = *(_DWORD *)xmmword_140EF03E0;
  if ( *(_DWORD *)xmmword_140EF03E0 > (unsigned int)*a2 )
    v6 = *a2;
  v7 = *a1;
  *(_DWORD *)xmmword_140EF03E0 = v6;
  v8 = v7 / a3 + *a2;
  v9 = *(_DWORD *)(xmmword_140EF03E0 + 4);
  if ( v9 < v8 )
    v9 = v8;
  *(_DWORD *)(xmmword_140EF03E0 + 4) = v9;
  v10 = *(_DWORD *)(xmmword_140EF03E0 + 8);
  if ( v10 > a2[1] )
    v10 = a2[1];
  *(_DWORD *)(xmmword_140EF03E0 + 8) = v10;
  v11 = *(_DWORD *)(xmmword_140EF03E0 + 12);
  if ( v11 < a2[1] + a1[1] )
    v11 = a2[1] + a1[1];
  *(_DWORD *)(xmmword_140EF03E0 + 12) = v11;
  ++*(_DWORD *)qword_140EF03D0;
  return KxReleaseSpinLock(*((volatile signed __int64 **)&xmmword_140EF03E0 + 1));
}
