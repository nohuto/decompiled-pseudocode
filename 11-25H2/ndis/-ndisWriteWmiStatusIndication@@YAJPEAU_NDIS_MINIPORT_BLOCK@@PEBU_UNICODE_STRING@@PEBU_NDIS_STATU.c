/*
 * XREFs of ?ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATUS_INDICATION@@HPEBXK@Z @ 0x140063730
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x140093540 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ndisCoIndicateStatusInternal @ 0x1400DB1E0 (ndisCoIndicateStatusInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140064EE0 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x14009CBC8 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 */

__int64 __fastcall ndisWriteWmiStatusIndication(
        struct _NDIS_MINIPORT_BLOCK *a1,
        const struct _UNICODE_STRING *a2,
        const struct _NDIS_STATUS_INDICATION *a3,
        unsigned int a4,
        int *Src,
        unsigned int Size)
{
  unsigned int Flags; // r9d
  const struct _NDIS_STATUS_INDICATION *v8; // r11
  struct _NDIS_MINIPORT_BLOCK *v10; // r10
  bool v11; // r8
  _NDIS_GUID *pNdisGuidMap; // rbx
  unsigned int cNdisGuidMap; // edx
  unsigned int i; // ecx
  unsigned int v15; // edx
  int v16; // ecx
  __int64 result; // rax
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax
  __int64 v19; // rcx
  unsigned int v20; // ebp
  unsigned int v21; // r13d
  unsigned int v22; // r15d
  int v23; // r15d
  unsigned int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // esi
  _DWORD *Pool2; // rax
  _DWORD *v28; // r14
  _GUID Guid; // xmm0
  unsigned __int16 Length; // ax
  _NDIS_GUID *v31; // rcx
  unsigned int *v32; // rsi
  _DWORD *v33; // rsi
  _UNICODE_STRING *p_MiniportName; // r15
  wchar_t **p_Buffer; // r12
  unsigned int v36; // eax
  NTSTATUS v37; // ebx
  int v38; // [rsp+44h] [rbp-54h] BYREF
  unsigned int v39; // [rsp+48h] [rbp-50h]
  _NDIS_GUID *v40; // [rsp+50h] [rbp-48h] BYREF

  Flags = a1->Flags;
  v8 = a3;
  v38 = 0;
  v40 = 0LL;
  v10 = a1;
  if ( (Flags & 0x100) != 0 )
    return 0LL;
  v11 = a4 - 1073807371 <= 1;
  if ( (Flags & 0x80u) != 0 )
  {
    CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport(a1);
    result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _NDIS_GUID **))CxBlockFromMiniport->Chars.EvtCxGetWmiEventGuid)(
               *(_QWORD *)(v19 + 24),
               a4,
               &v40);
    v15 = result;
    if ( (int)result < 0 )
      return result;
    pNdisGuidMap = v40;
    v10 = a1;
    v11 = a4 - 1073807371 <= 1;
    v8 = a3;
LABEL_10:
    if ( !pNdisGuidMap )
      return v15;
    v16 = pNdisGuidMap->Flags;
    if ( v16 >= 0 || (v8->Flags & 1) != 0 )
      return v15;
    v20 = 0;
    if ( Src )
      v20 = Size;
    v21 = v20 + 4;
    if ( (v16 & 0x10) == 0 )
      v21 = v20;
    v22 = v21;
    if ( (v16 & 0x200) != 0 )
    {
      v23 = v10->MiniportName.Length + 46;
    }
    else
    {
      if ( !v11 )
        goto LABEL_25;
      v23 = v10->MiniportName.Length + 2;
    }
    v22 = v21 + v23;
