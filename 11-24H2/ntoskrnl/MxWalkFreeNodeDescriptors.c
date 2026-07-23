/*
 * XREFs of MxWalkFreeNodeDescriptors @ 0x140C555C8
 * Callers:
 *     MiInitializeLoaderDescriptors @ 0x140C539C4 (MiInitializeLoaderDescriptors.c)
 * Callees:
 *     MxInitializeFreeNodeDescriptors @ 0x140C54D9C (MxInitializeFreeNodeDescriptors.c)
 */

unsigned __int64 __fastcall MxWalkFreeNodeDescriptors(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  ULONG_PTR v7; // rcx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int64 *v11; // rcx

  qword_140E3D590 = 0LL;
  qword_140E3D580 = -1LL;
  qword_140E3D588 = 0LL;
  result = *(_QWORD *)(a1 + 360);
  if ( (result & 1) != 0 )
  {
    if ( result == 1 )
      return result;
    v4 = result ^ ((a1 + 352) | 1);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 360);
  }
  while ( v4 )
  {
    v5 = *(int *)(v4 + 24);
    if ( (unsigned int)v5 > 0x2C || (v6 = 0x15C5C0C00048LL, !_bittest64(&v6, v5)) )
    {
      v7 = *(_QWORD *)(v4 + 32);
      v8 = *(_QWORD *)(v4 + 40);
      if ( v8 + v7 > qword_140E3D588 )
        qword_140E3D588 = v8 + v7 - 1;
      qword_140E3D590 += v8;
      if ( v7 < qword_140E3D580 )
        qword_140E3D580 = v7;
      v9 = *(_DWORD *)(v4 + 24);
      if ( v9 == 2 || v9 == 24 )
        MxInitializeFreeNodeDescriptors(v4, a2);
    }
    result = *(_QWORD *)(v4 + 8);
    v10 = v4;
    if ( result )
    {
      v11 = *(unsigned __int64 **)result;
      v4 = *(_QWORD *)(v4 + 8);
      if ( *(_QWORD *)result )
      {
        do
        {
          result = *v11;
          v4 = (__int64)v11;
          v11 = (unsigned __int64 *)result;
        }
        while ( result );
      }
    }
    else
    {
      while ( 1 )
      {
        v4 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v4 || *(_QWORD *)v4 == v10 )
          break;
        v10 = v4;
      }
    }
  }
  return result;
}
