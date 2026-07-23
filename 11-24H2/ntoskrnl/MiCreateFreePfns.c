/*
 * XREFs of MiCreateFreePfns @ 0x140C5339C
 * Callers:
 *     MiSwitchToPfns @ 0x140C540A0 (MiSwitchToPfns.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MxCreateFreePfns @ 0x140C546DC (MxCreateFreePfns.c)
 *     MxReleaseFreeDescriptor @ 0x140C554E4 (MxReleaseFreeDescriptor.c)
 */

__int64 __fastcall MiCreateFreePfns(_OWORD *a1)
{
  _OWORD *v1; // rdi
  __int64 *v2; // rbx
  __int128 v3; // xmm1
  unsigned int v4; // esi
  __int128 v5; // xmm0
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rdx
  __int64 result; // rax
  unsigned __int64 v9; // r9
  bool v10; // zf
  _OWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-18h]

  v1 = a1;
  if ( (*((_DWORD *)a1 + 6) & 0x40000000) == 0 )
    return MxCreateFreePfns(a1);
  MiPageToNode(*((_QWORD *)a1 + 4));
  v2 = 0LL;
  v3 = v1[1];
  v4 = 0;
  v11[0] = *v1;
  v5 = v1[2];
  v11[1] = v3;
  v12 = v5;
  v6 = *((_QWORD *)&v5 + 1);
  v7 = v5;
  while ( v4 < (unsigned __int16)KeNumberNodes )
  {
    v2 = &MxBootFreeDescriptor[7 * v4];
    if ( !v2[5] )
      goto LABEL_13;
    if ( *v2 >= v7 && *v2 < v6 + v7 )
    {
LABEL_9:
      *((_QWORD *)&v12 + 1) = *v2 - v7;
      if ( *((_QWORD *)&v12 + 1) )
        MxCreateFreePfns(v11);
      result = MxReleaseFreeDescriptor(v2, *((unsigned int *)v1 + 6));
      ++v4;
      v7 = *v2 + v2[1];
      v9 = *((_QWORD *)v1 + 5) - v7;
      *(_QWORD *)&v12 = v7;
      v10 = *((_QWORD *)v1 + 4) + v9 == 0;
      v6 = *((_QWORD *)v1 + 4) + v9;
      *((_QWORD *)&v12 + 1) = v6;
      if ( v10 )
        return result;
    }
    else
    {
      ++v4;
    }
  }
  if ( v4 != (unsigned __int16)KeNumberNodes )
    goto LABEL_9;
LABEL_13:
  a1 = v11;
  return MxCreateFreePfns(a1);
}
