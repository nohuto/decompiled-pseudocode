/*
 * XREFs of PiUEventNotifyDeviceInstancePropertyChange @ 0x140A40BF0
 * Callers:
 *     PiUEventProcessEventWorker @ 0x140856F90 (PiUEventProcessEventWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     PiUEventHashStringIntoBucket @ 0x140477414 (PiUEventHashStringIntoBucket.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     PiUEventApplyAdditionalFilters @ 0x1408CFF90 (PiUEventApplyAdditionalFilters.c)
 *     PiUEventNotifyClient @ 0x1408D0228 (PiUEventNotifyClient.c)
 */

__int64 __fastcall PiUEventNotifyDeviceInstancePropertyChange(__int64 a1)
{
  unsigned int v1; // ebp
  wchar_t *v3; // r12
  _QWORD *v4; // r15
  unsigned int v5; // edi
  _QWORD **v6; // r14
  _QWORD *v7; // rbx
  __int64 v9; // r13
  _QWORD v10[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = 0;
  if ( *(_DWORD *)(a1 + 96) == 9 )
  {
    v3 = (wchar_t *)(a1 + 128);
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    v4 = v10;
    v10[0] = (char *)&PiUEventDevInstancePropertyClientList + 16 * (unsigned int)PiUEventHashStringIntoBucket(v3);
    v5 = 0;
    v10[1] = &unk_140F8BCF0;
    do
    {
      v6 = (_QWORD **)*v4;
      v7 = *(_QWORD **)*v4;
      while ( v7 != v6 )
      {
        v9 = (__int64)v7;
        v7 = (_QWORD *)*v7;
        if ( v5 || !wcsicmp(v3, *(const wchar_t **)(*(_QWORD *)(v9 + 24) + 16LL)) )
        {
          if ( (unsigned __int8)PiUEventApplyAdditionalFilters(a1, v9) )
            v1 = PiUEventNotifyClient(a1, v9);
        }
      }
      ++v5;
      ++v4;
    }
    while ( v5 < 2 );
    KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  }
  return v1;
}
