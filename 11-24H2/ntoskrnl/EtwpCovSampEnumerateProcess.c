/*
 * XREFs of EtwpCovSampEnumerateProcess @ 0x140A0C3A0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     EtwpCovSampImageNotify @ 0x1409228E0 (EtwpCovSampImageNotify.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1409505E0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     FsRtlReleaseFileNameInformation @ 0x140A0C580 (FsRtlReleaseFileNameInformation.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCovSampEnumerateProcess(PRKPROCESS PROCESS)
{
  int v1; // r14d
  void *v2; // rdi
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 *v8; // rsi
  unsigned __int64 i; // r10
  unsigned __int64 v10; // r10
  _QWORD ImageInfo[6]; // [rsp+38h] [rbp-41h] BYREF
  unsigned __int64 v12; // [rsp+68h] [rbp-11h]
  UNICODE_STRING FullImageName; // [rsp+70h] [rbp-9h] BYREF
  _OWORD v14[3]; // [rsp+80h] [rbp+7h] BYREF

  v1 = 0;
  v2 = 0LL;
  memset(v14, 0, sizeof(v14));
  v12 = 0LL;
  FullImageName = 0LL;
  memset(ImageInfo, 0, sizeof(ImageInfo));
  if ( PROCESS == PsInitialSystemProcess )
    return 0LL;
  if ( PROCESS == KeGetCurrentThread()->ApcState.Process )
    goto LABEL_3;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink) )
  {
    KiStackAttachProcess(PROCESS, 0, (__int64)v14);
    v1 = 1;
LABEL_3:
    v5 = (_QWORD *)MmEnumerateAddressSpaceAndReferenceImages(PROCESS, 1);
    v2 = v5;
    if ( v5 )
    {
      LODWORD(ImageInfo[1]) |= 0x400u;
      v8 = v5;
      for ( i = *v5; *v8; i = *v8 )
      {
        if ( (i & 3) == 0 )
        {
          v10 = i & 0xFFFFFFFFFFFFFFFCuLL;
          *v8 = v10;
          v12 = v10;
          ImageInfo[2] = v8[1] & 0xFFFFFFFFFFFF0000uLL;
          ImageInfo[4] = v8[3];
          if ( FltMgrCallbacks )
          {
            if ( (int)guard_dispatch_icall_no_overrides(v10, 1024LL) >= 0 )
              EtwpCovSampImageNotify(&FullImageName, PROCESS[1].Header.WaitListHead.Flink, (char *)&ImageInfo[1]);
          }
        }
        v8 += 6;
      }
    }
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( v1 )
  {
    KiUnstackDetachProcess((__int64)v14, 0, v6, v7);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink);
  }
  return 0LL;
}
