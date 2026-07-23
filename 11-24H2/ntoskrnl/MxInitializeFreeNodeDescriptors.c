/*
 * XREFs of MxInitializeFreeNodeDescriptors @ 0x140C54D9C
 * Callers:
 *     MxWalkFreeNodeDescriptors @ 0x140C555C8 (MxWalkFreeNodeDescriptors.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiRestrictRangeToNode @ 0x1403FC38C (MiRestrictRangeToNode.c)
 *     MxPageAlwaysHot @ 0x140C59EB8 (MxPageAlwaysHot.c)
 */

__int64 *__fastcall MxInitializeFreeNodeDescriptors(__int64 a1, __int64 a2)
{
  __int64 *result; // rax
  ULONG_PTR v3; // r15
  __int64 v4; // r12
  ULONG_PTR v5; // rsi
  ULONG_PTR v7; // r14
  __int64 v8; // rbx
  __int64 *v9; // rdi
  unsigned __int64 v10; // rbp
  ULONG_PTR v11; // r12
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64 *)&retaddr;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = a2;
  v5 = *(_QWORD *)(a1 + 32);
  if ( v3 )
  {
    while ( 1 )
    {
      v7 = MiRestrictRangeToNode(v5, v3);
      v8 = (unsigned int)MiPageToNode(v5);
      result = MxBootFreeDescriptor;
      v9 = &MxBootFreeDescriptor[7 * v8];
      if ( !v4 )
        break;
      v10 = *(_QWORD *)(v4 + 8 * v8) + 0x4000LL;
      if ( v7 < v9[1] && v7 < v10 )
        goto LABEL_10;
      v11 = v7 + v5;
      result = (__int64 *)MxPageAlwaysHot(v7 + v5 - 1);
      if ( (_DWORD)result )
        goto LABEL_14;
      v12 = v9[1];
      if ( !v12 )
        goto LABEL_14;
      result = (__int64 *)MxPageAlwaysHot(*v9 - 1 + v12);
      if ( !(_DWORD)result )
        goto LABEL_14;
      result = (__int64 *)(*v9 + v9[1]);
      if ( (unsigned __int64)result < v10 )
        goto LABEL_14;
LABEL_9:
      v4 = a2;
LABEL_10:
      v5 += v7;
      v3 -= v7;
      if ( !v3 )
        return result;
    }
    if ( v7 < v9[1] )
      goto LABEL_10;
    v11 = v5 + v7;
LABEL_14:
    *v9 = v5;
    v9[2] = v11 - 1;
    v13 = (v11 - 1) & 0xFFFFFFFFFFFFFE00uLL;
    v9[1] = v7;
    *((_DWORD *)v9 + 8) = v8;
    v9[5] = a1;
    if ( v13 >= v5 )
    {
      v4 = a2;
      result = (__int64 *)(v13 - v5);
      if ( v13 - v5 < 0x200 )
      {
        v9[3] = -1LL;
      }
      else
      {
        result = (__int64 *)(v13 - 512);
        v9[3] = v13 - 512;
      }
      goto LABEL_10;
    }
    v9[3] = -1LL;
    goto LABEL_9;
  }
  return result;
}
