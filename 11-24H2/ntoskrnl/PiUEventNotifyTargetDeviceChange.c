/*
 * XREFs of PiUEventNotifyTargetDeviceChange @ 0x1408CFD00
 * Callers:
 *     PiUEventProcessEventWorker @ 0x140856F90 (PiUEventProcessEventWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     PiUEventHashStringIntoBucket @ 0x140477414 (PiUEventHashStringIntoBucket.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PiUEventApplyAdditionalFilters @ 0x1408CFF90 (PiUEventApplyAdditionalFilters.c)
 *     PiUEventNotifyClient @ 0x1408D0228 (PiUEventNotifyClient.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiUEventNotifyTargetDeviceChange(__int64 a1)
{
  _DWORD *Pool2; // rdi
  char v2; // si
  int v3; // r15d
  unsigned int v4; // ebp
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rax
  wchar_t *v9; // r13
  _QWORD **v10; // r12
  _QWORD *v11; // r14
  char v12; // al
  _QWORD *v13; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  ULONG v19; // r8d
  __int64 v20; // rdx
  char v21; // [rsp+80h] [rbp+8h]
  char v22; // [rsp+88h] [rbp+10h]

  Pool2 = 0LL;
  v2 = 0;
  v21 = 0;
  v3 = 0;
  v22 = 0;
  v4 = 0;
  v6 = *(_QWORD *)(a1 + 80) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(a1 + 88) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v6 )
    goto LABEL_4;
  v15 = *(_QWORD *)(a1 + 80) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v15 )
    v15 = *(_QWORD *)(a1 + 88) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v15 )
    goto LABEL_4;
  v16 = *(_QWORD *)(a1 + 80) - *(_QWORD *)&GUID_DEVICE_REMOVE_PENDING.Data1;
  if ( !v16 )
    v16 = *(_QWORD *)(a1 + 88) - *(_QWORD *)GUID_DEVICE_REMOVE_PENDING.Data4;
  if ( !v16 )
    goto LABEL_4;
  v17 = *(_QWORD *)(a1 + 80) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v17 )
    v17 = *(_QWORD *)(a1 + 88) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v17 )
    goto LABEL_4;
  v18 = *(_QWORD *)(a1 + 80) - *(_QWORD *)&GUID_PNP_CUSTOM_NOTIFICATION.Data1;
  if ( !v18 )
    v18 = *(_QWORD *)(a1 + 88) - *(_QWORD *)GUID_PNP_CUSTOM_NOTIFICATION.Data4;
  if ( !v18 )
  {
LABEL_4:
    v7 = *(_DWORD *)(a1 + 96) - 1;
    if ( v7 )
    {
      if ( v7 != 2 )
        return (unsigned int)v3;
      v21 = 1;
      v8 = 136LL;
    }
    else
    {
      v8 = 128LL;
    }
    v9 = (wchar_t *)(v8 + a1);
    if ( *(_BYTE *)(a1 + 76) )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, 0x1000uLL, 0x59706E50u);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v4 = 1;
    }
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    v10 = (_QWORD **)((char *)&PiUEventDevHandleClientList + 16 * (unsigned int)PiUEventHashStringIntoBucket(v9));
    v11 = *v10;
    if ( *v10 != v10 )
    {
      v12 = v21;
      do
      {
        v13 = v11;
        v11 = (_QWORD *)*v11;
        if ( !v12 || !*((_BYTE *)v13 + 40) )
        {
          if ( wcsicmp(v9, *(const wchar_t **)(v13[3] + 16LL))
            || !(unsigned __int8)PiUEventApplyAdditionalFilters(a1, v13)
            || (v3 = PiUEventNotifyClient(a1, v13), v3 < 0) )
          {
            v12 = v21;
          }
          else
          {
            v12 = v21;
            if ( Pool2 )
            {
              if ( v4 >= 0x400 )
              {
                v2 = 1;
                v22 = 1;
                continue;
              }
              v20 = v4++;
              Pool2[v20] = *((_DWORD *)v13 + 12);
            }
          }
        }
        v2 = v22;
      }
      while ( v11 != v10 );
    }
    if ( Pool2 && v4 > 1 )
    {
      if ( v2 )
      {
        memset_0(Pool2 + 1, 0, 0xFFCuLL);
        *Pool2 = -1;
        v19 = 4;
      }
      else
      {
        v19 = 4096;
        *Pool2 = v4 - 1;
      }
      ZwUpdateWnfStateData(&WNF_PNPB_AWAITING_RESPONSE, Pool2, v19, 0LL, 0LL, 0, 0);
    }
    KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x59706E50u);
  }
  return (unsigned int)v3;
}
