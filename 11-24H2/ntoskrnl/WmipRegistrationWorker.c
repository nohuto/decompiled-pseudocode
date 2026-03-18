/*
 * XREFs of WmipRegistrationWorker @ 0x1409D10C0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutex @ 0x1403379B0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     WmipUnreferenceRegEntry @ 0x14046FC2C (WmipUnreferenceRegEntry.c)
 *     IoControlPnpDeviceActionQueue @ 0x140498E44 (IoControlPnpDeviceActionQueue.c)
 *     WmipRegisterOrUpdateDS @ 0x1409D06C8 (WmipRegisterOrUpdateDS.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 WmipRegistrationWorker()
{
  _QWORD *v0; // rbx
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 result; // rax
  int v5; // ecx
  char v6; // dl

  do
  {
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    v0 = WmipRegWorkList;
    v1 = *((_QWORD *)WmipRegWorkList + 3);
    if ( v1 && *(PDEVICE_OBJECT *)(v1 + 16) != WmipServiceDeviceObject )
    {
      KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
      IoControlPnpDeviceActionQueue(1);
      IoControlPnpDeviceActionQueue(0);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    }
    if ( *((PVOID **)WmipRegWorkList + 1) != &WmipRegWorkList
      || (v2 = *(_QWORD *)WmipRegWorkList, *(PVOID *)(*(_QWORD *)WmipRegWorkList + 8LL) != WmipRegWorkList) )
    {
      __fastfail(3u);
    }
    WmipRegWorkList = *(PVOID *)WmipRegWorkList;
    *(_QWORD *)(v2 + 8) = &WmipRegWorkList;
    KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
    v3 = v0[3];
    if ( v3 )
    {
      v5 = *((_DWORD *)v0 + 4);
      if ( v5 )
      {
        if ( v5 != 1 )
        {
LABEL_13:
          WmipUnreferenceRegEntry(v3);
          goto LABEL_7;
        }
        v6 = 1;
      }
      else
      {
        v6 = 0;
      }
      WmipRegisterOrUpdateDS(v0[3], v6);
      goto LABEL_13;
    }
LABEL_7:
    ExFreePoolWithTag(v0, 0);
    result = (unsigned int)_InterlockedExchangeAdd(&WmipRegWorkItemCount, 0xFFFFFFFF);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