LABEL_25:
    v24 = (a2->Length + 9) & 0xFFFFFFF8;
    v25 = v24 + 64;
    v26 = v24 + 64 + v22;
    v39 = v24 + 64;
    if ( v26 < 0x40 || v26 < v24 || v26 < v22 )
    {
      v28 = 0LL;
    }
    else
    {
      Pool2 = (_DWORD *)ExAllocatePool2(64LL, v22 + v24 + 64, 863454286);
      v28 = Pool2;
      if ( Pool2 )
      {
        *Pool2 = v26;
        Pool2[1] = IoWMIDeviceObjectToProviderId(a1->DeviceObject);
        v28[2] = 1;
        Guid = pNdisGuidMap->Guid;
        *((_QWORD *)v28 + 2) = MEMORY[0xFFFFF78000000014];
        v28[14] = v39;
        Length = a2->Length;
        *(_GUID *)(v28 + 6) = Guid;
        v28[11] = 10;
        v28[12] = 64;
        v28[15] = v22;
        *((_WORD *)v28 + 32) = Length;
        memmove((char *)v28 + 66, a2->Buffer, a2->Length);
      }
      if ( v28 )
      {
        v31 = v40;
        v32 = (_DWORD *)((char *)v28 + (unsigned int)v28[14]);
        if ( (v40->Flags & 0x200) != 0 )
        {
          *v32 = v22 - 4;
          v33 = v32 + 1;
          *v33 = 2621699;
          v33[1] = a1->IfIndex;
          *((_QWORD *)v33 + 1) = a1->NetLuid.Value;
          v33[6] = a3->PortNumber;
          if ( a3->DestinationHandle == &ndisIntReqWmi )
            *((_QWORD *)v33 + 2) = a3->RequestId;
          p_MiniportName = &a1->MiniportName;
          p_Buffer = &a1->MiniportName.Buffer;
          v33[7] = a1->MiniportName.Length;
          v33[8] = v21 + 40;
          memmove((char *)v33 + v21 + 40, a1->MiniportName.Buffer, a1->MiniportName.Length);
          v31 = v40;
          v32 = v33 + 10;
        }
        else
        {
          p_MiniportName = &a1->MiniportName;
          p_Buffer = &a1->MiniportName.Buffer;
        }
        v36 = v31->Flags;
        if ( v20 )
        {
          if ( (v36 & 0x10) != 0 )
          {
            *v32++ = v20 / v31->Size;
          }
          else if ( a4 == 1073807384 && (a3->Flags & 4) != 0 )
          {
            v38 = 3;
            Src = &v38;
            p_MiniportName = &a1->MiniportName;
            v20 = 4;
            p_Buffer = &a1->MiniportName.Buffer;
          }
          memmove(v32, Src, v20);
          v32 = (unsigned int *)((char *)v32 + v20);
        }
        else if ( (v36 & 0x10) != 0 )
        {
          *v32++ = 0;
        }
        if ( a4 - 1073807371 <= 1 )
          memmove(v32, *p_Buffer, p_MiniportName->Length);
        v37 = IoWMIWriteEvent(v28);
        if ( v37 >= 0 )
          return (unsigned int)v37;
        LODWORD(v10) = (_DWORD)a1;
LABEL_49:
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0x18u,
            0x37u,
            (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
            (char)v10,
            v37);
          LODWORD(v10) = (_DWORD)a1;
        }
        if ( (byte_140125101 & 0x10) != 0 )
          McTemplateK0qqq_EtwWriteTransfer(v25, (unsigned int)&IoWMIWriteEventFailed, (_DWORD)v10 + 4008, v37, 3, 0);
        if ( v28 )
          ExFreePoolWithTag(v28, 0);
        return (unsigned int)v37;
      }
      LODWORD(v10) = (_DWORD)a1;
    }
    v37 = -1073741670;
    goto LABEL_49;
  }
  pNdisGuidMap = a1->pNdisGuidMap;
  if ( pNdisGuidMap )
  {
    cNdisGuidMap = a1->cNdisGuidMap;
    for ( i = 0; i < cNdisGuidMap; ++i )
    {
      if ( (pNdisGuidMap->Flags & 2) != 0 && pNdisGuidMap->Oid == a4 )
      {
        v40 = pNdisGuidMap;
        v15 = 0;
        goto LABEL_10;
      }
      ++pNdisGuidMap;
    }
  }
  return 3221225473LL;
}
