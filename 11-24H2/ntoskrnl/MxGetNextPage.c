/*
 * XREFs of MxGetNextPage @ 0x140C54C20
 * Callers:
 *     MxMapVa @ 0x140C552D4 (MxMapVa.c)
 * Callees:
 *     MxBootDescriptorDepleted @ 0x140C54328 (MxBootDescriptorDepleted.c)
 */

__int64 __fastcall MxGetNextPage(unsigned int a1, int a2)
{
  __int64 *v3; // r10
  __int64 *v4; // r8
  __int64 v5; // r9
  unsigned int v7; // r11d
  int v8; // ebx
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r10
  __int64 v15; // rcx

  v3 = &MxBootFreeDescriptor[7 * a1];
  v4 = v3;
  v5 = -1LL;
  while ( 1 )
  {
    if ( v4[1] )
    {
      if ( a2 )
      {
        if ( v4[3] != -1 )
          goto LABEL_24;
        return -1LL;
      }
      if ( v4[2] != -1 )
        goto LABEL_24;
    }
    if ( !v4[6] || v4 != v3 )
      break;
    v4 = (__int64 *)v4[6];
  }
  v7 = 0;
LABEL_11:
  if ( v7 >= 2 )
    return -1LL;
  v8 = 0;
  LODWORD(v9) = a1;
  while ( 1 )
  {
    v10 = v9 + 1;
    v9 = 0LL;
    if ( v10 != (unsigned __int16)KeNumberNodes )
      v9 = v10;
    v4 = &MxBootFreeDescriptor[7 * v9];
    if ( v4[5] )
    {
      if ( !(a2 ? v4[3] == -1 : v4[2] == -1) )
        break;
    }
    if ( ++v8 >= (unsigned int)(unsigned __int16)KeNumberNodes )
    {
      ++v7;
      goto LABEL_11;
    }
  }
  if ( !v4 )
    return -1LL;
  v3[6] = (__int64)v4;
LABEL_24:
  if ( !a2 )
  {
    v13 = v4[2];
    if ( v13 != (v13 & 0xFFFFFFFFFFFFFE00uLL) && v13 != *v4 )
    {
      v4[2] = v13 - 1;
      goto LABEL_28;
    }
    v14 = v4[3];
    v15 = *v4;
    if ( v14 == -1 )
    {
      if ( v13 != v15 && v15 != (v15 & 0xFFFFFFFFFFFFFE00uLL) )
        v5 = v15 | 0x1FF;
      v4[2] = v5;
      goto LABEL_28;
    }
    v4[2] = v14 + 511;
    if ( (unsigned __int64)(v14 - v15) >= 0x200 )
    {
      v4[3] = v14 - 512;
      goto LABEL_28;
    }
LABEL_27:
    v4[3] = -1LL;
LABEL_28:
    MxBootDescriptorDepleted((__int64)v4);
    return v12;
  }
  v12 = v4[3];
  if ( (unsigned __int64)(v12 - *v4) < 0x200 )
    goto LABEL_27;
  v4[3] = v12 - 512;
  return v12;
}
