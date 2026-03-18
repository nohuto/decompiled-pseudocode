/*
 * XREFs of NVMeReenumerateNameSpaceWaitForAllIOComplete @ 0x14002AF6C
 * Callers:
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x14002A530 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 * Callees:
 *     <none>
 */

char __fastcall NVMeReenumerateNameSpaceWaitForAllIOComplete(__int64 a1)
{
  char v1; // bl
  __int64 v3; // r9
  unsigned int v4; // eax
  _QWORD *v5; // r14
  unsigned int v6; // esi
  unsigned int i; // ebp
  unsigned int j; // edx

  v1 = 1;
  StorPortPause(a1, 120LL);
  LOWORD(v4) = *(_WORD *)(a1 + 330);
  v5 = (_QWORD *)(a1 + 936);
  *(_DWORD *)(a1 + 24) |= 0x100u;
  v6 = 0;
  if ( (_WORD)v4 )
  {
    do
    {
      for ( i = 0; i < 0x3E8; ++i )
      {
        StorPortExtendedFunction(81LL, a1, 10000LL, v3);
        if ( !*(_WORD *)(*v5 + 208LL * v6 + 136) )
          break;
      }
      v4 = *(unsigned __int16 *)(a1 + 330);
      ++v6;
    }
    while ( v6 < v4 );
  }
  for ( j = 0; j < (unsigned __int16)v4; ++j )
  {
    if ( *(_WORD *)(208LL * j + *v5 + 136) )
    {
      v1 = 0;
      if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
        StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
      return v1;
    }
  }
  return v1;
}
