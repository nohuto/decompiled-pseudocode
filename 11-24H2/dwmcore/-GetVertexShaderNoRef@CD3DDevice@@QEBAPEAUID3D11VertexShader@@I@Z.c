/*
 * XREFs of ?GetVertexShaderNoRef@CD3DDevice@@QEBAPEAUID3D11VertexShader@@I@Z @ 0x1801B5250
 * Callers:
 *     ?SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1801B4E10 (-SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct ID3D11VertexShader *__fastcall CD3DDevice::GetVertexShaderNoRef(CD3DDevice *this, int a2)
{
  int v3; // ecx
  __int64 i; // rax
  __int64 v5; // rax
  __int64 v6; // rbx

  v3 = 0;
  for ( i = 0LL; i < *((int *)this + 382); ++i )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 189) + 4 * i) == a2 )
    {
      if ( v3 != -1 )
      {
        v5 = *((_QWORD *)this + 190);
        v6 = *(_QWORD *)(v5 + 8LL * v3);
        if ( v6 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*(_QWORD *)(v5 + 8LL * v3));
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
          return (struct ID3D11VertexShader *)v6;
        }
      }
      return 0LL;
    }
    ++v3;
  }
  return 0LL;
}
