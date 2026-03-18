/*
 * XREFs of ACPIThermalDeviceControl @ 0x140037210
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qDqssdddd @ 0x140036488 (WPP_RECORDER_SF_qDqssdddd.c)
 *     WPP_RECORDER_SF_qDDqssdddd @ 0x140036C68 (WPP_RECORDER_SF_qDDqssdddd.c)
 *     ACPIThermalLoop @ 0x1400379FC (ACPIThermalLoop.c)
 *     WPP_RECORDER_SF_qqssdddd @ 0x140038BB8 (WPP_RECORDER_SF_qqssdddd.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x140042CD0 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlEnumChildren @ 0x140049858 (ACPIIoctlEnumChildren.c)
 *     ACPIIoctlEvalControlMethod @ 0x1400509E4 (ACPIIoctlEvalControlMethod.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

__int64 __fastcall ACPIThermalDeviceControl(ULONG_PTR a1, __int64 a2)
{
  union _LARGE_INTEGER v4; // r14
  __int64 DeviceExtension; // rax
  __int64 v6; // r13
  __int64 v7; // rsi
  _DWORD *v8; // r15
  unsigned int v9; // eax
  unsigned int v10; // eax
  const char *v11; // rdi
  const char *v12; // r12
  __int64 v13; // r9
  char *v14; // r14
  __int64 v15; // rcx
  unsigned int v16; // r12d
  KIRQL v17; // dl
  unsigned int v18; // edi
  __int64 v20; // rax
  _QWORD *v21; // rbx
  _QWORD *v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned __int8 *v25; // rax
  unsigned int v26; // eax
  unsigned __int8 *v27; // rax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned __int8 *v31; // rax
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  int v37; // [rsp+20h] [rbp-E0h]
  int v38; // [rsp+80h] [rbp-80h]
  union _LARGE_INTEGER v39; // [rsp+88h] [rbp-78h] BYREF
  union _LARGE_INTEGER v40; // [rsp+90h] [rbp-70h] BYREF
  union _LARGE_INTEGER v41; // [rsp+98h] [rbp-68h] BYREF
  union _LARGE_INTEGER v42; // [rsp+A0h] [rbp-60h] BYREF
  union _LARGE_INTEGER Time; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD *v44; // [rsp+B0h] [rbp-50h]
  struct _TIME_FIELDS v45; // [rsp+B8h] [rbp-48h] BYREF
  struct _TIME_FIELDS v46; // [rsp+C8h] [rbp-38h] BYREF
  struct _TIME_FIELDS v47; // [rsp+D8h] [rbp-28h] BYREF
  struct _TIME_FIELDS v48; // [rsp+E8h] [rbp-18h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+F8h] [rbp-8h] BYREF

  if ( *(_BYTE *)(a2 + 64) )
  {
    v18 = -1073741822;
    *(_DWORD *)(a2 + 48) = -1073741822;
    goto LABEL_13;
  }
  v4.QuadPart = MEMORY[0xFFFFF78000000008];
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = *(_QWORD *)(a2 + 184);
  v7 = DeviceExtension;
  v8 = *(_DWORD **)(DeviceExtension + 200);
  v9 = *(_DWORD *)(v6 + 24);
  if ( v9 > 0x32C018 )
  {
    v32 = v9 - 3325980;
    if ( !v32 )
      return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, a2, *(_QWORD *)(a2 + 184));
    v33 = v32 - 4;
    if ( !v33 )
      return (unsigned int)ACPIIoctlEnumChildren(a1, a2, *(_QWORD *)(a2 + 184));
    v34 = v33 - 28;
    if ( v34 )
    {
      v35 = v34 - 4;
      if ( v35 )
      {
        v36 = v35 - 4;
        if ( !v36 )
          return (unsigned int)ACPIIoctlEvalControlMethod(a1, a2, *(_QWORD *)(a2 + 184));
        if ( v36 != 4 )
          goto LABEL_48;
      }
      return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, a2, *(_QWORD *)(a2 + 184));
    }
    return (unsigned int)ACPIIoctlEvalControlMethod(a1, a2, *(_QWORD *)(a2 + 184));
  }
  if ( v9 == 3325976 )
    return (unsigned int)ACPIIoctlEvalControlMethod(a1, a2, *(_QWORD *)(a2 + 184));
  v10 = v9 - 2703488;
  if ( !v10 )
  {
    v11 = byte_140075488;
    v44 = *(_DWORD **)(a2 + 24);
    v12 = byte_140075488;
    Time = v4;
    TimeFields = 0LL;
    v38 = *v8 != *v44 ? 0x20000002 : 0;
    RtlTimeToTimeFields(&Time, &TimeFields);
    v14 = (char *)(v7 + 8);
    v15 = *(_QWORD *)(v7 + 8);
    if ( (v15 & 0x200000000000LL) != 0 )
    {
      v11 = *(const char **)(v7 + 608);
      if ( (v15 & 0x400000000000LL) != 0 )
        v12 = *(const char **)(v7 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDDqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)TimeFields.Minute,
        (unsigned int)TimeFields.Hour,
        v13,
        v37,
        a2,
        *v44,
        *v8,
        v7,
        (__int64)v11,
        (__int64)v12);
    v16 = v38;
    goto LABEL_11;
  }
  v23 = v10 - 24;
  if ( v23 )
  {
    v24 = v23 - 16364;
    if ( !v24 )
    {
      v25 = *(unsigned __int8 **)(a2 + 24);
      v41 = v4;
      v47 = 0LL;
      v8[25] = *v25;
      RtlTimeToTimeFields(&v41, &v47);
      v14 = (char *)(v7 + 8);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (unsigned int)v47.Minute,
          (unsigned int)v47.Hour,
          0xDu,
          v37);
      v16 = 536870924;
      goto LABEL_11;
    }
    v26 = v24 - 4;
    if ( !v26 )
    {
      v27 = *(unsigned __int8 **)(a2 + 24);
      v40 = v4;
      v46 = 0LL;
      v8[23] = *v27;
      RtlTimeToTimeFields(&v40, &v46);
      v14 = (char *)(v7 + 8);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (unsigned int)v46.Minute,
          (unsigned int)v46.Hour,
          0xEu,
          v37);
      v16 = 536870913;
      goto LABEL_11;
    }
    v28 = v26 - 4;
    if ( v28 )
    {
      v29 = v28 - 606068;
      if ( v29 )
      {
        if ( v29 == 4 )
          return (unsigned int)ACPIIoctlEvalControlMethod(a1, a2, *(_QWORD *)(a2 + 184));
LABEL_48:
        v18 = -1073741637;
        goto LABEL_49;
      }
      return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, a2, *(_QWORD *)(a2 + 184));
    }
    v31 = *(unsigned __int8 **)(a2 + 24);
    v39 = v4;
    v45 = 0LL;
    v8[24] = *v31;
    RtlTimeToTimeFields(&v39, &v45);
    v14 = (char *)(v7 + 8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)v45.Minute,
        (unsigned int)v45.Hour,
        0xFu,
        v37);
    v16 = 536871168;
  }
  else
  {
    v42 = v4;
    v16 = 0x20000000;
    v48 = 0LL;
    RtlTimeToTimeFields(&v42, &v48);
    v14 = (char *)(v7 + 8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqssdddd(WPP_GLOBAL_Control->DeviceExtension, v48.Minute, v48.Hour, 16);
  }
LABEL_11:
  v17 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalLock);
  if ( *v14 < 0 || (*(_DWORD *)(v7 + 192) & 0x8000000) != 0 )
  {
    KeReleaseSpinLock(&AcpiThermalLock, v17);
    *(_QWORD *)(a2 + 56) = 0LL;
    v18 = -1073741810;
    *(_DWORD *)(a2 + 48) = -1073741810;
LABEL_13:
    IofCompleteRequest((PIRP)a2, 0);
    return v18;
  }
  if ( *(_DWORD *)(v6 + 24) == 2703488 )
  {
    _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)ACPIThermalCancelRequest);
    if ( *(_BYTE *)(a2 + 68) )
    {
      if ( _InterlockedExchange64((volatile __int64 *)(a2 + 104), 0LL) )
      {
        KeReleaseSpinLock(&AcpiThermalLock, v17);
        v18 = -1073741536;
LABEL_49:
        *(_QWORD *)(a2 + 56) = 0LL;
        *(_DWORD *)(a2 + 48) = v18;
        goto LABEL_13;
      }
    }
  }
  v20 = *(_QWORD *)(a2 + 184);
  v21 = (_QWORD *)(a2 + 168);
  v18 = 259;
  *(_BYTE *)(v20 + 3) |= 1u;
  v22 = (_QWORD *)qword_140089C68;
  if ( *(__int64 **)qword_140089C68 != &AcpiThermalList )
    __fastfail(3u);
  *v21 = &AcpiThermalList;
  v21[1] = v22;
  *v22 = v21;
  qword_140089C68 = (__int64)v21;
  KeReleaseSpinLock(&AcpiThermalLock, v17);
  ACPIThermalLoop(v7, v16);
  return v18;
}
