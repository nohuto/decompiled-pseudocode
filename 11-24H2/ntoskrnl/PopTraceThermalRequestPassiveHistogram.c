/*
 * XREFs of PopTraceThermalRequestPassiveHistogram @ 0x1402B93A8
 * Callers:
 *     PopCoolingTelemetryWorker @ 0x14041B784 (PopCoolingTelemetryWorker.c)
 *     PopCoolingSxTransition @ 0x14041B9F0 (PopCoolingSxTransition.c)
 *     PopOrphanCoolingExtension @ 0x14074A6E8 (PopOrphanCoolingExtension.c)
 *     PopDeactiveThermalRequest @ 0x140AB2D98 (PopDeactiveThermalRequest.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1402B92A8 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopDiagSnapPassiveHistogram @ 0x1402B95BC (PopDiagSnapPassiveHistogram.c)
 *     PoStoreDiagnosticContext @ 0x1402BA9FC (PoStoreDiagnosticContext.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140355DE8 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PopTraceThermalRequestPassiveHistogram(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 DeviceAttachmentBaseRefWithTag; // rax
  void *v4; // rsi
  __int64 v5; // r14
  __int64 Pool2; // rax
  const wchar_t *v7; // r15
  ULONG_PTR v9[2]; // [rsp+38h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD *v11; // [rsp+68h] [rbp-A0h]
  __int64 v12; // [rsp+70h] [rbp-98h]
  __int64 v13; // [rsp+78h] [rbp-90h]
  _DWORD v14[2]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v15[16]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE *v16; // [rsp+98h] [rbp-70h]
  int v17; // [rsp+A0h] [rbp-68h]
  int v18; // [rsp+A4h] [rbp-64h]
  void *v19; // [rsp+A8h] [rbp-60h]
  int v20; // [rsp+B0h] [rbp-58h]
  int v21; // [rsp+B4h] [rbp-54h]
  _BYTE v22[96]; // [rsp+B8h] [rbp-50h] BYREF

  v9[0] = 0LL;
  v2 = 0LL;
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(
                                     *(_QWORD *)(*(_QWORD *)(a1 + 32) + 48LL),
                                     1732538192LL);
  v4 = (void *)DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(DeviceAttachmentBaseRefWithTag + 312) + 40LL);
    if ( v5 )
    {
      PoStoreDiagnosticContext(*(_QWORD *)(a1 + 24), 0LL, v9);
      Pool2 = ExAllocatePool2(0x100uLL, v9[0], 0x50455654u);
      v2 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        if ( (int)PoStoreDiagnosticContext(*(_QWORD *)(a1 + 24), Pool2, v9) >= 0 )
        {
          v7 = (const wchar_t *)((char *)v2 + v2[2]);
          if ( ((unsigned __int8)PopDiagSnapPassiveHistogram(a1 + 40, v22) || PopThermalTelemetryVerbosity)
            && (unsigned int)dword_140E07680 > 5
            && (qword_140E07690 & 0x400000000000LL) != 0
            && (qword_140E07698 & 0x400000000000LL) == qword_140E07698 )
          {
            v14[1] = 0;
            v11 = v14;
            v13 = *(_QWORD *)(v5 + 136);
            v14[0] = *(unsigned __int16 *)(v5 + 128);
            v12 = 2LL;
            tlgCreate1Sz_wchar_t((__int64)v15, v7);
            v18 = 0;
            v21 = 0;
            v19 = &PopThermalTrackingThresholds;
            v16 = v22;
            v17 = 84;
            v20 = 21;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E07680,
              (unsigned __int8 *)&dword_14004A1E4,
              0LL,
              0LL,
              7u,
              &v10);
          }
        }
      }
    }
    ObfDereferenceObjectWithTag(v4, 0x67446F50u);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x50455654u);
  }
}
