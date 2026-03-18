/*
 * XREFs of ??$_Find@PEAVCSceneNode@@@?$_Tree@V?$_Tmap_traits@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@1@AEBQEAVCSceneNode@@@Z @ 0x18021BB24
 * Callers:
 *     ?DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z @ 0x1802B6898 (-DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z.c)
 *     ?HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z @ 0x1802B6930 (-HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Find<CSceneNode *>(
        __int64 **a1,
        _QWORD *a2)
{
  __int64 *v2; // r8
  __int64 *v3; // rcx
  __int64 *v4; // rax
  __int64 *result; // rax

  v2 = *a1;
  v3 = v2;
  v4 = (__int64 *)v2[1];
  while ( !*((_BYTE *)v4 + 25) )
  {
    if ( (unsigned __int64)v4[4] >= *a2 )
    {
      v3 = v4;
      v4 = (__int64 *)*v4;
    }
    else
    {
      v4 = (__int64 *)v4[2];
    }
  }
  if ( *((_BYTE *)v3 + 25) )
    return v2;
  result = v3;
  if ( *a2 < (unsigned __int64)v3[4] )
    return v2;
  return result;
}
