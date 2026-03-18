/*
 * XREFs of VidSchiCreateContextInternal @ 0x140032228
 * Callers:
 *     VidSchCreateSystemDevices @ 0x1400D7BAC (VidSchCreateSystemDevices.c)
 *     VidSchCreateContext @ 0x1401029F0 (VidSchCreateContext.c)
 * Callees:
 *     VidSchiFreeQueuePacket @ 0x140032960 (VidSchiFreeQueuePacket.c)
 *     VidSchiInterlockedInsertTailList @ 0x140032D40 (VidSchiInterlockedInsertTailList.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140032DD0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     VidSchiIncrementContextReference @ 0x140032DF0 (VidSchiIncrementContextReference.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x140043D0C (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     memset @ 0x140056780 (memset.c)
 *     VidSchSetPriorityContext @ 0x1400FF770 (VidSchSetPriorityContext.c)
 *     VidSchTerminateContext @ 0x1401005F0 (VidSchTerminateContext.c)
 */

__int64 __fastcall VidSchiCreateContextInternal(__int64 a1, __int128 *a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 Pool2; // rax
  __int64 v8; // rbx
  __int128 v9; // xmm0
  __int64 *v10; // rcx
  __int128 v11; // xmm1
  __int64 v12; // rax
  __int64 v13; // r12
  struct DXGPROCESS *Current; // rax
  bool v15; // zf
  __int64 v16; // rcx
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // r15d
  unsigned int v25; // r14d
  int i; // r12d
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  int v30; // r15d
  unsigned int v31; // r10d
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r12
  unsigned int v35; // r12d
  unsigned int j; // r15d
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rax
  bool v41; // cf
  __int64 v42; // r9
  unsigned int v43; // r8d
  __int64 v44; // rdx
  __int128 v45; // xmm1
  __int64 v46; // rax
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int64 v49; // r11
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-70h] BYREF
  __int128 v51; // [rsp+A8h] [rbp-58h]
  __int128 v52; // [rsp+B8h] [rbp-48h]
  _OWORD v53[5]; // [rsp+D0h] [rbp-30h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  if ( (*(_DWORD *)a2 & 4) != 0 || a3 )
  {
    Pool2 = ExAllocatePool2(64LL, 1000LL, 878799190LL);
    v8 = Pool2;
    if ( !Pool2 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 5129;
      return 0LL;
    }
    *(_DWORD *)Pool2 = 878799190;
    *(_QWORD *)(Pool2 + 56) = a3;
    *(_QWORD *)(Pool2 + 104) = a1;
    v9 = *a2;
    v10 = *(__int64 **)(v3 + 688);
    v11 = a2[1];
    *(_QWORD *)(Pool2 + 80) = KeGetCurrentThread();
    v12 = *((unsigned int *)a2 + 1);
    *(_OWORD *)(v8 + 112) = v9;
    *(_DWORD *)(v8 + 88) = v12;
    *(_OWORD *)(v8 + 128) = v11;
    if ( (unsigned int)v12 < *(_DWORD *)(v3 + 760) )
      v10 += v12;
    v13 = *v10;
    *(_QWORD *)(v8 + 96) = *v10;
    Current = DXGPROCESS::GetCurrent();
    *(_QWORD *)(v8 + 144) = 1LL;
    *(_BYTE *)(v8 + 909) = BYTE1(*((_DWORD *)Current + 102)) & 1;
    *(_OWORD *)(v8 + 320) = 0LL;
    *(_OWORD *)(v8 + 336) = 0LL;
    *(_OWORD *)(v8 + 352) = 0LL;
    *(_QWORD *)(v8 + 368) = 0LL;
    KeInitializeEvent((PRKEVENT)(v8 + 320), SynchronizationEvent, 0);
    v15 = (*(_DWORD *)a2 & 0x100) == 0;
    *(_QWORD *)(v8 + 384) = v8 + 376;
    *(_QWORD *)(v8 + 376) = v8 + 376;
    *(_QWORD *)(v8 + 672) = v8 + 664;
    *(_QWORD *)(v8 + 664) = v8 + 664;
    *(_QWORD *)(v8 + 688) = v8 + 680;
    *(_QWORD *)(v8 + 680) = v8 + 680;
    *(_QWORD *)(v8 + 704) = v8 + 696;
    *(_QWORD *)(v8 + 696) = v8 + 696;
    *(_QWORD *)(v8 + 720) = v8 + 712;
    *(_QWORD *)(v8 + 712) = v8 + 712;
    if ( !v15 )
    {
      *(_QWORD *)(v8 + 744) = v8 + 736;
      *(_QWORD *)(v8 + 736) = v8 + 736;
    }
    *(_QWORD *)(v8 + 768) = v8 + 760;
    *(_QWORD *)(v8 + 760) = v8 + 760;
    *(_BYTE *)(v8 + 908) = 1;
    VidSchiIncrementContextReference(v8);
    *(_BYTE *)(v8 + 908) = 0;
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 1984), &LockHandle);
    if ( *(_BYTE *)(a1 + 1648) || *(_BYTE *)(a1 + 1649) )
    {
      v16 = v13 + 2744;
      *(_DWORD *)(v8 + 184) |= 0x100u;
    }
    else
    {
      v16 = v13 + 2712;
    }
    v17 = *(_QWORD **)(v16 + 8);
    v18 = (_QWORD *)(v8 + 8);
    if ( *v17 != v16
      || (*v18 = v16,
          *(_QWORD *)(v8 + 16) = v17,
          *v17 = v18,
          *(_QWORD *)(v16 + 8) = v18,
          v20 = *(_QWORD **)(a1 + 80),
          v21 = (_QWORD *)(v8 + 24),
          *v20 != a1 + 72) )
    {
      __fastfail(3u);
    }
    *v21 = a1 + 72;
    *(_QWORD *)(v8 + 32) = v20;
    *v20 = v21;
    *(_QWORD *)(a1 + 80) = v21;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v22 = *(_QWORD *)(v3 + 2880);
    v23 = *(_QWORD *)(v3 + 2928);
    *(_QWORD *)(v8 + 472) = v22;
    *(_QWORD *)(v8 + 440) = v22;
    *(_QWORD *)(v8 + 480) = v23;
    KeInitializeTimer((PKTIMER)(v8 + 512));
    KeInitializeDpc((PRKDPC)(v8 + 576), VidSchiDelayReadyRoutine, (PVOID)v8);
    v24 = *(_DWORD *)a2;
    if ( (*(_DWORD *)a2 & 0x604) != 0 )
    {
      if ( (v24 & 1) != 0 )
      {
        memset(v53, 0, 0x48uLL);
        v38 = *(unsigned int *)(v8 + 88);
        v39 = *(_QWORD *)(v3 + 688);
        v40 = v39 + 8 * v38;
        v41 = (unsigned int)v38 < *(_DWORD *)(v3 + 760);
        if ( (unsigned int)v38 >= *(_DWORD *)(v3 + 760) )
          v40 = *(_QWORD *)(v3 + 688);
        DWORD2(v53[0]) = *(unsigned __int16 *)(*(_QWORD *)v40 + 8LL);
        if ( v41 )
          v39 += 8 * v38;
        v42 = *(_QWORD *)(v3 + 8);
        HIDWORD(v53[0]) = 1 << *(_BYTE *)(*(_QWORD *)v39 + 6LL);
        v43 = v53[1] & 0xFFFFFFE6 | ((v24 & 4 | ((v24 & 0x200 | (v24 >> 1) & 0x400) >> 4)) >> 2);
        v44 = *(_QWORD *)(a1 + 16);
        LODWORD(v53[1]) = v43 ^ ((unsigned __int8)v43 ^ (unsigned __int8)(4
                                                                        * *(_BYTE *)(344LL
                                                                                   * *(unsigned __int16 *)(v13 + 6)
                                                                                   + *(_QWORD *)(*(_QWORD *)(v42 + 16)
                                                                                               + 2992LL)
                                                                                   + 48))) & 4;
        if ( ((int (__fastcall *)(__int64, __int64, _OWORD *))DxgCoreInterface[21])(v42, v44, v53) < 0 )
        {
LABEL_29:
          VidSchTerminateContext((struct _VIDSCH_CONTEXT *)v8);
          return 0LL;
        }
        v15 = bTracingEnabled == 0;
        v45 = v53[1];
        v46 = *(_QWORD *)&v53[0];
        *(_OWORD *)(v8 + 912) = v53[0];
        *(_QWORD *)(v8 + 64) = v46;
        v47 = v53[2];
        *(_OWORD *)(v8 + 928) = v45;
        v48 = v53[3];
        *(_OWORD *)(v8 + 944) = v47;
        *(_QWORD *)&v47 = *(_QWORD *)&v53[4];
        *(_OWORD *)(v8 + 960) = v48;
        *(_QWORD *)(v8 + 976) = v47;
        if ( !v15 )
        {
          v49 = *(_QWORD *)(a1 + 8);
          if ( !v49 )
            LODWORD(v49) = a1;
          if ( (byte_140081241 & 8) != 0 )
            McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
              v53[3],
              (unsigned int)&EventCreateContext,
              HIDWORD(v53[2]),
              v49,
              SBYTE8(v53[0]),
              SBYTE12(v53[0]),
              SBYTE4(v53[2]),
              SBYTE8(v53[2]),
              SBYTE12(v53[2]),
              v53[3],
              SBYTE4(v53[3]),
              (2 * ((*(_DWORD *)(*(_QWORD *)(v8 + 104) + 48LL) & 0x10) != 0)) | 1,
              v8);
        }
      }
      else if ( bTracingEnabled )
      {
        v28 = *(unsigned int *)(v8 + 88);
        if ( (unsigned int)v28 < *(_DWORD *)(v3 + 80) )
        {
          v29 = *(_QWORD *)(v3 + 688);
          v30 = *(_DWORD *)a2 & 0x40;
          v31 = *(_DWORD *)(v3 + 760);
          v51 = 0LL;
          v32 = v29 + 8 * v28;
          v33 = *(_QWORD *)(v8 + 104);
          v52 = 0LL;
          if ( (unsigned int)v28 < v31 )
            v29 += 8 * v28;
          else
            v32 = v29;
          v34 = *(_QWORD *)(a1 + 8);
          if ( !v34 )
            LODWORD(v34) = a1;
          if ( (byte_140081241 & 8) != 0 )
            McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
              DWORD1(v51),
              (unsigned int)&EventCreateContext,
              v51,
              v34,
              *(_WORD *)(*(_QWORD *)v29 + 8LL),
              1 << *(_BYTE *)(*(_QWORD *)v32 + 6LL),
              v51,
              SBYTE4(v51),
              SBYTE8(v51),
              SBYTE12(v51),
              v52,
              (2 * (((*(_DWORD *)(v33 + 48) & 0x10) != 0) | (v30 != 0 ? 2 : 0))) | 1,
              v8);
        }
      }
    }
    else
    {
      *(_QWORD *)(v8 + 64) = *(_QWORD *)(a3 + 184);
    }
    if ( (int)VidSchSetPriorityContext((struct _VIDSCH_CONTEXT *)v8) < 0 )
      goto LABEL_29;
    v25 = *(_DWORD *)(v3 + 152) * ((*(_DWORD *)(v3 + 76) << 6) + ((8 * *(_DWORD *)(v3 + 76) + 231) & 0xFFFFFFF8))
        + 8 * (*(_DWORD *)(v3 + 76) + 171);
    if ( v25 <= 0x640 )
      v25 = 1600;
    for ( i = 0; i < 5; ++i )
    {
      v27 = ExAllocatePool2(64LL, v25, 895576406LL);
      if ( !v27 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 5409;
        goto LABEL_29;
      }
      VidSchiInterlockedInsertTailList(v3 + 1992, v8 + 760, v27 + 8, v8 + 776);
      VidSchiFreeQueuePacket(v8);
    }
    if ( (*(_DWORD *)a2 & 0x100) == 0 )
      return v8;
    v35 = *((_DWORD *)a2 + 6);
    if ( v35 )
    {
      for ( j = 0; j < v35; ++j )
      {
        v37 = ExAllocatePool2(64LL, v25, 895576406LL);
        if ( !v37 )
          goto LABEL_29;
        *(_DWORD *)(v37 + 64) |= 0x40u;
        VidSchiInterlockedInsertTailList(v3 + 1992, v8 + 760, v37 + 8, v8 + 776);
        VidSchiFreeQueuePacket(v8);
      }
      return v8;
    }
    goto LABEL_29;
  }
  WdLogSingleEntry0(3LL);
  WdLogGlobalForLineNumber = 5115;
  return 0LL;
}
