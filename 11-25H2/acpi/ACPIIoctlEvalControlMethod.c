/*
 * XREFs of ACPIIoctlEvalControlMethod @ 0x1400509E4
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1400101A0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIThermalDeviceControl @ 0x140037210 (ACPIThermalDeviceControl.c)
 *     ACPIProcessorDeviceControl @ 0x1400B48A0 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AcpiIoctlCleanupArgumentObjects @ 0x1400108B0 (AcpiIoctlCleanupArgumentObjects.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x140010C04 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x140010F68 (ACPIIoctlEvalPreProcessingV1.c)
 *     ACPIIoctlEvalPostProcessingV1 @ 0x14001143C (ACPIIoctlEvalPostProcessingV1.c)
 *     AMLIEvalNameSpaceObject @ 0x140014164 (AMLIEvalNameSpaceObject.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x14001B450 (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPostProcessingV2 @ 0x14003A8D8 (ACPIIoctlEvalPostProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x140061F70 (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     Feature_Servicing_AmlSyncPriority__private_IsEnabledNoReportingNoInline @ 0x140062AD4 (Feature_Servicing_AmlSyncPriority__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall ACPIIoctlEvalControlMethod(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  int v3; // esi
  __int64 *v4; // r13
  PVOID v5; // r15
  PVOID v6; // rbx
  unsigned int v7; // r12d
  __int64 v10; // r9
  KPRIORITY v11; // eax
  int v12; // eax
  int v13; // edi
  int v14; // esi
  int v15; // esi
  int v16; // esi
  char v17; // r8
  int v18; // eax
  char v19; // r8
  __int64 v21; // [rsp+40h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+48h] [rbp-10h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+50h] BYREF
  KPRIORITY Priority; // [rsp+B0h] [rbp+58h]
  PVOID v26; // [rsp+B8h] [rbp+60h] BYREF

  v3 = *(_DWORD *)(a3 + 24);
  v4 = 0LL;
  v5 = 0LL;
  v21 = 0LL;
  v6 = 0LL;
  P[0] = 0LL;
  v7 = 0;
  v26 = 0LL;
  LODWORD(v24) = 0;
  KeEnterCriticalRegion();
  if ( (unsigned int)Feature_Servicing_AmlSyncPriority__private_IsEnabledNoReportingNoInline() )
  {
    v11 = KeSetPriorityThread(KeGetCurrentThread(), 16);
    v4 = (__int64 *)v21;
    v5 = P[0];
    v6 = v26;
    v7 = v24;
    Priority = v11;
  }
  else
  {
    Priority = 0;
  }
  switch ( v3 )
  {
    case 3325956:
      v12 = ACPIIoctlEvalPreProcessingV1(a1, (__int64)a2, a3, v10, &v21, &v26, P, (unsigned int *)&v24);
      break;
    case 3325976:
      v12 = ACPIIoctlEvalPreProcessingV1Ex(a1, (__int64)a2, a3, v10, &v21, &v26, P, (unsigned int *)&v24);
      break;
    case 3326012:
      v12 = ACPIIoctlEvalPreProcessingV2(a1, (__int64)a2, a3, v10, &v21, &v26, P, (unsigned int *)&v24);
      break;
    case 3326020:
      v12 = ACPIIoctlEvalPreProcessingV2Ex(
              a1,
              (_DWORD)a2,
              a3,
              v10,
              (__int64)&v21,
              (__int64)&v26,
              (__int64)P,
              (__int64)&v24);
      break;
    default:
      goto LABEL_14;
  }
  v6 = v26;
  v13 = v12;
  if ( v12 < 0 )
    goto LABEL_29;
  v4 = (__int64 *)v21;
  v5 = P[0];
  v7 = v24;
LABEL_14:
  v13 = AMLIEvalNameSpaceObject(v4, (__int64)v6, v7, (__int64)v5);
  AMLIDereferenceHandleEx((__int64)v4);
  if ( v5 )
  {
    AcpiIoctlCleanupArgumentObjects((__int64)v5, v7);
    ExFreePoolWithTag(v5, 0x41706341u);
  }
  if ( v13 >= 0 )
  {
    v14 = v3 - 3325956;
    if ( v14 )
    {
      v15 = v14 - 20;
      if ( v15 )
      {
        v16 = v15 - 36;
        if ( v16 )
        {
          if ( v16 != 8 )
          {
LABEL_28:
            dword_140089138 = 0;
            pszDest = 0;
            FreeDataBuffs((__int64)v6, 1u);
            goto LABEL_29;
          }
          v17 = 1;
        }
        else
        {
          v17 = 0;
        }
        v18 = ACPIIoctlEvalPostProcessingV2(a2, (__int64)v6, v17);
LABEL_27:
        v13 = v18;
        goto LABEL_28;
      }
      v19 = 1;
    }
    else
    {
      v19 = 0;
    }
    v18 = ACPIIoctlEvalPostProcessingV1(a2, (__int64)v6, v19);
    goto LABEL_27;
  }
LABEL_29:
  if ( (unsigned int)Feature_Servicing_AmlSyncPriority__private_IsEnabledNoReportingNoInline() )
  {
    KeSetPriorityThread(KeGetCurrentThread(), Priority);
    v6 = v26;
  }
  KeLeaveCriticalRegion();
  if ( v6 )
    ExFreePoolWithTag(v6, 0x52706341u);
  a2->IoStatus.Status = v13;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v13;
}
