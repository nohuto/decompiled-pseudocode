/*
 * XREFs of ??1CGlobalLightSet@@EEAA@XZ @ 0x1800C0D2C
 * Callers:
 *     ??_ECGlobalLightSet@@EEAAPEAXI@Z @ 0x1800C0E40 (--_ECGlobalLightSet@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18001DCB4 (-InternalRelease@-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIExpressionAnimation@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800200CC (-InternalRelease@-$ComPtr@UIExpressionAnimation@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveInteropVisualFromTree@CGlobalLightSet@@AEAAXXZ @ 0x1800C116C (-RemoveInteropVisualFromTree@CGlobalLightSet@@AEAAXXZ.c)
 */

void __fastcall CGlobalLightSet::~CGlobalLightSet(CGlobalLightSet *this)
{
  struct _RTL_GENERIC_TABLE *i; // rsi
  __int64 v3; // rcx
  PVOID v4; // rax
  void *v5; // rdi
  CBaseObject *v6; // rcx
  PVOID v7; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CGlobalLightSet::`vftable';
  for ( i = (struct _RTL_GENERIC_TABLE *)((char *)this + 16); ; RtlDeleteElementGenericTable(i, v5) )
  {
    RestartKey = 0LL;
    v4 = RtlEnumerateGenericTableWithoutSplaying(i, &RestartKey);
    v5 = v4;
    if ( !v4 )
      break;
    v3 = *((_QWORD *)v4 + 1);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( *((_QWORD *)this + 12) )
    CGlobalLightSet::RemoveInteropVisualFromTree(this);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::InternalRelease((__int64 *)this + 14);
  Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease((CBaseObject **)this + 13);
  v6 = (CBaseObject *)*((_QWORD *)this + 12);
  if ( v6 )
  {
    *((_QWORD *)this + 12) = 0LL;
    CBaseObject::Release(v6);
  }
  while ( 1 )
  {
    RestartKey = 0LL;
    v7 = RtlEnumerateGenericTableWithoutSplaying(i, &RestartKey);
    if ( !v7 )
      break;
    RtlDeleteElementGenericTable(i, v7);
  }
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
