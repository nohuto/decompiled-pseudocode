/*
 * XREFs of PiPnpRtlInterfaceFilterCallback @ 0x1408CE4D0
 * Callers:
 *     PiDmCmObjectMatchCallback @ 0x1408CD390 (PiDmCmObjectMatchCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpGetObjectPropertyWorker @ 0x1408CB050 (_PnpGetObjectPropertyWorker.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CC090 (PiPnpRtlObjectActionCallback.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1408CEB60 (IopDeviceInterfaceFilterCallback.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlInterfaceFilterCallback(__int64 a1, unsigned __int16 *a2, unsigned int a3, __int64 a4)
{
  unsigned __int8 v5; // bl
  wchar_t *v9; // r15
  _WORD *v10; // rax
  __int64 (__fastcall *v12)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  unsigned __int8 v13; // al
  _QWORD *v14; // r13
  __int64 (__fastcall *v15)(PVOID, unsigned __int16 *, __int64, int, int, __int64); // rax
  int v16; // eax
  int ObjectPropertyWorker; // r13d
  __int64 v18; // rax
  int v19; // eax
  const wchar_t *Pool2; // rax
  int v21; // [rsp+20h] [rbp-E0h]
  _QWORD *v22; // [rsp+28h] [rbp-D8h]
  int v23; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v24; // [rsp+68h] [rbp-98h] BYREF
  __int64 (__fastcall *v25)(PVOID, unsigned __int16 *, __int64, int, int, __int64); // [rsp+70h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v27[2]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v28; // [rsp+A0h] [rbp-60h]
  const DEVPROPKEY *v29; // [rsp+B0h] [rbp-50h]
  int *v30; // [rsp+B8h] [rbp-48h]
  __int128 *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  ULONG *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  __int128 v35; // [rsp+E0h] [rbp-20h] BYREF

  v5 = 0;
  v9 = 0LL;
  v35 = 0LL;
  v23 = 0;
  v24 = 0;
  if ( *(_QWORD *)a4 )
  {
    v14 = *(_QWORD **)&PiPnpRtlCtx;
    v29 = &DEVPKEY_DeviceInterface_ClassGuid;
    v30 = &v23;
    v31 = &v35;
    v15 = *(__int64 (__fastcall **)(PVOID, unsigned __int16 *, __int64, int, int, __int64))(*(_QWORD *)&PiPnpRtlCtx
                                                                                          + 488LL);
    v33 = &v24;
    *(_QWORD *)&DestinationString.Length = *(_QWORD *)&PiPnpRtlCtx;
    v27[0] = 0LL;
    v27[1] = 0LL;
    v32 = 16LL;
    v34 = 0LL;
    v25 = v15;
    v28 = 0LL;
    if ( v15 )
    {
      if ( v15 == PiPnpRtlObjectActionCallback )
      {
        v16 = PiPnpRtlObjectActionCallback(*(PVOID *)&PiPnpRtlCtx, a2, 3LL, 8, 1, (__int64)v27);
      }
      else
      {
        v22 = v27;
        v21 = 1;
        v16 = guard_dispatch_icall_no_overrides(*(_QWORD *)&PiPnpRtlCtx, a2);
      }
      if ( v16 == -1073741822 )
      {
        v25 = 0LL;
      }
      else
      {
        if ( v16 == -1073741536 )
        {
          ObjectPropertyWorker = v27[0];
          goto LABEL_19;
        }
        if ( v16 )
          return v5;
      }
    }
    ObjectPropertyWorker = PnpGetObjectPropertyWorker(
                             v14,
                             a2,
                             3,
                             (HANDLE)v28,
                             *((const WCHAR **)&v28 + 1),
                             (__int64)v29,
                             v30,
                             v31,
                             v32,
                             v33,
                             v34);
    if ( v25 )
    {
      LODWORD(v27[0]) = ObjectPropertyWorker;
      if ( v25 == PiPnpRtlObjectActionCallback )
      {
        v19 = PiPnpRtlObjectActionCallback(*(PVOID *)&DestinationString.Length, a2, 3LL, 8, 2, (__int64)v27);
      }
      else
      {
        v22 = v27;
        v21 = 2;
        v19 = guard_dispatch_icall_no_overrides(*(_QWORD *)&DestinationString.Length, a2);
      }
      if ( v19 != -1073741822 )
      {
        if ( v19 == -1073741536 )
        {
          ObjectPropertyWorker = v27[0];
        }
        else if ( v19 )
        {
          return v5;
        }
      }
    }
LABEL_19:
    if ( ObjectPropertyWorker < 0 || v24 < 0x10 || v23 != 13 )
      return v5;
    v18 = **(_QWORD **)a4 - v35;
    if ( !v18 )
      v18 = *(_QWORD *)(*(_QWORD *)a4 + 8LL) - *((_QWORD *)&v35 + 1);
    if ( v18 )
      return v5;
  }
  v10 = *(_WORD **)(a4 + 8);
  if ( v10 && *v10 )
  {
    Pool2 = (const wchar_t *)ExAllocatePool2(0x100uLL, 0x190uLL, 0x47706E50u);
    v9 = (wchar_t *)Pool2;
    if ( !Pool2 )
      return v5;
    if ( (int)PnpGetObjectProperty(
                *(_QWORD **)&PiPnpRtlCtx,
                a2,
                3u,
                0LL,
                0LL,
                (__int64)&DEVPKEY_Device_InstanceId,
                &v23,
                Pool2,
                0x190u,
                (__int64)&v24,
                0) < 0
      || v23 != 18
      || wcsicmp(*(const wchar_t **)(a4 + 8), v9) )
    {
      goto LABEL_39;
    }
  }
  if ( *(_BYTE *)(a4 + 16) )
  {
    DestinationString = 0LL;
    if ( RtlInitUnicodeStringEx(&DestinationString, a2) >= 0 && *(_QWORD *)(a1 + 288) )
      guard_dispatch_icall_no_overrides(a1, &DestinationString);
  }
  else
  {
    v12 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))(a4 + 24);
    v5 = 1;
    if ( v12 )
    {
      if ( v12 == IopDeviceInterfaceFilterCallback )
        v13 = IopDeviceInterfaceFilterCallback(a1, a2, a3, *(_QWORD *)(a4 + 32), v21, v22);
      else
        v13 = guard_dispatch_icall_no_overrides(a1, a2);
      v5 = v13;
    }
  }
  if ( v9 )
LABEL_39:
    ExFreePoolWithTag(v9, 0x47706E50u);
  return v5;
}
