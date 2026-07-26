/*
 * XREFs of ?ndisOidPreRcvFilterEnumQueues@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140095070
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisCopyReceiveQueueInfo@@YAXPEAU_NDIS_RECEIVE_QUEUE_INFO@@PEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x14008EB00 (-ndisCopyReceiveQueueInfo@@YAXPEAU_NDIS_RECEIVE_QUEUE_INFO@@PEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400E4768 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

__int64 __fastcall ndisOidPreRcvFilterEnumQueues(struct _NDIS_REQ_TRACKER *a1)
{
  unsigned __int8 v2; // bl
  _OWORD *v3; // rax
  int v4; // edx
  __int64 v5; // rcx
  _DWORD *v6; // rsi
  __int64 v7; // rcx
  KSPIN_LOCK *v8; // rbx
  char v9; // r12
  KIRQL v10; // dl
  __int64 v11; // r14
  unsigned int v12; // ebp
  __int64 i; // rcx
  unsigned int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // ebx
  struct _NDIS_RECEIVE_QUEUE_INFO *v18; // rdi
  _QWORD *v19; // r12
  _QWORD *j; // r14
  struct _NDIS_RECEIVE_QUEUE_BLOCK *v21; // rdx
  struct _NDIS_RECEIVE_QUEUE_BLOCK *k; // r14
  __int64 v23; // rax
  char v25[48]; // [rsp+40h] [rbp-B8h]
  __int128 v26; // [rsp+70h] [rbp-88h]
  __int64 v27; // [rsp+80h] [rbp-78h] BYREF
  KIRQL v28; // [rsp+100h] [rbp+8h]
  KSPIN_LOCK *SpinLock; // [rsp+110h] [rbp+18h]

  v2 = 1;
  v3 = (_OWORD *)ndisCaptureIovOidContext(&v27, a1);
  *(_OWORD *)v25 = *v3;
  v26 = v3[3];
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      25,
      28,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      (char)a1);
  }
  v5 = *((_QWORD *)a1 + 4);
  v6 = (_DWORD *)((char *)a1 + 40);
  if ( (*(_DWORD *)(v5 + 4) & 0xFFFFFFFD) != 0 )
  {
    *v6 = -1073741637;
    goto LABEL_30;
  }
  *(_DWORD *)(v5 + 52) = 0;
  if ( !v25[0] )
  {
    v2 = 0;
    goto LABEL_30;
  }
  *v6 = -1073741637;
  if ( *((_QWORD *)&v26 + 1) )
  {
    v7 = *((_QWORD *)a1 + 4);
    if ( *(_DWORD *)(v7 + 4) == 2 )
    {
      v8 = (KSPIN_LOCK *)(*(_QWORD *)&v25[8] + 96LL);
      v9 = 0;
      SpinLock = (KSPIN_LOCK *)(*(_QWORD *)&v25[8] + 96LL);
      v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)&v25[8] + 96LL));
      v28 = v10;
      v11 = 0LL;
      v12 = *(_DWORD *)(*(_QWORD *)&v25[8] + 3492LL);
      *(_QWORD *)(*(_QWORD *)&v25[8] + 520LL) = KeGetCurrentThread();
      if ( *(_QWORD *)(*(_QWORD *)&v25[8] + 4368LL) )
      {
        ++v12;
        SpinLock = (KSPIN_LOCK *)(*(_QWORD *)&v25[8] + 96LL);
        v28 = v10;
      }
      goto LABEL_16;
    }
    for ( i = v7 + 72; (*(_DWORD *)(i + 16) & 0x4000) != 0; i = *(_QWORD *)(i + 24) + 72LL )
      ;
    v11 = *(_QWORD *)(i + 32);
    if ( v11 && *(_BYTE *)v11 == 18 )
    {
      v9 = 1;
      v8 = (KSPIN_LOCK *)(*(_QWORD *)&v25[8] + 96LL);
      SpinLock = (KSPIN_LOCK *)(*(_QWORD *)&v25[8] + 96LL);
      v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)&v25[8] + 96LL));
      v28 = v10;
      *(_QWORD *)(*(_QWORD *)&v25[8] + 520LL) = KeGetCurrentThread();
      v12 = *(_DWORD *)(v11 + 752);
LABEL_16:
      v14 = 1096 * v12 + 16;
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 56LL) = v14;
      v15 = *((_QWORD *)a1 + 4);
      if ( v14 <= *(_DWORD *)(v15 + 48) )
      {
        v16 = *(_QWORD *)(v15 + 40);
        v17 = 0;
        *(_DWORD *)v16 = 1048960;
        v18 = (struct _NDIS_RECEIVE_QUEUE_INFO *)(v16 + 16);
        *(_DWORD *)(v16 + 4) = 16;
        *(_DWORD *)(v16 + 8) = v12;
        *(_DWORD *)(v16 + 12) = 1096;
        if ( v9 )
        {
          v19 = (_QWORD *)(v11 + 736);
          for ( j = *(_QWORD **)(v11 + 736); j != v19; ++v17 )
          {
            if ( v17 >= v12 )
              break;
            ndisCopyReceiveQueueInfo(v18, (struct _NDIS_RECEIVE_QUEUE_BLOCK *)(j - 2));
            j = (_QWORD *)*j;
            v18 = (struct _NDIS_RECEIVE_QUEUE_INFO *)((char *)v18 + 1096);
          }
        }
        else
        {
          v21 = *(struct _NDIS_RECEIVE_QUEUE_BLOCK **)(*(_QWORD *)&v25[8] + 4368LL);
          if ( v21 )
          {
            ndisCopyReceiveQueueInfo((struct _NDIS_RECEIVE_QUEUE_INFO *)(v16 + 16), v21);
            v18 = (struct _NDIS_RECEIVE_QUEUE_INFO *)((char *)v18 + 1096);
            v17 = 1;
          }
          for ( k = *(struct _NDIS_RECEIVE_QUEUE_BLOCK **)(*(_QWORD *)&v25[8] + 3464LL);
                k != (struct _NDIS_RECEIVE_QUEUE_BLOCK *)(*(_QWORD *)&v25[8] + 3464LL);
                ++v17 )
          {
            if ( v17 >= v12 )
              break;
            ndisCopyReceiveQueueInfo(v18, k);
            k = (struct _NDIS_RECEIVE_QUEUE_BLOCK *)k->AdapterLink.Flink;
            v18 = (struct _NDIS_RECEIVE_QUEUE_INFO *)((char *)v18 + 1096);
          }
        }
        *(_QWORD *)(*(_QWORD *)&v25[8] + 520LL) = 0LL;
        KeReleaseSpinLock(SpinLock, v28);
        v23 = *((_QWORD *)a1 + 4);
        *v6 = 0;
        *(_DWORD *)(v23 + 52) = 1096 * v12 + 16;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)&v25[8] + 520LL) = 0LL;
        KeReleaseSpinLock(v8, v10);
        *v6 = -1073676266;
      }
      v2 = 1;
    }
  }
LABEL_30:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x19u,
      0x1Du,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      v25[8],
      *v6);
  return v2;
}
