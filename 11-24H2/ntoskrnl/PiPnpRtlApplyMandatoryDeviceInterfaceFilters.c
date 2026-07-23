/*
 * XREFs of PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x1408CF120
 * Callers:
 *     IopDeviceInterfaceFilterCallback @ 0x1408CEB60 (IopDeviceInterfaceFilterCallback.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1408CF3D0 (PiPnpRtlApplyMandatoryFilters.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpGetObjectPropertyWorker @ 0x1408CB050 (_PnpGetObjectPropertyWorker.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CC090 (PiPnpRtlObjectActionCallback.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1408CF5E0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryDeviceInterfaceFilters(
        __int64 a1,
        unsigned __int16 *a2,
        void *a3,
        __int64 a4,
        __int64 a5)
{
  ULONG_PTR v5; // r12
  unsigned int v6; // eax
  void *Pool2; // rdi
  void *i; // rbx
  _QWORD *v10; // r15
  __int64 (__fastcall *v11)(PVOID, unsigned __int16 *, __int64, int, int, __int64); // r14
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  unsigned int ObjectPropertyWorker; // eax
  int v17; // eax
  int v18; // [rsp+68h] [rbp-41h] BYREF
  int v19; // [rsp+6Ch] [rbp-3Dh] BYREF
  _QWORD v20[2]; // [rsp+78h] [rbp-31h] BYREF
  HANDLE v21; // [rsp+88h] [rbp-21h]
  const WCHAR *v22; // [rsp+90h] [rbp-19h]
  const DEVPROPKEY *v23; // [rsp+98h] [rbp-11h]
  int *v24; // [rsp+A0h] [rbp-9h]
  void *v25; // [rsp+A8h] [rbp-1h]
  ULONG v26; // [rsp+B0h] [rbp+7h]
  int v27; // [rsp+B4h] [rbp+Bh]
  ULONG *v28; // [rsp+B8h] [rbp+Fh]
  int v29; // [rsp+C0h] [rbp+17h]
  int v30; // [rsp+C4h] [rbp+1Bh]

  v19 = 0;
  LODWORD(v5) = 0;
  v6 = 200;
  Pool2 = 0LL;
  v18 = 200;
  for ( i = a3; ; i = a3 )
  {
    if ( v6 > (unsigned int)v5 )
    {
      v5 = v6;
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x47706E50u);
      Pool2 = (void *)ExAllocatePool2(0x100uLL, v5, 0x47706E50u);
      if ( !Pool2 )
        break;
    }
    v18 = 0;
    v10 = *(_QWORD **)&PiPnpRtlCtx;
    v20[0] = 0LL;
    v20[1] = 0LL;
    v27 = 0;
    v11 = *(__int64 (__fastcall **)(PVOID, unsigned __int16 *, __int64, int, int, __int64))(*(_QWORD *)&PiPnpRtlCtx
                                                                                          + 488LL);
    v30 = 0;
    v22 = 0LL;
    v29 = 0;
    v23 = &DEVPKEY_Device_InstanceId;
    v24 = &v19;
    v28 = (ULONG *)&v18;
    v21 = i;
    v25 = Pool2;
    v26 = v5;
    if ( v11 )
    {
      if ( v11 == PiPnpRtlObjectActionCallback )
        v12 = PiPnpRtlObjectActionCallback(*(PVOID *)&PiPnpRtlCtx, a2, 3LL, 8, 1, (__int64)v20);
      else
        v12 = guard_dispatch_icall_no_overrides(*(_QWORD *)&PiPnpRtlCtx, a2);
      if ( v12 == -1073741822 )
      {
        v11 = 0LL;
      }
      else
      {
        if ( v12 == -1073741536 )
          goto LABEL_11;
        if ( v12 )
          goto LABEL_29;
      }
    }
    ObjectPropertyWorker = PnpGetObjectPropertyWorker(v10, a2, 3, v21, v22, (__int64)v23, v24, v25, v26, v28, v29);
    v13 = ObjectPropertyWorker;
    if ( v11 )
    {
      LODWORD(v20[0]) = ObjectPropertyWorker;
      v17 = v11 == PiPnpRtlObjectActionCallback
          ? PiPnpRtlObjectActionCallback(v10, a2, 3LL, 8, 2, (__int64)v20)
          : guard_dispatch_icall_no_overrides(v10, a2);
      if ( v17 != -1073741822 )
      {
        if ( v17 == -1073741536 )
        {
LABEL_11:
          v13 = v20[0];
          goto LABEL_12;
        }
        if ( v17 )
        {
LABEL_29:
          v13 = -1073741595;
          v14 = -1073741595;
LABEL_14:
          if ( !Pool2 )
          {
            v13 = v14;
            if ( v14 < 0 )
              return v13;
            goto LABEL_16;
          }
LABEL_17:
          ExFreePoolWithTag(Pool2, 0x47706E50u);
          return v13;
        }
      }
    }
LABEL_12:
    if ( v13 != -1073741789 )
    {
      v14 = v13;
      if ( (v13 & 0x80000000) != 0 )
        goto LABEL_14;
      if ( !v18 && Pool2 )
      {
        ExFreePoolWithTag(Pool2, 0x47706E50u);
        Pool2 = 0LL;
      }
LABEL_16:
      v13 = PiPnpRtlApplyMandatoryDeviceFilters(a1, Pool2, 0LL, a4, a5);
      if ( !Pool2 )
        return v13;
      goto LABEL_17;
    }
    v6 = v18;
  }
  return (unsigned int)-1073741670;
}
