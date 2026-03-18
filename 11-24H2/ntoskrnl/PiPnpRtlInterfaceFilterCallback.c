/*
 * XREFs of PiPnpRtlInterfaceFilterCallback @ 0x1408D0AE0
 * Callers:
 *     PiDmCmObjectMatchCallback @ 0x1408CF9A0 (PiDmCmObjectMatchCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     _wcsicmp @ 0x1404FE3B0 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpGetObjectPropertyWorker @ 0x1408CD660 (_PnpGetObjectPropertyWorker.c)
 *     _PnpGetObjectProperty @ 0x1408CDFD0 (_PnpGetObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CE6A0 (PiPnpRtlObjectActionCallback.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1408D1170 (IopDeviceInterfaceFilterCallback.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlInterfaceFilterCallback(__int64 a1, unsigned __int16 *a2, unsigned int a3, __int64 a4)
{
  unsigned __int8 v5; // bl
  wchar_t *v9; // r15
  _WORD *v10; // rax
  __int64 (__fastcall *v12)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  __int64 v13; // r9
  unsigned __int8 v14; // al
  _QWORD *v15; // r13
  __int64 (__fastcall *v16)(PVOID, unsigned __int16 *, __int64, int, int, __int64); // rax
  int v17; // eax
  int ObjectPropertyWorker; // r13d
  __int64 v19; // rax
  int v20; // eax
  const wchar_t *Pool2; // rax
  int v22; // [rsp+20h] [rbp-E0h]
  _QWORD *v23; // [rsp+28h] [rbp-D8h]
  _BYTE v24[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v25; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v26; // [rsp+68h] [rbp-98h] BYREF
  __int64 (__fastcall *v27)(PVOID, unsigned __int16 *, __int64, int, int, __int64); // [rsp+70h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v29[2]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v30; // [rsp+A0h] [rbp-60h]
  const DEVPROPKEY *v31; // [rsp+B0h] [rbp-50h]
  int *v32; // [rsp+B8h] [rbp-48h]
  __int128 *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  ULONG *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  __int128 v37; // [rsp+E0h] [rbp-20h] BYREF

  v5 = 0;
  v9 = 0LL;
  v37 = 0LL;
  v24[0] = 0;
  v25 = 0;
  v26 = 0;
  if ( *(_QWORD *)a4 )
  {
    v15 = *(_QWORD **)&PiPnpRtlCtx;
    v31 = &DEVPKEY_DeviceInterface_ClassGuid;
    v32 = &v25;
    v33 = &v37;
    v16 = *(__int64 (__fastcall **)(PVOID, unsigned __int16 *, __int64, int, int, __int64))(*(_QWORD *)&PiPnpRtlCtx
                                                                                          + 488LL);
    v35 = &v26;
    *(_QWORD *)&DestinationString.Length = *(_QWORD *)&PiPnpRtlCtx;
    v29[0] = 0LL;
    v29[1] = 0LL;
    v34 = 16LL;
    v36 = 0LL;
    v27 = v16;
    v30 = 0LL;
    if ( v16 )
    {
      if ( v16 == PiPnpRtlObjectActionCallback )
      {
        v17 = PiPnpRtlObjectActionCallback(*(PVOID *)&PiPnpRtlCtx, a2, 3LL, 8, 1, (__int64)v29);
      }
      else
      {
        v23 = v29;
        v22 = 1;
        v17 = guard_dispatch_icall_no_overrides(*(_QWORD *)&PiPnpRtlCtx, a2, 3LL, 8LL);
      }
      if ( v17 == -1073741822 )
      {
        v27 = 0LL;
      }
      else
      {
        if ( v17 == -1073741536 )
        {
          ObjectPropertyWorker = v29[0];
          goto LABEL_20;
        }
        if ( v17 )
          return v5;
      }
    }
    ObjectPropertyWorker = PnpGetObjectPropertyWorker(
                             v15,
                             a2,
                             3u,
                             (HANDLE)v30,
                             *((const WCHAR **)&v30 + 1),
                             (__int64)v31,
                             v32,
                             v33,
                             v34,
                             v35,
                             v36);
    if ( v27 )
    {
      LODWORD(v29[0]) = ObjectPropertyWorker;
      if ( v27 == PiPnpRtlObjectActionCallback )
      {
        v20 = PiPnpRtlObjectActionCallback(*(PVOID *)&DestinationString.Length, a2, 3LL, 8, 2, (__int64)v29);
      }
      else
      {
        v23 = v29;
        v22 = 2;
        v20 = guard_dispatch_icall_no_overrides(*(_QWORD *)&DestinationString.Length, a2, 3LL, 8LL);
      }
      if ( v20 != -1073741822 )
      {
        if ( v20 == -1073741536 )
        {
          ObjectPropertyWorker = v29[0];
        }
        else if ( v20 )
        {
          return v5;
        }
      }
    }
LABEL_20:
    if ( ObjectPropertyWorker < 0 || v26 < 0x10 || v25 != 13 )
      return v5;
    v19 = **(_QWORD **)a4 - v37;
    if ( !v19 )
      v19 = *(_QWORD *)(*(_QWORD *)a4 + 8LL) - *((_QWORD *)&v37 + 1);
    if ( v19 )
      return v5;
  }
  v10 = *(_WORD **)(a4 + 8);
  if ( v10 && *v10 )
  {
    Pool2 = (const wchar_t *)ExAllocatePool2(0x100uLL);
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
                &v25,
                Pool2,
                0x190u,
                (__int64)&v26,
                0) < 0
      || v25 != 18
      || wcsicmp(*(const wchar_t **)(a4 + 8), v9) )
    {
      goto LABEL_40;
    }
  }
  if ( !*(_BYTE *)(a4 + 16)
    || (DestinationString = 0LL, RtlInitUnicodeStringEx(&DestinationString, a2) >= 0)
    && *(_QWORD *)(a1 + 288)
    && (int)guard_dispatch_icall_no_overrides(a1, &DestinationString, v24, 0LL) >= 0
    && v24[0] )
  {
    v12 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))(a4 + 24);
    v5 = 1;
    if ( v12 )
    {
      v13 = *(_QWORD *)(a4 + 32);
      if ( v12 == IopDeviceInterfaceFilterCallback )
        v14 = IopDeviceInterfaceFilterCallback(a1, a2, a3, v13, v22, v23);
      else
        v14 = guard_dispatch_icall_no_overrides(a1, a2, a3, v13);
      v5 = v14;
    }
  }
  if ( v9 )
LABEL_40:
    ExFreePoolWithTag(v9, 0x47706E50u);
  return v5;
}
