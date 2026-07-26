/*
 * XREFs of ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x14017F9C0
 * Callers:
 *     ndisDispatchRequest @ 0x14002CA40 (ndisDispatchRequest.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z @ 0x140029D10 (-ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z.c)
 *     ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14002A450 (-ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@.c)
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x14002A650 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140038840 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x14003ACE0 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x14003C5F0 (-ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z @ 0x14003C7C0 (-ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x14004CDA0 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     NdisGetVersion @ 0x140052790 (NdisGetVersion.c)
 *     WPP_RECORDER_SF_Ld @ 0x140058010 (WPP_RECORDER_SF_Ld.c)
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x14005B860 (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 *     ?ndisHandleLegacyTransport@@YAJPEBU_UNICODE_STRING@@@Z @ 0x1400668D0 (-ndisHandleLegacyTransport@@YAJPEBU_UNICODE_STRING@@@Z.c)
 *     ?UpdateIdleCondition@NdisWdfIdle@@QEAAXW4_NDIS_IDLE_CONDITION@@@Z @ 0x14006CF80 (-UpdateIdleCondition@NdisWdfIdle@@QEAAXW4_NDIS_IDLE_CONDITION@@@Z.c)
 *     ndisHandleUModePnPOp @ 0x14006DBD0 (ndisHandleUModePnPOp.c)
 *     ?ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@@W4_NDIS_MP_REFTAG@@@Z @ 0x140095630 (-ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@.c)
 *     ?ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAIPEAU_NDIS_QUERY_DEVICE_RESET@@@Z @ 0x140095784 (-ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAIPEAU_NDIS_QUERY_DEVICE_RES.c)
 *     ?NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z @ 0x1400AF3EC (-NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z.c)
 *     ?ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z @ 0x1400CC31C (-ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z.c)
 *     WdmlibIoValidateDeviceIoControlAccess @ 0x1400E4C74 (WdmlibIoValidateDeviceIoControlAccess.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     ndisValidateNdisOffsetAndLengthInputString @ 0x140135E00 (ndisValidateNdisOffsetAndLengthInputString.c)
 *     ?ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z @ 0x140138938 (-ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z.c)
 *     ?ndisReinitializeHistograms@@YAJXZ @ 0x140138CD8 (-ndisReinitializeHistograms@@YAJXZ.c)
 *     ndisMoveUnicodeStringToNdisVarDataDesc @ 0x14013928C (ndisMoveUnicodeStringToNdisVarDataDesc.c)
 *     ndisValidateEmbeddedBufferBounds @ 0x1401392E8 (ndisValidateEmbeddedBufferBounds.c)
 *     ndisValidateNdisVarDataDesc32InputString @ 0x140139374 (ndisValidateNdisVarDataDesc32InputString.c)
 *     ndisValidateNdisVarDataDescInputString @ 0x1401393FC (ndisValidateNdisVarDataDescInputString.c)
 *     ?ndisKnobIoctl@@YAJ_NKKKPEAXPEAK@Z @ 0x140139484 (-ndisKnobIoctl@@YAJ_NKKKPEAXPEAK@Z.c)
 *     ?ndisCollectAllStatisticsForIoctl@@YAJPEBUNDIS_COLLECT_ALL_STATISTICS_IN@@PEAUNDIS_COLLECT_ALL_STATISTICS_OUT@@KAEA_K@Z @ 0x14013EF80 (-ndisCollectAllStatisticsForIoctl@@YAJPEBUNDIS_COLLECT_ALL_STATISTICS_IN@@PEAUNDIS_COLLECT_ALL_S.c)
 *     ?ndisCollectSingleStatisticForIoctl@@YAJPEBUNDIS_COLLECT_SINGLE_STATISTIC_IN@@PEAUNDIS_COLLECT_SINGLE_STATISTIC_OUT@@AEA_K@Z @ 0x14013F060 (-ndisCollectSingleStatisticForIoctl@@YAJPEBUNDIS_COLLECT_SINGLE_STATISTIC_IN@@PEAUNDIS_COLLECT_S.c)
 *     NdisIfAllocateNetLuidIndex @ 0x140147810 (NdisIfAllocateNetLuidIndex.c)
 *     ?ndisIfEnumerateNsiObjects@@YAJPEAU_NDIS_ENUM_NSI_OBJECTS@@IPEAI@Z @ 0x140147F44 (-ndisIfEnumerateNsiObjects@@YAJPEAU_NDIS_ENUM_NSI_OBJECTS@@IPEAI@Z.c)
 *     NdisIfFreeNetLuidIndex @ 0x140164DF0 (NdisIfFreeNetLuidIndex.c)
 *     ?ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z @ 0x140166780 (-ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z.c)
 *     ndisValidateNdisOffsetAndLengthInputBufferBounds @ 0x140167380 (ndisValidateNdisOffsetAndLengthInputBufferBounds.c)
 *     ndisPnpRefresh @ 0x140168170 (ndisPnpRefresh.c)
 *     ndisEnumerateInterfaces32 @ 0x140171CB0 (ndisEnumerateInterfaces32.c)
 *     ndisEnumerateInterfaces @ 0x140175F50 (ndisEnumerateInterfaces.c)
 */

