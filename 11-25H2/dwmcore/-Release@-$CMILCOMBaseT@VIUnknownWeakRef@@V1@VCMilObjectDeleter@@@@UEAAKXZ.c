/*
 * XREFs of ?Release@?$CMILCOMBaseT@VIUnknownWeakRef@@V1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x1800AF020
 * Callers:
 *     ??1CBaseExpression@@MEAA@XZ @ 0x18005FCD8 (--1CBaseExpression@@MEAA@XZ.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800697AC (--1CResource@@MEAA@XZ.c)
 *     ?UpdateKeyframeAnimations@CAnimationController@@AEAAXXZ @ 0x1800ADA40 (-UpdateKeyframeAnimations@CAnimationController@@AEAAXXZ.c)
 *     ?OnProgressChanged@CAnimationController@@QEAAXXZ @ 0x1800AF200 (-OnProgressChanged@CAnimationController@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VCMILCOMWeakRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800D0F54 (--1-$com_ptr_t@VCMILCOMWeakRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$ReleaseInterface@V?$CWeakReference@VCResource@@@@@@YAXAEAPEAV?$CWeakReference@VCResource@@@@@Z @ 0x1801E6214 (--$ReleaseInterface@V-$CWeakReference@VCResource@@@@@@YAXAEAPEAV-$CWeakReference@VCResource@@@@@.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18020FBF0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCMilObjectDeleter@@@@IEAAKXZ.c)
 * Callees:
 *     ??_ECResourceWeakRef@@UEAAPEAXI@Z @ 0x1801EC1D0 (--_ECResourceWeakRef@@UEAAPEAXI@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILCOMBaseT<IUnknownWeakRef,IUnknownWeakRef,CMilObjectDeleter>::Release(CResourceWeakRef *this)
{
  int v2; // ebx
  void *(__fastcall *v4)(CResourceWeakRef *__hidden, unsigned int); // rax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( v2 < -1 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v5);
  if ( v2 )
    return (unsigned int)v2;
  if ( _InterlockedAdd((volatile signed __int32 *)this + 2, 1u) <= 0 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v5);
  (*(void (__fastcall **)(CResourceWeakRef *))(*(_QWORD *)this + 40LL))(this);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( v2 < -1 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v5);
  if ( v2 )
    return (unsigned int)v2;
  if ( _InterlockedDecrement((volatile signed __int32 *)this + 2) < -1 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v5);
  v4 = *(void *(__fastcall **)(CResourceWeakRef *__hidden, unsigned int))(*(_QWORD *)this + 32LL);
  if ( v4 != CResourceWeakRef::`vector deleting destructor' )
  {
    v4(this, 1u);
    return (unsigned int)v2;
  }
  CResourceWeakRef::`vector deleting destructor'(this, 1u);
  return 0LL;
}
