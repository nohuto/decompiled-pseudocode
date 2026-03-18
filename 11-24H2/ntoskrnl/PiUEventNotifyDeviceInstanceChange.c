/*
 * XREFs of PiUEventNotifyDeviceInstanceChange @ 0x140A50330
 * Callers:
 *     PiUEventProcessEventWorker @ 0x14085B220 (PiUEventProcessEventWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     PiUEventHashStringIntoBucket @ 0x14047B794 (PiUEventHashStringIntoBucket.c)
 *     _wcsicmp @ 0x1404FE3B0 (_wcsicmp.c)
 *     PiUEventApplyAdditionalFilters @ 0x1408D25A0 (PiUEventApplyAdditionalFilters.c)
 *     PiUEventNotifyClient @ 0x1408D2838 (PiUEventNotifyClient.c)
 */

__int64 __fastcall PiUEventNotifyDeviceInstanceChange(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // r12d
  int v4; // edx
  wchar_t *v5; // r13
  __int128 *v6; // r15
  unsigned int v7; // esi
  _QWORD **v8; // r14
  _QWORD *v9; // rbx
  __int64 v10; // rbp
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_DWORD *)(a1 + 96);
  v2 = 0;
  v12 = 0LL;
  v4 = v1 - 4;
  if ( !v4 || (unsigned int)(v4 - 6) <= 1 )
  {
    v5 = (wchar_t *)(a1 + 128);
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    v6 = &v12;
    *(_QWORD *)&v12 = (char *)&PiUEventDevInstanceClientList + 16 * (unsigned int)PiUEventHashStringIntoBucket(v5);
    v7 = 0;
    *((_QWORD *)&v12 + 1) = &unk_140F8BAD0;
    do
    {
      v8 = *(_QWORD ***)v6;
      v9 = **(_QWORD ***)v6;
      while ( v9 != v8 )
      {
        v10 = (__int64)v9;
        v9 = (_QWORD *)*v9;
        if ( v7 || !wcsicmp(v5, *(const wchar_t **)(*(_QWORD *)(v10 + 24) + 16LL)) )
        {
          if ( (unsigned __int8)PiUEventApplyAdditionalFilters(a1, v10) )
            v2 = PiUEventNotifyClient(a1, v10);
        }
      }
      ++v7;
      v6 = (__int128 *)((char *)v6 + 8);
    }
    while ( v7 < 2 );
    KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  }
  return v2;
}
