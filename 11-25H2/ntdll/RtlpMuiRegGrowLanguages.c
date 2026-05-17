/*
 * XREFs of RtlpMuiRegGrowLanguages @ 0x18014AF9C
 * Callers:
 *     RtlpMuiRegGetOrAddLangInfo @ 0x18014AE44 (RtlpMuiRegGetOrAddLangInfo.c)
 * Callees:
 *     _SafeReallocBlob @ 0x180116A54 (_SafeReallocBlob.c)
 */

__int64 __fastcall RtlpMuiRegGrowLanguages(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v4; // r8d
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  unsigned int v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  v2 = 0LL;
  if ( a1 )
  {
    v4 = *(unsigned __int16 *)(a1 + 6);
    if ( v4 + 4 >= *(unsigned __int16 *)(a1 + 4) )
    {
      v11 = 0;
      v5 = 0LL;
      v6 = v4 + 4;
      if ( v6 >= v4 )
      {
        v7 = SafeReallocBlob(a1, 0x18u, v6, 0x1Cu, v9, v10, &v11);
        v5 = v7;
        if ( v7 )
        {
          *(_DWORD *)v7 = v11;
          *(_QWORD *)(v7 + 16) = v7 + 24;
          *(_WORD *)(v7 + 4) = v6;
        }
      }
      return v5;
    }
    else
    {
      return a1;
    }
  }
  return v2;
}
