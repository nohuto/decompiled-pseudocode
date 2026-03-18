/*
 * XREFs of ACPIIoctlGetDeviceSpecificData @ 0x140048F9C
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1400101A0 (ACPIIrpDispatchDeviceControl.c)
 * Callees:
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     ACPIIoctlEvalPostProcessingV1 @ 0x14001143C (ACPIIoctlEvalPostProcessingV1.c)
 *     AMLIEvalNameSpaceObject @ 0x140014164 (AMLIEvalNameSpaceObject.c)
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     AMLIGetNameSpaceObject @ 0x140028510 (AMLIGetNameSpaceObject.c)
 *     AMLIIsObjectInGivenScope @ 0x140045FD4 (AMLIIsObjectInGivenScope.c)
 */

__int64 __fastcall ACPIIoctlGetDeviceSpecificData(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  unsigned int v3; // eax
  int v5; // edx
  __int64 v6; // rdi
  int v7; // ebx
  _IRP *MasterIrp; // r13
  __int64 DeviceExtension; // rax
  _QWORD *v10; // rsi
  __int64 Pool2; // rax
  _DWORD *v12; // rbx
  __int64 i; // rsi
  __int64 v14; // r14
  __int64 Reserved2; // rdx
  __int64 v16; // rdx
  _DWORD *v17; // r14
  __int64 j; // rsi
  __int64 v19; // rbx
  unsigned int v20; // eax
  SIZE_T v21; // rax
  __int64 *v23; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_DWORD *)(a3 + 16);
  v5 = *(_DWORD *)(a3 + 8);
  v6 = 0LL;
  v23 = 0LL;
  a2->IoStatus.Information = 0LL;
  if ( v3 >= 0x1C )
  {
    if ( (unsigned int)(v5 - 1) > 0x12 )
    {
      MasterIrp = a2->AssociatedIrp.MasterIrp;
      if ( *(_DWORD *)&MasterIrp->Type == 1214866753 )
      {
        DeviceExtension = ACPIInternalGetDeviceExtension(a1);
        v10 = *(_QWORD **)(DeviceExtension + 760);
        if ( v10 )
        {
          v7 = AMLIGetNameSpaceObject("_DSD", *(__int64 **)(DeviceExtension + 760), &v23, 1);
          if ( v7 >= 0 )
          {
            v7 = AMLIIsObjectInGivenScope((__int64)v23, v10);
            if ( v7 >= 0 )
            {
              Pool2 = ExAllocatePool2(256LL, 40LL, 1383097153LL);
              v6 = Pool2;
              if ( Pool2 )
              {
                v7 = AMLIEvalNameSpaceObject(v23, Pool2, 0, 0LL);
                if ( v7 >= 0 )
                {
                  if ( *(_WORD *)(v6 + 2) == 4 )
                  {
                    v12 = *(_DWORD **)(v6 + 32);
                    for ( i = 0LL; ; i = (unsigned int)(i + 2) )
                    {
                      v14 = (unsigned int)(i + 1);
                      if ( (unsigned int)v14 >= *v12 )
                        break;
                      if ( HIWORD(v12[10 * i + 2]) == 3
                        && v12[10 * i + 8] == 16
                        && RtlCompareMemory(
                             &MasterIrp->AllocationProcessorNumber,
                             *(const void **)&v12[10 * i + 10],
                             0x10uLL) == 16 )
                      {
                        LODWORD(Reserved2) = MasterIrp->Reserved2;
                        if ( (_DWORD)Reserved2 )
                        {
                          if ( HIWORD(v12[10 * v14 + 2]) == 4 )
                          {
                            v17 = *(_DWORD **)&v12[10 * v14 + 10];
                            for ( j = 0LL; (unsigned int)j < *v17; j = (unsigned int)(j + 1) )
                            {
                              if ( HIWORD(v17[10 * j + 2]) == 4 )
                              {
                                v19 = *(_QWORD *)&v17[10 * j + 10];
                                if ( *(_DWORD *)v19 > 1u && *(_WORD *)(v19 + 10) == 2 )
                                {
                                  v20 = *(_DWORD *)(v19 + 32);
                                  if ( (_DWORD)Reserved2 == v20 )
                                  {
                                    v21 = RtlCompareMemory(&MasterIrp->AssociatedIrp, *(const void **)(v19 + 40), v20);
                                    Reserved2 = MasterIrp->Reserved2;
                                    if ( Reserved2 == v21 )
                                    {
                                      v16 = v19 + 48;
                                      goto LABEL_33;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        else
                        {
                          v16 = (__int64)&v12[10 * v14 + 2];
LABEL_33:
                          if ( v16 )
                          {
                            v7 = ACPIIoctlEvalPostProcessingV1(a2, v16, 1);
                            goto LABEL_36;
                          }
                        }
                        break;
                      }
                    }
                  }
                  v7 = -1073741275;
LABEL_36:
                  dword_140089138 = 0;
                  pszDest = 0;
                  FreeDataBuffs(v6, 1u);
                }
              }
              else
              {
                v7 = -1073741670;
              }
            }
          }
          if ( v23 )
            AMLIDereferenceHandleEx((__int64)v23);
          if ( v6 )
            ExFreePoolWithTag((PVOID)v6, 0x52706341u);
        }
        else
        {
          v7 = -1073741810;
        }
      }
      else
      {
        v7 = -1073741585;
      }
    }
    else
    {
      v7 = -1073741789;
    }
  }
  else
  {
    v7 = -1073741820;
  }
  a2->IoStatus.Status = v7;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v7;
}
