/*
 * XREFs of ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x14018C2D0
 * Callers:
 *     ndisDispatchRequest @ 0x140029830 (ndisDispatchRequest.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004AD60 (-ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@.c)
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x14004AF60 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 *     ?ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z @ 0x14004D510 (-ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z.c)
 *     ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x140063390 (-ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1400647B0 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140064EE0 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z @ 0x1400650E0 (-ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z.c)
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x140067B00 (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 *     NdisGetVersion @ 0x14006D310 (NdisGetVersion.c)
 *     WPP_RECORDER_SF_Ld @ 0x140072CB0 (WPP_RECORDER_SF_Ld.c)
 *     ?ndisHandleLegacyTransport@@YAJPEBU_UNICODE_STRING@@@Z @ 0x140082440 (-ndisHandleLegacyTransport@@YAJPEBU_UNICODE_STRING@@@Z.c)
 *     ?UpdateIdleCondition@NdisWdfIdle@@QEAAXW4_NDIS_IDLE_CONDITION@@@Z @ 0x1400891A0 (-UpdateIdleCondition@NdisWdfIdle@@QEAAXW4_NDIS_IDLE_CONDITION@@@Z.c)
 *     ndisHandleUModePnPOp @ 0x140089FC0 (ndisHandleUModePnPOp.c)
 *     ?ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@@W4_NDIS_MP_REFTAG@@@Z @ 0x14009F190 (-ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@.c)
 *     ?ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAIPEAU_NDIS_QUERY_DEVICE_RESET@@@Z @ 0x14009F2E0 (-ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAIPEAU_NDIS_QUERY_DEVICE_RES.c)
 *     ?NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z @ 0x1400B737C (-NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z.c)
 *     ?ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z @ 0x1400D3908 (-ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z.c)
 *     WdmlibIoValidateDeviceIoControlAccess @ 0x1400EBBA8 (WdmlibIoValidateDeviceIoControlAccess.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     ndisValidateNdisOffsetAndLengthInputString @ 0x140140F90 (ndisValidateNdisOffsetAndLengthInputString.c)
 *     ?ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z @ 0x140143938 (-ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z.c)
 *     ?ndisReinitializeHistograms@@YAJXZ @ 0x140143CD8 (-ndisReinitializeHistograms@@YAJXZ.c)
 *     ndisMoveUnicodeStringToNdisVarDataDesc @ 0x14014428C (ndisMoveUnicodeStringToNdisVarDataDesc.c)
 *     ndisValidateNdisVarDataDesc32InputString @ 0x1401442E8 (ndisValidateNdisVarDataDesc32InputString.c)
 *     ?ndisKnobIoctl@@YAJ_NKKKPEAXPEAK@Z @ 0x14014436C (-ndisKnobIoctl@@YAJ_NKKKPEAXPEAK@Z.c)
 *     ?ndisCollectAllStatisticsForIoctl@@YAJPEBUNDIS_COLLECT_ALL_STATISTICS_IN@@PEAUNDIS_COLLECT_ALL_STATISTICS_OUT@@KAEA_K@Z @ 0x140149E40 (-ndisCollectAllStatisticsForIoctl@@YAJPEBUNDIS_COLLECT_ALL_STATISTICS_IN@@PEAUNDIS_COLLECT_ALL_S.c)
 *     ?ndisCollectSingleStatisticForIoctl@@YAJPEBUNDIS_COLLECT_SINGLE_STATISTIC_IN@@PEAUNDIS_COLLECT_SINGLE_STATISTIC_OUT@@AEA_K@Z @ 0x140149F20 (-ndisCollectSingleStatisticForIoctl@@YAJPEBUNDIS_COLLECT_SINGLE_STATISTIC_IN@@PEAUNDIS_COLLECT_S.c)
 *     NdisIfAllocateNetLuidIndex @ 0x1401524D0 (NdisIfAllocateNetLuidIndex.c)
 *     ?ndisIfEnumerateNsiObjects@@YAJPEAU_NDIS_ENUM_NSI_OBJECTS@@IPEAI@Z @ 0x140152C10 (-ndisIfEnumerateNsiObjects@@YAJPEAU_NDIS_ENUM_NSI_OBJECTS@@IPEAI@Z.c)
 *     NdisIfFreeNetLuidIndex @ 0x1401713B0 (NdisIfFreeNetLuidIndex.c)
 *     ndisValidateEmbeddedBufferBounds @ 0x140173000 (ndisValidateEmbeddedBufferBounds.c)
 *     ?ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z @ 0x140173080 (-ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z.c)
 *     ndisValidateNdisOffsetAndLengthInputBufferBounds @ 0x140173620 (ndisValidateNdisOffsetAndLengthInputBufferBounds.c)
 *     ndisValidateNdisVarDataDescInputString @ 0x140174860 (ndisValidateNdisVarDataDescInputString.c)
 *     ndisPnpRefresh @ 0x1401748B0 (ndisPnpRefresh.c)
 *     ndisEnumerateInterfaces32 @ 0x14017CC80 (ndisEnumerateInterfaces32.c)
 *     ndisEnumerateInterfaces @ 0x140183920 (ndisEnumerateInterfaces.c)
 */

