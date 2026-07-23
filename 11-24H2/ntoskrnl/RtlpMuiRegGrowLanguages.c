/*
 * XREFs of RtlpMuiRegGrowLanguages @ 0x14082D508
 * Callers:
 *     RtlpMuiRegGetOrAddLangInfo @ 0x14082D11C (RtlpMuiRegGetOrAddLangInfo.c)
 * Callees:
 *     _SafeReallocBlob @ 0x1406A3B48 (_SafeReallocBlob.c)
 */

unsigned int *__fastcall RtlpMuiRegGrowLanguages(unsigned int *Src, int a2)
{
  __int64 v2; // rbx
  unsigned int v4; // r8d
  _QWORD *v5; // rcx
  unsigned int v6; // edi
  _QWORD *v7; // rax
  int v9; // [rsp+20h] [rbp-28h]
  int v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  LODWORD(v11) = a2;
  v2 = 0LL;
  if ( Src )
  {
    v4 = *((unsigned __int16 *)Src + 3);
    if ( v4 + 4 >= *((unsigned __int16 *)Src + 2) )
    {
      LODWORD(v11) = 0;
      v5 = 0LL;
      v6 = v4 + 4;
      if ( v6 >= v4 )
      {
        v7 = SafeReallocBlob(Src, 0x18u, v6, 0x1Cu, v9, v10, (unsigned int *)&v11);
        v5 = v7;
        if ( v7 )
        {
          *(_DWORD *)v7 = v11;
          v7[2] = v7 + 3;
          *((_WORD *)v7 + 2) = v6;
        }
      }
      return (unsigned int *)v5;
    }
    else
    {
      return Src;
    }
  }
  return (unsigned int *)v2;
}
