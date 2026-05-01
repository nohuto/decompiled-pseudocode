/*
 * XREFs of ?HampWakeManagerActivityCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@PEAX@Z @ 0x18006BDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18000AE64 (-HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18000AEB8 (-HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180017170 (-HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeManagerAcquireLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180041038 (-HampWakeManagerAcquireLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeManagerReleaseLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18004116C (-HampWakeManagerReleaseLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeManagerFindContextByActivityHandle@@YAPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_WAKE_REFERENCE_MANAGER@@_K@Z @ 0x180084D14 (-HampWakeManagerFindContextByActivityHandle@@YAPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_WAKE_REFEREN.c)
 */

void __fastcall HampWakeManagerActivityCallback(
        struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *a1,
        struct _HAM_WAKE_REFERENCE_MANAGER *a2)
{
  int v2; // r8d
  struct _HAM_HOST_WAKE_CONTEXT *ContextByActivityHandle; // rax
  struct _HAM_HOST_WAKE_CONTEXT *v6; // rbx

  v2 = *((_DWORD *)a1 + 4);
  if ( v2 && (unsigned int)(v2 - 1) <= 1 )
  {
    HampWakeManagerAcquireLockShared(a2);
    ContextByActivityHandle = HampWakeManagerFindContextByActivityHandle(a2, *(_QWORD *)a1);
    v6 = ContextByActivityHandle;
    if ( ContextByActivityHandle )
    {
      HampWakeContextAcquireLockExclusive(ContextByActivityHandle);
      *((_BYTE *)v6 + 185) |= 4u;
      HampWakeContextQueueWorker(v6);
      HampWakeContextReleaseLockExclusive(v6);
    }
    HampWakeManagerReleaseLockShared(a2);
  }
}
