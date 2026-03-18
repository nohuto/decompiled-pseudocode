/*
 * XREFs of UserPostNKAPCBuffer @ 0x140126740
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall UserPostNKAPCBuffer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *Src, size_t Size)
{
  __int64 v10; // rax
  char *v11; // rdi
  __int64 v12; // rbx
  char v14; // [rsp+30h] [rbp-28h]

  v10 = Win32AllocPoolZInitImpl(64LL, (unsigned int)Size + 88LL, 0x616E7355u);
  v11 = (char *)v10;
  if ( v10 )
  {
    v12 = v10 + 88;
    memmove((void *)(v10 + 88), Src, (unsigned int)Size);
    v14 = 0;
    KeInitializeApc(v11, a1, 0LL, a2, a3, a4, v14, v12);
    if ( (unsigned __int8)KeInsertQueueApc(v11, v11, 0LL, 0LL) )
      return 1LL;
    GreDeleteFastMutex(v11);
  }
  return 0LL;
}
