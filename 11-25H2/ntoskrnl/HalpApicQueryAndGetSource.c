/*
 * XREFs of HalpApicQueryAndGetSource @ 0x140566220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicQueryAndGetSource(__int64 a1, __int64 a2, _DWORD *a3, _BYTE *a4)
{
  int v4; // ebx
  int v7; // ebp
  int v8; // esi
  int v9; // r14d
  unsigned int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax

  v4 = 0;
  if ( a4 )
    *a4 = 1;
  v7 = 224;
  v8 = 624;
  v9 = 7;
  while ( v8 >= 512 )
  {
    v10 = ((unsigned __int16)-(v9 != 0) - 0x10000) & guard_dispatch_icall_no_overrides((unsigned int)v8);
    if ( v10 )
    {
      if ( v4 )
        goto LABEL_10;
      _BitScanReverse(&v11, v10);
      v12 = v10 & ~(1 << v11);
      v4 = v7 + v11;
      if ( !a4 )
        break;
      if ( v12 )
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
