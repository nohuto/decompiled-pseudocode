/*
 * XREFs of PopTraceThermalRequestActiveActivity @ 0x1404A5290
 * Callers:
 *     PopCoolingTelemetryWorker @ 0x14041B784 (PopCoolingTelemetryWorker.c)
 *     PopCoolingSxTransition @ 0x14041B9F0 (PopCoolingSxTransition.c)
 *     PopOrphanCoolingExtension @ 0x14074A6E8 (PopOrphanCoolingExtension.c)
 *     PopDeactiveThermalRequest @ 0x140AB2D98 (PopDeactiveThermalRequest.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1402B92A8 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PoStoreDiagnosticContext @ 0x1402BA9FC (PoStoreDiagnosticContext.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140355DE8 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PopTraceThermalRequestActiveActivity(__int64 a1)
{
  unsigned __int64 *v2; // rdi
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v4; // r14
  __int64 v5; // rsi
  unsigned __int64 *Pool2; // rax
  __int64 v7; // r10
  const wchar_t *v8; // r15
  char v9; // r11
  char v10; // r9
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  int v13; // r10d
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int128 v16; // rax
  unsigned int v17; // ecx
  ULONG_PTR v18; // [rsp+30h] [rbp-99h] BYREF
  int v19; // [rsp+38h] [rbp-91h] BYREF
  __int64 v20; // [rsp+40h] [rbp-89h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+50h] [rbp-79h] BYREF
  _DWORD *v22; // [rsp+70h] [rbp-59h]
  int v23; // [rsp+78h] [rbp-51h]
  int v24; // [rsp+7Ch] [rbp-4Dh]
  __int64 v25; // [rsp+80h] [rbp-49h]
  _DWORD v26[2]; // [rsp+88h] [rbp-41h] BYREF
  _BYTE v27[16]; // [rsp+90h] [rbp-39h] BYREF
  int *v28; // [rsp+A0h] [rbp-29h]
  int v29; // [rsp+A8h] [rbp-21h]
  int v30; // [rsp+ACh] [rbp-1Dh]
  ULONG_PTR *v31; // [rsp+B0h] [rbp-19h]
  int v32; // [rsp+B8h] [rbp-11h]
  int v33; // [rsp+BCh] [rbp-Dh]
  __int64 *v34; // [rsp+C0h] [rbp-9h]
  int v35; // [rsp+C8h] [rbp-1h]
  int v36; // [rsp+CCh] [rbp+3h]
  _DWORD v37[10]; // [rsp+D0h] [rbp+7h]

  v18 = 0LL;
  v2 = 0LL;
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(
                                     *(_QWORD *)(*(_QWORD *)(a1 + 32) + 48LL),
                                     0x67446F50u);
  v4 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
  {
    v5 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
    if ( v5 )
    {
      PoStoreDiagnosticContext(*(_QWORD *)(a1 + 24), 0LL, &v18);
      Pool2 = (unsigned __int64 *)ExAllocatePool2(0x100uLL, v18, 0x50455654u);
      v2 = Pool2;
      if ( Pool2 )
      {
        if ( (int)PoStoreDiagnosticContext(*(_QWORD *)(a1 + 24), Pool2, &v18) >= 0 )
        {
          v7 = 0LL;
          v8 = (const wchar_t *)((char *)v2 + v2[2]);
          v9 = 0;
          v10 = 1;
          if ( *(_BYTE *)(a1 + 41) )
          {
            do
            {
              v14 = *(_QWORD *)(a1 + 8 * v7 + 480);
              v15 = *(_QWORD *)(a1 + 8 * v7 + 400) - v14;
              *(_QWORD *)(a1 + 8 * v7 + 400) = v14;
              v16 = v15 * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
              v17 = *(unsigned __int8 *)(a1 + 41);
              *((_QWORD *)&v16 + 1) >>= 23;
              v37[v7] = DWORD2(v16);
              if ( DWORD2(v16) )
                v9 = 1;
              v7 = (unsigned int)(v7 + 1);
            }
            while ( (unsigned int)v7 < v17 );
          }
          v11 = *(_QWORD *)(a1 + 568);
          v12 = *(_QWORD *)(a1 + 560) - v11;
          *(_QWORD *)(a1 + 560) = v11;
          if ( (unsigned int)(v12 / 0x989680)
            && (v9 || PopThermalTelemetryVerbosity)
            && (unsigned int)dword_140E07680 > 5 )
          {
            if ( (qword_140E07690 & 0x400000000000LL) == 0 || (qword_140E07698 & 0x400000000000LL) != qword_140E07698 )
              v10 = 0;
            if ( v10 )
            {
              v24 = 0;
              v26[1] = 0;
              v22 = v26;
              v25 = *(_QWORD *)(v5 + 136);
              v26[0] = *(unsigned __int16 *)(v5 + 128);
              v23 = 2;
              tlgCreate1Sz_wchar_t((__int64)v27, v8);
              v30 = 0;
              v33 = 0;
              v36 = 0;
              v28 = &v19;
              LODWORD(v18) = v37[0];
              v31 = &v18;
              v29 = 4;
              v32 = 4;
              v34 = &v20;
              v35 = 8;
              v19 = v13;
              v20 = 0x1000000LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140E07680,
                (unsigned __int8 *)byte_14004A085,
                0LL,
                0LL,
                8u,
                &v21);
            }
          }
        }
      }
    }
    ObfDereferenceObjectWithTag(v4, 0x67446F50u);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x50455654u);
  }
}
