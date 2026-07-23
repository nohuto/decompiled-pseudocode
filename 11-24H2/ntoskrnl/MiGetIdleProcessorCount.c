/*
 * XREFs of MiGetIdleProcessorCount @ 0x14046C2E8
 * Callers:
 *     MiMoveZeroThreadsToOtherCores @ 0x14046C120 (MiMoveZeroThreadsToOtherCores.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetIdleProcessorCount(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned __int64 *v3; // r11
  unsigned int v4; // eax
  __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  _QWORD *v7; // rcx
  int v8; // edi
  unsigned int v9; // eax
  unsigned __int64 v10; // rcx
  int v11; // r10d
  unsigned __int64 v12; // r9

  v2 = 0;
  v3 = *(unsigned __int64 **)(*(_QWORD *)(a1 + 136) + 48LL * a2);
  v4 = *(_DWORD *)(a1 + 20);
  if ( v4 )
  {
    v5 = v4;
    do
    {
      v6 = *v3;
      while ( v6 )
      {
        _BitScanForward64(&v10, v6);
        v11 = *((_DWORD *)qword_140F22998 + 64 * (unsigned __int16)v3[1] + (int)v10);
        v8 = 1;
        v12 = *(_QWORD *)(KiProcessorBlock[v11] + 200) | v6 & *(_QWORD *)(KiProcessorBlock[v11] + 36448);
        v6 &= ~v12;
        while ( v12 )
        {
          v7 = (_QWORD *)KiProcessorBlock[v11];
          if ( v7[1] != v7[3] )
          {
            v8 = 0;
            break;
          }
          v12 &= ~v7[25];
          ++v11;
        }
        v9 = v2 + 1;
        if ( !v8 )
          v9 = v2;
        v2 = v9;
      }
      v3 += 2;
      --v5;
    }
    while ( v5 );
  }
  return v2;
}
