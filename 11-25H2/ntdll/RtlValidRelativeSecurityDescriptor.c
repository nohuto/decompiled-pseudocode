/*
 * XREFs of RtlValidRelativeSecurityDescriptor @ 0x1800ECDB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidAcl @ 0x18005FD10 (RtlValidAcl.c)
 */

bool __fastcall RtlValidRelativeSecurityDescriptor(__int64 a1, unsigned int a2, char a3)
{
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v11; // rax
  unsigned int v12; // ebx

  if ( a2 < 0x14 || *(_BYTE *)a1 != 1 || *(__int16 *)(a1 + 2) >= 0 )
    return 0;
  v5 = *(unsigned int *)(a1 + 4);
  if ( (_DWORD)v5 )
  {
    if ( (unsigned int)v5 >= a2 )
      return 0;
    if ( (unsigned int)v5 < 0x14 )
      return 0;
    v6 = a2 - v5;
    if ( v6 < 0xC
      || (v5 & 3) != 0
      || *(_BYTE *)(v5 + a1) != 1
      || *(_BYTE *)(v5 + a1 + 1) > 0xFu
      || v6 < 4 * (unsigned int)*(unsigned __int8 *)(v5 + a1 + 1) + 8 )
    {
      return 0;
    }
  }
  else if ( (a3 & 1) != 0 )
  {
    return 0;
  }
  v7 = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)v7 )
  {
    if ( (unsigned int)v7 >= a2
      || (unsigned int)v7 < 0x14
      || a2 - (unsigned int)v7 < 0xC
      || (v7 & 3) != 0
      || *(_BYTE *)(v7 + a1) != 1
      || *(_BYTE *)(v7 + a1 + 1) > 0xFu
      || a2 - (unsigned int)v7 < 4 * (unsigned int)*(unsigned __int8 *)(v7 + a1 + 1) + 8 )
    {
      return 0;
    }
  }
  else if ( (a3 & 2) != 0 )
  {
    return 0;
  }
  if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
  {
    v8 = *(unsigned int *)(a1 + 16);
    if ( (_DWORD)v8 )
    {
      if ( (unsigned int)v8 >= a2 )
        return 0;
      if ( (unsigned int)v8 < 0x14 )
        return 0;
      if ( a2 - (unsigned int)v8 < 8 )
        return 0;
      if ( (v8 & 3) != 0 )
        return 0;
      v9 = v8 + a1;
      if ( a2 - (unsigned int)v8 < *(unsigned __int16 *)(v9 + 2) || !RtlValidAcl(v9) )
        return 0;
    }
  }
  if ( (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
    return 1;
  v11 = *(unsigned int *)(a1 + 12);
  if ( !(_DWORD)v11 )
    return 1;
  if ( (unsigned int)v11 >= a2 )
    return 0;
  if ( (unsigned int)v11 < 0x14 )
    return 0;
  v12 = a2 - v11;
  if ( v12 < 8 || (v11 & 3) != 0 || v12 < *(unsigned __int16 *)(a1 + v11 + 2) )
    return 0;
  return RtlValidAcl(a1 + v11) != 0;
}
