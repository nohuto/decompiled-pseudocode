/*
 * XREFs of ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x14015A1F0
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14000E580 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ndisLwmIoctlIrpHandler @ 0x14002C6B0 (ndisLwmIoctlIrpHandler.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14000AD50 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     ?ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z @ 0x14000B730 (-ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z.c)
 *     WPP_RECORDER_SF_qDq @ 0x140015E00 (WPP_RECORDER_SF_qDq.c)
 *     ?ndisConvertNdisStatusToNtStatusForIoctl@@YAJJHE@Z @ 0x14002BC20 (-ndisConvertNdisStatusToNtStatusForIoctl@@YAJJHE@Z.c)
 *     ndisIsOidAllowedFromUsermode @ 0x140050AB0 (ndisIsOidAllowedFromUsermode.c)
 *     ndisIsOidAllowedFromUsermode_0 @ 0x140051710 (ndisIsOidAllowedFromUsermode_0.c)
 *     ndisQueryStatisticsOids @ 0x140086E40 (ndisQueryStatisticsOids.c)
 *     ndisValidOid @ 0x140087640 (ndisValidOid.c)
 *     ndisMethodDeviceOid @ 0x1400C5904 (ndisMethodDeviceOid.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

__int64 __fastcall ndisMiniportOidIoctl(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_USER_OPEN_CONTEXT *a2,
        int a3,
        unsigned int a4,
        unsigned int Size,
        unsigned __int8 *Src,
        struct _MDL *MemoryDescriptorList,
        unsigned int *a8)
{
  __int64 v9; // r15
  unsigned int v10; // edi
  int v11; // edx
  _DWORD *v12; // rsi
  unsigned int v13; // eax
  unsigned int v14; // ecx
  int v15; // ecx
  unsigned __int8 *v16; // rsi
  int v17; // r8d
  NDIS_OID v18; // r12d
  int v19; // ecx
  int v20; // eax
  NDIS_REQUEST_TYPE RequestType; // ecx
  UINT BytesNeeded; // eax
  int v23; // edx
  unsigned int v24; // r15d
  _DWORD *v25; // rax
  _DWORD *v26; // r14
  ULONG v27; // ebx
  _DWORD *v28; // rax
  int v29; // eax
  char v30; // r8
  int v32; // ecx
  NDIS_OID v33; // r15d
  size_t ByteCount; // r14
  PVOID MappedSystemVa; // rsi
  void *Pool2; // rax
  void *v37; // rbx
  int v38; // eax
  unsigned int BytesWritten; // r9d
  int v40; // edx
  _DWORD *v41; // rax
  unsigned int v42; // r9d
  int v43; // edx
  int v44; // ecx
  __int64 v45; // r14
  int v46; // eax
  int v47; // ecx
  unsigned int v48; // r15d
  _DWORD *v49; // rax
  _DWORD *v50; // rdi
  __int64 v51; // rax
  ULONG Priority[2]; // [rsp+28h] [rbp-D8h]
  __int64 v53; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v54; // [rsp+58h] [rbp-A8h]
  int v55; // [rsp+60h] [rbp-A0h]
  char v56[8]; // [rsp+68h] [rbp-98h]
  struct _NDIS_OID_REQUEST v57; // [rsp+80h] [rbp-80h] BYREF

  v55 = a3;
  *(_QWORD *)v56 = a1;
  v54 = (__int64)a8;
  v9 = a4;
  memset(&v57, 0, 0xF8uLL);
  v10 = 0;
  v11 = v55;
  v12 = 0LL;
  LOBYTE(v53) = 0;
  *a8 = 0;
  if ( v11 != 1507484 )
  {
    switch ( v11 )
    {
      case 1507330:
        if ( (unsigned int)v9 < 4 )
          return (unsigned int)-1073741811;
        v33 = *(_DWORD *)Src;
        if ( !ndisIsOidAllowedFromUsermode(*(_DWORD *)Src) )
          return (unsigned int)-1073741790;
        if ( !ndisValidOid((__int64)a2, v33) )
          return (unsigned int)-1073741811;
        if ( MemoryDescriptorList )
        {
          ByteCount = MemoryDescriptorList->ByteCount;
          if ( (_DWORD)ByteCount )
          {
            if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
              MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
            else
              MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000000u);
            if ( !MappedSystemVa )
              return v10;
            Pool2 = (void *)ExAllocatePool2(64LL, ByteCount, 1835091022LL);
            v37 = Pool2;
            if ( !Pool2 )
              return (unsigned int)-1073741670;
            memmove(Pool2, MappedSystemVa, ByteCount);
LABEL_60:
            v38 = ndisQueryDeviceOid(a2, &v57, v33, v37, ByteCount);
            BytesWritten = v57.DATA.QUERY_INFORMATION.BytesWritten;
            v40 = v38;
            v41 = (_DWORD *)v54;
            *(_DWORD *)v54 = v57.DATA.QUERY_INFORMATION.BytesWritten;
            if ( BytesWritten > (unsigned int)ByteCount )
            {
              *v41 = 0;
              v10 = ndisConvertNdisStatusToNtStatusForIoctl(0, -1073676266, 0);
            }
            else
            {
              v10 = ndisConvertNdisStatusToNtStatusForIoctl(0, v40, 0);
              if ( !v43 && v42 && MappedSystemVa )
              {
                if ( !v37 )
                  return v10;
                memmove(MappedSystemVa, v37, v42);
LABEL_67:
                ExFreePoolWithTag(v37, 0);
                return v10;
              }
            }
            if ( !v37 )
              return v10;
            goto LABEL_67;
          }
        }
        else
        {
          LODWORD(ByteCount) = 0;
        }
        v37 = 0LL;
        MappedSystemVa = 0LL;
        goto LABEL_60;
      case 1507334:
        v45 = *((_QWORD *)a2 + 2);
        if ( !v45 )
          return (unsigned int)-1073741808;
        v24 = *(_DWORD *)v45;
        v26 = *(_DWORD **)(v45 + 8);
        goto LABEL_33;
      case 1507342:
        goto LABEL_29;
      case 1507368:
      case 1507372:
        if ( v11 == 1507372 )
        {
          if ( (unsigned int)v9 < 4 || ((unsigned __int8)Src & 3) != 0 || (v9 & 3) != 0 )
            return (unsigned int)-1073741811;
          v48 = (unsigned int)v9 >> 2;
          v49 = (_DWORD *)ExAllocatePool2(66LL, 4LL * v48, 1835091022LL);
          v12 = v49;
          if ( !v49 )
            return v10;
          memmove(v49, Src, 4LL * v48);
          v50 = v12;
        }
        else
        {
          v51 = *((_QWORD *)a2 + 2);
          if ( !v51 )
            return (unsigned int)-1073741808;
          v48 = *(_DWORD *)v51;
          v50 = *(_DWORD **)(v51 + 8);
        }
        if ( !ndisIsOidAllowedFromUsermode_0(v50, v48) )
        {
          v10 = -1073741790;
          goto LABEL_41;
        }
        Priority[0] = Size;
        v29 = ndisQueryStatisticsOids(
                *(__int64 *)v56,
                a2,
                (__int64)v50,
                v48,
                Src,
                *(size_t *)Priority,
                (_DWORD *)v54,
                1,
                &v53);
        v30 = 0;
        goto LABEL_40;
      case 1507376:
        if ( (unsigned int)v9 < 0xC || ((unsigned __int8)Src & 7) != 0 || !ndisValidOid((__int64)a2, *(_DWORD *)Src) )
          return (unsigned int)-1073741811;
        v46 = ndisMethodDeviceOid((__int64)a2, &v57, (int *)Src, v9, Size);
        *(_DWORD *)v54 = v57.DATA.METHOD_INFORMATION.BytesWritten + 8;
        v23 = v46;
        return (unsigned int)ndisConvertNdisStatusToNtStatusForIoctl(0, v23, 0);
      case 1507390:
        LOBYTE(v53) = 1;
LABEL_29:
        if ( (unsigned int)v9 < 4 || ((unsigned __int8)Src & 3) != 0 || (v9 & 3) != 0 )
          return (unsigned int)-1073741811;
        v24 = (unsigned int)v9 >> 2;
        v25 = (_DWORD *)ExAllocatePool2(66LL, 4LL * v24, 1835091022LL);
        v12 = v25;
        if ( !v25 )
          return v10;
        memmove(v25, Src, 4LL * v24);
        v26 = v12;
LABEL_33:
        if ( ndisIsOidAllowedFromUsermode_0(v26, v24) )
        {
          if ( MemoryDescriptorList )
          {
            v27 = MemoryDescriptorList->ByteCount;
            if ( v27 )
            {
              v28 = (MemoryDescriptorList->MdlFlags & 5) != 0
                  ? MemoryDescriptorList->MappedSystemVa
                  : MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000000u);
              if ( v28 )
              {
                Priority[0] = v27;
                v29 = ndisQueryStatisticsOids(
                        *(__int64 *)v56,
                        a2,
                        (__int64)v26,
                        v24,
                        v28,
                        *(size_t *)Priority,
                        (_DWORD *)v54,
                        0,
                        &v53);
                v30 = v53;
LABEL_40:
                v10 = ndisConvertNdisStatusToNtStatusForIoctl(0, v29, v30);
              }
            }
          }
        }
        else
        {
          v10 = -1073741790;
        }
LABEL_41:
        if ( v12 )
          ExFreePoolWithTag(v12, 0);
        return v10;
      default:
        return (unsigned int)-1073741822;
    }
  }
  if ( (unsigned int)v9 < 0x2C )
    return (unsigned int)-1073741811;
  if ( Size < 0x2C )
    return (unsigned int)-1073741811;
  if ( *Src != 0xB9 )
    return (unsigned int)-1073741811;
  if ( *((_WORD *)Src + 1) < 0x2Cu )
    return (unsigned int)-1073741811;
  v13 = *((unsigned __int16 *)Src + 20);
  if ( v13 < 0x2C )
    return (unsigned int)-1073741811;
  v14 = v9;
  if ( (unsigned int)v9 >= Size )
    v14 = Size;
  if ( v13 > v14 )
    return (unsigned int)-1073741811;
  if ( !Src[1] )
    return (unsigned int)-1071448060;
  if ( !ndisIsOidAllowedFromUsermode(*((_DWORD *)Src + 3)) )
    return (unsigned int)-1073741790;
  if ( !ndisValidOid((__int64)a2, v15) )
    return (unsigned int)-1073741637;
  v16 = &Src[*((unsigned __int16 *)Src + 20)];
  if ( ((unsigned __int8)v16 & 3) != 0 )
    return (unsigned int)-2147483646;
  if ( !*((_BYTE *)a2 + 24) && (*((_DWORD *)Src + 1) & 0xFFFFFFFD) != 0 )
    return (unsigned int)-1073741790;
  *(_DWORD *)&v57.NdisReserved[16] |= 8u;
  *(_QWORD *)&v57.NdisReserved[32] = &ndisIntReqIoctl;
  EtwActivityIdControl(3u, (LPGUID)&v57.NdisReserved[96]);
  v18 = *((_DWORD *)Src + 3);
  v57.RequestType = *((_DWORD *)Src + 1);
  v57.PortNumber = *((_DWORD *)Src + 2);
  v57.Header = (NDIS_OBJECT_HEADER)15466902;
  v57.DATA.QUERY_INFORMATION.Oid = v18;
  v57.DATA.QUERY_INFORMATION.InformationBuffer = v16;
  v57.DATA.QUERY_INFORMATION.InformationBufferLength = 0;
  if ( (unsigned int)v9 < Size )
    memset(&Src[v9], 0, Size - (unsigned int)v9);
  v19 = *((_DWORD *)Src + 1);
  if ( v19 == 2 || !v19 )
  {
    v57.DATA.QUERY_INFORMATION.InformationBufferLength = Size - *((unsigned __int16 *)Src + 20);
    memset(v16, 0, v57.DATA.QUERY_INFORMATION.InformationBufferLength);
    LOBYTE(v18) = v57.DATA.QUERY_INFORMATION.Oid;
  }
  else
  {
    v32 = v19 - 1;
    if ( v32 )
    {
      if ( v32 != 11 )
        return (unsigned int)-1073741811;
      v47 = *((unsigned __int16 *)Src + 20);
      v57.DATA.QUERY_INFORMATION.InformationBufferLength = v9 - v47;
      v57.DATA.QUERY_INFORMATION.BytesWritten = Size - v47;
      v57.DATA.QUERY_INFORMATION.BytesNeeded = *((_DWORD *)Src + 4);
    }
    else
    {
      v57.DATA.QUERY_INFORMATION.InformationBufferLength = v9 - *((unsigned __int16 *)Src + 20);
    }
  }
  v57.Timeout = *((_DWORD *)Src + 5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      v17,
      0xFu,
      (struct _GUID *)&WPP_a48ea93cdc4f3f22353657f4d507625f_Traceguids,
      (char)&v57,
      v18,
      *(_QWORD *)v56);
  v20 = ndisQuerySetMiniport(*((struct _NDIS_MINIPORT_BLOCK **)a2 + 1), 0LL, &v57, 0, 0LL);
  RequestType = v57.RequestType;
  *((_DWORD *)Src + 9) = v20;
  if ( RequestType == NdisRequestQueryStatistics || RequestType == NdisRequestQueryInformation )
  {
    *((_DWORD *)Src + 6) = v57.DATA.QUERY_INFORMATION.BytesWritten;
LABEL_23:
    BytesNeeded = v57.DATA.QUERY_INFORMATION.BytesNeeded;
LABEL_24:
    *((_DWORD *)Src + 8) = BytesNeeded;
    goto LABEL_25;
  }
  v44 = RequestType - 1;
  if ( !v44 )
  {
    *((_DWORD *)Src + 7) = v57.DATA.QUERY_INFORMATION.BytesWritten;
    goto LABEL_23;
  }
  if ( v44 == 11 )
  {
    *((_QWORD *)Src + 3) = *(_QWORD *)&v57.DATA.METHOD_INFORMATION.BytesWritten;
    BytesNeeded = v57.DATA.METHOD_INFORMATION.BytesNeeded;
    goto LABEL_24;
  }
LABEL_25:
  v23 = 0;
  *(_DWORD *)v54 = Size;
  return (unsigned int)ndisConvertNdisStatusToNtStatusForIoctl(0, v23, 0);
}
