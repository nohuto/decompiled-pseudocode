/*
 * XREFs of ??1CD3DPixelShader@@MEAA@XZ @ 0x18021DDAC
 * Callers:
 *     ??_ECD3DPixelShader@@MEAAPEAXI@Z @ 0x18021DD70 (--_ECD3DPixelShader@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DPixelShader::~CD3DPixelShader(CD3DPixelShader *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CD3DPixelShader::`vftable';
  v2 = *((_QWORD *)this + 15);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 15) = 0LL;
  }
  CD3DResource::~CD3DResource(this);
}
