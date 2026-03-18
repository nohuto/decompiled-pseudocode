/*
 * XREFs of PsCallImageNotifyRoutines @ 0x1408FFB60
 * Callers:
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     DbgkCreateThread @ 0x1408FED24 (DbgkCreateThread.c)
 *     MiCallImageNotify @ 0x140AC26CC (MiCallImageNotify.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReferenceCallBackBlock @ 0x140279300 (ExReferenceCallBackBlock.c)
 *     KeAreAllApcsDisabled @ 0x1403C3440 (KeAreAllApcsDisabled.c)
 *     ExDereferenceCallBackBlock @ 0x1404459D0 (ExDereferenceCallBackBlock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PerfLogImageLoad @ 0x1408FFD20 (PerfLogImageLoad.c)
 *     EtwpCovSampImageNotify @ 0x140900000 (EtwpCovSampImageNotify.c)
 */

__int64 __fastcall PsCallImageNotifyRoutines(PUNICODE_STRING FullImageName, __int64 a2, _QWORD *a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r13
  void *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  UNICODE_STRING *v14; // r15
  struct _IMAGE_INFO *v15; // r14
  union _RTL_RUN_ONCE *v16; // rbx
  __int64 i; // rdi
  struct _EX_RUNDOWN_REF *v18; // rax
  struct _EX_RUNDOWN_REF *v19; // rsi
  void (__stdcall *Count)(PUNICODE_STRING, HANDLE, PIMAGE_INFO); // rax
  __int128 v22; // [rsp+30h] [rbp-38h] BYREF
  __int64 v23; // [rsp+78h] [rbp+10h] BYREF

  v22 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  --CurrentThread->KernelApcDisable;
  v23 = 0LL;
  if ( KeAreAllApcsDisabled() )
    NT_ASSERT("KeAreAllApcsDisabled() == 0");
  if ( FltMgrCallbacks )
    v13 = guard_dispatch_icall_no_overrides(a4, 1024LL, &v22, &v23);
  else
    v13 = -1073741637;
  v14 = (UNICODE_STRING *)&v22;
  if ( v13 < 0 )
    v14 = FullImageName;
  if ( a2 )
    v9 = *(void **)(a2 + 464);
  v15 = (struct _IMAGE_INFO *)(a3 + 1);
  if ( (PerfGlobalGroupMask[0] & 4) != 0 )
    PerfLogImageLoad(v14, a2, a3 + 1);
  if ( (PspNotifyEnableMask & 1) != 0 )
  {
    v15->Properties |= 0x400u;
    v16 = &PspLoadImageNotifyRoutine;
    *a3 = 56LL;
    a3[6] = a4;
    for ( i = 64LL; i; --i )
    {
      v18 = ExReferenceCallBackBlock((signed __int64 *)v16);
      v19 = v18;
      if ( v18 )
      {
        Count = (void (__stdcall *)(PUNICODE_STRING, HANDLE, PIMAGE_INFO))v18[1].Count;
        if ( ((v15->Properties & 0x800) == 0 || (v19[2].Count & 1) != 0) && Count )
        {
          if ( Count == EtwpCovSampImageNotify )
          {
            EtwpCovSampImageNotify(v14, v9, v15);
            ExDereferenceCallBackBlock((signed __int64 *)v16, v19);
            goto LABEL_14;
          }
          guard_dispatch_icall_no_overrides(v14, v9, v15, v12);
        }
        ExDereferenceCallBackBlock((signed __int64 *)v16, v19);
      }
LABEL_14:
      ++v16;
    }
  }
  if ( v23 )
    guard_dispatch_icall_no_overrides(v23, v10, v11, v12);
  return KeLeaveCriticalRegionThread();
}
