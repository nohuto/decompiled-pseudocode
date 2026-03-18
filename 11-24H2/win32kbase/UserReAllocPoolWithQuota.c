/*
 * XREFs of UserReAllocPoolWithQuota @ 0x140129D40
 * Callers:
 *     FastGetProfileKeysW @ 0x1401A8400 (FastGetProfileKeysW.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

void *__fastcall UserReAllocPoolWithQuota(PVOID Buffer, size_t Size, unsigned __int64 a3, unsigned int a4)
{
  size_t v4; // rbx
  void *v7; // rax
  void *v8; // rdi

  v4 = a3;
  v7 = (void *)Win32AllocPoolWithQuotaZInitImpl((__int64)Buffer, a3, a4);
  v8 = v7;
  if ( v7 )
  {
    if ( Size <= v4 )
      v4 = Size;
    memmove(v7, Buffer, v4);
    GreDeleteFastMutex((char *)Buffer);
  }
  return v8;
}
