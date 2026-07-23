/*
 * XREFs of PopDiagTraceThermalZoneEnumeration @ 0x1405D2E64
 * Callers:
 *     PopThermalWorker @ 0x140A36310 (PopThermalWorker.c)
 *     PopDiagInitialize @ 0x140C30FC0 (PopDiagInitialize.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140355DE8 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopSqmThermalZoneEnumeration @ 0x140765434 (PopSqmThermalZoneEnumeration.c)
 */

_UNKNOWN **__fastcall PopDiagTraceThermalZoneEnumeration(__int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned __int16 *v3; // r13
  void *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // r14
  unsigned int v7; // r15d
  unsigned int v8; // r8d
  unsigned int *v9; // r10
  unsigned int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  ULONG v19; // edx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // [rsp+68h] [rbp-A0h] BYREF
  int v24; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v25; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v26; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v27; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  __int64 v29; // [rsp+98h] [rbp-70h]
  int v30; // [rsp+A0h] [rbp-68h]
  int v31; // [rsp+A4h] [rbp-64h]
  unsigned int *v32; // [rsp+A8h] [rbp-60h]
  __int64 v33; // [rsp+B0h] [rbp-58h]
  __int64 v34; // [rsp+B8h] [rbp-50h]
  __int64 v35; // [rsp+C0h] [rbp-48h]
  __int64 v36; // [rsp+C8h] [rbp-40h]
  __int64 v37; // [rsp+D0h] [rbp-38h]
  __int64 v38; // [rsp+D8h] [rbp-30h]
  __int64 v39; // [rsp+E0h] [rbp-28h]
  _DWORD v40[10]; // [rsp+208h] [rbp+100h] BYREF
  _UNKNOWN *retaddr; // [rsp+260h] [rbp+158h] BYREF

  result = &retaddr;
  v26 = 0;
  LOWORD(v24) = 0;
  LOWORD(v23) = 0;
  v27 = 0;
  v25 = 0;
  if ( PopDiagHandleRegistered )
  {
    v3 = (unsigned __int16 *)(a1 + 1040);
    result = (_UNKNOWN **)IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a1 + 48), 0x67446F50u);
    v4 = result;
    if ( result )
    {
      v5 = *((_QWORD *)result[39] + 5);
      if ( v5 )
      {
        v6 = v5 + 128;
        LOWORD(v23) = *(_WORD *)(v5 + 128) >> 1;
        v27 = *(_DWORD *)(a1 + 132) / 0xAu;
        v26 = *(_DWORD *)(a1 + 140) / 0xAu;
        v25 = *(_DWORD *)(a1 + 188) / 0xAu;
        v7 = *(_DWORD *)(a1 + 136) / 0xAu;
        if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_ZONE_ENUMERATED) )
        {
          *(_QWORD *)&UserData.Size = 2LL;
          UserData.Ptr = (ULONGLONG)&v23;
          v8 = 6;
          v29 = *(_QWORD *)(v6 + 8);
          v9 = v40;
          v10 = 0;
          v31 = 0;
          v30 = 2 * (unsigned __int16)v23;
          v32 = &v27;
          v34 = a1 + 116;
          v36 = a1 + 120;
          v38 = a1 + 124;
          v33 = 4LL;
          v35 = 4LL;
          v37 = 4LL;
          v39 = 4LL;
          do
          {
            v11 = v10++;
            *v9 = *(unsigned int *)((char *)v9 + a1 + 112 - (_QWORD)v40 + 36) / 0xA;
            v12 = v8++;
            v12 *= 2LL;
            *(&UserData.Reserved + 2 * v12) = 0;
            *(&UserData.Ptr + v12) = (ULONGLONG)&v40[v11];
            *(&UserData.Size + 2 * v12) = 4;
            ++v9;
          }
          while ( v10 < 0xA );
          v13 = 2LL * v8;
          *(&UserData.Ptr + v13) = (ULONGLONG)&v26;
          *((_QWORD *)&UserData.Size + v13) = 4LL;
          v14 = v8 + 1;
          v15 = v8 + 2;
          v14 *= 2LL;
          *(&UserData.Ptr + v14) = (ULONGLONG)&v25;
          *((_QWORD *)&UserData.Size + v14) = 4LL;
          v16 = 2LL * v15;
          *(&UserData.Ptr + v16) = a1 + 192;
          *((_QWORD *)&UserData.Size + v16) = 4LL;
          v17 = v15 + 1;
          v15 += 2;
          v17 *= 2LL;
          v18 = 2LL * v15;
          *((_QWORD *)&UserData.Size + v17) = 4LL;
          *(&UserData.Ptr + v17) = a1 + 136;
          *(&UserData.Ptr + v18) = a1 + 196;
          *((_QWORD *)&UserData.Size + v18) = 4LL;
          v19 = *v3;
          LOWORD(v24) = *v3 >> 1;
          v20 = v15 + 1;
          v15 += 2;
          v20 *= 2LL;
          *(&UserData.Ptr + v20) = (ULONGLONG)&v24;
          *((_QWORD *)&UserData.Size + v20) = 2LL;
          v21 = 2LL * v15;
          *(&UserData.Ptr + v21) = *((_QWORD *)v3 + 1);
          *(&UserData.Size + 2 * v21) = v19;
          *(&UserData.Reserved + 2 * v21) = 0;
          v22 = 2LL * (v15 + 1);
          *(&UserData.Ptr + v22) = a1 + 200;
          *((_QWORD *)&UserData.Size + v22) = 4LL;
          EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_THERMAL_ZONE_ENUMERATED, 0LL, 0, 0LL, 0LL, 0x18u, &UserData);
        }
        PopSqmThermalZoneEnumeration(
          v6,
          (_DWORD)v3,
          v27,
          *(_DWORD *)(a1 + 116),
          *(_DWORD *)(a1 + 120),
          *(_DWORD *)(a1 + 124),
          *(_DWORD *)(a1 + 148) / 0xAu,
          *(_DWORD *)(a1 + 152) / 0xAu,
          v26,
          v25,
          v7,
          *(_DWORD *)(a1 + 200));
        *(_BYTE *)(a1 + 65) |= 0x10u;
      }
      return (_UNKNOWN **)ObfDereferenceObjectWithTag(v4, 0x67446F50u);
    }
  }
  return result;
}
