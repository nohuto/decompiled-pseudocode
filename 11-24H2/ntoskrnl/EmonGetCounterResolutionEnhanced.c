/*
 * XREFs of EmonGetCounterResolutionEnhanced @ 0x140559500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EmonGetCounterResolutionEnhanced(unsigned int a1, int *a2)
{
  __int64 v2; // rax
  int v3; // r8d
  char v4; // r10
  __int64 v6; // rdx
  int v7; // r8d
  int v8; // r8d
  int v9; // ecx
  __int64 result; // rax

  LODWORD(v2) = KeGetPcr()->Prcb.Number;
  v3 = 0;
  v4 = 0;
  if ( (a1 & 0x40000000) != 0 )
  {
    v3 = 1;
    a1 &= ~0x40000000u;
    v4 = 1;
  }
  v6 = *(_QWORD *)(KiProcessorBlock[v2] + 88);
  if ( v3 )
  {
    v7 = v3 - 1;
    if ( v7 )
    {
      v8 = v7 - 99;
      if ( v8 )
      {
        if ( v8 == 1 )
          v6 += 72LL;
        else
          v6 = 0LL;
      }
      else
      {
        v6 += 48LL;
      }
    }
    else
    {
      v6 += 24LL;
    }
  }
  if ( a1 > *(_DWORD *)(v6 + 8) || *(_DWORD *)(*(_QWORD *)(v6 + 16) + 48LL * a1 + 28) == 3 )
  {
    *a2 = 0;
    return 3221225711LL;
  }
  else
  {
    v9 = EmonFixedCounterResolution;
    if ( !v4 )
      v9 = EmonCounterResolution;
    result = 0LL;
    *a2 = v9;
  }
  return result;
}
