/*
 * XREFs of EmonGetCountersBitmap @ 0x140559618
 * Callers:
 *     EmonReserveProfileResourcesEnhanced @ 0x14055B970 (EmonReserveProfileResourcesEnhanced.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EmonGetCountersBitmap(int a1, int a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rcx
  int v4; // edx
  int v5; // edx
  unsigned int v6; // r9d
  _DWORD *v7; // rax
  unsigned int v8; // ecx

  v2 = 0;
  v3 = *(_QWORD *)(KiProcessorBlock[a1] + 88);
  if ( a2 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      v5 = v4 - 99;
      if ( v5 )
      {
        if ( v5 == 1 )
          v3 += 72LL;
        else
          v3 = 0LL;
      }
      else
      {
        v3 += 48LL;
      }
    }
    else
    {
      v3 += 24LL;
    }
  }
  v6 = *(_DWORD *)(v3 + 8);
  v7 = (_DWORD *)(*(_QWORD *)(v3 + 16) + 28LL);
  v8 = 0;
  do
  {
    if ( *v7 != 3 )
      v2 |= 1 << v8;
    ++v8;
    v7 += 12;
  }
  while ( v8 <= v6 );
  return v2;
}
