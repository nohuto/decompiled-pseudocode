/*
 * XREFs of ??_G?$heap_implements@UWASDKInitializationWrapper@@@impl@winrt@@UEAAPEAXI@Z @ 0x18044EE80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 *     ??1WASDKInitializationWrapper@@UEAA@XZ @ 0x18044ECB4 (--1WASDKInitializationWrapper@@UEAA@XZ.c)
 */

WASDKInitializationWrapper *__fastcall winrt::impl::heap_implements<WASDKInitializationWrapper>::`scalar deleting destructor'(
        WASDKInitializationWrapper *Block,
        char a2)
{
  WASDKInitializationWrapper::~WASDKInitializationWrapper(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
