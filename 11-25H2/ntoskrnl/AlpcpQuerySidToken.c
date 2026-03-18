/*
 * XREFs of AlpcpQuerySidToken @ 0x140A0A644
 * Callers:
 *     AlpcpQuerySidMessage @ 0x140A0A58C (AlpcpQuerySidMessage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall AlpcpQuerySidToken(__int64 a1, void *a2, unsigned int a3, unsigned int *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 *v9; // rdx
  unsigned int v10; // ebx
  _BYTE Src[80]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(Src, 0, 0x44uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v9 = **(unsigned __int8 ***)(a1 + 152);
  v10 = 4 * v9[1] + 8;
  if ( v10 <= 0x44 )
    memmove(Src, v9, v10);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  if ( a4 )
    *a4 = v10;
  if ( v10 <= a3 )
    memmove(a2, Src, v10);
  return a3 < v10 ? 0xC0000023 : 0;
}
