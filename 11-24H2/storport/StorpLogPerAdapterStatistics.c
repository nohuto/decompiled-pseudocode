/*
 * XREFs of StorpLogPerAdapterStatistics @ 0x1400B0A00
 * Callers:
 *     StorpLogStatistics @ 0x14003FE88 (StorpLogStatistics.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x140009B34 (RaidAcquireAdapterRemoveLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140035110 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14003D27C (_tlgKeywordOn.c)
 *     StorpInitializeHierarchicalResetBuckets @ 0x140055AF8 (StorpInitializeHierarchicalResetBuckets.c)
 *     Feature_UfsTelemetryAndHealth__private_IsEnabledDeviceUsageNoInline @ 0x1400AABB8 (Feature_UfsTelemetryAndHealth__private_IsEnabledDeviceUsageNoInline.c)
 *     StorMFNDHealthTelemetrySupported @ 0x1400AF414 (StorMFNDHealthTelemetrySupported.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall StorpLogPerAdapterStatistics(__int64 a1, char a2)
{
  __int64 v3; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _IO_WORKITEM *WorkItem; // rax
  bool v13; // al
  __int64 v14; // rcx
  int v15; // r8d
  struct _IO_WORKITEM *v16; // rax
  char v17; // [rsp+38h] [rbp-D0h] BYREF
  char v18; // [rsp+39h] [rbp-CFh] BYREF
  char v19; // [rsp+3Ah] [rbp-CEh] BYREF
  char v20; // [rsp+3Bh] [rbp-CDh] BYREF
  int v21; // [rsp+3Ch] [rbp-CCh] BYREF
  int v22; // [rsp+40h] [rbp-C8h] BYREF
  int v23; // [rsp+44h] [rbp-C4h] BYREF
  int v24; // [rsp+48h] [rbp-C0h] BYREF
  int v25; // [rsp+4Ch] [rbp-BCh] BYREF
  int v26; // [rsp+50h] [rbp-B8h] BYREF
  int v27; // [rsp+54h] [rbp-B4h] BYREF
  int v28; // [rsp+58h] [rbp-B0h] BYREF
  int v29; // [rsp+5Ch] [rbp-ACh] BYREF
  int v30; // [rsp+60h] [rbp-A8h] BYREF
  int v31; // [rsp+64h] [rbp-A4h] BYREF
  _DWORD v32[4]; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v34; // [rsp+98h] [rbp-70h]
  __int64 v35; // [rsp+A0h] [rbp-68h]
  int *v36; // [rsp+A8h] [rbp-60h]
  __int64 v37; // [rsp+B0h] [rbp-58h]
  int *v38; // [rsp+B8h] [rbp-50h]
  __int64 v39; // [rsp+C0h] [rbp-48h]
  int *v40; // [rsp+C8h] [rbp-40h]
  __int64 v41; // [rsp+D0h] [rbp-38h]
  int *v42; // [rsp+D8h] [rbp-30h]
  __int64 v43; // [rsp+E0h] [rbp-28h]
  int *v44; // [rsp+E8h] [rbp-20h]
  __int64 v45; // [rsp+F0h] [rbp-18h]
  int *v46; // [rsp+F8h] [rbp-10h]
  __int64 v47; // [rsp+100h] [rbp-8h]
  char *v48; // [rsp+108h] [rbp+0h]
  __int64 v49; // [rsp+110h] [rbp+8h]
  int *v50; // [rsp+118h] [rbp+10h]
  __int64 v51; // [rsp+120h] [rbp+18h]
  int *v52; // [rsp+128h] [rbp+20h]
  __int64 v53; // [rsp+130h] [rbp+28h]
  char *v54; // [rsp+138h] [rbp+30h]
  __int64 v55; // [rsp+140h] [rbp+38h]
  int *v56; // [rsp+148h] [rbp+40h]
  __int64 v57; // [rsp+150h] [rbp+48h]
  int *v58; // [rsp+158h] [rbp+50h]
  __int64 v59; // [rsp+160h] [rbp+58h]
  char *v60; // [rsp+168h] [rbp+60h]
  __int64 v61; // [rsp+170h] [rbp+68h]
  int *v62; // [rsp+178h] [rbp+70h]
  __int64 v63; // [rsp+180h] [rbp+78h]
  int *v64; // [rsp+188h] [rbp+80h]
  __int64 v65; // [rsp+190h] [rbp+88h]
  int *v66; // [rsp+198h] [rbp+90h]
  __int64 v67; // [rsp+1A0h] [rbp+98h]

  v3 = *(unsigned int *)(a1 + 5092);
  if ( ((_DWORD)v3
     || *(_DWORD *)(a1 + 5104)
     || *(_DWORD *)(a1 + 5116)
     || *(_DWORD *)(a1 + 5128)
     || *(_DWORD *)(a1 + 5140))
    && (unsigned int)dword_140170178 > 5
    && tlgKeywordOn(v3, 0x400000000000LL) )
  {
    v35 = 16LL;
    v34 = a1 + 5064;
    v22 = *(_DWORD *)(a1 + 56);
    v36 = &v22;
    v38 = &v23;
    v24 = *(_DWORD *)(a1 + 5096);
    v40 = &v24;
    v17 = *(_BYTE *)(a1 + 5100);
    v42 = (int *)&v17;
    v25 = *(_DWORD *)(a1 + 5104);
    v44 = &v25;
    v26 = *(_DWORD *)(a1 + 5108);
    v46 = &v26;
    v18 = *(_BYTE *)(a1 + 5112);
    v48 = &v18;
    v27 = *(_DWORD *)(a1 + 5116);
    v50 = &v27;
    v28 = *(_DWORD *)(a1 + 5120);
    v52 = &v28;
    v19 = *(_BYTE *)(a1 + 5124);
    v54 = &v19;
    v29 = *(_DWORD *)(a1 + 5128);
    v56 = &v29;
    v30 = *(_DWORD *)(a1 + 5132);
    v58 = &v30;
    v20 = *(_BYTE *)(a1 + 5136);
    v60 = &v20;
    v31 = *(_DWORD *)(a1 + 5140);
    v62 = &v31;
    v32[0] = *(_DWORD *)(a1 + 5144);
    v64 = v32;
    LOBYTE(v21) = *(_BYTE *)(a1 + 5148);
    v66 = &v21;
    v37 = 4LL;
    v23 = v5;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 1LL;
    v45 = 4LL;
    v47 = 4LL;
    v49 = 1LL;
    v51 = 4LL;
    v53 = 4LL;
    v55 = 1LL;
    v57 = 4LL;
    v59 = 4LL;
    v61 = 1LL;
    v63 = 4LL;
    v65 = 4LL;
    v67 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(v5, (unsigned __int8 *)dword_1401606A5, v6, v7, 0x13u, v33);
  }
  v8 = *(unsigned int *)(a1 + 5152);
  if ( ((_DWORD)v8
     || *(_DWORD *)(a1 + 5164)
     || *(_DWORD *)(a1 + 5176)
     || *(_DWORD *)(a1 + 5188)
     || *(_DWORD *)(a1 + 5200))
    && (unsigned int)dword_140170178 > 5
    && tlgKeywordOn(v8, 0x400000000000LL) )
  {
    v35 = 16LL;
    v34 = a1 + 5064;
    v32[0] = *(_DWORD *)(a1 + 56);
    v36 = v32;
    v38 = &v31;
    v30 = *(_DWORD *)(a1 + 5156);
    v40 = &v30;
    LOBYTE(v21) = *(_BYTE *)(a1 + 5160);
    v42 = &v21;
    v29 = *(_DWORD *)(a1 + 5164);
    v44 = &v29;
    v28 = *(_DWORD *)(a1 + 5168);
    v46 = &v28;
    v20 = *(_BYTE *)(a1 + 5172);
    v48 = &v20;
    v27 = *(_DWORD *)(a1 + 5176);
    v50 = &v27;
    v26 = *(_DWORD *)(a1 + 5180);
    v52 = &v26;
    v19 = *(_BYTE *)(a1 + 5184);
    v54 = &v19;
    v25 = *(_DWORD *)(a1 + 5188);
    v56 = &v25;
    v24 = *(_DWORD *)(a1 + 5192);
    v58 = &v24;
    v18 = *(_BYTE *)(a1 + 5196);
    v60 = &v18;
    v23 = *(_DWORD *)(a1 + 5200);
    v62 = &v23;
    v22 = *(_DWORD *)(a1 + 5204);
    v64 = &v22;
    v17 = *(_BYTE *)(a1 + 5208);
    v66 = (int *)&v17;
    v37 = 4LL;
    v31 = v9;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 1LL;
    v45 = 4LL;
    v47 = 4LL;
    v49 = 1LL;
    v51 = 4LL;
    v53 = 4LL;
    v55 = 1LL;
    v57 = 4LL;
    v59 = 4LL;
    v61 = 1LL;
    v63 = 4LL;
    v65 = 4LL;
    v67 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(v9, (unsigned __int8 *)dword_14016174A, v10, v11, 0x13u, v33);
  }
  StorpInitializeHierarchicalResetBuckets(a1);
  if ( (*(_DWORD *)(a1 + 5344) & 1) == 0 && (int)RaidAcquireAdapterRemoveLock(a1) >= 0 )
  {
    WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
    if ( WorkItem )
      IoQueueWorkItem(WorkItem, (PIO_WORKITEM_ROUTINE)StorpAdapterTopologyWorkItemRoutine, NormalWorkQueue, WorkItem);
    else
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336));
  }
  if ( a2 < 0 )
  {
    Feature_UfsTelemetryAndHealth__private_IsEnabledDeviceUsageNoInline();
    v13 = StorMFNDHealthTelemetrySupported(a1);
    if ( v15 )
    {
      if ( !v13 && *(_DWORD *)(a1 + 4276) != 19 )
        return;
    }
    else if ( !v13 )
    {
      return;
    }
    if ( (int)RaidAcquireAdapterRemoveLock(v14) >= 0 )
    {
      v16 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
      if ( v16 )
        IoQueueWorkItem(v16, (PIO_WORKITEM_ROUTINE)StorpAdapterHealthWorkItemRoutine, NormalWorkQueue, v16);
      else
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336));
    }
  }
}