NTSTATUS __fastcall ndisHandlePnPRequest(struct _IRP *a1, __int64 a2, unsigned int a3, enum _NDIS_MP_REFTAG a4)
{
  __int64 v4; // r15
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int active; // edi
  _FILE_OBJECT *FileObject; // rax
  char *FsContext; // r10
  NTSTATUS result; // eax
  unsigned int LowPart; // eax
  char v12; // r12
  __int64 Length; // rdx
  unsigned __int64 Options; // r14
  _DWORD *p_Type; // rbx
  bool v16; // zf
  __int64 v17; // rax
  unsigned __int64 MasterIrp; // rdi
  unsigned int v19; // esi
  unsigned int v20; // ecx
  unsigned int v21; // edx
  _DWORD *Pool2; // rax
  unsigned int v23; // r12d
  void *v24; // rdx
  char *v25; // rcx
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned __int64 v29; // r14
  int v30; // edi
  unsigned __int64 v31; // rax
  NDIS_STATUS v32; // edi
  int v33; // eax
  UINT Version; // eax
  bool v35; // cf
  unsigned int v36; // r13d
  struct _NDIS_MINIPORT_BLOCK *v37; // r14
  struct _NDIS_MINIPORT_BLOCK *v38; // rsi
  int v39; // r9d
  int v40; // edi
  int v41; // r9d
  int v42; // edi
  enum _NDIS_IDLE_CONDITION v43; // edi
  struct _NDIS_MINIPORT_BLOCK *v44; // rax
  struct _NDIS_MINIPORT_BLOCK *v45; // rsi
  unsigned int Flags; // eax
  struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *v47; // rax
  struct _NDIS_MINIPORT_BLOCK *v48; // rcx
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax
  __int32 v50; // eax
  unsigned int v51; // eax
  unsigned int v52; // eax
  unsigned int v53; // eax
  unsigned int v54; // eax
  bool v55; // zf
  int v56; // eax
  struct _NDIS_MINIPORT_BLOCK **v57; // [rsp+30h] [rbp-39h]
  struct _NDIS_MINIPORT_BLOCK *v58; // [rsp+40h] [rbp-29h] BYREF
  struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *v59[2]; // [rsp+48h] [rbp-21h] BYREF
  struct _UNICODE_STRING v60; // [rsp+58h] [rbp-11h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-1h] BYREF
  void *v62; // [rsp+D0h] [rbp+67h] BYREF
  void *Src; // [rsp+D8h] [rbp+6Fh] BYREF
  size_t Size; // [rsp+E0h] [rbp+77h]
  unsigned int pNetLuidIndex; // [rsp+E8h] [rbp+7Fh] BYREF

  v4 = 0LL;
  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  DestinationString = 0LL;
  active = 0;
  LODWORD(Src) = 0;
  LODWORD(v62) = 0;
  FileObject = CurrentStackLocation->FileObject;
  pNetLuidIndex = 0;
  v58 = 0LL;
  *(_QWORD *)&v60.Length = CurrentStackLocation;
  FsContext = (char *)FileObject->FsContext;
  v59[0] = (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext;
  if ( !FsContext )
    return -1073741809;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v12 = *FsContext;
  if ( (LowPart & 3) != 0 )
    return -1073741811;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  p_Type = &a1->AssociatedIrp.MasterIrp->Type;
  LODWORD(Size) = CurrentStackLocation->Parameters.Read.Length;
  if ( LowPart <= 0x170008 )
  {
    if ( LowPart != 1507336 )
    {
      if ( LowPart != 1198084 && LowPart != 1198092 && LowPart != 1214472 && LowPart != 1214480 )
        return active;
      active = ndisKnobIoctl(FsContext[1] != 0, LowPart, Options, Length, p_Type, (unsigned int *)&v62);
      v16 = active == 0;
      goto LABEL_169;
    }
    if ( v12 )
    {
      if ( !IoIs32bitProcess(a1) )
      {
LABEL_27:
        if ( (unsigned int)Options < 0x48 )
        {
          active = -1073741789;
          goto LABEL_39;
        }
        v26 = *((unsigned __int16 *)p_Type + 13)
            + *((unsigned __int16 *)p_Type + 21)
            + *((unsigned __int16 *)p_Type + 29);
        v27 = v26 + p_Type[4];
        if ( v27 < v26 )
          goto LABEL_38;
        v28 = v27 + 72;
        if ( v28 < 0x48 )
          goto LABEL_38;
        if ( (unsigned int)Options < v28 )
        {
          active = -1073741789;
          goto LABEL_39;
        }
        if ( ndisValidateNdisVarDataDescInputString(
               (unsigned __int64)p_Type,
               Options,
               (unsigned __int16 *)p_Type + 12,
               (__int64)(p_Type + 6))
          && ndisValidateNdisVarDataDescInputString(
               (unsigned __int64)p_Type,
               Options,
               (unsigned __int16 *)p_Type + 20,
               (__int64)(p_Type + 10))
          && ndisValidateNdisVarDataDescInputString(
               (unsigned __int64)p_Type,
               Options,
               (unsigned __int16 *)p_Type + 28,
               (__int64)(p_Type + 14))
          && ndisValidateEmbeddedBufferBounds(
               (unsigned __int64)p_Type,
               Options,
               (unsigned __int64)(p_Type + 2),
               0xCu,
               p_Type[2],
               p_Type[4],
               8,
               (unsigned __int64 *)p_Type + 1) )
        {
          active = ndisHandleUModePnPOp((__int64)p_Type);
        }
        else
        {
LABEL_38:
          active = -1073741811;
        }
LABEL_39:
        if ( !v4 )
          return active;
LABEL_40:
        ExFreePoolWithTag((PVOID)v4, 0);
        return active;
      }
      v17 = *(_QWORD *)&v60.Length;
      MasterIrp = (unsigned __int64)a1->AssociatedIrp.MasterIrp;
      Src = 0LL;
      v60 = 0LL;
      v19 = *(_DWORD *)(v17 + 16);
      if ( (unsigned int)Options >= 0x28 )
      {
        v20 = *(unsigned __int16 *)(MasterIrp + 18)
            + *(unsigned __int16 *)(MasterIrp + 26)
            + *(unsigned __int16 *)(MasterIrp + 34);
        v21 = v20 + *(_DWORD *)(MasterIrp + 12);
        if ( v21 < v20 || v21 >= 0xFFFFFFD8 )
          return -1073741811;
        if ( (unsigned int)Options >= v21 + 40 )
        {
          if ( v21 < 0xFFFFFFB8 )
          {
            LODWORD(Options) = v21 + 80;
            if ( v21 + 80 >= 8 )
            {
              Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)Options, 538985550);
              v4 = (__int64)Pool2;
              if ( !Pool2 )
                return -1073741670;
              *Pool2 = *(_DWORD *)MasterIrp;
              Pool2[1] = *(_DWORD *)(MasterIrp + 4);
              p_Type = Pool2;
              v62 = Pool2 + 18;
              if ( !ndisValidateNdisVarDataDesc32InputString(
                      MasterIrp,
                      v19,
                      (unsigned __int16 *)(MasterIrp + 16),
                      (__int64)&v60)
                || (ndisMoveUnicodeStringToNdisVarDataDesc((__int64)&v60, v4, &v62, v4 + 24),
                    !ndisValidateNdisVarDataDesc32InputString(
                       MasterIrp,
                       v19,
                       (unsigned __int16 *)(MasterIrp + 24),
                       (__int64)&v60))
                || (ndisMoveUnicodeStringToNdisVarDataDesc((__int64)&v60, v4, &v62, v4 + 40),
                    !ndisValidateNdisVarDataDesc32InputString(
                       MasterIrp,
                       v19,
                       (unsigned __int16 *)(MasterIrp + 32),
                       (__int64)&v60))
                || (ndisMoveUnicodeStringToNdisVarDataDesc((__int64)&v60, v4, &v62, v4 + 56),
                    v23 = *(_DWORD *)(MasterIrp + 12),
                    !ndisValidateEmbeddedBufferBounds(
                       MasterIrp,
                       v19,
                       MasterIrp + 8,
                       8u,
                       *(_DWORD *)(MasterIrp + 8),
                       v23,
                       4,
                       (unsigned __int64 *)&Src)) )
              {
                active = -1073741811;
                goto LABEL_40;
              }
              v24 = Src;
              v25 = (char *)(((unsigned __int64)v62 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
              *(_DWORD *)(v4 + 16) = v23;
              *(_QWORD *)(v4 + 8) = &v25[-v4];
              memmove(v25, v24, v23);
              goto LABEL_27;
            }
          }
          return -1073741811;
        }
      }
      return -1073741789;
    }
    return -1073741790;
  }
  if ( LowPart <= 0x170804 )
  {
    if ( LowPart != 1509380 )
    {
      switch ( LowPart )
      {
        case 0x170010u:
          if ( IoIs32bitProcess(a1) )
          {
            v29 = (unsigned int)Size;
            if ( (unsigned int)Size >= 0x20 )
            {
              v30 = ndisEnumerateInterfaces32((char *)p_Type, (unsigned int)Size, &v62);
              v31 = (unsigned int)v62;
              a1->IoStatus.Information = v29;
              a1->IoStatus.Information = v31;
              return v30;
            }
          }
          else if ( (unsigned int)Size >= 0x30 )
          {
            result = ndisEnumerateInterfaces((char *)p_Type, (unsigned int)Size, &v62);
            a1->IoStatus.Information = (unsigned int)v62;
            return result;
          }
LABEL_51:
          v32 = -1073741789;
LABEL_52:
          a1->IoStatus.Information = 0LL;
          return v32;
        case 0x170014u:
          if ( !v12 )
            return -1073741790;
          active = -1073741811;
          if ( !(_DWORD)Options || (Options & 1) != 0 )
            return active;
          *((_WORD *)p_Type + (Options >> 1) - 1) = 0;
          RtlInitUnicodeString(&DestinationString, (PCWSTR)p_Type);
          return ndisHandleLegacyTransport(&DestinationString);
        case 0x170020u:
          if ( (unsigned int)Length >= 4 )
          {
            Version = NdisGetVersion();
            v35 = (unsigned int)Size < 8;
            v36 = 4;
            *p_Type = Version;
            if ( !v35 )
            {
              v36 = 8;
              p_Type[1] = ndisChecked;
            }
            a1->IoStatus.Information = v36;
            return 0;
          }
          else
          {
            a1->IoStatus.Information = 0LL;
            return -1073741789;
          }
        case 0x170034u:
          NdisTraceLoggingRareFeaturePath((int)CurrentStackLocation);
          if ( !v12 )
            return -1073741790;
          if ( (unsigned int)Options < 0x30 || (unsigned int)Size < 0x30 )
            goto LABEL_51;
          result = ndisIfEnumerateNsiObjects((struct _NDIS_ENUM_NSI_OBJECTS *)p_Type, Size, (unsigned int *)&v62);
          a1->IoStatus.Information = (unsigned int)v62;
          return result;
        case 0x170040u:
          if ( !v12 )
            return -1073741790;
          if ( IoIs32bitProcess(a1) )
            return -1073741637;
          if ( (unsigned int)Options >= 0x10 )
          {
            if ( ndisPeriodicReceives )
            {
              if ( *(_WORD *)p_Type == 1 && *((_WORD *)p_Type + 1) == 16 )
              {
                v33 = p_Type[1];
                if ( v33 && (v33 == -1 || *((_QWORD *)p_Type + 1)) )
                {
                  ndisConfigurePeriodicReceives((struct _NDIS_SET_RECEIVE_RATE *)p_Type);
                  result = 0;
                  a1->IoStatus.Information = 0LL;
                }
                else
                {
                  a1->IoStatus.Information = 0LL;
                  return -1073741811;
                }
              }
              else
              {
                a1->IoStatus.Information = 0LL;
                return -1073741735;
              }
            }
            else
            {
              a1->IoStatus.Information = 0LL;
              return -1073741823;
            }
          }
          else
          {
            a1->IoStatus.Information = 0LL;
            return -1073741789;
          }
          return result;
        case 0x170044u:
          if ( !v12 )
            return -1073741790;
          if ( IoIs32bitProcess(a1) )
            return -1073741637;
          if ( (unsigned int)Options < 2 || (unsigned int)Size < 4 )
            goto LABEL_51;
          v32 = NdisIfAllocateNetLuidIndex(*(_WORD *)p_Type, &pNetLuidIndex);
          if ( v32 )
            goto LABEL_52;
          *p_Type = pNetLuidIndex;
          a1->IoStatus.Information = 4LL;
          return 0;
        case 0x170048u:
          if ( !v12 )
            return -1073741790;
          if ( IoIs32bitProcess(a1) )
            return -1073741637;
          if ( (unsigned int)Options < 8 )
            goto LABEL_87;
          result = NdisIfFreeNetLuidIndex(*((_WORD *)p_Type + 2), *p_Type);
          a1->IoStatus.Information = 0LL;
          return result;
        case 0x170054u:
          if ( !v12 )
            return -1073741790;
          if ( IoIs32bitProcess(a1) )
            return -1073741637;
          if ( (unsigned int)Options < 0x20C )
          {
LABEL_87:
            a1->IoStatus.Information = 0LL;
            return -1073741789;
          }
          else
          {
            result = ndisIfSetIfDescr((const WCHAR *)p_Type);
            a1->IoStatus.Information = 0LL;
          }
          return result;
        case 0x170058u:
        case 0x17005Cu:
        case 0x170060u:
          return -1073741637;
        case 0x170088u:
          if ( !(unsigned __int8)ndisAoAcRefMiniportForIoctl(
                                   (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                                   Options,
                                   (struct _NDIS_PM_NIC_ACTIVE *)p_Type,
                                   1,
                                   MPREF_AOAC_NA_ACQUIRE,
                                   (int *)&Src,
                                   &v58) )
            goto LABEL_126;
          v37 = v58;
          if ( (v58->Flags & 0x80u) == 0 )
            active = ndisNicActiveAcquire(v58, v59[0], (struct _NDIS_PM_NIC_ACTIVE *)p_Type, a1);
          ndisDereferenceMiniport(v37, 0);
          return active;
        case 0x17008Cu:
          if ( !(unsigned __int8)ndisAoAcRefMiniportForIoctl(
                                   (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                                   Options,
                                   (struct _NDIS_PM_NIC_ACTIVE *)p_Type,
                                   0,
                                   MPREF_AOAC_NA_RELEASE,
                                   (int *)&Src,
                                   &v58) )
            goto LABEL_126;
          v38 = v58;
          if ( (v58->Flags & 0x80u) == 0 )
            active = ndisNicActiveRelease(v58, v59[0], (struct _NDIS_PM_NIC_ACTIVE *)p_Type);
          ndisDereferenceMiniport(v38, 1u);
          return active;
        case 0x1700A0u:
          if ( !(unsigned __int8)ndisAoAcRefMiniportForIoctl(
                                   (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                                   Options,
                                   (struct _NDIS_PM_NIC_ACTIVE *)p_Type,
                                   1,
                                   MPREF_AOAC_WAKE_ENABLE,
                                   (int *)&Src,
                                   &v58) )
            goto LABEL_126;
          v40 = ndisAoAcEnableRemoteWake(v58, (struct _NDIS_PM_NIC_ACTIVE *)p_Type, 1, v39);
          ndisDereferenceMiniport(v58, 5u);
          return v40;
        case 0x1700A4u:
          if ( !(unsigned __int8)ndisAoAcRefMiniportForIoctl(
                                   (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                                   Options,
                                   (struct _NDIS_PM_NIC_ACTIVE *)p_Type,
                                   1,
                                   MPREF_AOAC_WAKE_DISABLE,
                                   (int *)&Src,
                                   &v58) )
            goto LABEL_126;
          v42 = ndisAoAcEnableRemoteWake(v58, (struct _NDIS_PM_NIC_ACTIVE *)p_Type, 0, v41);
          ndisDereferenceMiniport(v58, 6u);
          return v42;
        case 0x1700ACu:
          if ( !v12 )
            return -1073741790;
          if ( (unsigned int)Options < 0x18 )
            return -1073741789;
          if ( *((_QWORD *)FsContext + 6) )
            return -1073740024;
          else
            return ndisIfReferenceCompartmentForUser(
                     (struct _GUID *)(p_Type + 1),
                     p_Type[5],
                     (struct _NDIS_IF_COMPARTMENT_BLOCK **)FsContext + 6);
        case 0x1700B8u:
          if ( !v12 )
            return -1073741790;
          if ( (unsigned int)Options < 4 )
            return -1073741789;
          v43 = p_Type[1];
          v44 = ndisReferenceMiniportByNetLuid(*(union _NET_LUID_LH *)(p_Type + 2), 0x6Eu);
          v58 = v44;
          v45 = v44;
          if ( v44 )
          {
            Flags = v44->Flags;
            if ( (Flags & 0x80u) != 0 && (Flags & 0x100) == 0 )
            {
              v47 = v59[0];
              v48 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)v59[0] + 4);
              if ( v48 )
              {
                if ( v48 != v45 )
                {
                  ndisDereferenceMiniport(v45, 0x6Eu);
                  return -1073741816;
                }
              }
              else
              {
                *((_QWORD *)v59[0] + 4) = v45;
              }
              *((_DWORD *)v47 + 14) = v43;
              NdisWdfIdle::UpdateIdleCondition(v45->IdleSm.__ptr_.__value_, v43);
              CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport(v45);
              CxBlockFromMiniport->Chars.EvtCxUpdateIdleCondition(v45->MiniportAdapterContext, v43);
            }
            ndisDereferenceMiniport(v45, 0x6Eu);
          }
          else
          {
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Ld(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                3u,
                0xEu,
                0x19u,
                (struct _GUID *)&WPP_d2b6eda2588e3a9c075e152401def421_Traceguids,
                BYTE6(*((_QWORD *)p_Type + 1)),
                (*((_QWORD *)p_Type + 1) >> 24) & 0xFFFFFF);
            LODWORD(v4) = -1071448058;
          }
          LODWORD(Src) = v4;
          v50 = _InterlockedExchange((volatile __int32 *)&ndisIdleCondition, v43);
          if ( v50 != v43 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v57) = v43;
            WPP_RECORDER_SF_Ld(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0xEu,
              0x1Au,
              (struct _GUID *)&WPP_d2b6eda2588e3a9c075e152401def421_Traceguids,
              v50,
              v57);
          }
LABEL_126:
          result = (int)Src;
          break;
        default:
          return active;
      }
      return result;
    }
    if ( FsContext[2] )
    {
      if ( (unsigned int)Options >= 0x10 )
      {
        ndisPnpRefresh((struct _GUID *)p_Type, Length, a3);
        return 0;
      }
      return -1073741789;
    }
    return -1073741790;
  }
  if ( LowPart > 0x175C04 )
  {
    v53 = LowPart - 1530888;
    if ( v53 )
    {
      v54 = v53 - 12;
      if ( v54 )
      {
        if ( v54 != 16388 )
          return active;
        if ( v12 )
          return ndisReinitializeHistograms();
        return -1073741790;
      }
      if ( v12 )
      {
        if ( (unsigned int)Options >= 0xC )
        {
          if ( *p_Type != 1313105969 )
            return -1073741736;
          LODWORD(v62) = 0;
          v55 = *((_BYTE *)p_Type + 8) == 0;
          if ( *((_BYTE *)p_Type + 8) )
          {
            result = WdmlibIoValidateDeviceIoControlAccess(a1, Length);
            if ( result )
              return result;
            v55 = *((_BYTE *)p_Type + 8) == 0;
          }
          v56 = ndisCollectHistogramsForIoctl(p_Type[1], !v55, (wchar_t *)p_Type, Size, (unsigned int *)&v62);
          active = v56;
          if ( !v56 )
            goto LABEL_170;
          v16 = v56 == -2147483643;
LABEL_169:
          if ( v16 )
LABEL_170:
            a1->IoStatus.Information = (unsigned int)v62;
          return active;
        }
        return -1073741811;
      }
    }
    else if ( v12 )
    {
      if ( (unsigned int)Options >= 0x28 && (unsigned int)Length >= 0x90 )
        return ndisCollectSingleStatisticForIoctl(
                 (const struct NDIS_COLLECT_SINGLE_STATISTIC_IN *)p_Type,
                 (wchar_t *)p_Type,
                 &a1->IoStatus.Information);
      return -1073741789;
    }
    return -1073741790;
  }
  if ( LowPart != 1530884 )
  {
    v51 = LowPart - 1509384;
    if ( v51 )
    {
      v52 = v51 - 4;
      if ( !v52 )
      {
        result = ndisQueryDeviceReset(
                   (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                   Options,
                   Length,
                   (unsigned int *)&v62,
                   (struct _NDIS_QUERY_DEVICE_RESET *)p_Type);
        a1->IoStatus.Information = (unsigned int)v62;
        return result;
      }
      if ( v52 == 4 )
        return ndisInvokeDeviceReset(
                 (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                 Options,
                 (union _NET_LUID_LH *)p_Type,
                 a4);
      return active;
    }
    if ( FsContext[2] )
    {
      if ( (unsigned int)Options >= 0x1C )
      {
        v62 = 0LL;
        v60 = 0LL;
        *(_OWORD *)v59 = 0LL;
        if ( (unsigned __int8)ndisValidateNdisOffsetAndLengthInputString(
                                (__int64)a1,
                                (__int64)(p_Type + 1),
                                (__int64)v59)
          && (unsigned __int8)ndisValidateNdisOffsetAndLengthInputString(
                                (__int64)a1,
                                (__int64)(p_Type + 3),
                                (__int64)&v60)
          && ndisValidateNdisOffsetAndLengthInputBufferBounds((__int64)a1, p_Type + 5, (unsigned __int64 *)&v62) )
        {
          return ndisPnpInvokeTdi(*p_Type, (struct _UNICODE_STRING *)v59, &v60, v62, p_Type[6]);
        }
        return -1073741811;
      }
      return -1073741789;
    }
    return -1073741790;
  }
  if ( !v12 )
    return -1073741790;
  if ( (unsigned int)Options < 0x28 || (unsigned int)Length < 0x18 )
    return -1073741789;
  if ( *((_BYTE *)p_Type + 32) )
  {
    result = WdmlibIoValidateDeviceIoControlAccess(a1, Length);
    if ( result )
      return result;
    LODWORD(Length) = Size;
  }
  return ndisCollectAllStatisticsForIoctl(
           (const struct NDIS_COLLECT_ALL_STATISTICS_IN *)p_Type,
           (struct NDIS_COLLECT_ALL_STATISTICS_OUT *)p_Type,
           Length,
           &a1->IoStatus.Information);
}
