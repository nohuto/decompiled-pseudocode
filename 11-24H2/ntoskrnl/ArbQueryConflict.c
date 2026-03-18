/*
 * XREFs of ArbQueryConflict @ 0x140705D10
 * Callers:
 *     IopMemQueryConflict @ 0x140725D00 (IopMemQueryConflict.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ArbpBuildAlternative @ 0x140706968 (ArbpBuildAlternative.c)
 *     IoGetDeviceProperty @ 0x1408BCAC0 (IoGetDeviceProperty.c)
 *     RtlCopyRangeList @ 0x140A52170 (RtlCopyRangeList.c)
 *     RtlFreeRangeList @ 0x140A52340 (RtlFreeRangeList.c)
 *     RtlDeleteOwnersRanges @ 0x140A6BC10 (RtlDeleteOwnersRanges.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ArbQueryConflict(_QWORD *a1, __int64 a2)
{
  unsigned int v4; // r14d
  void *Pool2; // rsi
  int v6; // r13d
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  struct _DEVICE_OBJECT *v11; // rcx
  NTSTATUS DeviceProperty; // eax
  int v13; // ecx
  NTSTATUS v14; // eax
  int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r9
  void *v20; // r12
  void *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // r13
  _QWORD *v26; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+38h] [rbp-C8h]
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+48h] [rbp-B8h]
  __int64 v30; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+58h] [rbp-A8h]
  __int64 v32; // [rsp+60h] [rbp-A0h]
  __int64 v33; // [rsp+68h] [rbp-98h]
  _BYTE *v34; // [rsp+70h] [rbp-90h]
  __int64 *v35; // [rsp+78h] [rbp-88h]
  __int64 v36; // [rsp+80h] [rbp-80h]
  __int64 *v37; // [rsp+88h] [rbp-78h]
  __int16 v38; // [rsp+90h] [rbp-70h]
  _BYTE P[14]; // [rsp+92h] [rbp-6Eh] BYREF
  _BYTE v40[32]; // [rsp+A0h] [rbp-60h] BYREF
  struct _DEVICE_OBJECT *v41; // [rsp+C0h] [rbp-40h]
  int v42; // [rsp+C8h] [rbp-38h]
  int PropertyBuffer; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD v44[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v45; // [rsp+100h] [rbp+0h] BYREF
  __int64 v46; // [rsp+108h] [rbp+8h]

  memset_0(v40, 0, 0x60uLL);
  memset_0(&v45, 0, 0x40uLL);
  v26 = 0LL;
  v4 = 0;
  ResultLength = 0;
  Pool2 = 0LL;
  v6 = 10;
  memset_0(&v30, 0, 0x50uLL);
  v7 = a1[42];
  v8 = a1[5];
  v27 = a1[41];
  a1[42] = ArbpQueryConflictCallback;
  v9 = a1[6];
  a1[41] = &v26;
  v29 = v7;
  v10 = RtlCopyRangeList(v9, v8);
  if ( v10 < 0 )
    goto LABEL_21;
  v10 = ArbpBuildAlternative(a1, *(_QWORD *)(a2 + 8), &v45);
  if ( v10 < 0 )
    goto LABEL_21;
  memset(P, 0, sizeof(P));
  v31 = v46;
  v33 = v46;
  v35 = &v45;
  v37 = &v45;
  v34 = v40;
  v30 = v45;
  v32 = v45;
  v11 = *(struct _DEVICE_OBJECT **)a2;
  v36 = 1LL;
  v38 = 4;
  v42 = 4;
  v41 = v11;
  DeviceProperty = IoGetDeviceProperty(v11, DevicePropertyLegacyBusType, 4u, &PropertyBuffer, &ResultLength);
  v13 = PropertyBuffer;
  if ( DeviceProperty < 0 )
    v13 = 1;
  PropertyBuffer = v13;
  v14 = IoGetDeviceProperty(*(PDEVICE_OBJECT *)a2, DevicePropertyBusNumber, 4u, v44, &ResultLength);
  v15 = v44[0];
  if ( v14 < 0 )
    v15 = 0;
  v44[0] = v15;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
  {
    v10 = -1073741670;
LABEL_21:
    v24 = v27;
    goto LABEL_22;
  }
  v10 = guard_dispatch_icall_no_overrides(a1, &v30, v16, v17);
  if ( v10 < 0 )
    goto LABEL_21;
  RtlDeleteOwnersRanges(a1[6]);
  v10 = 0;
  v26 = 0LL;
  while ( 1 )
  {
    v32 = v30;
    v33 = v31;
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(a1, &v30, v18, v19) )
      break;
    if ( v4 == v6 )
    {
      v6 += 5;
      v20 = Pool2;
      v21 = (void *)ExAllocatePool2(0x100uLL);
      Pool2 = v21;
      if ( !v21 )
      {
        v10 = -1073741670;
        Pool2 = v20;
LABEL_20:
        v7 = v29;
        goto LABEL_21;
      }
      v22 = v4;
      memmove(v21, v20, 24LL * v4);
      ExFreePoolWithTag(v20, 0);
    }
    else
    {
      v22 = v4;
    }
    v23 = 3 * v22;
    v10 = 0;
    ++v4;
    if ( !v26 )
    {
      *((_QWORD *)Pool2 + v23 + 2) = -1LL;
      *((_QWORD *)Pool2 + v23) = 0LL;
      *((_QWORD *)Pool2 + v23 + 1) = 0LL;
      break;
    }
    *((_QWORD *)Pool2 + v23) = v26[3];
    *((_QWORD *)Pool2 + v23 + 1) = *v26;
    *((_QWORD *)Pool2 + v23 + 2) = v26[1];
    v10 = RtlDeleteOwnersRanges(a1[6]);
    if ( v10 < 0 )
      goto LABEL_20;
    v26 = 0LL;
    v10 = 0;
  }
  RtlFreeRangeList(a1[6]);
  v7 = v29;
  v24 = v27;
  a1[42] = v29;
  a1[41] = v24;
  **(_QWORD **)(a2 + 24) = Pool2;
  **(_DWORD **)(a2 + 16) = v4;
LABEL_22:
  if ( (v38 & 0x10) != 0 )
  {
    ExFreePoolWithTag(*(PVOID *)&P[6], 0);
    v38 &= ~0x10u;
  }
  if ( v10 < 0 )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    RtlFreeRangeList(a1[6]);
    a1[42] = v7;
    a1[41] = v24;
    **(_QWORD **)(a2 + 24) = 0LL;
  }
  return (unsigned int)v10;
}
