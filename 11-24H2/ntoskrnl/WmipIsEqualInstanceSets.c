/*
 * XREFs of WmipIsEqualInstanceSets @ 0x1407A5E78
 * Callers:
 *     WmipUpdateModifyGuid @ 0x1407A5FF8 (WmipUpdateModifyGuid.c)
 * Callees:
 *     <none>
 */

char __fastcall WmipIsEqualInstanceSets(__int64 a1, __int64 a2)
{
  int v4; // ecx
  unsigned __int16 *v5; // rax
  unsigned int v8; // ebx
  __int64 i; // r10
  unsigned __int16 *v10; // r11
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // eax

  v4 = *(_DWORD *)(a1 + 16);
  if ( ((*(_DWORD *)(a2 + 16) ^ v4) & 0xFFFF9FFF) != 0 )
    return 0;
  if ( (v4 & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 72) == *(_DWORD *)(a2 + 72) )
    {
      v5 = (unsigned __int16 *)(*(_QWORD *)(a1 + 88) + 4LL);
      while ( *v5++ )
        ;
      return 1;
    }
    return 0;
  }
  if ( (v4 & 2) != 0 )
  {
    v8 = *(_DWORD *)(a1 + 72);
    if ( v8 == *(_DWORD *)(a2 + 72) )
    {
      for ( i = 0LL; (unsigned int)i < v8; i = (unsigned int)(i + 1) )
      {
        v10 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 88) + 8 * i);
        v11 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 8 * i) - (_QWORD)v10;
        do
        {
          v12 = *(unsigned __int16 *)((char *)v10 + v11);
          v13 = *v10 - v12;
          if ( v13 )
            break;
          ++v10;
        }
        while ( v12 );
        if ( v13 )
          return 0;
      }
      return 1;
    }
    return 0;
  }
  return 1;
}
