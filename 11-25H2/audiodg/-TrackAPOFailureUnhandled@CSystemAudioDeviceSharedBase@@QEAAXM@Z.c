/*
 * XREFs of ?TrackAPOFailureUnhandled@CSystemAudioDeviceSharedBase@@QEAAXM@Z @ 0x140074740
 * Callers:
 *     ?AudioDGUnhandledExceptionFilter@@YAJPEAU_EXCEPTION_POINTERS@@@Z @ 0x14006EDF0 (-AudioDGUnhandledExceptionFilter@@YAJPEAU_EXCEPTION_POINTERS@@@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@VCAudioDeviceGraph@@@ATL@@QEAA@XZ @ 0x140056AFC (--1-$CComPtrBase@VCAudioDeviceGraph@@@ATL@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSystemAudioDeviceSharedBase::TrackAPOFailureUnhandled(CSystemAudioDeviceSharedBase *this, float a2)
{
  _QWORD **v2; // rbx
  _QWORD **v3; // [rsp+40h] [rbp+8h] BYREF

  v2 = (_QWORD **)*((_QWORD *)this + 23);
  v3 = v2;
  if ( v2 )
    ((void (__fastcall *)(_QWORD **))(*v2)[1])(v2);
  (*(void (__fastcall **)(_QWORD *))(*v2[18] + 128LL))(v2[18]);
  ATL::CComPtrBase<CAudioDeviceGraph>::~CComPtrBase<CAudioDeviceGraph>((__int64 *)&v3);
}
