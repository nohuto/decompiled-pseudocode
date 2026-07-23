/*
 * XREFs of IopDeleteDriver @ 0x140A86F40
 * Callers:
 *     <none>
 * Callees:
 *     KeFlushQueuedDpcs @ 0x14032C480 (KeFlushQueuedDpcs.c)
 *     IoUnregisterPriorityCallback @ 0x140593C70 (IoUnregisterPriorityCallback.c)
 *     PnpDriverObjectDereferenceComplete @ 0x140A87004 (PnpDriverObjectDereferenceComplete.c)
 *     MmUnloadSystemImage @ 0x140A87050 (MmUnloadSystemImage.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall IopDeleteDriver(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  _QWORD *v10; // rbx

  v5 = *(_QWORD **)(*(_QWORD *)(a1 + 48) + 40LL);
  if ( v5 )
  {
    do
    {
      v10 = (_QWORD *)*v5;
      ExFreePoolWithTag(v5, 0);
      v5 = v10;
    }
    while ( v10 );
  }
  if ( (*(_DWORD *)(a1 + 16) & 0x200) != 0 )
    IoUnregisterPriorityCallback(a1, a2, a3, a4);
  if ( *(_QWORD *)(a1 + 40) )
  {
    KeFlushQueuedDpcs();
    MmUnloadSystemImage(*(_QWORD *)(a1 + 40));
    PnpDriverObjectDereferenceComplete();
  }
  v6 = *(void **)(a1 + 64);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  v7 = *(void **)(*(_QWORD *)(a1 + 48) + 32LL);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  v8 = *(void **)(*(_QWORD *)(a1 + 48) + 48LL);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  v9 = *(void **)(*(_QWORD *)(a1 + 48) + 56LL);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
}
