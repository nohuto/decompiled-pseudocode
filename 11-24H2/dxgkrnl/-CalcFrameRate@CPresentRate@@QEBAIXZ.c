/*
 * XREFs of ?CalcFrameRate@CPresentRate@@QEBAIXZ @ 0x14005F560
 * Callers:
 *     ?QueryFrameRate@CCompositionSurface@@QEBAIXZ @ 0x14005F3A4 (-QueryFrameRate@CCompositionSurface@@QEBAIXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPresentRate::CalcFrameRate(CPresentRate *this)
{
  CPresentRate *v1; // r10
  unsigned __int64 v2; // rdx
  unsigned int v3; // r9d
  int v5; // r11d
  unsigned int v6; // ecx
  unsigned int v7; // r8d
  __int64 v8; // rsi
  unsigned int v9; // ebx
  unsigned int v10; // edx

  v1 = this;
  v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v3 = v2 - *((_DWORD *)this + 10);
  if ( v3 < 0x3E8 )
    return 0xFFFFFFFFLL;
  v5 = 0;
  v6 = 5000;
  v7 = -1;
  v8 = 5LL;
  do
  {
    v9 = *(_DWORD *)v1;
    if ( *(_DWORD *)v1 && (v9 + 1000 > (unsigned int)v2 || (unsigned int)v2 - (v9 + 1000) < 0x1388) )
    {
      v5 += *((_DWORD *)v1 + 1);
      if ( v9 < v7 )
        v7 = *(_DWORD *)v1;
    }
    v1 = (CPresentRate *)((char *)v1 + 8);
    --v8;
  }
  while ( v8 );
  v10 = v2 - v7;
  if ( v3 < 0x1388 )
  {
    v6 = v3;
  }
  else if ( v10 > 0x1388 )
  {
    v6 = v10;
  }
  if ( v5 )
    return 1000 * v5 / v6;
  else
    return 0LL;
}
