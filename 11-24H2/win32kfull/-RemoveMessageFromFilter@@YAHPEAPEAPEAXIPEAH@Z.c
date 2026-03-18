/*
 * XREFs of ?RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1401CD090
 * Callers:
 *     _ChangeWindowMessageFilter @ 0x1401DB60C (_ChangeWindowMessageFilter.c)
 *     _ChangeWindowMessageFilterEx @ 0x14024ED84 (_ChangeWindowMessageFilterEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RemoveMessageFromFilter(void ***a1, unsigned int a2, int *a3)
{
  void **v3; // rbx
  _QWORD *v6; // rsi
  int v7; // edi
  _BYTE *v9; // r8
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  int v12; // eax
  unsigned __int64 i; // rax
  unsigned __int64 j; // rax
  unsigned __int64 k; // rax

  v3 = *a1;
  if ( *a1
    && (v6 = v3[(unsigned __int64)(unsigned __int16)a2 >> 13]) != 0LL
    && (v9 = (_BYTE *)v6[((unsigned __int64)(unsigned __int16)a2 >> 9) & 0xF]) != 0LL
    && ((unsigned __int8)(1 << (a2 & 7)) & v9[((unsigned __int64)(unsigned __int16)a2 >> 3) & 0x3F]) != 0 )
  {
    v10 = a2;
    v11 = ((unsigned __int64)a2 >> 3) & 0x3F;
    v7 = 0;
    v12 = (unsigned __int8)v9[v11] & ~(1 << (a2 & 7));
    v9[v11] = v12;
    if ( !(_BYTE)v12 )
    {
      for ( i = 0LL; i < 8; ++i )
      {
        if ( *(_QWORD *)&v9[8 * i] )
          goto LABEL_4;
      }
      Win32FreePool(v9);
      v6[(v10 >> 9) & 0xF] = 0LL;
      for ( j = 0LL; j < 0x10; ++j )
      {
        if ( v6[j] )
          goto LABEL_4;
      }
      Win32FreePool(v6);
      v3[v10 >> 13] = 0LL;
      for ( k = 0LL; k < 8; ++k )
      {
        if ( v3[k] )
          goto LABEL_4;
      }
      Win32FreePool(v3);
      v3 = 0LL;
    }
  }
  else
  {
    v7 = 1;
  }
LABEL_4:
  if ( a3 )
    *a3 = v7;
  if ( v3 != *a1 )
    *a1 = v3;
  return 1LL;
}
