/*
 * XREFs of PiGetRelatedDevice @ 0x1408BC818
 * Callers:
 *     PiControlGetRelatedDevice @ 0x1408BB1F0 (PiControlGetRelatedDevice.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1408BC0A0 (PiCMGetRelatedDeviceInstance.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     RtlLookupElementGenericTableAvl @ 0x1403FA3F0 (RtlLookupElementGenericTableAvl.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1408BB740 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 */

__int64 __fastcall PiGetRelatedDevice(__int64 a1, char *a2, _DWORD *a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // esi
  _QWORD *v10; // rbp
  _QWORD **v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rdi
  int v14; // eax
  int v15; // eax
  struct _KTHREAD *v16; // rax
  __int64 v17; // r14
  _QWORD *v19; // rax
  _QWORD Buffer[7]; // [rsp+20h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = 0;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  Buffer[0] = 0LL;
  v10 = 0LL;
  Buffer[1] = a1;
  ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
  v11 = (_QWORD **)RtlLookupElementGenericTableAvl(&PnpDeviceReferenceTable, Buffer);
  if ( v11 )
  {
    v10 = *v11;
    if ( *v11 )
    {
      if ( *(_WORD *)v10 == 3 && (v12 = *(_QWORD *)(v10[39] + 40LL)) != 0 && *(_QWORD **)(v12 + 32) == v10 )
        ObfReferenceObjectWithTag(v10, 0x43706E50u);
      else
        v10 = 0LL;
    }
  }
  KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
  if ( !v10 || (v13 = *(__int64 **)(v10[39] + 40LL)) == 0LL || (unsigned int)(*((_DWORD *)v13 + 75) - 789) <= 1 )
  {
LABEL_34:
    v9 = -1073741810;
    goto LABEL_27;
  }
  switch ( a4 )
  {
    case 1:
      v13 = (__int64 *)v13[2];
      goto LABEL_23;
    case 2:
      v13 = (__int64 *)v13[1];
      if ( !v13 )
        goto LABEL_20;
      v14 = *((_DWORD *)v13 + 99);
      if ( (v14 & 0x2000) == 0 || *((_DWORD *)v13 + 101) != 24 || (v14 & 0x1000) == 0 )
        goto LABEL_20;
      goto LABEL_18;
    case 3:
      do
      {
LABEL_18:
        v13 = (__int64 *)*v13;
        if ( !v13 )
          break;
        v15 = *((_DWORD *)v13 + 99);
        if ( (v15 & 0x2000) == 0 )
          break;
      }
      while ( *((_DWORD *)v13 + 101) == 24 && (v15 & 0x1000) != 0 );
LABEL_20:
      v16 = KeGetCurrentThread();
      --v16->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      while ( v13 )
      {
        if ( v13[6] )
        {
          v19 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)(v13 + 5), 0x43706E50u);
          if ( v19 )
          {
            ObfDereferenceObjectWithTag(v19, 0x43706E50u);
            break;
          }
        }
        v13 = (__int64 *)*v13;
      }
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegion();
LABEL_23:
      if ( v13 )
      {
        v17 = *((unsigned __int16 *)v13 + 20);
        if ( *a3 <= (unsigned int)v17 )
        {
          v9 = -1073741789;
          LODWORD(v17) = v17 + 2;
        }
        else
        {
          memmove(a2, (const void *)v13[6], *((unsigned __int16 *)v13 + 20));
          *(_WORD *)&a2[v17] = 0;
        }
        *a3 = v17;
        goto LABEL_27;
      }
      goto LABEL_34;
  }
  v9 = -1073741811;
LABEL_27:
  ExReleaseResourceLite(&IopDeviceTreeLock);
  KeLeaveCriticalRegion();
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x43706E50u);
  return v9;
}
