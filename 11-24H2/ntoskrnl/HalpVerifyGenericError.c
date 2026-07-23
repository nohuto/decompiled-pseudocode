/*
 * XREFs of HalpVerifyGenericError @ 0x14053E0D0
 * Callers:
 *     HalpGetMcaExtendedLogStatusBlock @ 0x14053CFCC (HalpGetMcaExtendedLogStatusBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpVerifyGenericError(_QWORD *a1, _DWORD *a2)
{
  unsigned int v3; // r9d
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned int v7; // r8d
  unsigned int v8; // ecx
  unsigned int v9; // edi
  __int64 v10; // r11
  __int64 v11; // rcx
  int i; // edx
  int v13; // ecx
  unsigned int v14; // eax

  v3 = 20;
  v5 = a2[3] + 20;
  if ( v5 < 0x14 )
    return (unsigned int)-1073741811;
  v6 = (unsigned int)a2[1];
  v7 = 0;
  if ( (_DWORD)v6 )
  {
    if ( a2[2] && v5 > (unsigned int)v6 )
      return (unsigned int)-1073741811;
  }
  v8 = a2[2];
  v9 = v8 + v6;
  if ( v8 + (unsigned int)v6 < (unsigned int)v6 )
    return (unsigned int)-1073741811;
  if ( v8 < 0x20 )
    return (unsigned int)-1073741811;
  v10 = a1[5];
  v11 = (unsigned int)a2[1];
  if ( *(_QWORD *)((char *)a2 + v6 + 8) != v10
    || (v10 & 0x800000000000000LL) != 0 && *(_QWORD *)((char *)a2 + v11 + 24) != a1[7] )
  {
    return (unsigned int)-1073741811;
  }
  if ( (v10 & 0x400000000000000LL) != 0 && *(_QWORD *)((char *)a2 + v11 + 16) != a1[6] )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    for ( i = (*a2 >> 4) & 0x3FF; i; --i )
    {
      if ( v3 + 72 < v3 )
        return (unsigned int)-1073741811;
      if ( v3 + 72 > v5 )
        return (unsigned int)-1073741811;
      v13 = *(_DWORD *)((char *)a2 + v3 + 24) + 72;
      if ( *(_DWORD *)((char *)a2 + v3 + 24) >= 0xFFFFFFB8 )
        return (unsigned int)-1073741811;
      v14 = v3 + v13;
      if ( v3 + v13 < v3 )
        return (unsigned int)-1073741811;
      v3 += v13;
      if ( v14 > v9 )
        return (unsigned int)-1073741811;
    }
  }
  return v7;
}
