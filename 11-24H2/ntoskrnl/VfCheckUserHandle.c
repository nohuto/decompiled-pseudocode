/*
 * XREFs of VfCheckUserHandle @ 0x140BAB228
 * Callers:
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140231C20 (RtlCaptureStackBackTrace.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObQueryTypeName @ 0x140914530 (ObQueryTypeName.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     VfUtilIsLocalSystem @ 0x140B85404 (VfUtilIsLocalSystem.c)
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 *     VfDriverIsKernelImageAddress @ 0x140BA9ECC (VfDriverIsKernelImageAddress.c)
 *     VfTargetDriversIsEnabled @ 0x140BA9F30 (VfTargetDriversIsEnabled.c)
 */

char __fastcall VfCheckUserHandle(ULONG_PTR BugCheckParameter2)
{
  struct _KPROCESS *Process; // rsi
  unsigned __int64 v3; // rax
  unsigned int v4; // r14d
  __int64 i; // rbx
  PVOID v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // di
  PVOID Object; // [rsp+40h] [rbp-B8h] BYREF
  int v14; // [rsp+48h] [rbp-B0h] BYREF
  PVOID BackTrace[8]; // [rsp+50h] [rbp-A8h] BYREF
  UNICODE_STRING String1; // [rsp+90h] [rbp-68h] BYREF

  memset_0(BackTrace, 0, sizeof(BackTrace));
  Process = KeGetCurrentThread()->ApcState.Process;
  LOBYTE(v3) = (_BYTE)PsInitialSystemProcess;
  if ( PsInitialSystemProcess && Process != PsInitialSystemProcess && Process != PsIdleProcess && BugCheckParameter2 )
  {
    LOWORD(v3) = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
    v4 = (unsigned __int16)v3;
    for ( i = 0LL; (unsigned int)i < v4; i = (unsigned int)(i + 1) )
    {
      v6 = BackTrace[i];
      LOBYTE(v3) = VfDriverIsKernelImageAddress((unsigned __int64)v6);
      if ( (_DWORD)v3 )
      {
        if ( KernelVerifier )
          goto LABEL_9;
      }
      else
      {
        LODWORD(v3) = VfTargetDriversIsEnabled(v8, v7, v9, v10);
        if ( (_DWORD)v3 )
        {
LABEL_9:
          LODWORD(v3) = VfUtilIsLocalSystem(Process);
          if ( !(_DWORD)v3 )
          {
            Object = 0LL;
            if ( ObReferenceObjectByHandle((HANDLE)BugCheckParameter2, 0, 0LL, 1, &Object, 0LL) < 0 )
              goto LABEL_16;
            v11 = 0;
            if ( (int)ObQueryTypeName((__int64)Object, (__int64)&String1, 0x40u, &v14) >= 0
              && (RtlEqualUnicodeString(&String1, &ViDesktopTypeName, 0)
               || RtlEqualUnicodeString(&String1, &ViWindowStationTypeName, 0)) )
            {
              v11 = 1;
            }
            LOBYTE(v3) = ObfDereferenceObject(Object);
            if ( !v11 )
            {
LABEL_16:
              LOBYTE(v3) = ViHandleBreaksEnabled;
              if ( ViHandleBreaksEnabled )
                LOBYTE(v3) = CarReportRuleViolationFromNt(
                               196,
                               246LL,
                               BugCheckParameter2,
                               (ULONG_PTR)Process,
                               (__int64)BackTrace[i],
                               8u,
                               0LL);
            }
          }
          return v3;
        }
        if ( !ViDriverXDVBase )
          return v3;
        LOBYTE(v3) = ViDriverXDVImageSize;
        if ( !ViDriverXDVImageSize )
          return v3;
        if ( (unsigned __int64)v6 < ViDriverXDVBase )
          return v3;
        v3 = ViDriverXDVBase + (unsigned int)ViDriverXDVImageSize;
        if ( (unsigned __int64)v6 >= v3 )
          return v3;
      }
    }
  }
  return v3;
}
