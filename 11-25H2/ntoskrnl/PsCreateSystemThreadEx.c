/*
 * XREFs of PsCreateSystemThreadEx @ 0x140A17780
 * Callers:
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAKP6AXPEAX@Z@Z @ 0x140393894 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x140393F74 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     SmKmStoreHelperStart @ 0x1403940BC (SmKmStoreHelperStart.c)
 *     MiInsertNewZeroThread @ 0x1406844D0 (MiInsertNewZeroThread.c)
 *     ExpWatchProductTypeWork @ 0x1406EB400 (ExpWatchProductTypeWork.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x140716518 (IopCreatePassiveInterruptRealtimeThreads.c)
 *     KiStartDpcThread @ 0x14072F148 (KiStartDpcThread.c)
 *     PfTStart @ 0x14073AAEC (PfTStart.c)
 *     PopFxCreateStaticWorkPoolThread @ 0x140741A50 (PopFxCreateStaticWorkPoolThread.c)
 *     EtwpCovSampCaptureContextStart @ 0x1407A2BCC (EtwpCovSampCaptureContextStart.c)
 *     ExpWatchLicenseInfoWork @ 0x1407A7F10 (ExpWatchLicenseInfoWork.c)
 *     NtMapCMFModule @ 0x1407B4B70 (NtMapCMFModule.c)
 *     CmpCreateRegistryThread @ 0x1407C8A04 (CmpCreateRegistryThread.c)
 *     MiInitializePartitionThreads @ 0x1407DD1EC (MiInitializePartitionThreads.c)
 *     MiInsertPageFileInList @ 0x1407DF450 (MiInsertPageFileInList.c)
 *     MmStoreRegister @ 0x1407ED518 (MmStoreRegister.c)
 *     MiCreatePerNodeZeroingConductor @ 0x1407EF2C8 (MiCreatePerNodeZeroingConductor.c)
 *     NtGetMUIRegistryInfo @ 0x140A168A0 (NtGetMUIRegistryInfo.c)
 *     PopInitSystemSleeperThread @ 0x140A16CC8 (PopInitSystemSleeperThread.c)
 *     IoCreateSystemThread @ 0x140A16E30 (IoCreateSystemThread.c)
 *     IopStartApcHardError @ 0x140A16F50 (IopStartApcHardError.c)
 *     ExpNodeCreateSystemThread @ 0x140A1764C (ExpNodeCreateSystemThread.c)
 *     PsCreateSystemThread @ 0x140A17730 (PsCreateSystemThread.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeQueryActiveGroupCount @ 0x1404807A0 (KeQueryActiveGroupCount.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     PspCreateThread @ 0x1408F1680 (PspCreateThread.c)
 */

__int64 __fastcall PsCreateSystemThreadEx(
        __int64 a1,
        int a2,
        __int128 *a3,
        ULONG_PTR a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int128 *a8,
        int *a9)
{
  __int128 *v10; // r15
  char v13; // r12
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rdi
  _BYTE *v17; // rcx
  unsigned int v18; // ebx
  __int128 v19; // xmm0
  int v20; // eax
  int Thread; // edi
  int v23; // eax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  int v27; // [rsp+78h] [rbp-88h]
  __int128 v28; // [rsp+80h] [rbp-80h] BYREF
  __int128 v29; // [rsp+90h] [rbp-70h]
  __int128 v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  __int64 v33; // [rsp+C0h] [rbp-40h]
  __int128 v34; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v35[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v36; // [rsp+E8h] [rbp-18h]
  int v37; // [rsp+F4h] [rbp-Ch]
  __int128 v38; // [rsp+220h] [rbp+120h]

  v10 = a8;
  v33 = a5;
  v32 = a6;
  v27 = a2;
  v31 = a7;
  memset_0(v35, 0, 0x1F0uLL);
  *(_QWORD *)&v30 = 0LL;
  v26 = 0LL;
  v28 = 0LL;
  DWORD2(v30) = 0;
  v29 = 0LL;
  v34 = 0LL;
  if ( KeGetCurrentIrql() > 1u )
    KeBugCheckEx(0xC8u, ((unsigned __int64)KeGetCurrentIrql() << 16) | 4, 0LL, 0LL, 0LL);
  v13 = 0;
  if ( a4 )
  {
    Thread = ObpReferenceObjectByHandleWithTag(a4, 2, (__int64)PsProcessType, 0, 0x72437350u, &v26, 0LL, 0LL);
    if ( Thread < 0 )
      return (unsigned int)Thread;
    v14 = v26;
    v13 = 1;
  }
  else
  {
    v14 = *((_QWORD *)PspSystemPartition + 15);
    v26 = v14;
  }
  v15 = *(_DWORD *)(v14 + 1532);
  v16 = 4096LL;
  v17 = 0LL;
  if ( (v15 & 0x1000) != 0 || (v15 & 0x40000000) != 0 )
  {
    if ( !a8 )
    {
      if ( a9 )
      {
        v16 = v36;
        goto LABEL_9;
      }
      v18 = (unsigned __int16)(_InterlockedExchangeAdd(&PspSystemThreadAssignment, 1u) + 1);
      v10 = &v34;
      WORD4(v34) = v18 % KeQueryActiveGroupCount();
      v14 = v26;
      *(_QWORD *)&v34 = KeActiveProcessors.Bitmap[WORD4(v34)];
    }
    v19 = *v10;
    v36 = 4096LL;
    v38 = v19;
LABEL_9:
    if ( a9 )
    {
      v20 = *a9;
      v36 = v16 | 0x4000;
      v37 = v20;
    }
    v17 = v35;
  }
  if ( a3 )
  {
    v23 = *((_DWORD *)a3 + 6);
    v24 = a3[1];
    v28 = *a3;
    v25 = a3[2];
    v29 = v24;
    DWORD2(v29) = v23 | 0x200;
    v30 = v25;
  }
  else
  {
    LODWORD(v28) = 48;
    v30 = 0LL;
    *((_QWORD *)&v28 + 1) = 0LL;
    DWORD2(v29) = 512;
    *(_QWORD *)&v29 = 0LL;
  }
  Thread = PspCreateThread(a1, v27, (__int64)&v28, 0LL, (_KPROCESS *)v14, (__int64)v17, v33, 0LL, 0LL, 0, v32, v31, 0LL);
  if ( v13 )
    ObfDereferenceObjectWithTag((PVOID)v14, 0x72437350u);
  return (unsigned int)Thread;
}
