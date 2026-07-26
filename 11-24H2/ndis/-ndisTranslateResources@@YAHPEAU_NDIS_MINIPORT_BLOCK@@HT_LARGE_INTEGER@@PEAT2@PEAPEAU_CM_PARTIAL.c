/*
 * XREFs of ?ndisTranslateResources@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HT_LARGE_INTEGER@@PEAT2@PEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x140090B1C
 * Callers:
 *     NdisMMapIoSpace @ 0x140093B10 (NdisMMapIoSpace.c)
 *     NdisMRegisterIoPortRange @ 0x140093F60 (NdisMRegisterIoPortRange.c)
 *     ndisImmediateReadWritePort @ 0x1400D4E88 (ndisImmediateReadWritePort.c)
 *     ?ndisImmediateReadWriteSharedMemory@@YAXPEAXKPEAEKE@Z @ 0x1400D4FFC (-ndisImmediateReadWriteSharedMemory@@YAXPEAXKPEAEKE@Z.c)
 *     NdisMRegisterInterrupt @ 0x1400D7930 (NdisMRegisterInterrupt.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall ndisTranslateResources(
        struct _NDIS_MINIPORT_BLOCK *a1,
        int a2,
        union _LARGE_INTEGER a3,
        union _LARGE_INTEGER *a4,
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR **a5)
{
  unsigned int v9; // edi
  _CM_RESOURCE_LIST *AllocatedResources; // rdx
  _CM_RESOURCE_LIST *AllocatedResourcesTranslated; // r9
  unsigned int Count; // r11d
  __int64 i; // r10
  LONGLONG v14; // rax
  __int64 v16; // [rsp+30h] [rbp-28h]

  v9 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xCu,
      (struct _GUID *)&WPP_089a512067333d51f5b66ea612d009fe_Traceguids,
      (char)a1,
      a2);
  AllocatedResources = a1->AllocatedResources;
  AllocatedResourcesTranslated = a1->AllocatedResourcesTranslated;
  if ( AllocatedResources && AllocatedResourcesTranslated )
  {
    Count = AllocatedResources->List[0].PartialResourceList.Count;
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= Count )
        goto LABEL_24;
      if ( AllocatedResources->List[0].PartialResourceList.PartialDescriptors[i].Type == a2 )
        break;
LABEL_19:
      ;
    }
    if ( a2 != 1 )
    {
      if ( a2 == 2 )
      {
        if ( a3.QuadPart == AllocatedResources->List[0].PartialResourceList.PartialDescriptors[i].u.Interrupt.Level )
        {
          v9 = 0;
          a4->QuadPart = AllocatedResourcesTranslated->List[0].PartialResourceList.PartialDescriptors[i].u.Interrupt.Level;
        }
LABEL_18:
        if ( !v9 )
          goto LABEL_22;
        goto LABEL_19;
      }
      if ( a2 != 3 )
      {
        if ( a2 == 4
          && a3.QuadPart == AllocatedResources->List[0].PartialResourceList.PartialDescriptors[i].u.Generic.Start.LowPart )
        {
          a4->QuadPart = AllocatedResourcesTranslated->List[0].PartialResourceList.PartialDescriptors[i].u.Generic.Start.LowPart;
LABEL_21:
          v9 = 0;
LABEL_22:
          if ( a5 )
            *a5 = &AllocatedResourcesTranslated->List[0].PartialResourceList.PartialDescriptors[i];
          goto LABEL_24;
        }
        goto LABEL_18;
      }
    }
    v14 = a3.QuadPart - AllocatedResources->List[0].PartialResourceList.PartialDescriptors[i].u.Generic.Start.QuadPart;
    if ( v14 >= 0
      && v14 < (unsigned __int64)AllocatedResources->List[0].PartialResourceList.PartialDescriptors[i].u.Generic.Length )
    {
      a4->QuadPart = v14
                   + AllocatedResourcesTranslated->List[0].PartialResourceList.PartialDescriptors[i].u.Generic.Start.QuadPart;
      goto LABEL_21;
    }
    goto LABEL_18;
  }
LABEL_24:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v16) = v9;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xDu,
      (struct _GUID *)&WPP_089a512067333d51f5b66ea612d009fe_Traceguids,
      (char)a1,
      v16);
  }
  return v9;
}
