/*
 * XREFs of ?CalcFrameRate@COldPresentRate@@QEBAIXZ @ 0x14009DB38
 * Callers:
 *     ?QueryFrameRate@CCompositionSurface@@QEBAIXZ @ 0x14005F3A4 (-QueryFrameRate@CCompositionSurface@@QEBAIXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall COldPresentRate::CalcFrameRate(COldPresentRate *this)
{
  int v1; // r10d
  __int64 v3; // r11
  unsigned __int64 v4; // r8
  unsigned int v5; // edx
  unsigned int v6; // ecx
  unsigned int v7; // r8d

  v1 = 0;
  v3 = 2LL;
  v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v5 = -1;
  do
  {
    v6 = *(_DWORD *)this;
    if ( *(_DWORD *)this )
    {
      if ( (unsigned int)v4 >= v6 && (unsigned int)v4 - v6 <= 0x3E8 )
      {
        v1 += *((_DWORD *)this + 1);
        if ( v6 < v5 )
          v5 = *(_DWORD *)this;
      }
    }
    this = (COldPresentRate *)((char *)this + 8);
    --v3;
  }
  while ( v3 );
  v7 = v4 - v5;
  if ( v1 && v7 )
    return 1000 * v1 / v7;
  else
    return 0LL;
}
