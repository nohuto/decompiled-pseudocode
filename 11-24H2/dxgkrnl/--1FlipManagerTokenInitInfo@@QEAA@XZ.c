/*
 * XREFs of ??1FlipManagerTokenInitInfo@@QEAA@XZ @ 0x140049C24
 * Callers:
 *     ?FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAUFlipManagerTokenInitInfo@@@Z @ 0x140049AFC (-FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAUFlipManagerTokenInitInfo@@@Z.c)
 *     NtTokenManagerCreateFlipObjectReturnTokenHandle @ 0x140049D20 (NtTokenManagerCreateFlipObjectReturnTokenHandle.c)
 *     NtTokenManagerCreateFlipObjectTokenHandle @ 0x140099730 (NtTokenManagerCreateFlipObjectTokenHandle.c)
 * Callees:
 *     ??_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z @ 0x1400502B8 (--_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
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
