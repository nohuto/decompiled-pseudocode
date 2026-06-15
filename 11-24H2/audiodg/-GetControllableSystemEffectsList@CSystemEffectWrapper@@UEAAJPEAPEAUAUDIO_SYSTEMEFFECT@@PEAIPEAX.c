/*
 * XREFs of ?GetControllableSystemEffectsList@CSystemEffectWrapper@@UEAAJPEAPEAUAUDIO_SYSTEMEFFECT@@PEAIPEAX@Z @ 0x14004CA10
 * Callers:
 *     <none>
 * Callees:
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x140072B6C (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemEffectWrapper::GetControllableSystemEffectsList(
        CSystemEffectWrapper *this,
        struct AUDIO_SYSTEMEFFECT **a2,
        unsigned int *a3,
        void *a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct AUDIO_SYSTEMEFFECT **, unsigned int *, void *))(**((_QWORD **)this + 23)
                                                                                                 + 32LL))(
           *((_QWORD *)this + 23),
           a2,
           a3,
           a4);
}
