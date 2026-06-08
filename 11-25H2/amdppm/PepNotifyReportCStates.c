/*
 * XREFs of PepNotifyReportCStates @ 0x140038590
 * Callers:
 *     AcpiCStateNotifyWorker @ 0x1400272B0 (AcpiCStateNotifyWorker.c)
 *     InitPepIdleStates @ 0x140037790 (InitPepIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     PepTranslateCstState @ 0x1400389C0 (PepTranslateCstState.c)
 */

__int64 __fastcall PepNotifyReportCStates(__int64 a1)
{
  unsigned int *v2; // rax
  unsigned int v3; // edx
  char v4; // di
  __int64 v5; // rax
  void *Pool2; // rax
  void *v7; // rdx
  int v8; // ebx
  __int64 v9; // rdx
  unsigned int *v10; // r8
  unsigned int i; // r10d
  __int64 v12; // rdx
  int v13; // r10d
  PVOID v14; // rdi
  int v15; // edx
  __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  PVOID P; // [rsp+38h] [rbp-28h]
  __int128 v19; // [rsp+40h] [rbp-20h] BYREF
  int v20; // [rsp+50h] [rbp-10h]

  HIDWORD(v17) = 0;
  v2 = *(unsigned int **)(a1 + 528);
  v3 = *v2;
  v4 = *((_BYTE *)v2 + 16);
  v5 = *v2 + 1;
  if ( v4 == 1 )
    v5 = v3;
  v17 = (unsigned int)v5;
  Pool2 = (void *)ExAllocatePool2(64LL, 24 * v5, 1919119952LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    P = Pool2;
    if ( v4 != 1 )
    {
      v20 = 0;
      v19 = 0LL;
      LOBYTE(v19) = 127;
      BYTE12(v19) = 1;
      HIWORD(v19) = 0;
      PepTranslateCstState(&v19, Pool2);
      v7 = (void *)(v9 + 24);
    }
    v10 = *(unsigned int **)(a1 + 528);
    for ( i = 0; i < *v10; i = v13 + 1 )
    {
      PepTranslateCstState(&v10[4 * i + 1 + i], v7);
      v10 = *(unsigned int **)(a1 + 528);
      v7 = (void *)(v12 + 24);
    }
    v14 = P;
    v8 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1120), 15LL, &v17);
    if ( v8 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 4;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v15,
          2,
          26,
          (__int64)&WPP_26d143b2c37434b937c9d64095e12d77_Traceguids,
          v8,
          v17);
      }
      v8 = 0;
    }
    ExFreePoolWithTag(v14, (ULONG)1919119952);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
