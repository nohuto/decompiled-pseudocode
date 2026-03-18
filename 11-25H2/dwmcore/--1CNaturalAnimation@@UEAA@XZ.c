/*
 * XREFs of ??1CNaturalAnimation@@UEAA@XZ @ 0x1801F8B9C
 * Callers:
 *     ??_GCNaturalAnimation@@UEAAPEAXI@Z @ 0x1801F8B50 (--_GCNaturalAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D64C (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CNaturalAnimation::~CNaturalAnimation(CNaturalAnimation *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CNaturalAnimation::`vftable';
  v2 = *((_QWORD *)this + 54);
  if ( v2 )
  {
    *((_QWORD *)this + 54) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)this + 53);
  CBaseExpression::~CBaseExpression((void **)this);
}
