/*
 * XREFs of NotifyInputSinkRemoved @ 0x18004B5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@InputSinkDataCache@@SAAEAV1@XZ @ 0x18004B940 (-GetInstance@InputSinkDataCache@@SAAEAV1@XZ.c)
 *     _anonymous_namespace_::GetLuidFromInputSinkHandle @ 0x18004B9D8 (_anonymous_namespace_--GetLuidFromInputSinkHandle.c)
 *     ?InputSinkRemoved@InputSinkDataCache@@QEAAX_K@Z @ 0x18004C0E0 (-InputSinkRemoved@InputSinkDataCache@@QEAAX_K@Z.c)
 */

__int64 __fastcall NotifyInputSinkRemoved(__int64 a1)
{
  RTL_SRWLOCK *Instance; // rdi
  unsigned __int64 LuidFromInputSinkHandle; // rax

  Instance = (RTL_SRWLOCK *)InputSinkDataCache::GetInstance();
  LuidFromInputSinkHandle = anonymous_namespace_::GetLuidFromInputSinkHandle(a1);
  InputSinkDataCache::InputSinkRemoved(Instance, LuidFromInputSinkHandle);
  return 1LL;
}
