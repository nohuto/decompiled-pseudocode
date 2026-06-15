/*
 * XREFs of ??0CAPONode@@QEAA@AEBU_GUID@@PEBGPEAUIAudioProcessingObject@@PEAUIAudioProcessingObjectRT@@PEAUIAudioProcessingObjectConfiguration@@PEAUIAPOProcessingHost@@@Z @ 0x14000E63C
 * Callers:
 *     _lambda_4f5bca04da2ba347195d47ea7d1a4d66_::operator() @ 0x14000D97C (_lambda_4f5bca04da2ba347195d47ea7d1a4d66_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMaxSupportedConnectionVersion@@YAIPEAUIAudioProcessingObject@@@Z @ 0x14000F03C (-GetMaxSupportedConnectionVersion@@YAIPEAUIAudioProcessingObject@@@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14000F110 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=19
CAPONode *__fastcall CAPONode::CAPONode(
        CAPONode *this,
        const struct _GUID *a2,
        const unsigned __int16 *a3,
        struct IAudioProcessingObject *a4,
        struct IAudioProcessingObjectRT *a5,
        struct IAudioProcessingObjectConfiguration *a6,
        struct IAPOProcessingHost *a7)
{
  __int64 *v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = a4;
  if ( a4 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))a4->lpVtbl->AddRef)(a4);
  *((_QWORD *)this + 1) = a5;
  if ( a5 )
    ((void (__fastcall *)(struct IAudioProcessingObjectRT *))a5->lpVtbl->AddRef)(a5);
  *((_QWORD *)this + 2) = a6;
  if ( a6 )
    ((void (__fastcall *)(struct IAudioProcessingObjectConfiguration *))a6->lpVtbl->AddRef)(a6);
  *((_QWORD *)this + 3) = 0LL;
  v10 = (__int64 *)((char *)this + 32);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = a7;
  if ( a7 )
    (*(void (__fastcall **)(struct IAPOProcessingHost *))(*(_QWORD *)a7 + 8LL))(a7);
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 68) = 0;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 76) = 0;
  *(struct _GUID *)((char *)this + 312) = *a2;
  memset_0((char *)this + 328, 0, 0x70uLL);
  *((_DWORD *)this + 110) = 1;
  v11 = *v10;
  *v10 = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  (***(void (__fastcall ****)(_QWORD, GUID *, char *))this)(
    *(_QWORD *)this,
    &GUID_56b0c76f_02fd_4b21_a52e_9f8219fc86e4,
    (char *)this + 32);
  *((_DWORD *)this + 110) = GetMaxSupportedConnectionVersion(*(struct IAudioProcessingObject **)this);
  v12 = StringCchCopyW((unsigned __int16 *)this + 164, 0x38uLL, a3);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x149,
      (int)"avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h",
      (const char *)(unsigned int)v12);
  return this;
}
