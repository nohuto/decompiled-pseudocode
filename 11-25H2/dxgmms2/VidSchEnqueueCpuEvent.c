/*
 * XREFs of VidSchEnqueueCpuEvent @ 0x1400E4D10
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSubmitCommandPacketToQueue @ 0x140004B80 (VidSchiSubmitCommandPacketToQueue.c)
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x14001CD20 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140031F70 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiFreeQueuePacket @ 0x140032960 (VidSchiFreeQueuePacket.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140032DD0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0DIGBGJFG@@@QEAAPEAPEAU_VIDSCH_QUEUE_PACKET@@I@Z @ 0x140035FD0 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0DIGBGJFG@@@QEAAPEAPEA.c)
 *     VidSchiAllocateQueuePacket @ 0x1400E5120 (VidSchiAllocateQueuePacket.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1400E5340 (VidSchiAllocateHwQueuePacket.c)
 */

__int64 __fastcall VidSchEnqueueCpuEvent(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int8 a5,
        HANDLE Handle)
{
  struct VIDSCH_HW_QUEUE *v6; // r14
  unsigned int v8; // r12d
  unsigned int v9; // r15d
  NTSTATUS v10; // eax
  unsigned int v11; // r13d
  __int64 Elements; // rbx
  unsigned int i; // esi
  __int64 v14; // rdi
  __int64 v15; // r12
  _DWORD *QueuePacket; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  struct _VIDSCH_QUEUE_PACKET *v20; // rcx
  PVOID v22; // rcx
  bool v23; // zf
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdi
  struct _VIDSCH_QUEUE_PACKET *v27; // rdx
  PVOID Object; // [rsp+58h] [rbp-39h] BYREF
  PVOID v29; // [rsp+60h] [rbp-31h]
  __int64 v30; // [rsp+68h] [rbp-29h]
  PVOID P; // [rsp+70h] [rbp-21h] BYREF
  _BYTE v32[16]; // [rsp+78h] [rbp-19h] BYREF
  int v33; // [rsp+88h] [rbp-9h]
  int v36; // [rsp+F8h] [rbp+67h]

  v6 = 0LL;
  v8 = a1;
  if ( a3 > 0x41 || !a3 && !a1 )
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 11311;
    DxgkLogInternalTriageEvent(v24, 0x40000LL);
    return 3221225485LL;
  }
  if ( (*((_DWORD *)DXGPROCESS::GetCurrent() + 102) & 0x110) != 0 )
  {
    v9 = 0;
    v29 = Handle;
    v36 = 1;
  }
  else
  {
    Object = 0LL;
    v10 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    v9 = v10;
    v29 = Object;
    v36 = 0;
    if ( v10 < 0 )
    {
      WdLogSingleEntry1(1LL, v10);
      WdLogGlobalForLineNumber = 11334;
      DxgkLogInternalTriageEvent(v25, 0x40000LL);
      return v9;
    }
  }
  v11 = v8 + a3;
  P = 0LL;
  v33 = 0;
  Elements = NonPagedPoolZeroedArray<_VIDSCH_QUEUE_PACKET *,2,945908054>::AllocateElements((__int64)&P, v8 + a3);
  if ( !Elements )
  {
    WdLogSingleEntry0(3LL);
    v22 = P;
    v23 = P == v32;
    WdLogGlobalForLineNumber = 11345;
LABEL_33:
    if ( !v23 && v22 )
      ExFreePoolWithTag(v22, 0);
    return 3221225495LL;
  }
  for ( i = 0; i < v11; ++i )
  {
    v30 = i;
    v14 = 8LL * i;
    if ( i >= v8 )
    {
      _mm_lfence();
      v15 = *(_QWORD *)(a4 + 8LL * (i - v8));
LABEL_12:
      QueuePacket = (_DWORD *)VidSchiAllocateQueuePacket(v15, *(_DWORD *)(v15 + 796) == 0);
      goto LABEL_13;
    }
    v15 = 0LL;
    v6 = *(struct VIDSCH_HW_QUEUE **)(v14 + a2);
    if ( !v6 )
      goto LABEL_12;
    QueuePacket = (_DWORD *)VidSchiAllocateHwQueuePacket(*(_QWORD *)(v14 + a2), 0LL);
LABEL_13:
    *(_QWORD *)(v14 + Elements) = QueuePacket;
    if ( !QueuePacket )
    {
      WdLogSingleEntry1(3LL, -1073741801LL);
      WdLogGlobalForLineNumber = 11389;
      if ( i )
      {
        v26 = v30;
        do
        {
          v27 = *(struct _VIDSCH_QUEUE_PACKET **)Elements;
          if ( *(_QWORD *)Elements )
          {
            if ( *((_QWORD *)v27 + 12) )
              VidSchiFreeQueuePacket(v6, v27);
            else
              VidSchiFreeQueuePacket(v15, (__int64)v27);
          }
          Elements += 8LL;
          --v26;
        }
        while ( v26 );
      }
      v22 = P;
      v23 = P == v32;
      goto LABEL_33;
    }
    *QueuePacket = 895576406;
    *(_DWORD *)(*(_QWORD *)(v14 + Elements) + 48LL) = 5;
    *(_QWORD *)(*(_QWORD *)(v14 + Elements) + 56LL) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(*(_QWORD *)(v14 + Elements) + 52LL) = 2;
    v17 = *(_QWORD *)(v14 + Elements);
    if ( v6 )
      *(_QWORD *)(v17 + 96) = v6;
    else
      *(_QWORD *)(v17 + 88) = v15;
    v6 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v14 + Elements) + 104LL) = KeGetCurrentThread();
    *(_QWORD *)(*(_QWORD *)(v14 + Elements) + 72LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)(v14 + Elements) + 752LL) ^= (a5 ^ (unsigned __int8)*(_DWORD *)(*(_QWORD *)(v14 + Elements)
                                                                                         + 752LL)) & 1;
    *(_DWORD *)(*(_QWORD *)(v14 + Elements) + 752LL) |= 2u;
    *(_DWORD *)(*(_QWORD *)(v14 + Elements) + 752LL) = *(_DWORD *)(*(_QWORD *)(v14 + Elements) + 752LL) & 0xFFFFFFF7 | (8 * v36);
    *(_QWORD *)(*(_QWORD *)(v14 + Elements) + 1016LL) = v29;
    *(_QWORD *)(*(_QWORD *)(v14 + Elements) + 1272LL) = 0LL;
    v18 = *(_QWORD *)(v14 + Elements);
    if ( i )
    {
      *(_QWORD *)(v18 + 1280) = *(_QWORD *)(Elements + 8LL * (i - 1));
      *(_QWORD *)(*(_QWORD *)(Elements + 8LL * (i - 1)) + 1272LL) = *(_QWORD *)(v14 + Elements);
    }
    else
    {
      *(_QWORD *)(v18 + 1280) = 0LL;
    }
    v8 = a1;
  }
  if ( v11 )
  {
    v19 = v11;
    do
    {
      v20 = *(struct _VIDSCH_QUEUE_PACKET **)Elements;
      if ( *(_QWORD *)(*(_QWORD *)Elements + 96LL) )
        VidSchiSubmitCommandPacketToHwQueue(v20);
      else
        VidSchiSubmitCommandPacketToQueue((__int64)v20);
      Elements += 8LL;
      --v19;
    }
    while ( v19 );
  }
  if ( P != v32 && P )
    ExFreePoolWithTag(P, 0);
  return v9;
}
