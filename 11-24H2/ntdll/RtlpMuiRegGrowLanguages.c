/*
 * XREFs of RtlpMuiRegGrowLanguages @ 0x180147D9C
 * Callers:
 *     RtlpMuiRegGetOrAddLangInfo @ 0x180147C44 (RtlpMuiRegGetOrAddLangInfo.c)
 * Callees:
 *     _SafeReallocBlob @ 0x18010F064 (_SafeReallocBlob.c)
 */

unsigned __int16 *__fastcall RtlpMuiRegGrowLanguages(unsigned __int16 *a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v4; // r8d
  _QWORD *v5; // rcx
  unsigned int v6; // edi
  _QWORD *v7; // rax
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  unsigned int v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  v2 = 0LL;
  if ( a1 )
  {
    v4 = a1[3];
    if ( v4 + 4 >= a1[2] )
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
          v7[2] = v7 + 3;
          *((_WORD *)v7 + 2) = v6;
        }
      }
      return (unsigned __int16 *)v5;
    }
    else
    {
      return a1;
    }
  }
  return (unsigned __int16 *)v2;
}
