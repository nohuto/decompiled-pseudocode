/*
 * XREFs of HalpApicQueryAndGetSource @ 0x1405668E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicQueryAndGetSource(__int64 a1, __int64 a2, _DWORD *a3, _BYTE *a4)
{
  int v4; // ebx
  int v7; // ebp
  int v8; // esi
  int v9; // r14d
  int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax

  v4 = 0;
  if ( a4 )
    *a4 = 1;
  v7 = 224;
  v8 = 624;
  v9 = 7;
  while ( v8 >= 512 )
  {
    v10 = guard_dispatch_icall_no_overrides((unsigned int)v8, a2);
    a2 = (unsigned int)(unsigned __int16)-(v9 != 0) - 0x10000;
    v11 = a2 & v10;
    if ( v11 )
    {
      if ( v4 )
        goto LABEL_10;
      _BitScanReverse(&v12, v11);
      v13 = v11 & ~(1 << v12);
      v4 = v7 + v12;
      if ( !a4 )
        break;
      if ( v13 )
      {
LABEL_10:
        *a4 = 0;
        break;
      }
    }
    --v9;
    v8 -= 16;
    v7 -= 32;
  }
  if ( !v4 )
    return 4LL;
  *a3 = v4;
  return 3LL;
}
