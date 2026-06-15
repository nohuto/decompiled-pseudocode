/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCBtAudioResourceManagerBase@@UIEndpointCustomFormatHandler@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800ECAB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CBtAudioResourceManagerBase@@QEAA@XZ @ 0x1800EC80C (--1CBtAudioResourceManagerBase@@QEAA@XZ.c)
 */

CBtAudioResourceManagerBase *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CBtAudioResourceManagerBase,IEndpointCustomFormatHandler>::`scalar deleting destructor'(
        CBtAudioResourceManagerBase *a1,
        char a2)
{
  *((_DWORD *)a1 + 127) = -1073741823;
  CBtAudioResourceManagerBase::~CBtAudioResourceManagerBase(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x200);
  return a1;
}