NTSTATUS __fastcall ndisHandlePnPRequest(struct _IRP *a1, __int64 a2, unsigned int a3, enum _NDIS_MP_REFTAG a4)
{
  int v4; // r15d
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
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned __int64 MasterIrp; // rdi
  unsigned int v19; // r12d
  unsigned int v20; // ecx
  unsigned int v21; // edx
  _DWORD *Pool2; // rax
  __int64 v23; // r9
  __int64 v24; // rsi
  __int64 v25; // r9
  __int64 v26; // r9
  size_t v27; // r8
  unsigned __int64 v28; // rcx
  void *v29; // rdx
  unsigned int v30; // ecx
  unsigned int v31; // eax
  unsigned int v32; // eax
  __int64 v33; // r9
  __int64 v34; // r9
  unsigned __int64 v35; // r14
  int v36; // edi
  unsigned __int64 v37; // rax
  NDIS_STATUS v38; // edi
  int v39; // eax
  UINT Version; // eax
  bool v41; // cf
  unsigned int v42; // r13d
  struct _NDIS_MINIPORT_BLOCK *v43; // r14
  struct _NDIS_MINIPORT_BLOCK *v44; // rsi
  int v45; // r9d
  int v46; // edi
  int v47; // r9d
  int v48; // edi
  enum _NDIS_IDLE_CONDITION v49; // edi
  struct _NDIS_MINIPORT_BLOCK *v50; // rax
  struct _NDIS_MINIPORT_BLOCK *v51; // rsi
  struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *v52; // rax
  struct _NDIS_MINIPORT_BLOCK *v53; // rcx
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax
  __int32 v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // eax
  unsigned int v58; // eax
  unsigned int v59; // eax
  bool v60; // zf
  int v61; // eax
  struct _NDIS_MINIPORT_BLOCK **v62; // [rsp+30h] [rbp-49h]
  struct _NDIS_MINIPORT_BLOCK *v63; // [rsp+50h] [rbp-29h] BYREF
  struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *v64[2]; // [rsp+58h] [rbp-21h] BYREF
  struct _UNICODE_STRING v65; // [rsp+68h] [rbp-11h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-1h] BYREF
  size_t Size; // [rsp+E0h] [rbp+67h] BYREF
  char *v68; // [rsp+E8h] [rbp+6Fh] BYREF
  void *Src; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int pNetLuidIndex; // [rsp+F8h] [rbp+7Fh] BYREF

  v4 = 0;
  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  DestinationString = 0LL;
  active = 0;
  LODWORD(v68) = 0;
  LODWORD(Size) = 0;
  FileObject = CurrentStackLocation->FileObject;
  pNetLuidIndex = 0;
  v63 = 0LL;
  *(_QWORD *)&v65.Length = CurrentStackLocation;
  FsContext = (char *)FileObject->FsContext;
  v64[0] = (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext;
  if ( !FsContext )
    return -1073741809;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v12 = *FsContext;
  if ( (LowPart & 3) != 0 )
    return -1073741811;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  p_Type = &a1->AssociatedIrp.MasterIrp->Type;
  LODWORD(Src) = CurrentStackLocation->Parameters.Read.Length;
  if ( LowPart <= 0x170008 )
  {
    if ( LowPart != 1507336 )
    {
      if ( LowPart == 1198084 || LowPart == 1198092 || LowPart == 1214472 || LowPart == 1214480 )
      {
        active = ndisKnobIoctl(FsContext[1] != 0, LowPart, Options, Length, p_Type, (unsigned int *)&Size);
        if ( !active )
        {
          a1->IoStatus.Information = (unsigned int)Size;
          return 0;
        }
      }
      return active;
    }
    if ( v12 )
    {
      if ( !IoIs32bitProcess(a1) )
      {
        v24 = 0LL;
LABEL_29:
        if ( (unsigned int)Options < 0x48 )
        {
          active = -1073741789;
          goto LABEL_41;
        }
        v30 = *((unsigned __int16 *)p_Type + 13)
            + *((unsigned __int16 *)p_Type + 21)
            + *((unsigned __int16 *)p_Type + 29);
        v31 = v30 + p_Type[4];
        if ( v31 < v30 )
          goto LABEL_40;
        v32 = v31 + 72;
        if ( v32 < 0x48 )
          goto LABEL_40;
        if ( (unsigned int)Options < v32 )
        {
          active = -1073741789;
          goto LABEL_41;
        }
        if ( ndisValidateNdisVarDataDescInputString(
               (unsigned __int64)p_Type,
               Options,
               (unsigned __int16 *)p_Type + 12,
               v16,
               (__int64)(p_Type + 6))
          && ndisValidateNdisVarDataDescInputString(
               (unsigned __int64)p_Type,
               Options,
               (unsigned __int16 *)p_Type + 20,
               v33,
               (__int64)(p_Type + 10))
          && ndisValidateNdisVarDataDescInputString(
               (unsigned __int64)p_Type,
               Options,
               (unsigned __int16 *)p_Type + 28,
               v34,
               (__int64)(p_Type + 14))
          && ndisValidateEmbeddedBufferBounds(
               (unsigned __int64)p_Type,
               Options,
               (unsigned __int64)(p_Type + 2),
               0xCu,
               0,
               p_Type[2],
               p_Type[4],
               8,
               (unsigned __int64 *)p_Type + 1) )
        {
          active = ndisHandleUModePnPOp((__int64)p_Type);
        }
        else
        {
LABEL_40:
          active = -1073741811;
        }
LABEL_41:
        if ( v24 )
          goto LABEL_42;
        return active;
      }
      v17 = *(_QWORD *)&v65.Length;
      MasterIrp = (unsigned __int64)a1->AssociatedIrp.MasterIrp;
      Src = 0LL;
      v65 = 0LL;
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
              Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)Options, 538985550LL);
              v24 = (__int64)Pool2;
              if ( !Pool2 )
                return -1073741670;
              *Pool2 = *(_DWORD *)MasterIrp;
              Pool2[1] = *(_DWORD *)(MasterIrp + 4);
              p_Type = Pool2;
              v68 = (char *)(Pool2 + 18);
              if ( !ndisValidateNdisVarDataDesc32InputString(
                      MasterIrp,
                      v19,
                      (unsigned __int16 *)(MasterIrp + 16),
                      v23,
                      (__int64)&v65)
                || (ndisMoveUnicodeStringToNdisVarDataDesc((__int64)&v65, v24, (void **)&v68, v24 + 24),
                    !ndisValidateNdisVarDataDesc32InputString(
                       MasterIrp,
                       v19,
                       (unsigned __int16 *)(MasterIrp + 24),
                       v25,
                       (__int64)&v65))
                || (ndisMoveUnicodeStringToNdisVarDataDesc((__int64)&v65, v24, (void **)&v68, v24 + 40),
                    !ndisValidateNdisVarDataDesc32InputString(
                       MasterIrp,
                       v19,
                       (unsigned __int16 *)(MasterIrp + 32),
                       v26,
                       (__int64)&v65))
                || (ndisMoveUnicodeStringToNdisVarDataDesc((__int64)&v65, v24, (void **)&v68, v24 + 56),
                    LODWORD(Size) = *(_DWORD *)(MasterIrp + 12),
                    !ndisValidateEmbeddedBufferBounds(
                       MasterIrp,
                       v19,
                       MasterIrp + 8,
                       8u,
                       0,
                       *(_DWORD *)(MasterIrp + 8),
                       Size,
                       4,
                       (unsigned __int64 *)&Src)) )
              {
                active = -1073741811;
LABEL_42:
                ExFreePoolWithTag((PVOID)v24, 0);
                return active;
              }
              v27 = (unsigned int)Size;
              v28 = (unsigned __int64)(v68 + 7);
              *(_DWORD *)(v24 + 16) = Size;
              v29 = Src;
              v28 &= 0xFFFFFFFFFFFFFFF8uLL;
              *(_QWORD *)(v24 + 8) = v28 - v24;
              memmove((void *)v28, v29, v27);
              goto LABEL_29;
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
            v35 = (unsigned int)Src;
            if ( (unsigned int)Src >= 0x20 )
            {
              v36 = ndisEnumerateInterfaces32((char *)p_Type, (unsigned int)Src, &Size);
              v37 = (unsigned int)Size;
              a1->IoStatus.Information = v35;
              a1->IoStatus.Information = v37;
              return v36;
            }
          }
          else if ( (unsigned int)Src >= 0x30 )
          {
            result = ndisEnumerateInterfaces((char *)p_Type, (unsigned int)Src, &Size);
            a1->IoStatus.Information = (unsigned int)Size;
            return result;
          }
LABEL_53:
          v38 = -1073741789;
LABEL_54:
          a1->IoStatus.Information = 0LL;
          return v38;
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
            v41 = (unsigned int)Src < 8;
            v42 = 4;
            *p_Type = Version;
            if ( !v41 )
            {
              v42 = 8;
              p_Type[1] = ndisChecked;
            }
            a1->IoStatus.Information = v42;
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
          if ( (unsigned int)Options < 0x30 || (unsigned int)Src < 0x30 )
            goto LABEL_53;
          result = ndisIfEnumerateNsiObjects(
                     (struct _NDIS_ENUM_NSI_OBJECTS *)p_Type,
                     (unsigned int)Src,
                     (unsigned int *)&Size);
          a1->IoStatus.Information = (unsigned int)Size;
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
                v39 = p_Type[1];
                if ( v39 && (v39 == -1 || *((_QWORD *)p_Type + 1)) )
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
          if ( (unsigned int)Options < 2 || (unsigned int)Src < 4 )
            goto LABEL_53;
          v38 = NdisIfAllocateNetLuidIndex(*(_WORD *)p_Type, &pNetLuidIndex);
          if ( v38 )
            goto LABEL_54;
          *p_Type = pNetLuidIndex;
          a1->IoStatus.Information = 4LL;
          return 0;
        case 0x170048u:
          if ( !v12 )
            return -1073741790;
          if ( IoIs32bitProcess(a1) )
            return -1073741637;
          if ( (unsigned int)Options < 8 )
            goto LABEL_89;
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
LABEL_89:
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
                                   (int *)&v68,
                                   &v63) )
            goto LABEL_128;
          v43 = v63;
          if ( (mem::ReadNoFence<unsigned long,void>(&v63->Flags) & 0x80u) == 0LL )
            active = ndisNicActiveAcquire(v43, v64[0], (struct _NDIS_PM_NIC_ACTIVE *)p_Type, a1);
          ndisDereferenceMiniport(v43, 0);
          return active;
        case 0x17008Cu:
          if ( !(unsigned __int8)ndisAoAcRefMiniportForIoctl(
                                   (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                                   Options,
                                   (struct _NDIS_PM_NIC_ACTIVE *)p_Type,
                                   0,
                                   MPREF_AOAC_NA_RELEASE,
                                   (int *)&v68,
                                   &v63) )
            goto LABEL_128;
          v44 = v63;
          if ( (mem::ReadNoFence<unsigned long,void>(&v63->Flags) & 0x80u) == 0LL )
            active = ndisNicActiveRelease(v44, v64[0], (struct _NDIS_PM_NIC_ACTIVE *)p_Type);
          ndisDereferenceMiniport(v44, 1u);
          return active;
        case 0x1700A0u:
          if ( !(unsigned __int8)ndisAoAcRefMiniportForIoctl(
                                   (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                                   Options,
                                   (struct _NDIS_PM_NIC_ACTIVE *)p_Type,
                                   1,
                                   MPREF_AOAC_WAKE_ENABLE,
                                   (int *)&v68,
                                   &v63) )
            goto LABEL_128;
          v46 = ndisAoAcEnableRemoteWake(v63, (struct _NDIS_PM_NIC_ACTIVE *)p_Type, 1, v45);
          ndisDereferenceMiniport(v63, 5u);
          return v46;
        case 0x1700A4u:
          if ( !(unsigned __int8)ndisAoAcRefMiniportForIoctl(
                                   (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                                   Options,
                                   (struct _NDIS_PM_NIC_ACTIVE *)p_Type,
                                   1,
                                   MPREF_AOAC_WAKE_DISABLE,
                                   (int *)&v68,
                                   &v63) )
            goto LABEL_128;
          v48 = ndisAoAcEnableRemoteWake(v63, (struct _NDIS_PM_NIC_ACTIVE *)p_Type, 0, v47);
          ndisDereferenceMiniport(v63, 6u);
          return v48;
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
          v49 = p_Type[1];
          v50 = ndisReferenceMiniportByNetLuid(*(union _NET_LUID_LH *)(p_Type + 2), 0x6Eu);
          v63 = v50;
          v51 = v50;
          if ( v50 )
          {
            if ( (mem::ReadNoFence<unsigned long,void>(&v50->Flags) & 0x80u) != 0LL
              && (mem::ReadNoFence<unsigned long,void>(&v51->Flags) & 0x100) == 0 )
            {
              v52 = v64[0];
              v53 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)v64[0] + 4);
              if ( v53 )
              {
                if ( v53 != v51 )
                {
                  ndisDereferenceMiniport(v51, 0x6Eu);
                  return -1073741816;
                }
              }
              else
              {
                *((_QWORD *)v64[0] + 4) = v51;
              }
              *((_DWORD *)v52 + 14) = v49;
              NdisWdfIdle::UpdateIdleCondition(v51->IdleSm.__ptr_.__value_, v49);
              CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport(v51);
              CxBlockFromMiniport->Chars.EvtCxUpdateIdleCondition(v51->MiniportAdapterContext, v49);
            }
            ndisDereferenceMiniport(v51, 0x6Eu);
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Ld(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                3u,
                0xEu,
                0x19u,
                (struct _GUID *)&WPP_1554e880d08a3eb9ddfb9ea105b80242_Traceguids,
                BYTE6(*((_QWORD *)p_Type + 1)),
                (*((_QWORD *)p_Type + 1) >> 24) & 0xFFFFFF);
            v4 = -1071448058;
          }
          LODWORD(v68) = v4;
          v55 = _InterlockedExchange((volatile __int32 *)&ndisIdleCondition, v49);
          if ( v55 != v49 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v62) = v49;
            WPP_RECORDER_SF_Ld(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0xEu,
              0x1Au,
              (struct _GUID *)&WPP_1554e880d08a3eb9ddfb9ea105b80242_Traceguids,
              v55,
              v62);
          }
