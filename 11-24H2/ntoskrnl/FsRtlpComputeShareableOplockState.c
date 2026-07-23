/*
 * XREFs of FsRtlpComputeShareableOplockState @ 0x1404DA8E8
 * Callers:
 *     FsRtlpOplockCleanup @ 0x1403CDA80 (FsRtlpOplockCleanup.c)
 *     FsRtlCheckOplockEx2 @ 0x1403CE7F0 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403CF664 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpCancelOplockRHIrp @ 0x140408EA0 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404D9C50 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404DAE94 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404DB6D0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x14057DFDC (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlCheckUpperOplock @ 0x140708AB0 (FsRtlCheckUpperOplock.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1409E0F60 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall FsRtlpComputeShareableOplockState(__int64 a1)
{
  int *v1; // rdi
  _QWORD *v3; // r8
  int v4; // r10d
  _QWORD *v5; // rax
  NTSTATUS result; // eax
  int v7; // eax
  __int64 *v8; // r8
  int v9; // ecx
  char v10; // dl
  char v11; // cl
  int v12; // eax
  int v13; // r10d
  int v14; // [rsp+34h] [rbp-35h] BYREF
  __int64 v15; // [rsp+38h] [rbp-31h] BYREF
  __int64 v16; // [rsp+40h] [rbp-29h] BYREF
  __int64 v17; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18[2]; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v19; // [rsp+70h] [rbp+7h]
  int v20; // [rsp+78h] [rbp+Fh]
  int v21; // [rsp+7Ch] [rbp+13h]
  int *v22; // [rsp+80h] [rbp+17h]
  int v23; // [rsp+88h] [rbp+1Fh]
  int v24; // [rsp+8Ch] [rbp+23h]
  __int64 *v25; // [rsp+90h] [rbp+27h]
  int v26; // [rsp+98h] [rbp+2Fh]
  int v27; // [rsp+9Ch] [rbp+33h]
  __int64 *v28; // [rsp+A0h] [rbp+37h]
  int v29; // [rsp+A8h] [rbp+3Fh]
  int v30; // [rsp+ACh] [rbp+43h]

  v1 = (int *)(a1 + 144);
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v21 = 0;
    v24 = 0;
    v19 = &v15;
    v14 = *v1;
    v22 = &v14;
    v15 = a1;
    v20 = 8;
    v23 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06C30, (unsigned __int8 *)&byte_140059CA7, 0LL, 0LL, 4u, v18);
  }
  v3 = *(_QWORD **)(a1 + 40);
  v4 = *v1 & 0x1010000;
  v5 = (_QWORD *)(a1 + 56);
  if ( v3 == (_QWORD *)(a1 + 40) )
  {
    if ( (_QWORD *)*v5 == v5 && *(_QWORD *)(a1 + 72) == a1 + 72 )
    {
      result = *v1 & 0x20 | 1;
      goto LABEL_30;
    }
    v7 = *(_DWORD *)(a1 + 144);
    if ( *(_QWORD *)(a1 + 56) == a1 + 56 )
    {
      v8 = *(__int64 **)(a1 + 72);
      result = *(_DWORD *)(a1 + 144) & 0x20 | 0x3000;
      v9 = 0;
      *(_DWORD *)(a1 + 144) = result;
      if ( v8 == (__int64 *)(a1 + 72) )
        goto LABEL_31;
      while ( 1 )
      {
        if ( v9 )
        {
          result = v8[6] & 0xF00000;
          if ( result != v9 )
            break;
        }
        v9 = v8[6] & 0xF00000;
        *(_DWORD *)(a1 + 144) |= v9;
        v8 = (__int64 *)*v8;
        if ( v8 == (__int64 *)(a1 + 72) )
          goto LABEL_31;
      }
      v7 = *(_DWORD *)(a1 + 144);
    }
    result = v7 & 0x20 | 0x3000;
    goto LABEL_30;
  }
  if ( (_QWORD *)*v5 != v5 || *(_QWORD *)(a1 + 72) != a1 + 72 )
  {
    result = *(_DWORD *)(a1 + 144) & 0x20 | 0xB000;
    goto LABEL_30;
  }
  v10 = 0;
  v11 = 0;
  do
  {
    if ( *(_DWORD *)(v3[2] + 24LL) == 590400 )
    {
      v10 = 1;
    }
    else
    {
      v11 = 1;
      if ( !v10 )
        goto LABEL_22;
    }
    if ( v11 )
      goto LABEL_25;
LABEL_22:
    v3 = (_QWORD *)*v3;
  }
  while ( v3 != (_QWORD *)(a1 + 40) );
  if ( v10 && v11 )
  {
LABEL_25:
    result = *(_DWORD *)(a1 + 144) & 0x20 | 0x1010;
    goto LABEL_30;
  }
  v12 = *(_DWORD *)(a1 + 144) & 0x20;
  if ( v10 )
    result = v12 | 0x1000;
  else
    result = v12 | 0x10;
LABEL_30:
  *(_DWORD *)(a1 + 144) = result;
LABEL_31:
  v13 = *(_DWORD *)(a1 + 144) | v4;
  *(_DWORD *)(a1 + 144) = v13;
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v19 = &v15;
    v15 = a1;
    v22 = &v14;
    v16 = *(_QWORD *)(a1 + 88);
    v25 = &v16;
    v17 = *(_QWORD *)(a1 + 96);
    v28 = &v17;
    v20 = 8;
    v14 = v13;
    v23 = 4;
    v26 = 8;
    v29 = 8;
    return tlgWriteTransfer_EtwWriteTransfer(
             (__int64)&dword_140E06C30,
             (unsigned __int8 *)byte_140059C21,
             0LL,
             0LL,
             6u,
             v18);
  }
  return result;
}
