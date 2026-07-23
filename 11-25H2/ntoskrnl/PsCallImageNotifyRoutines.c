/*
 * XREFs of PsCallImageNotifyRoutines @ 0x14090BC00
 * Callers:
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 *     DbgkCreateThread @ 0x14090B274 (DbgkCreateThread.c)
 *     MiCallImageNotify @ 0x140ABE8DC (MiCallImageNotify.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x140256FE0 (KeAreAllApcsDisabled.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ExReferenceCallBackBlock @ 0x140326780 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x1404482A0 (ExDereferenceCallBackBlock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PerfLogImageLoad @ 0x14090BDC0 (PerfLogImageLoad.c)
 *     EtwpCovSampImageNotify @ 0x14090C0A0 (EtwpCovSampImageNotify.c)
 */

__int64 __fastcall PsCallImageNotifyRoutines(PUNICODE_STRING FullImageName, __int64 a2, _QWORD *a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r13
  void *v9; // r12
  int v10; // eax
  UNICODE_STRING *v11; // r15
  struct _IMAGE_INFO *v12; // r14
  _RTL_RUN_ONCE *v13; // rbx
  __int64 i; // rdi
  struct _EX_RUNDOWN_REF *v15; // rax
  struct _EX_RUNDOWN_REF *v16; // rsi
  void (__stdcall *Count)(PUNICODE_STRING, HANDLE, PIMAGE_INFO); // rax
  __int128 v19; // [rsp+30h] [rbp-38h] BYREF

  v19 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  --CurrentThread->KernelApcDisable;
  if ( KeAreAllApcsDisabled() )
    NT_ASSERT("KeAreAllApcsDisabled() == 0");
  if ( FltMgrCallbacks )
    v10 = guard_dispatch_icall_no_overrides(a4);
  else
    v10 = -1073741637;
  v11 = (UNICODE_STRING *)&v19;
  if ( v10 < 0 )
    v11 = FullImageName;
  if ( a2 )
    v9 = *(void **)(a2 + 464);
  v12 = (struct _IMAGE_INFO *)(a3 + 1);
  if ( (PerfGlobalGroupMask[0] & 4) != 0 )
    PerfLogImageLoad(v11, a2, a3 + 1);
  if ( (PspNotifyEnableMask & 1) != 0 )
  {
    v12->Properties |= 0x400u;
    v13 = &PspLoadImageNotifyRoutine;
    *a3 = 56LL;
    a3[6] = a4;
    for ( i = 64LL; i; --i )
    {
      v15 = ExReferenceCallBackBlock((signed __int64 *)v13);
      v16 = v15;
      if ( v15 )
      {
        Count = (void (__stdcall *)(PUNICODE_STRING, HANDLE, PIMAGE_INFO))v15[1].Count;
        if ( ((v12->Properties & 0x800) == 0 || (v16[2].Count & 1) != 0) && Count )
        {
          if ( Count == EtwpCovSampImageNotify )
          {
            EtwpCovSampImageNotify(v11, v9, v12);
            ExDereferenceCallBackBlock((signed __int64 *)v13, v16);
            goto LABEL_14;
          }
          guard_dispatch_icall_no_overrides(v11);
        }
        ExDereferenceCallBackBlock((signed __int64 *)v13, v16);
      }
LABEL_14:
      ++v13;
    }
  }
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
