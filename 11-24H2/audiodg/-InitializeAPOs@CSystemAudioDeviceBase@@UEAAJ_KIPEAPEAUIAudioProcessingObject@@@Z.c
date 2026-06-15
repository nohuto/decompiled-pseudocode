/*
 * XREFs of ?InitializeAPOs@CSystemAudioDeviceBase@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x140048660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemAudioDeviceBase::InitializeAPOs(
        CSystemAudioDeviceBase *this,
        __int64 a2,
        __int64 a3,
        struct IAudioProcessingObject **a4)
{
  return (*(__int64 (__fastcall **)(char *, __int64, __int64, struct IAudioProcessingObject **))(*((_QWORD *)this - 1)
                                                                                               + 176LL))(
           (char *)this - 8,
           a2,
           a3,
           a4);
}
