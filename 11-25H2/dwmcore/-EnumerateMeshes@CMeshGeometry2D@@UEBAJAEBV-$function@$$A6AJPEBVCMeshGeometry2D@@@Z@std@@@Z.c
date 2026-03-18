/*
 * XREFs of ?EnumerateMeshes@CMeshGeometry2D@@UEBAJAEBV?$function@$$A6AJPEBVCMeshGeometry2D@@@Z@std@@@Z @ 0x180250AE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMeshGeometry2D::EnumerateMeshes(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  v2 = *(_QWORD *)(a2 + 56);
  if ( !v2 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 16LL))(v2, &v4);
}
