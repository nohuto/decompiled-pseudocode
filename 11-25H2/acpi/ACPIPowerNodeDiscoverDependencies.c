/*
 * XREFs of ACPIPowerNodeDiscoverDependencies @ 0x140027364
 * Callers:
 *     ACPIDeviceRecordDependencies @ 0x140026E84 (ACPIDeviceRecordDependencies.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_ @ 0x1400283FC (WPP_RECORDER_SF_.c)
 *     AMLIGetNameSpaceObject @ 0x140028510 (AMLIGetNameSpaceObject.c)
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_sL @ 0x14005AC40 (WPP_RECORDER_SF_sL.c)
 */

void __fastcall ACPIPowerNodeDiscoverDependencies(_QWORD **a1)
{
  __int64 *v2; // rdi
  __int64 *v3; // r14
  __int64 v4; // rax
  _DWORD *v5; // rcx
  unsigned int v6; // r12d
  void **v7; // r15
  int v8; // eax
  int v9; // edx
  KIRQL v10; // bp
  _QWORD *v11; // rbx
  __int64 DeviceExtension; // rbp
  _QWORD *v13; // rbx
  _QWORD *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  int v18; // edx
  char v19; // al
  _QWORD *v20; // rax
  int v21; // edx
  __int64 **v22; // r8
  __int64 *v23; // rdx
  _QWORD *v24; // rdx
  int v25; // [rsp+98h] [rbp+10h] BYREF
  int v26; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v27; // [rsp+A8h] [rbp+20h]

  v26 = 0;
  v25 = 0;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v2 = (__int64 *)AcpiPowerNodeList;
  if ( (__int64 *)AcpiPowerNodeList != &AcpiPowerNodeList )
  {
    while ( 1 )
    {
      v3 = v2;
      v2 = (__int64 *)*v2;
      if ( (v3[2] & 0x1000) != 0 )
      {
        v4 = v3[12];
        if ( v4 )
        {
          v5 = *(_DWORD **)(v4 + 32);
          v6 = 0;
          v27 = *v5;
          if ( v27 )
            break;
        }
      }
LABEL_3:
      if ( v2 == &AcpiPowerNodeList )
        goto LABEL_4;
    }
    v7 = (void **)(v5 + 10);
    while ( 1 )
    {
      v8 = AMLIGetNameSpaceObject(*v7);
      if ( v8 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sL(
            WPP_GLOBAL_Control->DeviceExtension,
            v9,
            21,
            40,
            (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
            (__int64)*v7,
            v8);
      }
      else
      {
        v10 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        v11 = *(_QWORD **)(MEMORY[0] + 104LL);
        if ( v11 )
        {
          v11 = (_QWORD *)v11[96];
          if ( v11 )
            ObfReferenceObject(v11);
        }
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v10);
        AMLIDereferenceHandleEx(0LL);
        if ( v11 )
        {
          DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)v11);
          ObfDereferenceObject(v11);
          if ( DeviceExtension )
          {
            v13 = *a1;
            while ( v13 != a1 )
            {
              v14 = v13;
              v13 = (_QWORD *)*v13;
              v15 = v14[5];
              if ( v15 )
              {
                v16 = *(_QWORD *)(v15 + 784);
                if ( v16 )
                {
                  if ( v15 == DeviceExtension )
                  {
                    v19 = 1;
                    v25 = 1;
                  }
                  else
                  {
                    v17 = IoTestDependency(*(_QWORD *)(DeviceExtension + 784), v16, &v26, &v25);
                    if ( v17 < 0 )
                    {
                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      {
                        LOBYTE(v18) = 2;
                        WPP_RECORDER_SF_d(
                          WPP_GLOBAL_Control->DeviceExtension,
                          v18,
                          21,
                          41,
                          (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
                          v17);
                      }
                      continue;
                    }
                    v19 = v25;
                  }
                  if ( (v19 & 3) != 0 )
                  {
                    v20 = ExAllocateFromNPagedLookasideList(&RequestDependencyLookAsideList);
                    if ( v20 )
                    {
                      v22 = (__int64 **)v3[14];
                      v23 = v20 + 2;
                      if ( *v22 != v3 + 13
                        || (*v23 = (__int64)(v3 + 13),
                            v20[3] = v22,
                            *v22 = v23,
                            v3[14] = (__int64)v23,
                            v24 = (_QWORD *)v14[11],
                            (_QWORD *)*v24 != v14 + 10) )
                      {
                        __fastfail(3u);
                      }
                      *v20 = v14 + 10;
                      v20[1] = v24;
                      *v24 = v20;
                      v14[11] = v20;
                    }
                    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v21) = 2;
                      WPP_RECORDER_SF_(
                        WPP_GLOBAL_Control->DeviceExtension,
                        v21,
                        21,
                        42,
                        (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids);
                    }
                  }
                }
              }
            }
          }
        }
      }
      ++v6;
      v7 += 5;
      if ( v6 >= v27 )
        goto LABEL_3;
    }
  }
LABEL_4:
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
}
