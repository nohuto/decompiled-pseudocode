/*
 * XREFs of ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x140166D10
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1400110C0 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ndisLwmIoctlIrpHandler @ 0x1400294D0 (ndisLwmIoctlIrpHandler.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1400130E0 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_qDq @ 0x140024890 (WPP_RECORDER_SF_qDq.c)
 *     ndisQueryStatisticsOids @ 0x14003D180 (ndisQueryStatisticsOids.c)
 *     ndisValidOid @ 0x140061A40 (ndisValidOid.c)
 *     ?ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z @ 0x14006B200 (-ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z.c)
 *     ndisIsOidAllowedFromUsermode @ 0x14006B380 (ndisIsOidAllowedFromUsermode.c)
 *     ndisIsOidAllowedFromUsermode_0 @ 0x14006D2C0 (ndisIsOidAllowedFromUsermode_0.c)
 *     ?ndisConvertNdisStatusToNtStatusForIoctl@@YAJJHE@Z @ 0x14006D580 (-ndisConvertNdisStatusToNtStatusForIoctl@@YAJJHE@Z.c)
 *     ndisMethodDeviceOid @ 0x1400CCA34 (ndisMethodDeviceOid.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memset @ 0x1400EE380 (memset.c)
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
  unsigned int v13; // r9d
  unsigned int v14; // ecx
  int v15; // ecx
  __int64 v16; // r9
  unsigned __int8 *v17; // rsi
  int v18; // r8d
  NDIS_OID v19; // r12d
  int v20; // ecx
  int v21; // eax
  NDIS_REQUEST_TYPE RequestType; // ecx
  UINT BytesNeeded; // eax
  int v24; // edx
  unsigned int v25; // r15d
  _DWORD *v26; // rax
  _DWORD *v27; // r14
  ULONG v28; // ebx
  _DWORD *v29; // rax
  int v30; // eax
  char v31; // r8
  int v33; // ecx
  NDIS_OID v34; // r15d
  size_t ByteCount; // r14
  PVOID MappedSystemVa; // rsi
  void *Pool2; // rax
  void *v38; // rbx
  int v39; // eax
  unsigned int BytesWritten; // r9d
  int v41; // edx
  _DWORD *v42; // rax
  unsigned int v43; // r9d
  int v44; // edx
  int v45; // ecx
  __int64 v46; // r14
  int v47; // eax
  int v48; // ecx
  unsigned int v49; // r15d
  _DWORD *v50; // rax
  _DWORD *v51; // rdi
  __int64 v52; // rax
  ULONG Priority[2]; // [rsp+28h] [rbp-D8h]
  __int64 v54; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v55; // [rsp+58h] [rbp-A8h]
  int v56; // [rsp+60h] [rbp-A0h]
  char v57[8]; // [rsp+68h] [rbp-98h]
  struct _NDIS_OID_REQUEST v58; // [rsp+80h] [rbp-80h] BYREF

  v56 = a3;
  *(_QWORD *)v57 = a1;
  v55 = (__int64)a8;
  v9 = a4;
  memset(&v58, 0, 0xF8uLL);
  v10 = 0;
  v11 = v56;
  v12 = 0LL;
  LOBYTE(v54) = 0;
  *a8 = 0;
  if ( v11 != 1507484 )
  {
    switch ( v11 )
    {
      case 1507330:
        if ( (unsigned int)v9 < 4 )
          return (unsigned int)-1073741811;
        v34 = *(_DWORD *)Src;
        if ( !ndisIsOidAllowedFromUsermode(*(_DWORD *)Src) )
          return (unsigned int)-1073741790;
        if ( !ndisValidOid((__int64)a2, v34) )
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
            Pool2 = (void *)ExAllocatePool2(64LL, ByteCount, 1835091022);
            v38 = Pool2;
            if ( !Pool2 )
              return (unsigned int)-1073741670;
            memmove(Pool2, MappedSystemVa, ByteCount);
LABEL_60:
            v39 = ndisQueryDeviceOid(a2, &v58, v34, v38, ByteCount);
            BytesWritten = v58.DATA.QUERY_INFORMATION.BytesWritten;
            v41 = v39;
            v42 = (_DWORD *)v55;
            *(_DWORD *)v55 = v58.DATA.QUERY_INFORMATION.BytesWritten;
            if ( BytesWritten > (unsigned int)ByteCount )
            {
              *v42 = 0;
              v10 = ndisConvertNdisStatusToNtStatusForIoctl(0, -1073676266, 0);
            }
            else
            {
              v10 = ndisConvertNdisStatusToNtStatusForIoctl(0, v41, 0);
              if ( !v44 && v43 && MappedSystemVa )
              {
                if ( !v38 )
                  return v10;
                memmove(MappedSystemVa, v38, v43);
LABEL_67:
                ExFreePoolWithTag(v38, 0);
                return v10;
              }
            }
            if ( !v38 )
              return v10;
            goto LABEL_67;
          }
        }
        else
        {
          LODWORD(ByteCount) = 0;
        }
        v38 = 0LL;
        MappedSystemVa = 0LL;
        goto LABEL_60;
      case 1507334:
        v46 = *((_QWORD *)a2 + 2);
        if ( !v46 )
          return (unsigned int)-1073741808;
        v25 = *(_DWORD *)v46;
        v27 = *(_DWORD **)(v46 + 8);
        goto LABEL_33;
      case 1507342:
        goto LABEL_29;
      case 1507368:
      case 1507372:
        if ( v11 == 1507372 )
        {
          if ( (unsigned int)v9 < 4 || ((unsigned __int8)Src & 3) != 0 || (v9 & 3) != 0 )
            return (unsigned int)-1073741811;
          v49 = (unsigned int)v9 >> 2;
          v50 = (_DWORD *)ExAllocatePool2(66LL, 4LL * v49, 1835091022);
          v12 = v50;
          if ( !v50 )
            return v10;
          memmove(v50, Src, 4LL * v49);
          v51 = v12;
        }
        else
        {
          v52 = *((_QWORD *)a2 + 2);
          if ( !v52 )
            return (unsigned int)-1073741808;
          v49 = *(_DWORD *)v52;
          v51 = *(_DWORD **)(v52 + 8);
        }
        if ( !ndisIsOidAllowedFromUsermode_0(v51, v49) )
        {
          v10 = -1073741790;
          goto LABEL_41;
        }
        Priority[0] = Size;
        v30 = ndisQueryStatisticsOids(
                *(__int64 *)v57,
                (__int64)a2,
                (__int64)v51,
                v49,
                Src,
                *(size_t *)Priority,
                (_DWORD *)v55,
                1,
                &v54);
        v31 = 0;
        goto LABEL_40;
      case 1507376:
        if ( (unsigned int)v9 < 0xC || ((unsigned __int8)Src & 7) != 0 || !ndisValidOid((__int64)a2, *(_DWORD *)Src) )
          return (unsigned int)-1073741811;
        v47 = ndisMethodDeviceOid((__int64)a2, &v58, (int *)Src, v9, Size);
        *(_DWORD *)v55 = v58.DATA.METHOD_INFORMATION.BytesWritten + 8;
        v24 = v47;
        return (unsigned int)ndisConvertNdisStatusToNtStatusForIoctl(0, v24, 0);
      case 1507390:
        LOBYTE(v54) = 1;
LABEL_29:
        if ( (unsigned int)v9 < 4 || ((unsigned __int8)Src & 3) != 0 || (v9 & 3) != 0 )
          return (unsigned int)-1073741811;
        v25 = (unsigned int)v9 >> 2;
        v26 = (_DWORD *)ExAllocatePool2(66LL, 4LL * v25, 1835091022);
        v12 = v26;
        if ( !v26 )
          return v10;
        memmove(v26, Src, 4LL * v25);
        v27 = v12;
LABEL_33:
        if ( ndisIsOidAllowedFromUsermode_0(v27, v25) )
        {
          if ( MemoryDescriptorList )
          {
            v28 = MemoryDescriptorList->ByteCount;
            if ( v28 )
            {
              v29 = (MemoryDescriptorList->MdlFlags & 5) != 0
                  ? MemoryDescriptorList->MappedSystemVa
                  : MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000000u);
              if ( v29 )
              {
                Priority[0] = v28;
                v30 = ndisQueryStatisticsOids(
                        *(__int64 *)v57,
                        (__int64)a2,
                        (__int64)v27,
                        v25,
                        v29,
                        *(size_t *)Priority,
                        (_DWORD *)v55,
                        0,
                        &v54);
                v31 = v54;
LABEL_40:
                v10 = ndisConvertNdisStatusToNtStatusForIoctl(0, v30, v31);
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
  v17 = &Src[v16];
  if ( (((_BYTE)Src + (_BYTE)v16) & 3) != 0 )
    return (unsigned int)-2147483646;
  if ( !*((_BYTE *)a2 + 24) && (*((_DWORD *)Src + 1) & 0xFFFFFFFD) != 0 )
    return (unsigned int)-1073741790;
  *(_DWORD *)&v58.NdisReserved[16] |= 8u;
  *(_QWORD *)&v58.NdisReserved[32] = &ndisIntReqIoctl;
  EtwActivityIdControl(3u, (LPGUID)&v58.NdisReserved[96]);
  v19 = *((_DWORD *)Src + 3);
  v58.RequestType = *((_DWORD *)Src + 1);
  v58.PortNumber = *((_DWORD *)Src + 2);
  v58.Header = (NDIS_OBJECT_HEADER)15466902;
  v58.DATA.QUERY_INFORMATION.Oid = v19;
  v58.DATA.QUERY_INFORMATION.InformationBuffer = v17;
  v58.DATA.QUERY_INFORMATION.InformationBufferLength = 0;
  if ( (unsigned int)v9 < Size )
    memset(&Src[v9], 0, Size - (unsigned int)v9);
  v20 = *((_DWORD *)Src + 1);
  if ( v20 == 2 || !v20 )
  {
    v58.DATA.QUERY_INFORMATION.InformationBufferLength = Size - *((unsigned __int16 *)Src + 20);
    memset(v17, 0, v58.DATA.QUERY_INFORMATION.InformationBufferLength);
    LOBYTE(v19) = v58.DATA.QUERY_INFORMATION.Oid;
  }
  else
  {
    v33 = v20 - 1;
    if ( v33 )
    {
      if ( v33 != 11 )
        return (unsigned int)-1073741811;
      v48 = *((unsigned __int16 *)Src + 20);
      v58.DATA.QUERY_INFORMATION.InformationBufferLength = v9 - v48;
      v58.DATA.QUERY_INFORMATION.BytesWritten = Size - v48;
      v58.DATA.QUERY_INFORMATION.BytesNeeded = *((_DWORD *)Src + 4);
    }
    else
    {
      v58.DATA.QUERY_INFORMATION.InformationBufferLength = v9 - *((unsigned __int16 *)Src + 20);
    }
  }
  v58.Timeout = *((_DWORD *)Src + 5);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      v18,
      0xFu,
      (struct _GUID *)&WPP_8ea48a87d6d93b281ca763654e4bfa07_Traceguids,
      (char)&v58,
      v19,
      *(_QWORD *)v57);
  v21 = ndisQuerySetMiniport(*((struct _NDIS_MINIPORT_BLOCK **)a2 + 1), 0LL, &v58, 0, 0LL);
  RequestType = v58.RequestType;
  *((_DWORD *)Src + 9) = v21;
  if ( RequestType == NdisRequestQueryStatistics || RequestType == NdisRequestQueryInformation )
  {
    *((_DWORD *)Src + 6) = v58.DATA.QUERY_INFORMATION.BytesWritten;
LABEL_23:
    BytesNeeded = v58.DATA.QUERY_INFORMATION.BytesNeeded;
LABEL_24:
    *((_DWORD *)Src + 8) = BytesNeeded;
    goto LABEL_25;
  }
  v45 = RequestType - 1;
  if ( !v45 )
  {
    *((_DWORD *)Src + 7) = v58.DATA.QUERY_INFORMATION.BytesWritten;
    goto LABEL_23;
  }
  if ( v45 == 11 )
  {
    *((_QWORD *)Src + 3) = *(_QWORD *)&v58.DATA.METHOD_INFORMATION.BytesWritten;
    BytesNeeded = v58.DATA.METHOD_INFORMATION.BytesNeeded;
    goto LABEL_24;
  }
LABEL_25:
  v24 = 0;
  *(_DWORD *)v55 = Size;
  return (unsigned int)ndisConvertNdisStatusToNtStatusForIoctl(0, v24, 0);
}
