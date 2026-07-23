/*
 * XREFs of ArbQueryConflict @ 0x1407038D0
 * Callers:
 *     IopMemQueryConflict @ 0x140723890 (IopMemQueryConflict.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ArbpBuildAlternative @ 0x140704528 (ArbpBuildAlternative.c)
 *     IoGetDeviceProperty @ 0x1408BA410 (IoGetDeviceProperty.c)
 *     RtlCopyRangeList @ 0x140A4A0A0 (RtlCopyRangeList.c)
 *     RtlFreeRangeList @ 0x140A4A270 (RtlFreeRangeList.c)
 *     RtlDeleteOwnersRanges @ 0x140A65170 (RtlDeleteOwnersRanges.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ArbQueryConflict(_QWORD *a1, __int64 a2)
{
  unsigned int v4; // r14d
  void *Pool2; // rsi
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  struct _DEVICE_OBJECT *v11; // rcx
  NTSTATUS DeviceProperty; // eax
  int v13; // ecx
  NTSTATUS v14; // eax
  int v15; // ecx
  void *v16; // r12
  void *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r13
  _QWORD *v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+38h] [rbp-C8h]
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h]
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h]
  __int64 v28; // [rsp+60h] [rbp-A0h]
  __int64 v29; // [rsp+68h] [rbp-98h]
  _BYTE *v30; // [rsp+70h] [rbp-90h]
  __int64 *v31; // [rsp+78h] [rbp-88h]
  __int64 v32; // [rsp+80h] [rbp-80h]
  __int64 *v33; // [rsp+88h] [rbp-78h]
  __int16 v34; // [rsp+90h] [rbp-70h]
  _BYTE P[14]; // [rsp+92h] [rbp-6Eh] BYREF
  _BYTE v36[32]; // [rsp+A0h] [rbp-60h] BYREF
  struct _DEVICE_OBJECT *v37; // [rsp+C0h] [rbp-40h]
  int v38; // [rsp+C8h] [rbp-38h]
  int PropertyBuffer; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD v40[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v41; // [rsp+100h] [rbp+0h] BYREF
  __int64 v42; // [rsp+108h] [rbp+8h]

  memset_0(v36, 0, 0x60uLL);
  memset_0(&v41, 0, 0x40uLL);
  v22 = 0LL;
  v4 = 0;
  ResultLength = 0;
  Pool2 = 0LL;
  LODWORD(v6) = 10;
  memset_0(&v26, 0, 0x50uLL);
  v7 = a1[42];
  v8 = a1[5];
  v23 = a1[41];
  a1[42] = ArbpQueryConflictCallback;
  v9 = a1[6];
  a1[41] = &v22;
  v25 = v7;
  v10 = RtlCopyRangeList(v9, v8);
  if ( v10 < 0 )
    goto LABEL_21;
  v10 = ArbpBuildAlternative(a1, *(_QWORD *)(a2 + 8), &v41);
  if ( v10 < 0 )
    goto LABEL_21;
  memset(P, 0, sizeof(P));
  v27 = v42;
  v29 = v42;
  v31 = &v41;
  v33 = &v41;
  v30 = v36;
  v26 = v41;
  v28 = v41;
  v11 = *(struct _DEVICE_OBJECT **)a2;
  v32 = 1LL;
  v34 = 4;
  v38 = 4;
  v37 = v11;
  DeviceProperty = IoGetDeviceProperty(v11, DevicePropertyLegacyBusType, 4u, &PropertyBuffer, &ResultLength);
  v13 = PropertyBuffer;
  if ( DeviceProperty < 0 )
    v13 = 1;
  PropertyBuffer = v13;
  v14 = IoGetDeviceProperty(*(PDEVICE_OBJECT *)a2, DevicePropertyBusNumber, 4u, v40, &ResultLength);
  v15 = v40[0];
  if ( v14 < 0 )
    v15 = 0;
  v40[0] = v15;
  Pool2 = (void *)ExAllocatePool2(0x100uLL, 0xF0uLL, 0x43627241u);
  if ( !Pool2 )
  {
    v10 = -1073741670;
LABEL_21:
    v20 = v23;
    goto LABEL_22;
  }
  v10 = guard_dispatch_icall_no_overrides(a1, &v26);
  if ( v10 < 0 )
    goto LABEL_21;
  RtlDeleteOwnersRanges(a1[6]);
  v10 = 0;
  v22 = 0LL;
  while ( 1 )
  {
    v28 = v26;
    v29 = v27;
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(a1, &v26) )
      break;
    if ( v4 == (_DWORD)v6 )
    {
      v6 = (unsigned int)(v6 + 5);
      v16 = Pool2;
      v17 = (void *)ExAllocatePool2(0x100uLL, 24 * v6, 0x43627241u);
      Pool2 = v17;
      if ( !v17 )
      {
        v10 = -1073741670;
        Pool2 = v16;
LABEL_20:
        v7 = v25;
        goto LABEL_21;
      }
      v18 = v4;
      memmove(v17, v16, 24LL * v4);
      ExFreePoolWithTag(v16, 0);
    }
    else
    {
      v18 = v4;
    }
    v19 = 3 * v18;
    v10 = 0;
    ++v4;
    if ( !v22 )
    {
      *((_QWORD *)Pool2 + v19 + 2) = -1LL;
      *((_QWORD *)Pool2 + v19) = 0LL;
      *((_QWORD *)Pool2 + v19 + 1) = 0LL;
      break;
    }
    *((_QWORD *)Pool2 + v19) = v22[3];
    *((_QWORD *)Pool2 + v19 + 1) = *v22;
    *((_QWORD *)Pool2 + v19 + 2) = v22[1];
    v10 = RtlDeleteOwnersRanges(a1[6]);
    if ( v10 < 0 )
      goto LABEL_20;
    v22 = 0LL;
    v10 = 0;
  }
  RtlFreeRangeList(a1[6]);
  v7 = v25;
  v20 = v23;
  a1[42] = v25;
  a1[41] = v20;
  **(_QWORD **)(a2 + 24) = Pool2;
  **(_DWORD **)(a2 + 16) = v4;
LABEL_22:
  if ( (v34 & 0x10) != 0 )
  {
    ExFreePoolWithTag(*(PVOID *)&P[6], 0);
    v34 &= ~0x10u;
  }
  if ( v10 < 0 )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    RtlFreeRangeList(a1[6]);
    a1[42] = v7;
    a1[41] = v20;
    **(_QWORD **)(a2 + 24) = 0LL;
  }
  return (unsigned int)v10;
}
