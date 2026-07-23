/*
 * XREFs of RtlpValidateActivationContextData @ 0x180002BC4
 * Callers:
 *     RtlCreateActivationContext @ 0x180002A30 (RtlCreateActivationContext.c)
 * Callees:
 *     DbgPrintEx @ 0x180074670 (DbgPrintEx.c)
 */

__int64 __fastcall RtlpValidateActivationContextData(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // r8d
  __int64 v4; // rax
  __int64 v5; // r9
  unsigned __int64 v6; // r10
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rax
  const CHAR *v10; // r8
  unsigned int v11; // [rsp+20h] [rbp-18h]

  if ( *a2 != 2020893505 || a2[2] != 1 )
    return (unsigned int)-1072365565;
  v4 = (unsigned int)a2[4];
  v2 = 0;
  if ( !(_DWORD)v4 || (v4 & 3) != 0 )
  {
    DbgPrintEx(0x33u, 0, "SXS: Warning: Activation context data at %p missing default TOC\n", a2);
    return (unsigned int)-1072365565;
  }
  v5 = (unsigned int)a2[6];
  if ( !(_DWORD)v5 || (v5 & 3) != 0 )
  {
    DbgPrintEx(0x33u, 0, "SXS: Warning: Activation context data at %p lacks assembly roster\n", a2);
    return (unsigned int)-1072365565;
  }
  v6 = (unsigned int)a2[3];
  if ( (unsigned int)v4 >= (unsigned int)v6 || (v7 = (unsigned int)v4, v4 + 16 > v6) )
  {
    DbgPrintEx(0x33u, 0, "SXS: Activation context data at %p has invalid TOC header offset\n", a2);
    return (unsigned int)-1072365565;
  }
  v8 = *(_DWORD *)((char *)a2 + (unsigned int)v4);
  if ( v8 < 0x10 )
  {
    v10 = "SXS: Activation context data at %p has TOC header too small (%lu)\n";
  }
  else
  {
    v9 = *(unsigned int *)((char *)a2 + v7 + 8);
    if ( (unsigned int)v9 >= (unsigned int)v6
      || (v9 & 3) != 0
      || v9 + 16 * (unsigned __int64)*(unsigned int *)((char *)a2 + v7 + 4) > v6 )
    {
      DbgPrintEx(0x33u, 0, "SXS: Activation context data at %p has invalid TOC entry array offset\n", a2);
      return (unsigned int)-1072365565;
    }
    if ( (unsigned int)v5 >= (unsigned int)v6 || v5 + 20 > v6 )
    {
      DbgPrintEx(0x33u, 0, "SXS: Activation context data at %p has invalid assembly roster offset\n", a2);
      return (unsigned int)-1072365565;
    }
    v8 = *(_DWORD *)((char *)a2 + v5);
    if ( v8 >= 0x14 )
      return v2;
    v10 = "SXS: Activation context data at %p has assembly roster header too small (%lu)\n";
  }
  v11 = v8;
  DbgPrintEx(0x33u, 0, v10, a2, v11);
  return (unsigned int)-1072365565;
}
