/*
 * XREFs of MiCheckNodeChannelStandbyCount @ 0x140490FD4
 * Callers:
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCheckNodeChannelStandbyCount(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // r11
  char v5; // r8
  unsigned __int8 v6; // dl
  unsigned int v7; // r10d
  unsigned int i; // r9d

  v4 = *(_QWORD *)(a1 + 16) + 57216LL * a2;
  if ( (*(_DWORD *)(v4 + 15184) & 1) != 0 )
    v5 = a3 + 1;
  else
    v5 = MmNumberOfChannels;
  v6 = (*(_DWORD *)(v4 + 15184) & 1) != 0 ? a3 : 0;
  v7 = 0;
  while ( v6 != v5 )
  {
    for ( i = 0; i < 8; ++i )
    {
      if ( *(_QWORD *)(88 * (i + 8LL * v6 + 59) + v4) )
        goto LABEL_5;
    }
    ++v6;
  }
LABEL_5:
  LOBYTE(v7) = v6 != (unsigned __int8)v5;
  return v7;
}
