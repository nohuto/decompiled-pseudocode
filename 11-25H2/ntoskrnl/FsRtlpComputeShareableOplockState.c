/*
 * XREFs of FsRtlpComputeShareableOplockState @ 0x1404E19F4
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1403EEA60 (FsRtlCheckOplockEx2.c)
 *     FsRtlpCancelOplockRHIrp @ 0x14041B390 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404E0B78 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1404E1CD0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x1404E4B20 (FsRtlpOplockCleanup.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404E552C (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404E5DD0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x14057D7A4 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlCheckUpperOplock @ 0x1406FF010 (FsRtlCheckUpperOplock.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140A17B60 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     Feature_5645_7108__private_IsEnabledDeviceUsageNoInline @ 0x14057D1B8 (Feature_5645_7108__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall FsRtlpComputeShareableOplockState(__int64 *a1)
{
  int *v1; // rdi
  __int64 *v2; // rbx
  __int64 *v3; // rdx
  int v4; // r14d
  _QWORD *v5; // rax
  NTSTATUS result; // eax
  int v7; // esi
  char v8; // r8
  int v9; // r14d
  int v10; // [rsp+30h] [rbp-49h] BYREF
  __int64 *v11; // [rsp+38h] [rbp-41h] BYREF
  __int64 v12; // [rsp+40h] [rbp-39h] BYREF
  __int64 v13; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14[2]; // [rsp+50h] [rbp-29h] BYREF
  __int64 **v15; // [rsp+70h] [rbp-9h]
  int v16; // [rsp+78h] [rbp-1h]
  int v17; // [rsp+7Ch] [rbp+3h]
  int *v18; // [rsp+80h] [rbp+7h]
  int v19; // [rsp+88h] [rbp+Fh]
  int v20; // [rsp+8Ch] [rbp+13h]
  __int64 *v21; // [rsp+90h] [rbp+17h]
  int v22; // [rsp+98h] [rbp+1Fh]
  int v23; // [rsp+9Ch] [rbp+23h]
  __int64 *v24; // [rsp+A0h] [rbp+27h]
  int v25; // [rsp+A8h] [rbp+2Fh]
  int v26; // [rsp+ACh] [rbp+33h]

  v1 = (int *)(a1 + 18);
  v2 = a1;
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v17 = 0;
    v20 = 0;
    v15 = &v11;
    v10 = *v1;
    v18 = &v10;
    v11 = a1;
    v16 = 8;
    v19 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06C30, (unsigned __int8 *)byte_140057C98, 0LL, 0LL, 4u, v14);
  }
  v3 = (__int64 *)v2[5];
  v4 = *v1 & 0x1010000;
  v5 = v2 + 7;
  if ( v3 == v2 + 5 )
  {
    if ( (_QWORD *)*v5 == v5 && (__int64 *)v2[9] == v2 + 9 )
    {
      Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(a1);
      result = v2[18] & 0x20 | 1;
      goto LABEL_29;
    }
    if ( (__int64 *)v2[7] == v2 + 7 )
    {
      v7 = 0;
      Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(a1);
      result = v2[18] & 0x20 | 0x3000;
      *((_DWORD *)v2 + 36) = result;
      a1 = (__int64 *)v2[9];
      if ( a1 == v2 + 9 )
        goto LABEL_30;
      while ( 1 )
      {
        if ( v7 )
        {
          result = a1[6] & 0xF00000;
          if ( result != v7 )
            break;
        }
        v7 = a1[6] & 0xF00000;
        *((_DWORD *)v2 + 36) |= v7;
        a1 = (__int64 *)*a1;
        if ( a1 == v2 + 9 )
          goto LABEL_30;
      }
    }
    Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(a1);
    result = v2[18] & 0x20 | 0x3000;
    goto LABEL_29;
  }
  if ( (_QWORD *)*v5 != v5 || (__int64 *)v2[9] != v2 + 9 )
  {
    ((void (*)(void))Feature_5645_7108__private_IsEnabledDeviceUsageNoInline)();
    result = v2[18] & 0x20 | 0xB000;
    goto LABEL_29;
  }
  v8 = 0;
  LOBYTE(a1) = 0;
  do
  {
    if ( *(_DWORD *)(v3[2] + 24) == 590400 )
    {
      v8 = 1;
    }
    else
    {
      LOBYTE(a1) = 1;
      if ( !v8 )
        goto LABEL_22;
    }
    if ( (_BYTE)a1 )
      goto LABEL_25;
LABEL_22:
    v3 = (__int64 *)*v3;
  }
  while ( v3 != v2 + 5 );
  if ( v8 )
  {
    if ( (_BYTE)a1 )
    {
LABEL_25:
      Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(a1);
      result = v2[18] & 0x20 | 0x1010;
      goto LABEL_29;
    }
    Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(a1);
    result = v2[18] & 0x20 | 0x1000;
  }
  else
  {
    Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(a1);
    result = v2[18] & 0x20 | 0x10;
  }
LABEL_29:
  *((_DWORD *)v2 + 36) = result;
LABEL_30:
  v9 = *((_DWORD *)v2 + 36) | v4;
  *((_DWORD *)v2 + 36) = v9;
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v15 = &v11;
    v11 = v2;
    v18 = &v10;
    v12 = v2[11];
    v21 = &v12;
    v13 = v2[12];
    v24 = &v13;
    v16 = 8;
    v10 = v9;
    v19 = 4;
    v22 = 8;
    v25 = 8;
    return tlgWriteTransfer_EtwWriteTransfer(
             (__int64)&dword_140E06C30,
             (unsigned __int8 *)word_140057C12,
             0LL,
             0LL,
             6u,
             v14);
  }
  return result;
}
