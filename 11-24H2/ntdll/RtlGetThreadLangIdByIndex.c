/*
 * XREFs of RtlGetThreadLangIdByIndex @ 0x18010D280
 * Callers:
 *     <none>
 * Callees:
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800775F0 (GetLCIDFromLangListNodeWithLICCheck.c)
 */

__int64 __fastcall RtlGetThreadLangIdByIndex(int a1, unsigned int a2, _DWORD *a3, unsigned int *a4)
{
  __int64 v6; // r10
  _QWORD *PreferredLanguages; // rdx
  __int64 v8; // r8
  unsigned __int16 v9; // cx
  unsigned int v10; // eax
  unsigned __int16 v12[2]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int LCIDFromLangListNodeWithLICCheck; // [rsp+34h] [rbp-24h]
  unsigned int v14; // [rsp+38h] [rbp-20h]
  int v15; // [rsp+3Ch] [rbp-1Ch]
  __int16 v16; // [rsp+40h] [rbp-18h]
  bool v17; // [rsp+60h] [rbp+8h] BYREF

  v6 = a2;
  LCIDFromLangListNodeWithLICCheck = 0;
  v17 = 0;
  v12[0] = 0;
  v14 = 0;
  if ( a1 || !a3 )
    return 3221225485LL;
  PreferredLanguages = NtCurrentTeb()->PreferredLanguages;
  if ( PreferredLanguages )
  {
    v8 = PreferredLanguages[3];
    if ( v8 )
    {
      v14 = *((unsigned __int16 *)PreferredLanguages + 2);
      if ( (unsigned int)v6 < v14 )
      {
        v15 = *(_DWORD *)(v8 + 6 * v6);
        v16 = *(_WORD *)(v8 + 6 * v6 + 4);
        LCIDFromLangListNodeWithLICCheck = GetLCIDFromLangListNodeWithLICCheck(
                                             3 * v6,
                                             (__int64)PreferredLanguages,
                                             v6,
                                             v12,
                                             &v17);
      }
    }
  }
  v9 = v12[0];
  *a3 = v12[0];
  if ( a4 )
    *a4 = v14;
  v10 = LCIDFromLangListNodeWithLICCheck;
  if ( !LCIDFromLangListNodeWithLICCheck )
  {
    if ( !v9 )
      return (unsigned int)-1073741275;
    return v10;
  }
  return LCIDFromLangListNodeWithLICCheck;
}
