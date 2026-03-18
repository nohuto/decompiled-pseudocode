/*
 * XREFs of MiImageRvaRawEnumFirst @ 0x1408F3690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     MiImageGetRawRvaState @ 0x1408F4010 (MiImageGetRawRvaState.c)
 */

__int64 __fastcall MiImageRvaRawEnumFirst(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  unsigned int i; // ebp
  unsigned int v9; // eax
  __int64 result; // rax

  v4 = 0;
  v5 = a1 + 152;
  for ( i = 0; i < *(_DWORD *)(a1 + 144); v5 += 40LL )
  {
    if ( *(_QWORD *)(v5 + 8) )
    {
      v9 = guard_dispatch_icall_no_overrides(a1, v5 + 24, v5 + 4, a4);
      *(_DWORD *)v5 = v9;
      if ( v9 )
      {
        if ( v4 )
        {
          if ( v4 >= v9 )
            v4 = v9;
        }
        else
        {
          v4 = v9;
        }
      }
    }
    ++i;
  }
  if ( a2 && v4 )
    *a2 = MiImageGetRawRvaState(a1, v4);
  result = v4;
  *(_DWORD *)(a1 + 312) = v4;
  return result;
}
