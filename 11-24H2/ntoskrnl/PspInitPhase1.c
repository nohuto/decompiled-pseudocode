/*
 * XREFs of PspInitPhase1 @ 0x140C37000
 * Callers:
 *     PsInitSystem @ 0x140BE07F8 (PsInitSystem.c)
 * Callees:
 *     KeBugCheck @ 0x1404F9230 (KeBugCheck.c)
 *     ExRegisterHost @ 0x1407C0B6C (ExRegisterHost.c)
 *     ObInsertObject @ 0x140853260 (ObInsertObject.c)
 *     PspCreateSecureSystemProcess @ 0x140C36F2C (PspCreateSecureSystemProcess.c)
 *     PspInitializeCpuPartitionsPhase1 @ 0x140C378D0 (PspInitializeCpuPartitionsPhase1.c)
 */

bool PspInitPhase1()
{
  __int64 v0; // rdx
  __int64 v1; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  int v8; // [rsp+30h] [rbp-40h] BYREF
  __int64 (__fastcall **v9)(); // [rsp+38h] [rbp-38h]
  __int64 v10; // [rsp+40h] [rbp-30h] BYREF
  int *v11; // [rsp+48h] [rbp-28h]
  _OWORD v12[2]; // [rsp+50h] [rbp-20h] BYREF

  if ( ObInsertObject(PspSystemPartition, 0LL, 0x1F0003u, 0, 0LL, &PspSystemPartitionHandle) < 0
    || (int)PspInitializeCpuPartitionsPhase1() < 0 )
  {
    KeBugCheck(0x60u);
  }
  v10 = 65540LL;
  v11 = &v8;
  v12[0] = 1uLL;
  v8 = 1;
  v9 = 0LL;
  *(_QWORD *)&v12[1] = 0LL;
  if ( (int)ExRegisterHost(&PspNetRateControlExtensionHost, v0, (unsigned __int16 *)&v10) < 0 )
  {
    PspNetRateControlExtensionHost = 0LL;
    return 0;
  }
  v10 = 65541LL;
  v9 = PspBamHostInterface;
  v12[0] = 0x200uLL;
  v11 = &v8;
  v8 = 1;
  *(_QWORD *)&v12[1] = 0LL;
  if ( (int)ExRegisterHost(&PspBamExtensionHost, v1, (unsigned __int16 *)&v10) < 0 )
  {
    PspBamExtensionHost = 0LL;
    return 0;
  }
  v10 = 65543LL;
  v11 = &v8;
  v12[0] = 0x200uLL;
  v8 = 1;
  v9 = 0LL;
  *(_QWORD *)&v12[1] = 0LL;
  if ( (int)ExRegisterHost(&PspDamExtensionHost, v3, (unsigned __int16 *)&v10) < 0 )
  {
    PspDamExtensionHost = 0LL;
    return 0;
  }
  v10 = 65545LL;
  v9 = PspMmcssHostInterface;
  v12[0] = 0x200uLL;
  v11 = &v8;
  v8 = 1;
  *(_QWORD *)&v12[1] = 0LL;
  if ( (int)ExRegisterHost(&PspMmcssExtensionHost, v4, (unsigned __int16 *)&v10) < 0 )
  {
    PspMmcssExtensionHost = 0LL;
    return 0;
  }
  v10 = 65546LL;
  v9 = PspHwTraceHostInterface;
  v12[0] = 0x200uLL;
  v11 = &v8;
  v8 = 1;
  *(_QWORD *)&v12[1] = 0LL;
  if ( (int)ExRegisterHost(&PspHwTraceExtensionHost, v5, (unsigned __int16 *)&v10) < 0 )
  {
    PspHwTraceExtensionHost = 0LL;
    return 0;
  }
  v10 = 65549LL;
  v9 = (__int64 (__fastcall **)())&PspOctHostInterface;
  v11 = &v8;
  v8 = 1;
  memset((char *)v12 + 4, 0, 20);
  LODWORD(v12[0]) = 512;
  if ( (int)ExRegisterHost(&PspOctExtensionHost, v6, (unsigned __int16 *)&v10) < 0 )
  {
    PspOctExtensionHost = 0LL;
    return 0;
  }
  v10 = 65550LL;
  v9 = &PspSecHostInterface;
  v11 = &v8;
  v8 = 1;
  memset((char *)v12 + 4, 0, 20);
  LODWORD(v12[0]) = 512;
  if ( (int)ExRegisterHost(&PspSecExtensionHost, v7, (unsigned __int16 *)&v10) < 0 )
  {
    PspSecExtensionHost = 0LL;
    return 0;
  }
  return PspCreateSecureSystemProcess();
}
