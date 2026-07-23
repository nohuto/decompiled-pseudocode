/*
 * XREFs of HalpApicSetLineState @ 0x14045B2E0
 * Callers:
 *     <none>
 * Callees:
 *     HalpApicConvertToRte @ 0x14045B3D4 (HalpApicConvertToRte.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicSetLineState(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 result; // rax
  int v7; // eax
  _DWORD *v8; // rcx
  int v9; // edx
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // [rsp+40h] [rbp+20h] BYREF
  unsigned int v13; // [rsp+58h] [rbp+38h] BYREF

  v13 = 0;
  v12 = 0;
  result = HalpApicConvertToRte(a3, &v12, &v13);
  if ( (int)result >= 0 )
  {
    if ( *a2 != *(_DWORD *)(a1 + 8) )
      return 3221225485LL;
    v7 = a2[1];
    if ( v7 >= 0 )
    {
      if ( !*(_BYTE *)(a1 + 40) )
      {
        v8 = *(_DWORD **)(a1 + 16);
        v9 = 2 * v7;
        if ( (*(_DWORD *)(a3 + 12) & 1) != 0 )
        {
          *v8 = v9 + 17;
          v8[4] = v13;
          *v8 = 2 * a2[1] + 16;
          v10 = v12;
        }
        else
        {
          *v8 = v9 + 16;
          v8[4] = v12;
          *v8 = 2 * a2[1] + 17;
          v10 = v13;
        }
        v8[4] = v10;
      }
      return 0LL;
    }
    switch ( v7 )
    {
      case -8:
        v11 = *(unsigned int *)(a1 + 36);
        break;
      case -7:
        v11 = *(unsigned int *)(a1 + 32);
        break;
      case -6:
        v11 = 880LL;
        goto LABEL_27;
      case -5:
        v11 = 864LL;
        goto LABEL_27;
      case -4:
        v11 = 848LL;
        goto LABEL_27;
      case -3:
        v11 = 832LL;
        goto LABEL_27;
      case -2:
        v11 = 816LL;
        goto LABEL_27;
      default:
        return 3221225485LL;
    }
    if ( !(_DWORD)v11 )
      return 0LL;
LABEL_27:
    guard_dispatch_icall_no_overrides(v11, v12);
    return 0LL;
  }
  return result;
}
