/*
 * XREFs of ?IsInputFormatSupported@CSystemEffectWrapper@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x1400408C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14007506C (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemEffectWrapper::IsInputFormatSupported(
        CSystemEffectWrapper *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType *a3,
        struct IAudioMediaType **a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **))(**((_QWORD **)this + 22) + 56LL))(
           *((_QWORD *)this + 22),
           a2,
           a3,
           a4);
}
