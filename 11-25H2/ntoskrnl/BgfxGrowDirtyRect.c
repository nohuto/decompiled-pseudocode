/*
 * XREFs of BgfxGrowDirtyRect @ 0x14068D108
 * Callers:
 *     GxpWriteFrameBufferPixels @ 0x1404810EC (GxpWriteFrameBufferPixels.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 */

__int64 __fastcall BgfxGrowDirtyRect(unsigned int *a1, int *a2, unsigned int a3)
{
  int v6; // r9d
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // eax

  KxAcquireSpinLock(*((PKSPIN_LOCK *)&xmmword_140EEFF00 + 1));
  v6 = *(_DWORD *)xmmword_140EEFF00;
  if ( *(_DWORD *)xmmword_140EEFF00 > (unsigned int)*a2 )
    v6 = *a2;
  v7 = *a1;
  *(_DWORD *)xmmword_140EEFF00 = v6;
  v8 = v7 / a3 + *a2;
  v9 = *(_DWORD *)(xmmword_140EEFF00 + 4);
  if ( v9 < v8 )
    v9 = v8;
  *(_DWORD *)(xmmword_140EEFF00 + 4) = v9;
  v10 = *(_DWORD *)(xmmword_140EEFF00 + 8);
  if ( v10 > a2[1] )
    v10 = a2[1];
  *(_DWORD *)(xmmword_140EEFF00 + 8) = v10;
  v11 = *(_DWORD *)(xmmword_140EEFF00 + 12);
  if ( v11 < a2[1] + a1[1] )
    v11 = a2[1] + a1[1];
  *(_DWORD *)(xmmword_140EEFF00 + 12) = v11;
  ++*(_DWORD *)qword_140EEFEF0;
  return KxReleaseSpinLock(*((volatile signed __int64 **)&xmmword_140EEFF00 + 1));
}
