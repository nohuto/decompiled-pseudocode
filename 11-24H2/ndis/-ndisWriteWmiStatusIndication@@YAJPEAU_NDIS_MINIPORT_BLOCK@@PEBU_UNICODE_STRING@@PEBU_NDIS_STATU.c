/*
 * XREFs of ?ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATUS_INDICATION@@HPEBXK@Z @ 0x14007F4D0
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14007BF40 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ndisCoIndicateStatusInternal @ 0x1400D3E90 (ndisCoIndicateStatusInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1400523E0 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x140092FAC (McTemplateK0qqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

__int64 __fastcall ndisWriteWmiStatusIndication(
        struct _NDIS_MINIPORT_BLOCK *a1,
        const struct _UNICODE_STRING *a2,
        const struct _NDIS_STATUS_INDICATION *a3,
        unsigned int a4,
        int *Src,
        unsigned int Size)
{
  unsigned int Flags; // eax
  __int64 result; // rax
  bool v12; // r8
  unsigned int v13; // ecx
  _NDIS_GUID *pNdisGuidMap; // r9
  unsigned int cNdisGuidMap; // edx
  unsigned int v16; // ecx
  int v17; // edx
  size_t v18; // rbx
  int *v19; // r12
  unsigned int v20; // esi
  unsigned int v21; // r15d
  int v22; // r15d
  int v23; // ecx
  PVOID v24; // r14
  NTSTATUS v25; // ebx
  _NDIS_GUID *v26; // rcx
  unsigned int *v27; // rdi
  unsigned int v28; // eax
  const struct _NDIS_STATUS_INDICATION *v29; // r15
  _DWORD *v30; // rdi
  unsigned int v31; // eax
  wchar_t **p_Buffer; // rsi
  unsigned int v33; // eax
  int v34; // [rsp+40h] [rbp-58h] BYREF
  _NDIS_GUID *v35; // [rsp+48h] [rbp-50h] BYREF
  PVOID WnodeEventItem; // [rsp+50h] [rbp-48h] BYREF
  bool v37; // [rsp+A0h] [rbp+8h]

  Flags = a1->Flags;
  WnodeEventItem = 0LL;
  v34 = 0;
  v35 = 0LL;
  if ( (Flags & 0x100) != 0 )
    return 0LL;
  v12 = a4 - 1073807371 <= 1;
  v37 = v12;
  if ( (a1->Flags & 0x80u) == 0 )
  {
    pNdisGuidMap = a1->pNdisGuidMap;
    if ( !pNdisGuidMap )
      return 3221225473LL;
    cNdisGuidMap = a1->cNdisGuidMap;
    v16 = 0;
    if ( !a1->cNdisGuidMap )
      return 3221225473LL;
    while ( (pNdisGuidMap->Flags & 2) == 0 || pNdisGuidMap->Oid != a4 )
    {
      ++v16;
      ++pNdisGuidMap;
      if ( v16 >= cNdisGuidMap )
        return 3221225473LL;
    }
    v35 = pNdisGuidMap;
    v13 = 0;
  }
  else
  {
    result = ((__int64 (__fastcall *)(void *, _QWORD, _NDIS_GUID **))a1->DriverHandle->CxBlock->Chars.EvtCxGetWmiEventGuid)(
               a1->MiniportAdapterContext,
               a4,
               &v35);
    v13 = result;
    if ( (int)result < 0 )
      return result;
    pNdisGuidMap = v35;
    v12 = v37;
  }
  if ( pNdisGuidMap )
  {
    v17 = pNdisGuidMap->Flags;
    if ( v17 < 0 && (a3->Flags & 1) == 0 )
    {
      v18 = 0LL;
      v19 = Src;
      if ( Src )
        v18 = Size;
      v20 = v18 + 4;
      if ( (v17 & 0x10) == 0 )
        v20 = v18;
      v21 = v20;
      if ( (v17 & 0x200) != 0 )
      {
        v22 = a1->MiniportName.Length + 46;
      }
      else
      {
        if ( !v12 )
          goto LABEL_26;
        v22 = a1->MiniportName.Length + 2;
      }
      v21 = v20 + v22;
LABEL_26:
      ndisSetupWmiNode(a1, a2, v21, (__int128 *)pNdisGuidMap, (struct tagWNODE_SINGLE_INSTANCE **)&WnodeEventItem);
      v24 = WnodeEventItem;
      if ( WnodeEventItem )
      {
        v26 = v35;
        v27 = (unsigned int *)((char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14));
        if ( (v35->Flags & 0x200) != 0 )
        {
          v28 = v21 - 4;
          v29 = a3;
          *v27 = v28;
          v30 = v27 + 1;
          *v30 = 2621699;
          v30[1] = a1->IfIndex;
          *((_QWORD *)v30 + 1) = a1->NetLuid.Value;
          v30[6] = a3->PortNumber;
          if ( a3->DestinationHandle == &ndisIntReqWmi )
            *((_QWORD *)v30 + 2) = a3->RequestId;
          v30[7] = a1->MiniportName.Length;
          v31 = v20 + 40;
          v30[8] = v20 + 40;
          p_Buffer = &a1->MiniportName.Buffer;
          memmove((char *)v30 + v31, a1->MiniportName.Buffer, a1->MiniportName.Length);
          v26 = v35;
          v27 = v30 + 10;
        }
        else
        {
          v29 = a3;
          p_Buffer = &a1->MiniportName.Buffer;
        }
        v33 = v26->Flags;
        if ( (_DWORD)v18 )
        {
          if ( (v33 & 0x10) != 0 )
          {
            *v27++ = (unsigned int)v18 / v26->Size;
          }
          else if ( a4 == 1073807384 && (v29->Flags & 4) != 0 )
          {
            v34 = 3;
            v19 = &v34;
            v18 = 4LL;
            p_Buffer = &a1->MiniportName.Buffer;
          }
          memmove(v27, v19, v18);
          v27 = (unsigned int *)((char *)v27 + v18);
        }
        else if ( (v33 & 0x10) != 0 )
        {
          *v27++ = 0;
        }
        if ( v37 )
          memmove(v27, *p_Buffer, a1->MiniportName.Length);
        v25 = IoWMIWriteEvent(v24);
        if ( v25 >= 0 )
          return (unsigned int)v25;
      }
      else
      {
        v25 = -1073741670;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x18u,
          0x37u,
          (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
          (char)a1,
          v25);
      if ( (byte_14011B101 & 0x10) != 0 )
        McTemplateK0qqq_EtwWriteTransfer(v23, (unsigned int)&IoWMIWriteEventFailed, (_DWORD)a1 + 4008, v25, 3, 0);
      if ( v24 )
        ExFreePoolWithTag(v24, 0);
      return (unsigned int)v25;
    }
  }
  return v13;
}
