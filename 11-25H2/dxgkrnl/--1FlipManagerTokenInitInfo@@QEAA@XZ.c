/*
 * XREFs of ??1FlipManagerTokenInitInfo@@QEAA@XZ @ 0x14004A4A4
 * Callers:
 *     ?FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAUFlipManagerTokenInitInfo@@@Z @ 0x14004A37C (-FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAUFlipManagerTokenInitInfo@@@Z.c)
 *     NtTokenManagerCreateFlipObjectReturnTokenHandle @ 0x14004A5A0 (NtTokenManagerCreateFlipObjectReturnTokenHandle.c)
 *     NtTokenManagerCreateFlipObjectTokenHandle @ 0x1400974B0 (NtTokenManagerCreateFlipObjectTokenHandle.c)
 * Callees:
 *     ??_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z @ 0x140050838 (--_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall FlipManagerTokenInitInfo::~FlipManagerTokenInitInfo(FlipManagerTokenInitInfo *this, unsigned int a2)
{
  void *v3; // rcx
  void *v4; // rcx

  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
  v4 = (void *)*((_QWORD *)this + 5);
  if ( v4 )
    FlipManagerTokenIFlipInfo::`scalar deleting destructor'(v4, a2);
}
