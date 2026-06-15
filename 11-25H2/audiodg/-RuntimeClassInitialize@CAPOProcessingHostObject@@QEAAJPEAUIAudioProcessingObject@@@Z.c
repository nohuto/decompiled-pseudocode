/*
 * XREFs of ?RuntimeClassInitialize@CAPOProcessingHostObject@@QEAAJPEAUIAudioProcessingObject@@@Z @ 0x140019268
 * Callers:
 *     ??$MakeAndInitialize@VCAPOProcessingHostObject@@V1@AEAPEAUIAudioProcessingObject@@@Details@WRL@Microsoft@@YAJPEAPEAVCAPOProcessingHostObject@@AEAPEAUIAudioProcessingObject@@@Z @ 0x140019198 (--$MakeAndInitialize@VCAPOProcessingHostObject@@V1@AEAPEAUIAudioProcessingObject@@@Details@WRL@M.c)
 * Callees:
 *     ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x1400192CC (--4-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOProcessingHostObject::RuntimeClassInitialize(
        CAPOProcessingHostObject *this,
        struct IAudioProcessingObject *a2)
{
  __int64 v3; // rcx

  wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=((char *)this + 24, a2);
  v3 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  (***((void (__fastcall ****)(_QWORD, GUID *, char *))this + 3))(
    *((_QWORD *)this + 3),
    &GUID_56b0c76f_02fd_4b21_a52e_9f8219fc86e4,
    (char *)this + 32);
  return 0LL;
}
