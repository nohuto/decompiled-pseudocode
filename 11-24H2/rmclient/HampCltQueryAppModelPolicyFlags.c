/*
 * XREFs of HampCltQueryAppModelPolicyFlags @ 0x18001B7E0
 * Callers:
 *     AppModelQueryLifecyclePolicy @ 0x18000EE10 (AppModelQueryLifecyclePolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampCltQueryAppModelPolicyFlags(HKEY a1, const WCHAR *a2, int a3, _DWORD *a4)
{
  unsigned int v6; // ebx
  LSTATUS v7; // eax
  DWORD v9; // [rsp+30h] [rbp-18h] BYREF
  BYTE v10[20]; // [rsp+34h] [rbp-14h] BYREF

  v9 = 4;
  v6 = 0;
  *(_DWORD *)v10 = 0;
  v7 = RegQueryValueExW(a1, a2, 0LL, 0LL, v10, &v9);
  if ( v7 == 2 || v7 == 234 )
  {
LABEL_2:
    *a4 = 0;
    return v6;
  }
  if ( !v7 )
  {
    if ( v9 == 4 && (a3 & *(_DWORD *)v10) == *(_DWORD *)v10 && (v10[0] & (unsigned __int8)(v10[0] - 1) & 3) == 0 )
    {
      *a4 = *(_DWORD *)v10;
      return v6;
    }
    goto LABEL_2;
  }
  if ( v7 > 0 )
    return (unsigned __int16)v7 | 0xC0070000;
  else
    return (unsigned int)v7;
}
