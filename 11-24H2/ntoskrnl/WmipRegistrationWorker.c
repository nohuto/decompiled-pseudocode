/*
 * XREFs of WmipRegistrationWorker @ 0x1409AFCD0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     WmipUnreferenceRegEntry @ 0x14046A188 (WmipUnreferenceRegEntry.c)
 *     IoControlPnpDeviceActionQueue @ 0x140493724 (IoControlPnpDeviceActionQueue.c)
 *     WmipRegisterOrUpdateDS @ 0x1409AFF54 (WmipRegisterOrUpdateDS.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 WmipRegistrationWorker()
{
  _QWORD *v0; // rbx
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 result; // rax
  int v6; // ecx

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
    v4 = v0[3];
    if ( v4 )
    {
      v6 = *((_DWORD *)v0 + 4);
      if ( v6 )
      {
        if ( v6 != 1 )
        {
LABEL_13:
          WmipUnreferenceRegEntry(v4);
          goto LABEL_7;
        }
        LOBYTE(v3) = 1;
      }
      else
      {
        v3 = 0LL;
      }
      WmipRegisterOrUpdateDS(v0[3], v3);
      goto LABEL_13;
    }
LABEL_7:
    ExFreePoolWithTag(v0, 0);
    result = (unsigned int)_InterlockedExchangeAdd(&WmipRegWorkItemCount, 0xFFFFFFFF);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
