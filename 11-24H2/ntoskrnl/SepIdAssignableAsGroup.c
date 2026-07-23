/*
 * XREFs of SepIdAssignableAsGroup @ 0x1407924C0
 * Callers:
 *     NtSetInformationToken @ 0x140AD4280 (NtSetInformationToken.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 */

BOOLEAN __fastcall SepIdAssignableAsGroup(__int64 a1, void *a2)
{
  BOOLEAN v2; // di
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebp
  unsigned int v8; // r15d
  PSID *v9; // rsi

  v2 = 0;
  if ( !a2 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v8 = *(_DWORD *)(a1 + 124);
  if ( v8 )
  {
    v9 = *(PSID **)(a1 + 152);
    do
    {
      v2 = RtlEqualSid(a2, *v9);
      if ( v2 )
        break;
      ++v7;
      v9 += 2;
    }
    while ( v7 < v8 );
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  return v2;
}
