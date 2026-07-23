/*
 * XREFs of RtlWow64PopAllCrossProcessWorkFromWorkList @ 0x180146D40
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 */

_DWORD *__fastcall RtlWow64PopAllCrossProcessWorkFromWorkList(volatile signed __int64 *a1, _BYTE *a2)
{
  signed __int64 v2; // r10
  unsigned int v5; // r8d
  _DWORD *v6; // rdx
  bool v7; // zf
  signed __int64 v8; // rax
  _DWORD *v9; // rax
  _DWORD *v10; // rcx
  unsigned __int64 v11; // r11
  _DWORD *v12; // rcx
  signed __int64 v14; // [rsp+30h] [rbp+8h]

  v2 = *a1;
  do
  {
    v5 = (unsigned int)v2 >> 31;
    if ( (v2 & 0x7FFFFFFF) != 0 )
    {
      v6 = (_DWORD *)((char *)a1 + (v2 & 0x7FFFFFFF));
    }
    else
    {
      v6 = 0LL;
      if ( (int)v2 >= 0 )
        goto LABEL_22;
    }
    LODWORD(v14) = 0;
    HIDWORD(v14) = HIDWORD(v2) + 1;
    v8 = _InterlockedCompareExchange64(a1, v14, v2);
    v7 = v2 == v8;
    v2 = v8;
  }
  while ( !v7 );
  if ( !(_BYTE)v5 )
  {
    v9 = 0LL;
    if ( v6 )
    {
      v10 = v6 + 10;
      v11 = ((unsigned __int64)a1 & 0xFFFFFFFFFFFFF000uLL) + 0x4000;
      if ( v11 > ((unsigned __int64)a1 & 0xFFFFFFFFFFFFF000uLL) )
      {
        while ( v10 > v6
             && (unsigned __int64)v6 >= ((unsigned __int64)a1 & 0xFFFFFFFFFFFFF000uLL)
             && (unsigned __int64)v10 <= v11 )
        {
          if ( *v6 )
            v12 = (_DWORD *)((char *)a1 + (unsigned int)*v6);
          else
            v12 = 0LL;
          if ( v9 )
            LODWORD(v9) = (_DWORD)v9 - (_DWORD)a1;
          *v6 = (_DWORD)v9;
          v9 = v6;
          v6 = v12;
          if ( !v12 )
            goto LABEL_21;
          v10 = v12 + 10;
        }
      }
      RtlRaiseStatus(-1073741811);
    }
LABEL_21:
    v6 = v9;
  }
LABEL_22:
  *a2 = v5;
  return v6;
}
