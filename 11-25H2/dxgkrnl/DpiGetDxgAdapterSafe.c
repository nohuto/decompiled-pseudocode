/*
 * XREFs of DpiGetDxgAdapterSafe @ 0x140365E40
 * Callers:
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1403427F0 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 * Callees:
 *     DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x140013AB0 (DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel.c)
 */

__int64 __fastcall DpiGetDxgAdapterSafe(struct _DEVICE_OBJECT *a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v6; // r12d
  __int64 *v7; // rdi
  __int64 v8; // r14
  __int64 *v9; // rsi
  struct _DEVICE_OBJECT *v11; // rcx
  PDEVICE_OBJECT AttachedDeviceReference; // rbx
  _QWORD *v13; // rax
  _QWORD *v14; // r8
  _QWORD *i; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // r8
  _QWORD *j; // rdx

  *a2 = 0LL;
  v6 = -1073741811;
  v7 = 0LL;
  KeWaitForSingleObject(Mutex, Executive, 0, 0, 0LL);
  _InterlockedExchange64(&qword_14015DD98, (__int64)KeGetCurrentThread());
  v8 = qword_14015DD88;
  if ( *(_QWORD *)v8 != v8 )
  {
    do
    {
      if ( v7 )
        break;
      KeWaitForSingleObject((PVOID)(v8 + 72), Executive, 0, 0, 0LL);
      v9 = *(__int64 **)(v8 + 56);
      if ( (__int64 *)*v9 != v9 )
      {
        do
        {
          if ( v7 )
            break;
          if ( *((_DWORD *)v9 + 4) == 1953656900 && *((_DWORD *)v9 + 5) == 2 )
          {
            v11 = (struct _DEVICE_OBJECT *)v9[3];
            if ( v11 == a1 || (struct _DEVICE_OBJECT *)v9[19] == a1 )
            {
              v7 = v9;
            }
            else
            {
              AttachedDeviceReference = IoGetAttachedDeviceReference(v11);
              ObfDereferenceObject(AttachedDeviceReference);
              v7 = v9;
              if ( a1 != AttachedDeviceReference )
                v7 = 0LL;
            }
            if ( v7 )
              goto LABEL_21;
            KeWaitForSingleObject(v9 + 465, Executive, 0, 0, 0LL);
            v13 = (_QWORD *)v9[463];
            v14 = v13;
            for ( i = (_QWORD *)*v13; i != v14; i = (_QWORD *)*i )
            {
              if ( (struct _DEVICE_OBJECT *)v13[3] == a1 )
                v7 = *(__int64 **)(v13[4] + 64LL);
              v13 = i;
            }
            KeReleaseMutex((PRKMUTEX)(v9 + 465), 0);
            if ( v7 )
              goto LABEL_21;
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite((PERESOURCE)(v9 + 430), 1u);
            v18 = (_QWORD *)v9[473];
            v19 = v18;
            for ( j = (_QWORD *)*v18; j != v19; j = (_QWORD *)*j )
            {
              if ( (struct _DEVICE_OBJECT *)v18[3] == a1 )
                v7 = *(__int64 **)(v18[4] + 64LL);
              v18 = j;
            }
            ExReleaseResourceLite((PERESOURCE)(v9 + 430));
            KeLeaveCriticalRegion();
            if ( v7 )
            {
LABEL_21:
              KeEnterCriticalRegion();
              if ( *((_BYTE *)v7 + 484) )
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v7[3] + 64) + 4232LL));
              ExAcquireResourceSharedLite((PERESOURCE)v7[21], 1u);
              if ( *((_DWORD *)v7 + 59) == 2 )
              {
                v16 = v7[504];
                if ( v16 )
                {
                  _InterlockedIncrement64((volatile signed __int64 *)(v16 + 24));
                  *a3 = -1LL;
                  v6 = 0;
                  *a2 = v7[504];
                }
              }
              if ( *((_BYTE *)v7 + 484) )
              {
                v17 = *(_QWORD *)(v7[3] + 64);
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 4232), 0xFFFFFFFF) == 1 )
                  DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel(v17);
              }
              ExReleaseResourceLite((PERESOURCE)v7[21]);
              KeLeaveCriticalRegion();
            }
          }
          v9 = (__int64 *)*v9;
        }
        while ( *v9 != *(_QWORD *)(v8 + 56) );
      }
      KeReleaseMutex((PRKMUTEX)(v8 + 72), 0);
      v8 = *(_QWORD *)v8;
    }
    while ( *(_QWORD *)v8 != qword_14015DD88 );
  }
  _InterlockedExchange64(&qword_14015DD98, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( !*a2 )
  {
    WdLogSingleEntry1(3LL, 0LL);
    WdLogGlobalForLineNumber = 2444;
  }
  return v6;
}
