/*
 * XREFs of PiDmInitializeComparisonObject @ 0x1408B2BD0
 * Callers:
 *     PiDmAddCacheReferenceForObject @ 0x1408B2214 (PiDmAddCacheReferenceForObject.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall PiDmInitializeComparisonObject(_WORD *a1, int a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 result; // rax
  _WORD *v6; // rax
  __int64 v7; // rcx
  unsigned __int16 v8; // dx
  int *v9; // rdi
  unsigned __int16 v10; // dx
  struct _LIST_ENTRY *Flink; // rbx
  int v12; // r9d
  unsigned __int16 *v13; // r10
  int v14; // r11d
  unsigned __int64 v15; // rax

  v3 = 0;
  *(_QWORD *)(a3 + 16) = a1;
  *(_DWORD *)(a3 + 28) = a2;
  result = 0LL;
  if ( !a1 )
    goto LABEL_23;
  v6 = a1;
  v7 = 0x7FFFLL;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v7;
  }
  while ( v7 );
  result = 3221225485LL;
  if ( v7 )
  {
    result = 0LL;
    v8 = 2 * (0x7FFF - v7);
  }
  else
  {
LABEL_23:
    v8 = 0;
  }
  if ( (int)result >= 0 )
  {
    if ( a2 == 3 && v8 <= 8u )
    {
      return 3221225524LL;
    }
    else
    {
      v9 = (int *)(a3 + 24);
      Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
      if ( v9 )
      {
        v14 = v10 >> 1;
        for ( *v9 = 0; v14; v12 = (unsigned __int16)v15 + 65599 * v12 )
        {
          v15 = *v13++;
          --v14;
          if ( (unsigned int)v15 >= 0x61 )
          {
            if ( (unsigned int)v15 > 0x7A )
            {
              if ( Flink )
              {
                if ( (unsigned __int16)v15 >= 0xC0u )
                  LOWORD(v15) = *((_WORD *)&Flink->Flink
                                + (v15 & 0xF)
                                + *((unsigned __int16 *)&Flink->Flink
                                  + ((unsigned __int8)v15 >> 4)
                                  + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v15 >> 8))))
                              + v15;
              }
            }
            else
            {
              LOWORD(v15) = v15 - 32;
            }
          }
        }
        *v9 = v12;
      }
      else
      {
        return (unsigned int)-1073741811;
      }
      return v3;
    }
  }
  return result;
}
