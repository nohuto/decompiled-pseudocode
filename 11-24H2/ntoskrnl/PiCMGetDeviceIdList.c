/*
 * XREFs of PiCMGetDeviceIdList @ 0x140A15D5C
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C13C0 (PiCMHandleIoctl.c)
 * Callees:
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x1402B827C (McTemplateK0zzd_EtwWriteTransfer.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x140438B40 (PiControlFreeUserModeCallersBuffer.c)
 *     McTemplateK0d_EtwWriteTransfer @ 0x14047CDE4 (McTemplateK0d_EtwWriteTransfer.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     PiAuDoesClientHaveAccess @ 0x1408B9FF8 (PiAuDoesClientHaveAccess.c)
 *     PiCMReturnBufferResultData @ 0x1408C3020 (PiCMReturnBufferResultData.c)
 *     _CmGetDeviceRelationsList @ 0x1409AB120 (_CmGetDeviceRelationsList.c)
 *     PiCMCaptureDeviceListInputData @ 0x140A16020 (PiCMCaptureDeviceListInputData.c)
 *     PiCMConvertDeviceListFilters @ 0x140A162FC (PiCMConvertDeviceListFilters.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x140A163D4 (_CmGetMatchingFilteredDeviceList.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMGetDeviceIdList(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  _WORD *Pool2; // rdi
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // r8
  unsigned int v11; // r14d
  unsigned int v12; // esi
  unsigned int v13; // r10d
  int DeviceRelationsList; // ebx
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rcx
  char (__fastcall *v18)(_QWORD *, unsigned __int16 *, int, struct _SECURITY_SUBJECT_CONTEXT *); // r9
  bool v19; // sf
  int v20; // edx
  int v21; // eax
  const wchar_t *v23; // rcx
  int v24; // [rsp+58h] [rbp-19h] BYREF
  int v25; // [rsp+5Ch] [rbp-15h] BYREF
  __int128 v26; // [rsp+60h] [rbp-11h] BYREF
  __int64 v27; // [rsp+70h] [rbp-1h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp+7h] BYREF

  v24 = 0;
  v27 = 0LL;
  v25 = 0;
  Pool2 = 0LL;
  *(_OWORD *)&SubjectContext.ClientToken = 0LL;
  *a6 = 0;
  *(_OWORD *)&SubjectContext.PrimaryToken = 0LL;
  v26 = 0LL;
  v9 = PiCMCaptureDeviceListInputData(a1, a2, a5, &v26);
  if ( v9 < 0 )
    goto LABEL_23;
  v11 = DWORD1(v26);
  if ( (byte_140EEFF63 & 4) != 0 )
  {
    if ( WORD2(v26) )
    {
      switch ( WORD2(v26) )
      {
        case 1u:
          v23 = L"Enum";
          break;
        case 2u:
          v23 = L"Service";
          break;
        case 4u:
          v23 = L"EjectRelations";
          break;
        case 8u:
          v23 = L"RemovalRelations";
          break;
        case 0x10u:
          v23 = L"PowerRelations";
          break;
        case 0x20u:
          v23 = L"BusRelations";
          break;
        case 0x40u:
          v23 = L"TransportRelations";
          break;
        case 0x80u:
          v23 = L"Class";
          break;
        default:
          v23 = L"Unknown";
          break;
      }
    }
    else
    {
      v23 = L"None";
    }
    McTemplateK0zzd_EtwWriteTransfer(
      (__int64)v23,
      (__int64)KMPnPEvt_CfgMgr_DeviceList_Start,
      v10,
      *((const wchar_t **)&v26 + 1),
      v23,
      BYTE6(v26) & 1);
  }
  if ( !a3 || a4 < 0x14 )
  {
    DeviceRelationsList = -1073741811;
    goto LABEL_29;
  }
  if ( (v11 & 0x20000) != 0 && !PiAuDoesClientHaveAccess(2u) )
  {
    DeviceRelationsList = -1073741790;
    goto LABEL_29;
  }
  v12 = 0;
  if ( a4 - 20 >= 2 )
    v12 = a4 - 20;
  if ( v12 )
  {
    Pool2 = (_WORD *)ExAllocatePool2(0x100uLL, v12, 0x34706E50u);
    if ( !Pool2 )
    {
      DeviceRelationsList = -1073741670;
      goto LABEL_29;
    }
    v13 = v12 >> 1;
  }
  else
  {
    v13 = 0;
  }
  v24 = v13;
  DeviceRelationsList = PiCMConvertDeviceListFilters(v11, &v25);
  if ( DeviceRelationsList >= 0 )
  {
    v15 = (unsigned int)(unsigned __int16)v11 - 4;
    if ( (unsigned int)v15 <= 0x3C && (v16 = 0x1000000010001011LL, _bittest64(&v16, v15)) )
    {
      if ( !*((_QWORD *)&v26 + 1) )
      {
        DeviceRelationsList = -1073741811;
        goto LABEL_29;
      }
      DeviceRelationsList = CmGetDeviceRelationsList(
                              *(__int64 *)&PiPnpRtlCtx,
                              *((const WCHAR **)&v26 + 1),
                              v25 & 0xFFFFFEFF);
      v19 = DeviceRelationsList < 0;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      p_SubjectContext = &SubjectContext;
      LODWORD(v18) = 0;
      if ( (v11 & 0x20000) != 0 )
        p_SubjectContext = 0LL;
      else
        v18 = PiCMMandatoryFilterCallback;
      DeviceRelationsList = CmGetMatchingFilteredDeviceList(
                              PiPnpRtlCtx,
                              DWORD2(v26),
                              v25,
                              (_DWORD)v18,
                              (__int64)p_SubjectContext,
                              (__int64)Pool2,
                              v24,
                              (__int64)&v24);
      SeReleaseSubjectContext(&SubjectContext);
      v19 = DeviceRelationsList < 0;
    }
    if ( !v19 )
    {
      v20 = v24;
      if ( !v24 )
      {
        v24 = 1;
        if ( v12 < 2 )
        {
          DeviceRelationsList = -1073741789;
          goto LABEL_29;
        }
        *Pool2 = 0;
        v20 = v24;
      }
      v21 = PiCMReturnBufferResultData(DeviceRelationsList, 2 * v20, 0, Pool2, 2 * v20, SHIDWORD(v27), a3, a4, a6);
      goto LABEL_21;
    }
  }
LABEL_29:
  v21 = PiCMReturnBufferResultData(DeviceRelationsList, 2 * v24, 0, 0LL, 0, SHIDWORD(v27), a3, a4, a6);
LABEL_21:
  v9 = v21;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x34706E50u);
LABEL_23:
  if ( *((_QWORD *)&v26 + 1) )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, *((void **)&v26 + 1));
  if ( (byte_140EEFF63 & 4) != 0 )
    McTemplateK0d_EtwWriteTransfer(v8, (const EVENT_DESCRIPTOR *)KMPnPEvt_CfgMgr_DeviceList_Stop, v10, v9);
  return (unsigned int)v9;
}
