/*
 * XREFs of ?ndisRssV2UpdateIndirectionTable@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400B4FA4
 * Callers:
 *     ?ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140003424 (-ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_N.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x1400A89CC (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDDDd @ 0x1400B6158 (WPP_RECORDER_SF_DDDDd.c)
 *     ?ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400E5C88 (-ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisRssV2UpdateIndirectionTable(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _DWORD *InformationBuffer; // rax
  int v3; // r8d
  struct _NDIS_VPORT_BLOCK *v4; // r13
  _NDIS_RECEIVE_SCALE_PARAMETERS *CombinedNdisRSSParameters; // rdi
  struct _NDIS_VPORT_BLOCK *v6; // r15
  unsigned int v7; // esi
  __int64 v8; // rbx
  int *v9; // r11
  unsigned int v10; // r10d
  int v11; // ebp
  int v12; // r12d
  __int64 v13; // r14
  int v14; // r10d
  struct _NDIS_VPORT_BLOCK *VPortByVPortIdInternal; // rax
  char v16; // r10
  char v17; // al
  int v18; // [rsp+20h] [rbp-88h]
  char v19; // [rsp+28h] [rbp-80h]
  _GROUP_AFFINITY v20; // [rsp+50h] [rbp-58h]
  struct _NDIS_MINIPORT_BLOCK *v21; // [rsp+B0h] [rbp+8h]
  _PROCESSOR_NUMBER v22; // [rsp+B8h] [rbp+10h]
  int v23; // [rsp+C0h] [rbp+18h]
  unsigned int v24; // [rsp+C8h] [rbp+20h]

  v21 = a1;
  InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
  v3 = -1;
  v4 = 0LL;
  v23 = -1;
  CombinedNdisRSSParameters = 0LL;
  v6 = 0LL;
  v7 = 0;
  v24 = InformationBuffer[4];
  if ( v24 )
  {
    v8 = (__int64)InformationBuffer + (unsigned int)InformationBuffer[3] + 4;
    v9 = &WPP_RECORDER_INITIALIZED;
    do
    {
      v10 = *(_DWORD *)v8;
      v11 = *(_DWORD *)(v8 + 4);
      v12 = *(_DWORD *)(v8 + 16);
      v13 = *(unsigned __int16 *)(v8 + 8);
      v22 = *(_PROCESSOR_NUMBER *)(v8 + 10);
      v22.Reserved = 0;
      if ( *(_DWORD *)v8 != v3 )
      {
        if ( v10 )
        {
          v23 = *(_DWORD *)v8;
          VPortByVPortIdInternal = ndisIovFindVPortByVPortIdInternal(a1, v10);
          v4 = VPortByVPortIdInternal;
          if ( VPortByVPortIdInternal )
          {
            CombinedNdisRSSParameters = VPortByVPortIdInternal->CombinedNdisRSSParameters;
          }
          else
          {
            if ( *(int **)&WPP_RECORDER_INITIALIZED != v9 )
            {
              WPP_RECORDER_SF_DDDD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                2u,
                0xBu,
                0x10u,
                (struct _GUID *)&WPP_f192d87a3ca53ebd07debf06252d6703_Traceguids,
                v16,
                v7,
                v13);
              v9 = &WPP_RECORDER_INITIALIZED;
            }
            CombinedNdisRSSParameters = 0LL;
          }
        }
        else
        {
          if ( !v6 )
          {
            v6 = ndisIovFindVPortByVPortIdInternal(a1, 0);
            if ( !v6 && *(int **)&WPP_RECORDER_INITIALIZED != v9 )
            {
              WPP_RECORDER_SF_DDDD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                2u,
                v14 + 11,
                v14 + 15,
                (struct _GUID *)&WPP_f192d87a3ca53ebd07debf06252d6703_Traceguids,
                (unsigned __int8)a2 & v19,
                v7,
                v13);
              a1 = v21;
              v9 = &WPP_RECORDER_INITIALIZED;
            }
          }
          CombinedNdisRSSParameters = a1->CombinedNdisRSSParameters;
        }
      }
      if ( v12 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != v9 )
          WPP_RECORDER_SF_DDDDd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (_DWORD)a2,
            v3,
            19,
            v18,
            *(_DWORD *)v8,
            v7,
            v13,
            v11,
            v12);
      }
      else
      {
        v17 = v11 & 1;
        if ( CombinedNdisRSSParameters || v17 )
        {
          if ( (v11 & 2) != 0 )
          {
            CombinedNdisRSSParameters->DefaultProcessorNumber = v22;
          }
          else if ( v17 )
          {
            v20 = 0LL;
            v20.Group = v22.Group;
            v20.Mask = 1LL << v22.Number;
            if ( *(_DWORD *)v8 )
            {
              if ( v4 )
                v4->VPortParams.ProcessorAffinity = v20;
            }
            else if ( v6 )
            {
              v6->VPortParams.ProcessorAffinity = v20;
            }
          }
          else if ( (unsigned int)v13 >= CombinedNdisRSSParameters->IndirectionTableSize >> 2 )
          {
            if ( *(int **)&WPP_RECORDER_INITIALIZED != v9 )
              WPP_RECORDER_SF_DDDD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                2u,
                0xBu,
                0x12u,
                (struct _GUID *)&WPP_f192d87a3ca53ebd07debf06252d6703_Traceguids,
                *(_DWORD *)v8,
                v7,
                v13);
            *(_DWORD *)(v8 + 16) = -1073741811;
          }
          else
          {
            *(_PROCESSOR_NUMBER *)((char *)&CombinedNdisRSSParameters->Header
                                 + 4 * v13
                                 + CombinedNdisRSSParameters->IndirectionTableOffset) = v22;
          }
        }
        else if ( *(int **)&WPP_RECORDER_INITIALIZED != v9 )
        {
          WPP_RECORDER_SF_DDDDd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (_DWORD)a2,
            v3,
            17,
            v18,
            *(_DWORD *)v8,
            v7,
            v13,
            v11,
            0);
        }
      }
      a1 = v21;
      v9 = &WPP_RECORDER_INITIALIZED;
      v3 = v23;
      ++v7;
      v8 += 24LL;
    }
    while ( v7 < v24 );
  }
}
