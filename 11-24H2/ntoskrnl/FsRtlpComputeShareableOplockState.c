/*
 * XREFs of FsRtlpComputeShareableOplockState @ 0x140330A70
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1403DA5B0 (FsRtlCheckOplockEx2.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1404190F0 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404E0638 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1404E1388 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x1404E3BFC (FsRtlpOplockCleanup.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404E4608 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404E4EB0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x140580BC0 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlCheckUpperOplock @ 0x14070AEF0 (FsRtlCheckUpperOplock.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140A20DD0 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     Feature_5645_7108__private_IsEnabledDeviceUsageNoInline @ 0x1404F48B4 (Feature_5645_7108__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

int __fastcall FsRtlpComputeShareableOplockState(__int64 a1)
{
  int *v1; // rdi
  __int64 v2; // rbx
  _QWORD *v3; // rdx
  int v4; // r14d
  _QWORD *v5; // rax
  int result; // eax
  int v7; // r14d
  int v8; // esi
  __int64 *i; // rdx
  char v10; // r8
  int v11; // [rsp+30h] [rbp-49h] BYREF
  __int64 v12; // [rsp+38h] [rbp-41h] BYREF
  __int64 v13; // [rsp+40h] [rbp-39h] BYREF
  __int64 v14; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v15[32]; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v16; // [rsp+70h] [rbp-9h]
  int v17; // [rsp+78h] [rbp-1h]
  int v18; // [rsp+7Ch] [rbp+3h]
  int *v19; // [rsp+80h] [rbp+7h]
  int v20; // [rsp+88h] [rbp+Fh]
  int v21; // [rsp+8Ch] [rbp+13h]
  __int64 *v22; // [rsp+90h] [rbp+17h]
  int v23; // [rsp+98h] [rbp+1Fh]
  int v24; // [rsp+9Ch] [rbp+23h]
  __int64 *v25; // [rsp+A0h] [rbp+27h]
  int v26; // [rsp+A8h] [rbp+2Fh]
  int v27; // [rsp+ACh] [rbp+33h]

  v1 = (int *)(a1 + 144);
  v2 = a1;
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v18 = 0;
    v21 = 0;
    v16 = &v12;
    v11 = *v1;
    v19 = &v11;
    v12 = a1;
    v17 = 8;
    v20 = 4;
    tlgWriteTransfer_EtwWriteTransfer(&dword_140E06C30, &dword_14005907C, 0LL, 0LL, 4, v15);
  }
  v3 = *(_QWORD **)(v2 + 40);
  v4 = *v1 & 0x1010000;
  v5 = (_QWORD *)(v2 + 56);
  if ( v3 == (_QWORD *)(v2 + 40) )
  {
    if ( (_QWORD *)*v5 == v5 && *(_QWORD *)(v2 + 72) == v2 + 72 )
    {
      Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(a1);
      result = *(_DWORD *)(v2 + 144) & 0x20 | 1;
      goto LABEL_7;
    }
    if ( *(_QWORD *)(v2 + 56) != v2 + 56 )
    {
LABEL_6:
      Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(a1);
      result = *(_DWORD *)(v2 + 144) & 0x20 | 0x3000;
      goto LABEL_7;
    }
    v8 = 0;
    Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(a1);
    result = *(_DWORD *)(v2 + 144) & 0x20 | 0x3000;
    *(_DWORD *)(v2 + 144) = result;
    for ( i = *(__int64 **)(v2 + 72); i != (__int64 *)(v2 + 72); i = (__int64 *)*i )
    {
      if ( v8 )
      {
        result = i[6] & 0xF00000;
        if ( result != v8 )
          goto LABEL_6;
      }
      v8 = i[6] & 0xF00000;
      *(_DWORD *)(v2 + 144) |= v8;
    }
    goto LABEL_8;
  }
  if ( (_QWORD *)*v5 != v5 || *(_QWORD *)(v2 + 72) != v2 + 72 )
  {
    ((void (*)(void))Feature_5645_7108__private_IsEnabledDeviceUsageNoInline)();
    result = *(_DWORD *)(v2 + 144) & 0x20 | 0xB000;
    goto LABEL_7;
  }
  v10 = 0;
  LOBYTE(a1) = 0;
  do
  {
    if ( *(_DWORD *)(v3[2] + 24LL) == 590400 )
    {
      v10 = 1;
    }
    else
    {
      LOBYTE(a1) = 1;
      if ( !v10 )
        goto LABEL_25;
    }
    if ( (_BYTE)a1 )
      goto LABEL_29;
LABEL_25:
    v3 = (_QWORD *)*v3;
  }
  while ( v3 != (_QWORD *)(v2 + 40) );
  if ( v10 )
  {
    if ( !(_BYTE)a1 )
    {
      Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(a1);
      result = *(_DWORD *)(v2 + 144) & 0x20 | 0x1000;
      goto LABEL_7;
    }
LABEL_29:
    Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(a1);
    result = *(_DWORD *)(v2 + 144) & 0x20 | 0x1010;
    goto LABEL_7;
  }
  Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(a1);
  result = *(_DWORD *)(v2 + 144) & 0x20 | 0x10;
LABEL_7:
  *(_DWORD *)(v2 + 144) = result;
LABEL_8:
  v7 = *(_DWORD *)(v2 + 144) | v4;
  *(_DWORD *)(v2 + 144) = v7;
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v16 = &v12;
    v12 = v2;
    v19 = &v11;
    v13 = *(_QWORD *)(v2 + 88);
    v22 = &v13;
    v14 = *(_QWORD *)(v2 + 96);
    v25 = &v14;
    v17 = 8;
    v11 = v7;
    v20 = 4;
    v23 = 8;
    v26 = 8;
    return tlgWriteTransfer_EtwWriteTransfer(&dword_140E06C30, byte_1400590CD, 0LL, 0LL, 6, v15);
  }
  return result;
}
