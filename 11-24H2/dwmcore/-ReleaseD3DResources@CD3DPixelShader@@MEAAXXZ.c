/*
 * XREFs of ?ReleaseD3DResources@CD3DPixelShader@@MEAAXXZ @ 0x1801CAD50
 * Callers:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x1801CAA00 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ?DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ @ 0x1801CAB1C (-DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DPixelShader::ReleaseD3DResources(CD3DPixelShader *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 15);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 15) = 0LL;
  }
}
