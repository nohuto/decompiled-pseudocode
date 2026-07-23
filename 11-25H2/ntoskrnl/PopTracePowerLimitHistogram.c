/*
 * XREFs of PopTracePowerLimitHistogram @ 0x1405D18AC
 * Callers:
 *     PopPowerLimitTelemetryWorker @ 0x140431168 (PopPowerLimitTelemetryWorker.c)
 *     PopPowerLimitSxTransition @ 0x1405CB134 (PopPowerLimitSxTransition.c)
 *     PopFreePowerLimitRequest @ 0x14073F574 (PopFreePowerLimitRequest.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14035B058 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PoStoreDiagnosticContext @ 0x1404259A0 (PoStoreDiagnosticContext.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x140426678 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     RtlIsZeroMemory @ 0x1404AC670 (RtlIsZeroMemory.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopTracePowerLimitHistogram(__int64 a1)
{
  unsigned __int64 *v2; // rbx
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v4; // r14
  __int64 v5; // r15
  unsigned __int64 *Pool2; // rax
  int v7; // eax
  __int64 v8; // r10
  unsigned int v9; // esi
  const WCHAR *i; // r13
  _DWORD *v11; // r8
  _QWORD *v12; // rcx
  __int64 v13; // r9
  BOOLEAN IsZeroMemory; // al
  __int64 v15; // rcx
  __int64 v16; // [rsp+38h] [rbp-99h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-91h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+48h] [rbp-89h] BYREF
  _DWORD *v19; // [rsp+68h] [rbp-69h]
  __int64 v20; // [rsp+70h] [rbp-61h]
  __int64 v21; // [rsp+78h] [rbp-59h]
  _DWORD v22[2]; // [rsp+80h] [rbp-51h] BYREF
  _BYTE v23[16]; // [rsp+88h] [rbp-49h] BYREF
  __int64 *v24; // [rsp+98h] [rbp-39h]
  __int64 v25; // [rsp+A0h] [rbp-31h]
  unsigned __int64 *v26; // [rsp+A8h] [rbp-29h]
  __int64 v27; // [rsp+B0h] [rbp-21h]
  _OWORD *v28; // [rsp+B8h] [rbp-19h]
  __int64 v29; // [rsp+C0h] [rbp-11h]
  _OWORD Buffer[3]; // [rsp+C8h] [rbp-9h] BYREF

  v17 = 0LL;
  v2 = 0LL;
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(
                                     *(_QWORD *)(*(_QWORD *)(a1 + 64) + 56LL),
                                     0x67446F50u);
  v4 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
  {
    v5 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
    if ( v5 )
    {
      if ( (unsigned int)PoStoreDiagnosticContext(*(_QWORD *)(a1 + 24), 0LL, &v17) == -1073741789 )
      {
        Pool2 = (unsigned __int64 *)ExAllocatePool2(0x100uLL);
        v2 = Pool2;
        if ( Pool2 )
        {
          v7 = PoStoreDiagnosticContext(*(_QWORD *)(a1 + 24), Pool2, &v17);
          v8 = 0LL;
          if ( v7 >= 0 )
          {
            v9 = 0;
            for ( i = (const WCHAR *)((char *)v2 + v2[2]); v9 < *(_DWORD *)(a1 + 32); ++v9 )
            {
              memset(Buffer, 0, sizeof(Buffer));
              v11 = Buffer;
              v12 = (_QWORD *)(*(_QWORD *)(a1 + 56) + 104LL * v9 + 8);
              v13 = 12LL;
              do
              {
                *v11++ = *v12 / 0x989680uLL;
                *v12++ = v8;
                --v13;
              }
              while ( v13 );
              IsZeroMemory = RtlIsZeroMemory(Buffer, 0x30uLL);
              v8 = 0LL;
              if ( !IsZeroMemory
                && (unsigned int)dword_140E07680 > 5
                && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
              {
                v20 = 2LL;
                v19 = v22;
                v21 = *(_QWORD *)(v5 + 136);
                v22[0] = *(unsigned __int16 *)(v5 + 128);
                v22[1] = v8;
                tlgCreate1Sz_wchar_t((__int64)v23, i);
                v15 = *(_QWORD *)(a1 + 40);
                LOBYTE(v16) = *(_BYTE *)(v15 + 16LL * v9);
                v24 = &v16;
                v25 = 1LL;
                LODWORD(v17) = *(_DWORD *)(v15 + 16LL * v9 + 4);
                v26 = &v17;
                v28 = Buffer;
                v27 = 4LL;
                v29 = 48LL;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_140E07680,
                  (unsigned __int8 *)byte_140049793,
                  0LL,
                  0LL,
                  8u,
                  &v18);
                v8 = 0LL;
              }
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
