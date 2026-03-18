/*
 * XREFs of HalpApicSetLineState @ 0x140464BB0
 * Callers:
 *     <none>
 * Callees:
 *     HalpApicConvertToRte @ 0x140464CA4 (HalpApicConvertToRte.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicSetLineState(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  _DWORD *v10; // rcx
  int v11; // edx
  unsigned int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // [rsp+40h] [rbp+20h] BYREF
  unsigned int v15; // [rsp+58h] [rbp+38h] BYREF

  v15 = 0;
  v14 = 0;
  result = HalpApicConvertToRte(a3, &v14, &v15);
  if ( (int)result >= 0 )
  {
    if ( *a2 != *(_DWORD *)(a1 + 8) )
      return 3221225485LL;
    v9 = a2[1];
    if ( v9 >= 0 )
    {
      if ( !*(_BYTE *)(a1 + 40) )
      {
        v10 = *(_DWORD **)(a1 + 16);
        v11 = 2 * v9;
        if ( (*(_DWORD *)(a3 + 12) & 1) != 0 )
        {
          *v10 = v11 + 17;
          v10[4] = v15;
          *v10 = 2 * a2[1] + 16;
          v12 = v14;
        }
        else
        {
          *v10 = v11 + 16;
          v10[4] = v14;
          *v10 = 2 * a2[1] + 17;
          v12 = v15;
        }
        v10[4] = v12;
      }
      return 0LL;
    }
    switch ( v9 )
    {
      case -8:
        v13 = *(unsigned int *)(a1 + 36);
        break;
      case -7:
        v13 = *(unsigned int *)(a1 + 32);
        break;
      case -6:
        v13 = 880LL;
        goto LABEL_27;
      case -5:
        v13 = 864LL;
        goto LABEL_27;
      case -4:
        v13 = 848LL;
        goto LABEL_27;
      case -3:
        v13 = 832LL;
        goto LABEL_27;
      case -2:
        v13 = 816LL;
        goto LABEL_27;
      default:
        return 3221225485LL;
    }
    if ( !(_DWORD)v13 )
      return 0LL;
LABEL_27:
    guard_dispatch_icall_no_overrides(v13, v14, v7, v8);
    return 0LL;
  }
  return result;
}
