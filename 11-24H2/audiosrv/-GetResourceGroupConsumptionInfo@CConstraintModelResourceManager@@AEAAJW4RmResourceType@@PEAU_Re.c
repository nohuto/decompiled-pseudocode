/*
 * XREFs of ?GetResourceGroupConsumptionInfo@CConstraintModelResourceManager@@AEAAJW4RmResourceType@@PEAU_ResourceInfo@@KPEAPEAU3@@Z @ 0x1800ED654
 * Callers:
 *     ?DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800EC56C (-DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180015ED0 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180021540 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall CConstraintModelResourceManager::GetResourceGroupConsumptionInfo(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5)
{
  unsigned int v5; // ebx
  void *v9; // r10
  unsigned int i; // r8d
  __int64 v11; // rdx
  __int64 v12; // rax
  _OWORD *v13; // rcx
  __int128 v14; // xmm1

  v5 = 0;
  *a5 = 0LL;
  v9 = operator new(0x21CuLL);
  if ( v9 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= a4 )
      {
        operator delete(v9);
        return (unsigned int)-2147023728;
      }
      v11 = a3 + 540LL * i;
      if ( *(_DWORD *)(v11 + 524) )
      {
        if ( *(_DWORD *)v11 == a2 )
          break;
      }
    }
    v12 = 4LL;
    v13 = v9;
    do
    {
      *v13 = *(_OWORD *)v11;
      v13[1] = *(_OWORD *)(v11 + 16);
      v13[2] = *(_OWORD *)(v11 + 32);
      v13[3] = *(_OWORD *)(v11 + 48);
      v13[4] = *(_OWORD *)(v11 + 64);
      v13[5] = *(_OWORD *)(v11 + 80);
      v13[6] = *(_OWORD *)(v11 + 96);
      v13 += 8;
      v14 = *(_OWORD *)(v11 + 112);
      v11 += 128LL;
      *(v13 - 1) = v14;
      --v12;
    }
    while ( v12 );
    *v13 = *(_OWORD *)v11;
    *((_QWORD *)v13 + 2) = *(_QWORD *)(v11 + 16);
    *((_DWORD *)v13 + 6) = *(_DWORD *)(v11 + 24);
    *a5 = v9;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
