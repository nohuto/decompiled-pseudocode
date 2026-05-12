/*
 * XREFs of RaWmiIrpNormalRequest @ 0x1401B7348
 * Callers:
 *     RaWmiDispatchIrp @ 0x1401B9E0C (RaWmiDispatchIrp.c)
 * Callees:
 *     RaWmiPassToMiniPort @ 0x1401B73F4 (RaWmiPassToMiniPort.c)
 */

__int64 __fastcall RaWmiIrpNormalRequest(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  int *v5; // rcx
  int v7; // r9d
  int v8; // eax
  unsigned int v10; // eax
  char v11; // cl

  v5 = *(int **)(a1 + 64);
  v7 = -1073741823;
  v8 = *v5;
  if ( *v5 == 1094997074 )
  {
    v11 = *((_BYTE *)v5 + 531);
  }
  else if ( v8 == 1314275652 )
  {
    v11 = *((_BYTE *)v5 + 323);
  }
  else
  {
    if ( v8 != 1431193940 )
      return (unsigned int)v7;
    v11 = *(_BYTE *)(*((_QWORD *)v5 + 3) + 531LL);
  }
  if ( v11 )
  {
    v7 = RaWmiPassToMiniPort(a1);
    if ( v7 < 0 )
    {
      v10 = -1073741808;
      if ( v7 == -1073741632 )
        return (unsigned int)-1073741162;
      return v10;
    }
    else if ( a2 <= 1u )
    {
      *(_QWORD *)(*(_QWORD *)(a3 + 24) + 16LL) = MEMORY[0xFFFFF78000000014];
    }
  }
  return (unsigned int)v7;
}
