/*
 * XREFs of EmonFindCounterToAllocateOriginal @ 0x140559254
 * Callers:
 *     EmonAllocateCounterOriginal @ 0x1405587FC (EmonAllocateCounterOriginal.c)
 * Callees:
 *     <none>
 */

char __fastcall EmonFindCounterToAllocateOriginal(__int64 a1, __int64 a2, _DWORD *a3)
{
  char v3; // r10
  __int64 v5; // r9
  unsigned __int64 v6; // rdx
  char result; // al
  __int64 v8; // r8
  __int64 v9; // r11

  v3 = 0;
  LODWORD(v5) = 0;
  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)a1 == 1 )
    {
      v5 = *(unsigned __int8 *)(a2 + 308);
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 48 * v5 + 24) == 3 )
      {
        v6 = __readmsr(0x38Fu);
        if ( !_bittest64((const __int64 *)&v6, (unsigned __int8)(v5 + 32)) )
LABEL_5:
          v3 = 1;
      }
    }
  }
  else
  {
    LODWORD(v5) = *(_DWORD *)(a1 + 4) - 1;
    v8 = (int)v5;
    v9 = 48LL * (int)v5;
    while ( v8 >= 0 )
    {
      if ( *(_DWORD *)(v9 + *(_QWORD *)(a1 + 16) + 24) == 3 && (__readmsr((int)v5 + 390) & 0x4000FF) == 0 )
        goto LABEL_5;
      LODWORD(v5) = v5 - 1;
      --v8;
      v9 -= 48LL;
    }
  }
  result = v3;
  *a3 = v5;
  return result;
}
