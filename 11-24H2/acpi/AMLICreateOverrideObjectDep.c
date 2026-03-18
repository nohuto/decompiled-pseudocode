/*
 * XREFs of AMLICreateOverrideObjectDep @ 0x14006C73C
 * Callers:
 *     AMLIAddNextNamespaceOverrideObject @ 0x14006C350 (AMLIAddNextNamespaceOverrideObject.c)
 * Callees:
 *     FreeObjData @ 0x14002E368 (FreeObjData.c)
 *     NewObjData @ 0x14003620C (NewObjData.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

__int64 __fastcall AMLICreateOverrideObjectDep(_BYTE *Src, unsigned int a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int v4; // esi
  _BYTE *v7; // rbp
  unsigned int i; // ecx
  _BYTE *v9; // rdx
  __int64 v10; // rax
  _DWORD *v11; // rax
  _DWORD *v12; // r14
  __int64 j; // rbx
  __int64 v14; // rax
  _DWORD *v15; // r13
  void *v16; // rax
  __int128 v17; // xmm1
  _DWORD *v18; // xmm0_8
  __int128 v20; // [rsp+20h] [rbp-48h] BYREF
  __int128 v21; // [rsp+30h] [rbp-38h]
  _DWORD *v22; // [rsp+40h] [rbp-28h]

  v3 = 0;
  v4 = 0;
  v7 = Src;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( a2 && Src[a2 - 1] )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    for ( i = 0; i < a2; i += v10 + 1 )
    {
      v9 = &v7[i];
      if ( !*v9 )
        break;
      v10 = -1LL;
      do
        ++v10;
      while ( v9[v10] );
      ++v4;
    }
    WORD1(v20) = 4;
    DWORD2(v21) = 40 * v4 + 48;
    v11 = (_DWORD *)NewObjData(gpheapGlobal, (__int64)&v20);
    v22 = v11;
    v12 = v11;
    if ( v11 )
    {
      *v11 = v4;
      for ( j = 0LL; ; j = (unsigned int)(j + 1) )
      {
        if ( (unsigned int)j >= v4 )
        {
          v17 = v21;
          *(_OWORD *)a3 = v20;
          v18 = v22;
          *(_OWORD *)(a3 + 16) = v17;
          *(_QWORD *)(a3 + 32) = v18;
          return v3;
        }
        v14 = -1LL;
        v15 = &v12[10 * j];
        *((_WORD *)v15 + 5) = 2;
        do
          ++v14;
        while ( v7[v14] );
        v15[8] = v14 + 1;
        v16 = (void *)NewObjData(gpheapGlobal, (__int64)(v15 + 2));
        *((_QWORD *)v15 + 5) = v16;
        if ( !v16 )
          break;
        memmove(v16, v7, (unsigned int)v15[8]);
        v7 += (unsigned int)v15[8];
      }
      v3 = -1073741670;
      while ( (_DWORD)j )
      {
        j = (unsigned int)(j - 1);
        FreeObjData((__int64)&v12[8 * j + 2 + 2 * (unsigned int)j]);
      }
      FreeObjData((__int64)&v20);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v3;
}
