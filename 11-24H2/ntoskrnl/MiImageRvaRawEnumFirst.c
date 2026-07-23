/*
 * XREFs of MiImageRvaRawEnumFirst @ 0x14093E820
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     MiImageGetRawRvaState @ 0x14093F1A0 (MiImageGetRawRvaState.c)
 */

__int64 __fastcall MiImageRvaRawEnumFirst(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  unsigned int i; // ebp
  unsigned int v7; // eax
  __int64 result; // rax

  v2 = 0;
  v3 = a1 + 152;
  for ( i = 0; i < *(_DWORD *)(a1 + 144); v3 += 40LL )
  {
    if ( *(_QWORD *)(v3 + 8) )
    {
      v7 = guard_dispatch_icall_no_overrides(a1, v3 + 24);
      *(_DWORD *)v3 = v7;
      if ( v7 )
      {
        if ( v2 )
        {
          if ( v2 >= v7 )
            v2 = v7;
        }
        else
        {
          v2 = v7;
        }
      }
    }
    ++i;
  }
  if ( a2 && v2 )
    *a2 = MiImageGetRawRvaState(a1, v2);
  result = v2;
  *(_DWORD *)(a1 + 312) = v2;
  return result;
}
