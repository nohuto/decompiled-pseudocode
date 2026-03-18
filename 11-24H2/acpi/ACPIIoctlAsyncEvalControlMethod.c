/*
 * XREFs of ACPIIoctlAsyncEvalControlMethod @ 0x140042CD0
 * Callers:
 *     ACPIThermalDeviceControl @ 0x140037210 (ACPIThermalDeviceControl.c)
 *     ACPIProcessorDeviceControl @ 0x1400B48A0 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AcpiIoctlCleanupArgumentObjects @ 0x1400108B0 (AcpiIoctlCleanupArgumentObjects.c)
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x140010C04 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x140010F68 (ACPIIoctlEvalPreProcessingV1.c)
 *     ACPIIoctlEvalPostProcessingV1 @ 0x14001143C (ACPIIoctlEvalPostProcessingV1.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x14001B450 (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPostProcessingV2 @ 0x14003A8D8 (ACPIIoctlEvalPostProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x140061F70 (ACPIIoctlEvalPreProcessingV2Ex.c)
 */

__int64 __fastcall ACPIIoctlAsyncEvalControlMethod(ULONG_PTR a1, IRP *a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  __int64 *v5; // r13
  void *v6; // r15
  PVOID v7; // rdi
  unsigned int v8; // r12d
  int v10; // eax
  int v11; // ebx
  __int64 result; // rax
  int v13; // r14d
  char v14; // r8
  int v15; // eax
  int v16; // r14d
  int v17; // r14d
  char v18; // r8
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+50h] BYREF
  PVOID P; // [rsp+A8h] [rbp+58h] BYREF

  v4 = *(_DWORD *)(a3 + 24);
  v5 = 0LL;
  v6 = 0LL;
  v19 = 0LL;
  v7 = 0LL;
  v20 = 0LL;
  v8 = 0;
  P = 0LL;
  LODWORD(v21) = 0;
  switch ( v4 )
  {
    case 3325952:
      v10 = ACPIIoctlEvalPreProcessingV1(a1, (__int64)a2, a3, a4, &v19, &P, &v20, (unsigned int *)&v21);
      break;
    case 3325980:
      v10 = ACPIIoctlEvalPreProcessingV1Ex(a1, (__int64)a2, a3, a4, &v19, &P, &v20, (unsigned int *)&v21);
      break;
    case 3326016:
      v10 = ACPIIoctlEvalPreProcessingV2(a1, (__int64)a2, a3, a4, &v19, &P, &v20, (unsigned int *)&v21);
      break;
    case 3326024:
      v10 = ACPIIoctlEvalPreProcessingV2Ex(
              a1,
              (_DWORD)a2,
              a3,
              a4,
              (__int64)&v19,
              (__int64)&P,
              (__int64)&v20,
              (__int64)&v21);
      break;
    default:
      goto LABEL_9;
  }
  v7 = P;
  v11 = v10;
  if ( v10 < 0 )
    goto LABEL_18;
  v5 = (__int64 *)v19;
  v6 = (void *)v20;
  v8 = v21;
LABEL_9:
  v11 = AMLIAsyncEvalObject(v5, (__int64)v7, v8, (__int64)v6, &ACPIIoctlAsyncEvalControlMethodCompletion, (__int64)a2);
  AMLIDereferenceHandleEx((__int64)v5);
  if ( v6 )
  {
    AcpiIoctlCleanupArgumentObjects((__int64)v6, v8);
    ExFreePoolWithTag(v6, 0x41706341u);
  }
  result = 259LL;
  if ( v11 != 259 )
  {
    if ( v11 >= 0 )
    {
      v13 = v4 - 3325952;
      if ( v13 )
      {
        v16 = v13 - 28;
        if ( v16 )
        {
          v17 = v16 - 36;
          if ( v17 )
          {
            if ( v17 != 8 )
              goto LABEL_17;
            v18 = 1;
          }
          else
          {
            v18 = 0;
          }
          v15 = ACPIIoctlEvalPostProcessingV2(a2, (__int64)v7, v18);
LABEL_16:
          v11 = v15;
LABEL_17:
          dword_1400890B8 = 0;
          pszDest = 0;
          FreeDataBuffs((__int64)v7, 1u);
          goto LABEL_18;
        }
        v14 = 1;
      }
      else
      {
        v14 = 0;
      }
      v15 = ACPIIoctlEvalPostProcessingV1(a2, (__int64)v7, v14);
      goto LABEL_16;
    }
LABEL_18:
    if ( v7 )
      ExFreePoolWithTag(v7, 0x52706341u);
    a2->IoStatus.Status = v11;
    IofCompleteRequest(a2, 0);
    return (unsigned int)v11;
  }
  return result;
}
