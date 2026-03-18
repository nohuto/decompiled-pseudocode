/*
 * XREFs of EtwpCovSampEnumerateProcess @ 0x140A13C40
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     EtwpCovSampImageNotify @ 0x140900000 (EtwpCovSampImageNotify.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140967B50 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     FsRtlReleaseFileNameInformation @ 0x140A13E20 (FsRtlReleaseFileNameInformation.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCovSampEnumerateProcess(PRKPROCESS PROCESS)
{
  int v1; // r14d
  void *v2; // rdi
  _QWORD *v5; // rax
  unsigned __int64 *v6; // rsi
  unsigned __int64 v7; // r10
  __int64 v8; // rcx
  unsigned __int64 v9; // r10
  _QWORD v10[7]; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int64 v11; // [rsp+68h] [rbp-11h]
  UNICODE_STRING FullImageName; // [rsp+70h] [rbp-9h] BYREF
  _OWORD v13[3]; // [rsp+80h] [rbp+7h] BYREF

  v1 = 0;
  memset(v10, 0, sizeof(v10));
  v2 = 0LL;
  memset(v13, 0, sizeof(v13));
  v11 = 0LL;
  FullImageName = 0LL;
  if ( PROCESS == PsInitialSystemProcess )
    return 0LL;
  if ( PROCESS == KeGetCurrentThread()->ApcState.Process )
    goto LABEL_3;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink) )
  {
    KiStackAttachProcess(PROCESS, 0, (__int64)v13);
    v1 = 1;
LABEL_3:
    v5 = (_QWORD *)MmEnumerateAddressSpaceAndReferenceImages(PROCESS, 1);
    v2 = v5;
    if ( v5 )
    {
      LODWORD(v10[2]) |= 0x400u;
      v6 = v5;
      v10[1] = 56LL;
      v7 = *v5;
      if ( *v5 )
      {
        v8 = v10[0];
        do
        {
          if ( (v7 & 3) == 0 )
          {
            v9 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
            *v6 = v9;
            v11 = v9;
            v10[3] = v6[1] & 0xFFFFFFFFFFFF0000uLL;
            v10[5] = v6[3];
            if ( FltMgrCallbacks && (int)guard_dispatch_icall_no_overrides(v9, 1024LL, &FullImageName, v10) >= 0 )
              EtwpCovSampImageNotify(&FullImageName, PROCESS[1].Header.WaitListHead.Flink, (char *)&v10[2]);
            v8 = v10[0];
          }
          if ( v8 )
          {
            FsRtlReleaseFileNameInformation(v8);
            v8 = 0LL;
            v10[0] = 0LL;
          }
          v6 += 6;
          v7 = *v6;
        }
        while ( *v6 );
      }
    }
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( v1 )
  {
    KiUnstackDetachProcess((__int64)v13, 0);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink);
  }
  return 0LL;
}