LABEL_128:
          result = (int)v68;
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
    v58 = LowPart - 1530888;
    if ( v58 )
    {
      v59 = v58 - 12;
      if ( v59 )
      {
        if ( v59 != 16388 )
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
          LODWORD(Size) = 0;
          v60 = *((_BYTE *)p_Type + 8) == 0;
          if ( *((_BYTE *)p_Type + 8) )
          {
            result = WdmlibIoValidateDeviceIoControlAccess(a1, Length);
            if ( result )
              return result;
            v60 = *((_BYTE *)p_Type + 8) == 0;
          }
          v61 = ndisCollectHistogramsForIoctl(
                  p_Type[1],
                  !v60,
                  (wchar_t *)p_Type,
                  (unsigned int)Src,
                  (unsigned int *)&Size);
          active = v61;
          if ( !v61 || v61 == -2147483643 )
          {
            a1->IoStatus.Information = (unsigned int)Size;
            if ( v61 == -2147483643 )
              a1->Flags &= ~0x40u;
          }
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
    v56 = LowPart - 1509384;
    if ( v56 )
    {
      v57 = v56 - 4;
      if ( !v57 )
      {
        result = ndisQueryDeviceReset(
                   (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                   Options,
                   Length,
                   (unsigned int *)&Size,
                   (struct _NDIS_QUERY_DEVICE_RESET *)p_Type);
        a1->IoStatus.Information = (unsigned int)Size;
        return result;
      }
      if ( v57 == 4 )
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
        Size = 0LL;
        v65 = 0LL;
        *(_OWORD *)v64 = 0LL;
        if ( (unsigned __int8)ndisValidateNdisOffsetAndLengthInputString(
                                (__int64)a1,
                                (__int64)(p_Type + 1),
                                (__int64)v64)
          && (unsigned __int8)ndisValidateNdisOffsetAndLengthInputString(
                                (__int64)a1,
                                (__int64)(p_Type + 3),
                                (__int64)&v65)
          && ndisValidateNdisOffsetAndLengthInputBufferBounds((__int64)a1, p_Type + 5, &Size) )
        {
          return ndisPnpInvokeTdi(*p_Type, (struct _UNICODE_STRING *)v64, &v65, (void *)Size, p_Type[6]);
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
    LODWORD(Length) = (_DWORD)Src;
  }
  return ndisCollectAllStatisticsForIoctl(
           (const struct NDIS_COLLECT_ALL_STATISTICS_IN *)p_Type,
           (struct NDIS_COLLECT_ALL_STATISTICS_OUT *)p_Type,
           Length,
           &a1->IoStatus.Information);
}
