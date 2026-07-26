/*
 * XREFs of ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400DA2F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     NdisAcquireRWLockRead @ 0x140042EE0 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x140043190 (NdisReleaseRWLock.c)
 *     ?ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x14006B520 (-ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x14006D530 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PACKET@@EE@Z @ 0x1400D9F74 (-ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_P.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisCoSendPacketsToNetBufferLists(_QWORD *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  __int64 v3; // r13
  __int64 v6; // rax
  unsigned int v7; // edi
  struct _NDIS_RW_LOCK_EX *v9; // rcx
  struct _NDIS_PACKET **v10; // r14
  __int64 v11; // r15
  bool v12; // al
  int v13; // edx
  __int64 v14; // r15
  bool v15; // r13
  unsigned int v16; // r14d
  struct _NDIS_PACKET **v17; // r10
  struct _NDIS_PACKET *v18; // rcx
  struct _NDIS_STACK_RESERVED *v19; // rax
  __int64 v20; // r10
  __int64 v21; // r11
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rdi
  struct _NDIS_PACKET **v25; // rsi
  _QWORD v26[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v27; // [rsp+40h] [rbp-28h]
  int v28; // [rsp+44h] [rbp-24h]
  __int64 v29; // [rsp+48h] [rbp-20h]
  unsigned int v30; // [rsp+50h] [rbp-18h]
  int v31; // [rsp+54h] [rbp-14h]
  int v32; // [rsp+58h] [rbp-10h]
  int v33; // [rsp+5Ch] [rbp-Ch]
  struct _NDIS_STACK_RESERVED *v34; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v35; // [rsp+B8h] [rbp+50h]
  struct _LOCK_STATE_EX LockState; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v37; // [rsp+C8h] [rbp+60h]

  v3 = a1[24];
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  v35 = a1[9];
  v6 = *(_QWORD *)(v3 + 400);
  v7 = 0;
  v28 = 0;
  v31 = 0;
  v9 = *(struct _NDIS_RW_LOCK_EX **)(v6 + 288);
  v33 = 0;
  v34 = 0LL;
  v37 = v6;
  NdisAcquireRWLockRead(v9, &LockState, 0);
  if ( *(_BYTE *)(a1[24] + 90LL) && a3 )
  {
    v10 = a2;
    v11 = a3;
    do
    {
      ndisCoIndicatePromiscPacket(
        a1,
        (struct _NDIS_MINIPORT_BLOCK *)a1[24],
        *(struct _NDIS_OPEN_BLOCK **)(v3 + 56),
        *v10++,
        0);
      --v11;
    }
    while ( v11 );
  }
  v26[0] = a1;
  v26[1] = a2;
  v27 = a3;
  v29 = 0LL;
  v32 = 2;
  v30 = 0;
  do
  {
    v12 = ndisXlateSendPacketArrayToNetBufferLists((struct _NDIS_PKT_ARRAY_TO_NBLS *)v26);
    v14 = v29;
    v15 = v12;
    if ( v29 )
    {
      v16 = v30;
      if ( v7 < v30 )
      {
        v17 = &a2[v7];
        do
        {
          v18 = *v17;
          ++*(_DWORD *)&v18[-1].ProtocolReserved[4];
          NDIS_STACK_RESERVED_FROM_PACKET(v18, &v34);
          v19 = v34;
          v17 = (struct _NDIS_PACKET **)(v20 + 8);
          *(_QWORD *)v34 = a1[10];
          *((_QWORD *)v19 + 1) = a1;
        }
        while ( v21 != 1 );
      }
      ((void (__fastcall *)(_QWORD, __int64, _QWORD))a1[30])(a1[25], v14, 0LL);
      v7 = v16;
    }
  }
  while ( v15 );
  if ( !v14 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v13,
        3,
        11,
        (struct _GUID *)&WPP_04789eb9d50d37f5e019db2d2af48132_Traceguids);
    }
    if ( v7 < a3 )
    {
      v22 = v7;
      v23 = a3 - v7;
      v24 = v35;
      v25 = &a2[v22];
      do
      {
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v24 + 48))(3221225626LL, *(_QWORD *)(v24 + 24), *v25++);
        --v23;
      }
      while ( v23 );
    }
  }
  NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v37 + 288), &LockState);
}
