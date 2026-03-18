/*
 * XREFs of ?EnumerateMeshes@CGeometry2DGroup@@UEBAJAEBV?$function@$$A6AJPEBVCMeshGeometry2D@@@Z@std@@@Z @ 0x180250710
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGeometry2DGroup::EnumerateMeshes(__int64 a1, __int64 a2)
{
  int v2; // eax
  _QWORD *v5; // rdi
  _QWORD *v6; // rbp
  int v7; // eax
  unsigned int v8; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 40) = v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(v2 + 2)) & 6;
  if ( (((unsigned __int8)v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(v2 + 2)) & 6) & 6) == 2 )
  {
    v5 = *(_QWORD **)(a1 + 88);
    v6 = *(_QWORD **)(a1 + 96);
    while ( v5 != v6 )
    {
      if ( *v5 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v5 + 208LL))(*v5, a2);
        v8 = v7;
        if ( v7 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x7D,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\geometry2dgroup.cpp",
            (const char *)(unsigned int)v7);
          *(_DWORD *)(a1 + 40) ^= (*(_DWORD *)(a1 + 40) ^ (2 * (*(_DWORD *)(a1 + 40) >> 1) - 2)) & 6;
          return v8;
        }
      }
      ++v5;
    }
  }
  *(_DWORD *)(a1 + 40) ^= (*(_DWORD *)(a1 + 40) ^ (2 * (*(_DWORD *)(a1 + 40) >> 1) - 2)) & 6;
  return 0LL;
}
