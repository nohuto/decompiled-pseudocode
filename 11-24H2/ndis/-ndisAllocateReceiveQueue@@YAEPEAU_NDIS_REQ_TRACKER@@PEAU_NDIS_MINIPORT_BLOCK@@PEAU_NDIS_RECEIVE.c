/*
 * XREFs of ?ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_FILTER_CAPABILITIES@@@Z @ 0x1400A94C8
 * Callers:
 *     ?ndisOidPreRcvFilterAllocateQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400AA030 (-ndisOidPreRcvFilterAllocateQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400066E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qDL @ 0x140006710 (WPP_RECORDER_SF_qDL.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140006B10 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1400084F0 (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140011280 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisAddReceiveQueueToList@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x1400A9468 (-ndisAddReceiveQueueToList@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

char __fastcall ndisAllocateReceiveQueue(
        struct _NDIS_REQ_TRACKER *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_RECEIVE_FILTER_CAPABILITIES *a3)
{
  struct _NDIS_OID_REQUEST *v3; // r13
  __int64 v4; // rbp
  int v5; // r14d
  __int64 v6; // r12
  unsigned __int16 *InformationBuffer; // r15
  struct _NDIS_MINIPORT_BLOCK *v8; // rbx
  char v10; // si
  int InformationBufferLength; // eax
  unsigned __int16 v12; // cx
  unsigned __int64 v13; // rdx
  char v14; // cl
  char v15; // al
  struct _NDIS_OPEN_BLOCK *OidSourceHandle; // rax
  __int64 Pool2; // rax
  void *v18; // rcx
  size_t BytesRead; // r8
  _QWORD *v20; // rax
  char v21; // cl
  unsigned int NumReceiveQueues; // ecx
  unsigned __int8 *AllocatedQueueIndices; // r15
  unsigned int AllocatedQueueIndicesLength; // r8d
  __int64 v25; // rax
  unsigned __int8 *v26; // rcx
  _BYTE *v27; // r14
  __int64 v28; // r9
  int v29; // ecx
  int v30; // eax
  int v31; // edx
  int v32; // eax
  _QWORD *v33; // rdx
  __int64 v34; // r8
  _QWORD *v35; // rax
  KIRQL v36; // dl
  UINT v37; // eax
  char v39; // [rsp+28h] [rbp-70h]
  char v40; // [rsp+40h] [rbp-58h]
  int v41; // [rsp+44h] [rbp-54h]
  unsigned int Size; // [rsp+48h] [rbp-50h]
  unsigned int Size_4; // [rsp+4Ch] [rbp-4Ch]
  unsigned __int16 *v44; // [rsp+50h] [rbp-48h]
  char v45; // [rsp+A0h] [rbp+8h]
  KIRQL NewIrql; // [rsp+B8h] [rbp+20h] BYREF

  v3 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
  v4 = 0LL;
  v5 = 0;
  NewIrql = 0;
  v6 = 0LL;
  v41 = 0;
  v40 = 0;
  InformationBuffer = (unsigned __int16 *)v3->DATA.QUERY_INFORMATION.InformationBuffer;
  v8 = a2;
  v44 = InformationBuffer;
  v10 = 1;
  v45 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v39 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      25,
      14,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      v39);
  }
  InformationBufferLength = 1096;
  *((_DWORD *)a1 + 10) = -1073741637;
  v12 = InformationBuffer[1];
  v13 = v12;
  if ( v12 >= 0x448u )
    v13 = 1096LL;
  if ( v13 >= v3->DATA.QUERY_INFORMATION.InformationBufferLength )
  {
    InformationBufferLength = v3->DATA.QUERY_INFORMATION.InformationBufferLength;
  }
  else if ( v12 < 0x448u )
  {
    InformationBufferLength = InformationBuffer[1];
  }
  v3->DATA.METHOD_INFORMATION.BytesWritten = 0;
  v14 = 2;
  v3->DATA.METHOD_INFORMATION.BytesRead = InformationBufferLength;
  if ( *((_DWORD *)InformationBuffer + 2) != 1 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    v15 = 0;
    goto LABEL_55;
  }
  if ( !(unsigned __int8)ndisReferenceMiniport(v8, 0x45u) )
    goto LABEL_13;
  v40 = 1;
  OidSourceHandle = (struct _NDIS_OPEN_BLOCK *)ndisGetOidSourceHandle(v3);
  if ( !OidSourceHandle || OidSourceHandle->Header.Type != 18 )
  {
LABEL_18:
    if ( *((_DWORD *)InformationBuffer + 2) == 1 && !v6 )
      goto LABEL_20;
    Pool2 = ExAllocatePool2(64LL, 1224LL, 1970357326LL);
    v4 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 48) = 0;
      v18 = (void *)(Pool2 + 128);
      BytesRead = v3->DATA.METHOD_INFORMATION.BytesRead;
      *(_QWORD *)(Pool2 + 64) = v8;
      *(_QWORD *)(Pool2 + 72) = v6;
      v20 = (_QWORD *)(Pool2 + 32);
      *(_DWORD *)(v4 + 80) = 1;
      v20[1] = v20;
      *v20 = v20;
      *(_QWORD *)(v4 + 96) = v4 + 88;
      *(_QWORD *)(v4 + 88) = v4 + 88;
      memmove(v18, InformationBuffer, BytesRead);
      v21 = 2;
      *(_WORD *)(v4 + 130) = v3->DATA.METHOD_INFORMATION.BytesRead;
      if ( *(_BYTE *)(v4 + 129) < 2u )
        v21 = *(_BYTE *)(v4 + 129);
      *(_BYTE *)(v4 + 129) = v21;
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v8, &NewIrql);
      NumReceiveQueues = v8->NumReceiveQueues;
      if ( NumReceiveQueues + 1 <= 0x3BCBAD )
      {
        if ( !a3 )
        {
          v8->MiniportThread = 0LL;
          KeReleaseSpinLock(&v8->Lock, NewIrql);
LABEL_20:
          *((_DWORD *)a1 + 10) = -1073741637;
LABEL_21:
          v15 = v45;
          goto LABEL_54;
        }
        if ( NumReceiveQueues != a3->NumQueues )
        {
          AllocatedQueueIndices = v8->AllocatedQueueIndices;
          AllocatedQueueIndicesLength = v8->AllocatedQueueIndicesLength;
          Size = AllocatedQueueIndicesLength;
          if ( AllocatedQueueIndices && (v25 = 0LL, AllocatedQueueIndicesLength) )
          {
            v26 = v8->AllocatedQueueIndices;
            while ( *v26 == 0xFF )
            {
              v5 += 8;
              v25 = (unsigned int)(v25 + 1);
              ++v26;
              v41 = v5;
              if ( (unsigned int)v25 >= AllocatedQueueIndicesLength )
                goto LABEL_36;
            }
            v28 = (unsigned int)v25;
            v29 = 1;
            v30 = AllocatedQueueIndices[v25];
            v31 = 0;
            while ( (v30 & v29) != 0 )
            {
              v29 *= 2;
              if ( (unsigned int)++v31 >= 8 )
                goto LABEL_36;
            }
            AllocatedQueueIndices[v28] = v29 | v30;
            v5 += v31;
          }
          else
          {
LABEL_36:
            Size_4 = AllocatedQueueIndicesLength + 64;
            v27 = (_BYTE *)ExAllocatePool2(66LL, AllocatedQueueIndicesLength + 64, 1970357326LL);
            if ( !v27 )
            {
              v8->MiniportThread = 0LL;
              KeReleaseSpinLock(&v8->Lock, NewIrql);
              v5 = v41;
              InformationBuffer = v44;
              *((_DWORD *)a1 + 10) = -1073741670;
              goto LABEL_21;
            }
            memset(&v27[Size], 0, 0x40uLL);
            if ( AllocatedQueueIndices )
            {
              memmove(v27, AllocatedQueueIndices, Size);
              v27[Size] = 1;
              ExFreePoolWithTag(AllocatedQueueIndices, 0);
            }
            else
            {
              *v27 = 3;
              v41 = 1;
            }
            v8->AllocatedQueueIndices = v27;
            v5 = v41;
            v8->AllocatedQueueIndicesLength = Size_4;
          }
          InformationBuffer = v44;
          *(_DWORD *)(v4 + 140) = v5;
          *(_DWORD *)(v4 + 48) = v5;
          *((_DWORD *)v44 + 3) = v5;
          v32 = ndisAddReceiveQueueToList(v8, (struct _NDIS_RECEIVE_QUEUE_BLOCK *)v4);
          *((_DWORD *)a1 + 10) = v32;
          if ( !v32 )
          {
            if ( v6 )
            {
              v33 = (_QWORD *)(v6 + 736);
              v34 = *(_QWORD *)(v6 + 736);
              v35 = (_QWORD *)(v4 + 16);
              if ( *(_QWORD *)(v34 + 8) != v6 + 736 )
                __fastfail(3u);
              *v35 = v34;
              *(_QWORD *)(v4 + 24) = v33;
              *(_QWORD *)(v34 + 8) = v35;
              *v33 = v35;
              ++*(_DWORD *)(v6 + 752);
            }
            v36 = NewIrql;
            v8->MiniportThread = 0LL;
            KeReleaseSpinLock(&v8->Lock, v36);
            v15 = 0;
            *(_DWORD *)(v4 + 52) = 1;
            v10 = 0;
            v40 = 0;
            goto LABEL_54;
          }
          v8->MiniportThread = 0LL;
          KeReleaseSpinLock(&v8->Lock, NewIrql);
          goto LABEL_21;
        }
      }
      v8->MiniportThread = 0LL;
      KeReleaseSpinLock(&v8->Lock, NewIrql);
    }
    *((_DWORD *)a1 + 10) = -1073741670;
    goto LABEL_21;
  }
  v6 = (__int64)OidSourceHandle;
  if ( (unsigned __int8)ndisReferenceOpenByHandle(OidSourceHandle, 0xAu) )
  {
    v45 = 1;
    goto LABEL_18;
  }
LABEL_13:
  *((_DWORD *)a1 + 10) = -1073676286;
  v15 = 0;
LABEL_54:
  v14 = 2;
LABEL_55:
  if ( *((_DWORD *)a1 + 10) )
  {
    if ( v15 )
      ndisMDereferenceOpenUnlocked(v6, 0xAu);
    if ( v40 )
      ndisDereferenceMiniport(v8, 0x45u);
    if ( v4 )
      ExFreePoolWithTag((PVOID)v4, 0);
  }
  else
  {
    v37 = v3->DATA.METHOD_INFORMATION.BytesRead;
    v3->DATA.METHOD_INFORMATION.BytesWritten = v37;
    InformationBuffer[1] = v37;
    if ( *((_BYTE *)InformationBuffer + 1) < 2u )
      v14 = *((_BYTE *)InformationBuffer + 1);
    *((_BYTE *)InformationBuffer + 1) = v14;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v13,
      0x19u,
      0xFu,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      (char)v8,
      *((_DWORD *)a1 + 10),
      v5);
  return v10;
}
