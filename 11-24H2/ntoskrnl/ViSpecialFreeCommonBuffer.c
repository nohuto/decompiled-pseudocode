/*
 * XREFs of ViSpecialFreeCommonBuffer @ 0x140B8BD3C
 * Callers:
 *     VfFreeCommonBuffer @ 0x140B88660 (VfFreeCommonBuffer.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x140B86BC0 (DECREMENT_COMMON_BUFFERS.c)
 *     ViCheckPadding @ 0x140B8A474 (ViCheckPadding.c)
 */

__int64 __fastcall ViSpecialFreeCommonBuffer(__int64 a1, __int64 a2, void *a3)
{
  unsigned __int16 *v3; // rdi
  KIRQL v6; // al
  __int64 i; // rbx
  unsigned __int16 *v8; // rbx
  KIRQL v10; // al
  __int64 v11; // r9
  unsigned __int16 **v12; // r8

  v3 = (unsigned __int16 *)(a2 + 112);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 128));
  for ( i = *(_QWORD *)v3; ; i = *((_QWORD *)v8 + 6) )
  {
    v8 = (unsigned __int16 *)(i - 48);
    if ( v3 == v8 + 24 )
      break;
    if ( (void *)(*((_QWORD *)v8 + 2) + *v8) == a3 )
      goto LABEL_6;
  }
  v8 = 0LL;
LABEL_6:
  KeReleaseSpinLock((PKSPIN_LOCK)v3 + 2, v6);
  if ( !v8 )
    return 0LL;
  ViCheckPadding(*((_QWORD *)v8 + 2), *((_DWORD *)v8 + 1), *((_QWORD *)v8 + 3), *((_DWORD *)v8 + 2));
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 128));
  v11 = *((_QWORD *)v8 + 6);
  if ( *(unsigned __int16 **)(v11 + 8) != v8 + 24 || (v12 = (unsigned __int16 **)*((_QWORD *)v8 + 7), *v12 != v8 + 24) )
    __fastfail(3u);
  *v12 = (unsigned __int16 *)v11;
  *(_QWORD *)(v11 + 8) = v12;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 128), v10);
  memset_0(a3, 0, *((unsigned int *)v8 + 2));
  guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 40), *((unsigned int *)v8 + 1));
  DECREMENT_COMMON_BUFFERS(a2);
  ExFreePoolWithTag(v8, 0);
  return 1LL;
}
