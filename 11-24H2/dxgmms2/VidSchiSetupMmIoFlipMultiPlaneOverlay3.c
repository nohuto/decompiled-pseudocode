/*
 * XREFs of VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x14002FA40
 * Callers:
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@K@Z @ 0x14002F478 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_V.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1400461F0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x14000A1A4 (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 *     ?ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAX_K0@Z @ 0x14000C8BC (-ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAX_K0@Z.c)
 *     ?VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x14000C930 (-VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x140026328 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiSetupMmIoFlipMultiPlaneOverlay3(
        struct _VIDSCH_GLOBAL *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v8; // eax
  unsigned int v10; // r11d
  unsigned int *v13; // rbx
  int v14; // r10d
  int v15; // ecx
  _DWORD **v16; // r9
  unsigned int v17; // ebp
  unsigned int v18; // r14d
  __int64 v19; // r12
  unsigned __int64 v20; // r13
  int v21; // edx
  unsigned int v22; // r8d
  __int64 v23; // rcx
  unsigned int v24; // ebx
  __int64 v25; // rax
  char v26; // r11
  bool v27; // zf
  int v28; // eax
  char v29; // cl
  unsigned int v30; // r12d
  unsigned int v31; // r8d
  char v32; // cl
  int v33; // eax
  unsigned int v34; // r10d
  int v35; // eax
  __int128 v36; // xmm0
  __int64 result; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  char v40; // r9
  unsigned int v41; // ecx
  int v42; // eax
  unsigned int v43; // ecx
  __int64 v44; // r11
  int v45; // ecx
  __int64 v46; // rax
  unsigned __int64 v47; // r9
  __int64 v48; // r8
  int v49; // eax
  int v50; // ecx
  __int64 v51; // rdx
  int v52; // ecx
  __int64 v53; // rcx
  char v54; // cl
  int v55; // eax
  __int64 v56; // r8
  unsigned __int64 v57; // r9
  char v58; // cl
  int v59; // eax
  int v60; // edx
  unsigned int v61; // ecx
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rcx
  unsigned __int64 v66; // rax
  char v67; // dl
  int v68; // ecx
  unsigned __int64 v69; // rax
  unsigned int v70; // r8d
  int v71; // r9d
  char v72; // dl
  int v73; // eax
  unsigned __int64 v74; // rax
  unsigned __int64 CurrentVSyncPeriodQpc; // rax
  unsigned int v76; // [rsp+30h] [rbp-B8h]
  unsigned int *v77; // [rsp+50h] [rbp-98h]
  __int64 v78; // [rsp+58h] [rbp-90h]
  unsigned __int64 v79; // [rsp+60h] [rbp-88h]
  __int64 v80; // [rsp+68h] [rbp-80h]
  _DWORD v81[4]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v82; // [rsp+80h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-60h] BYREF
  char v84; // [rsp+F0h] [rbp+8h]
  unsigned int v85; // [rsp+F8h] [rbp+10h]
  __int64 v86; // [rsp+F8h] [rbp+10h]
  unsigned int v88; // [rsp+108h] [rbp+20h]

  v8 = *(_DWORD *)(a4 + 12);
  v10 = a3;
  v13 = (unsigned int *)*((_QWORD *)a1 + a3 + 429);
  *(_QWORD *)a4 = a1;
  *(_DWORD *)(a4 + 8) = a3;
  v77 = v13;
  v14 = v8 ^ (*(_DWORD *)(a2 + 1152) ^ v8) & 1;
  *(_DWORD *)(a4 + 12) = v14;
  v15 = v14 ^ (*(_DWORD *)(a2 + 1152) ^ v14) & 2;
  *(_DWORD *)(a4 + 12) = v15;
  *(_DWORD *)(a4 + 12) = v15 ^ (*(_DWORD *)(a2 + 1152) ^ v15) & 4;
  v16 = (_DWORD **)(a2 + 1192);
  v78 = a2 + 1192;
  if ( (*(_DWORD *)(a2 + 1152) & 0x10) != 0 )
  {
    v17 = **v16 & 0x3FF;
    v18 = (**v16 >> 10) & 0x3FF;
  }
  else
  {
    v17 = 1;
    v78 = a2 + 1192;
    v18 = ((1 << *((_DWORD *)a1 + 38)) - 1) & 0xFFFFFFFE;
  }
  LOBYTE(v19) = 0;
  v20 = 0LL;
  *(_DWORD *)(a4 + 40) = *(_DWORD *)(a2 + 1156);
  if ( !*((_BYTE *)a1 + 7057) )
  {
    if ( (*(_DWORD *)(a2 + 1152) & 0x10) != 0 )
      v60 = ((unsigned __int16)**v16 | (unsigned __int16)(**v16 >> 10)) & 0x3FF;
    else
      v60 = (1 << *((_DWORD *)a1 + 38)) - 1;
    v61 = v13[798];
    if ( !_bittest(&v60, v13[799]) )
    {
      *(_DWORD *)(a4 + 40) = v61;
      goto LABEL_6;
    }
    if ( v61 != *(_DWORD *)(a2 + 1156) )
    {
      LOBYTE(v19) = 1;
      CurrentVSyncPeriodQpc = VidSchiGetCurrentVSyncPeriodQpc(a1, a3, 0);
      v10 = a3;
      v20 = CurrentVSyncPeriodQpc;
    }
    v13[798] = *(_DWORD *)(a2 + 1156);
    *(_DWORD *)(a4 + 40) = *(_DWORD *)(a2 + 1156);
    goto LABEL_90;
  }
  v21 = *(_DWORD *)(a2 + 1156);
  if ( !v21 )
    goto LABEL_5;
LABEL_83:
  if ( v21 != v13[20774] )
  {
    if ( !v17 )
      goto LABEL_6;
    if ( v13[798] != v21 )
    {
      LOBYTE(v19) = 1;
      v66 = VidSchiGetCurrentVSyncPeriodQpc(a1, v10, 0);
      v10 = a3;
      v20 = v66;
    }
    v67 = -1;
    v13[798] = *(_DWORD *)(a2 + 1156);
    v27 = !_BitScanForward((unsigned int *)&v68, v17);
    if ( !v27 )
      v67 = v68;
    v13[799] = v67;
LABEL_90:
    if ( (_BYTE)v19 && *((_BYTE *)a1 + 7058) )
    {
      v69 = VidSchiGetCurrentVSyncPeriodQpc(a1, v10, 0);
      VIDSCH_VSYNC_SMOOTHER::ResetSmoother(*((VIDSCH_VSYNC_SMOOTHER **)v13 + 5551), v20, v69);
    }
    goto LABEL_6;
  }
LABEL_5:
  v22 = v13[798];
  if ( !v22 )
    goto LABEL_6;
  if ( (*(_DWORD *)(a2 + 1152) & 0x10) != 0 )
    v71 = ((unsigned __int16)**v16 | (unsigned __int16)(**v16 >> 10)) & 0x3FF;
  else
    v71 = (1 << *((_DWORD *)a1 + 38)) - 1;
  if ( _bittest(&v71, v13[799]) )
  {
    if ( v22 != v21 )
    {
      LOBYTE(v19) = 1;
      v74 = VidSchiGetCurrentVSyncPeriodQpc(a1, v10, 0);
      v10 = a3;
      v20 = v74;
    }
    v13[798] = *(_DWORD *)(a2 + 1156);
    goto LABEL_90;
  }
  *(_DWORD *)(a4 + 40) = v22;
LABEL_6:
  v23 = *((_QWORD *)a1 + 2);
  v24 = a3;
  if ( *(_BYTE *)(v23 + 4976) && *(_DWORD *)(v23 + 296) == 1 && v17 )
  {
    v81[0] = a3;
    v81[3] = 0;
    v72 = -1;
    v81[1] = *(_DWORD *)(a4 + 40);
    v27 = !_BitScanForward((unsigned int *)&v73, v17);
    if ( !v27 )
      v72 = v73;
    v81[2] = v72;
    v82 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 1040) + 40LL) + 2648LL);
    ((void (__fastcall *)(__int64, __int64, _DWORD *))DxgCoreInterface[87])(v23, 2LL, v81);
  }
  *(_DWORD *)(a4 + 2120) = -1073741823;
  *(_QWORD *)(a4 + 32) = 0LL;
  v20 = 0LL;
  *(_QWORD *)(a4 + 48) = 0LL;
  *(_DWORD *)(a4 + 20) = 0;
  v25 = *(_QWORD *)(a2 + 1184);
  v79 = 0LL;
  if ( v25 )
  {
    v20 = v25 + 24;
    v79 = v25 + 24 + 16LL * *(unsigned int *)(v25 + 16) - 16;
  }
  v26 = 0;
  v85 = 0;
  v27 = !_BitScanForward((unsigned int *)&v28, v17);
  v29 = -1;
  v84 = 0;
  v30 = 0;
  if ( !v27 )
    v29 = v28;
  v31 = v29;
  v32 = -1;
  v27 = !_BitScanForward((unsigned int *)&v33, v18);
  v88 = v31;
  if ( !v27 )
    v32 = v33;
  v34 = v32;
  v76 = v32;
  while ( v17 || v18 )
  {
    v38 = v30 * ((8 * *(_DWORD *)(*(_QWORD *)v78 + 8LL) + 231) & 0xFFFFFFF8);
    v13 = (unsigned int *)(v38 + *(_QWORD *)v78 + 16LL);
    v39 = *(_QWORD *)(v38 + *(_QWORD *)v78 + 200);
    v80 = v39;
    if ( v39 )
    {
      v13[10] = *(_DWORD *)(v39 + 8);
      *((_QWORD *)v13 + 6) = v39 + 16;
    }
    v40 = 1;
    if ( v31 < v34 || *((_BYTE *)a1 + 59) )
    {
      if ( a5 )
      {
        v13[4] = v13[4] & 0xFFFFFFFD | (2 * a5);
      }
      else if ( *((_BYTE *)a1 + 7056) && (*(_DWORD *)(a2 + 1152) & 0x80u) != 0 )
      {
        v13[4] |= 2u;
      }
      else if ( (*(_DWORD *)(a2 + 1152) & 0x200) != 0 )
      {
        v13[4] |= 0x20u;
      }
      v41 = v13[4];
      v42 = 0;
      if ( (v41 & 0x22) == 0 )
        v42 = 4;
      v13[4] = v41 & 0xFFFFFFFB | v42;
    }
    if ( v31 >= v34 )
    {
      if ( ((unsigned __int16)v77[11074] & (1 << v34)) != 0 )
      {
        *v13 = v34;
        *((_QWORD *)v13 + 4) = 0LL;
        *((_QWORD *)v13 + 3) = 0LL;
        v13[10] = 0;
        *((_QWORD *)v13 + 6) = 0LL;
      }
      else
      {
        v40 = 0;
        *((_QWORD *)v13 + 1) = 0LL;
      }
      v18 &= ~(1 << v34);
      v58 = -1;
      v27 = !_BitScanForward((unsigned int *)&v59, v18);
      if ( !v27 )
        v58 = v59;
      v76 = v58;
      if ( !v40 )
      {
LABEL_58:
        v24 = a3;
        goto LABEL_50;
      }
    }
    else
    {
      v43 = *(_DWORD *)(a2 + 1096);
      v19 = 0LL;
      v13[7] = v43;
      *((_QWORD *)v13 + 4) = v13 + 56;
      if ( v43 )
      {
        while ( 1 )
        {
          v44 = *(_QWORD *)(a2 + 1192);
          v45 = *(_DWORD *)(v44 + 4);
          v46 = v45 * ((8 * *(_DWORD *)(v44 + 8) + 231) & 0xFFFFFFF8);
          v47 = (unsigned __int64)(v85 + (_DWORD)v19 * v45) << 6;
          v48 = *(_QWORD *)(v47 + v46 + v44 + 48);
          *(_QWORD *)(v47 + v46 + v44 + 40) = *(_QWORD *)(*(_QWORD *)(v48 + 96) + 40LL);
          *(_WORD *)(v47 + (unsigned int)v46 + v44 + 32) = *(_WORD *)(*(_QWORD *)(v48 + 96) + 10LL);
          if ( *(int *)(*(_QWORD *)(v48 + 96) + 16LL) <= 0 )
            break;
          *(_QWORD *)(*((_QWORD *)v13 + 4) + 8 * v19) = ((unsigned __int64)(v85
                                                                          + (_DWORD)v19
                                                                          * *(_DWORD *)(*(_QWORD *)(a2 + 1192) + 4LL)) << 6)
                                                      + *(_QWORD *)(a2 + 1192)
                                                      + *(_DWORD *)(*(_QWORD *)(a2 + 1192) + 4LL)
                                                      * ((8 * *(_DWORD *)(*(_QWORD *)(a2 + 1192) + 8LL) + 231) & 0xFFFFFFF8)
                                                      + 16LL;
          v19 = (unsigned int)(v19 + 1);
          if ( (unsigned int)v19 >= v13[7] )
          {
            v31 = v88;
            v26 = v84;
            goto LABEL_40;
          }
        }
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 0x4000LL, v85, (unsigned int)v19, 0LL);
        WdLogGlobalForLineNumber = 906;
        goto LABEL_83;
      }
LABEL_40:
      v30 = v85;
      v49 = v13[4] | 1;
      v13[4] = v49;
      *v13 = v31;
      v50 = v49 ^ (*(_DWORD *)(a2 + 1152) ^ v49) & 8;
      v13[4] = v50;
      v13[4] = v50 ^ ((unsigned __int8)v50 ^ (unsigned __int8)(*(_DWORD *)(a2 + 1152) >> 1)) & 0x10;
      v51 = v85 * ((8 * *(_DWORD *)(*(_QWORD *)(a2 + 1192) + 8LL) + 231) & 0xFFFFFFF8) + *(_QWORD *)(a2 + 1192) + 160LL;
      v52 = v13[14] ^ (*(_DWORD *)(v51 + 28) ^ v13[14]) & 1;
      v13[14] = v52;
      v13[14] = v52 ^ (*(_DWORD *)(v51 + 28) ^ v52) & 2;
      v13[15] = (unsigned __int16)*(_DWORD *)v51;
      v13[16] = (unsigned __int16)*(_DWORD *)(v51 + 4);
      v13[17] = *(unsigned __int16 *)(v51 + 2);
      v13[18] = *(unsigned __int16 *)(v51 + 6);
      v13[19] = *(__int16 *)(v51 + 8);
      v13[20] = *(__int16 *)(v51 + 12);
      v13[21] = *(unsigned __int16 *)(v51 + 10);
      v13[22] = *(unsigned __int16 *)(v51 + 14);
      v13[23] = (unsigned __int16)*(_DWORD *)(v51 + 16);
      v13[24] = (unsigned __int16)*(_DWORD *)(v51 + 20);
      v13[25] = *(unsigned __int16 *)(v51 + 18);
      v13[26] = *(unsigned __int16 *)(v51 + 22);
      if ( v20 && *(_DWORD *)v20 == v31 )
      {
        v13[32] = *(_DWORD *)(v20 + 4);
        *((_QWORD *)v13 + 17) = *(_QWORD *)(v20 + 8);
        if ( v20 < v79 )
          v20 += 16LL;
        else
          v20 = 0LL;
      }
      else
      {
        v13[32] = 1;
        *((_QWORD *)v13 + 17) = v13 + 15;
      }
      v13[27] = ((*(_DWORD *)(v51 + 28) >> 3) & 3) + 1;
      v13[28] ^= ((unsigned __int8)v13[28] ^ (unsigned __int8)(*(_DWORD *)(v51 + 28) >> 2)) & 1;
      v13[29] = *(_DWORD *)(v51 + 24);
      v13[31] = *(_DWORD *)(v51 + 32);
      v53 = *(_QWORD *)(a2 + 1176);
      v86 = v53;
      if ( v53 && (unsigned int)(*(_DWORD *)(a2 + 1052) - 13) > 1 && !v26 )
      {
        v84 = 1;
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v53 + 16), &LockHandle);
        v64 = v80;
        if ( v80 )
          _InterlockedIncrement((volatile signed __int32 *)(v80 + 12));
        v65 = v86;
        if ( *(_QWORD *)(v86 + 8) )
        {
          CRefCountedBuffer::RefCountedBufferRelease(*(PVOID *)(v86 + 8));
          v64 = v80;
          v65 = v86;
        }
        *(_QWORD *)(v65 + 8) = v64;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        LOBYTE(v31) = v88;
      }
      v54 = -1;
      v17 &= ~(1 << v31);
      v27 = !_BitScanForward((unsigned int *)&v55, v17);
      if ( !v27 )
        v54 = v55;
      v88 = v54;
    }
    *(_QWORD *)(a6 + 8LL * (unsigned int)(*(_DWORD *)(a4 + 20))++) = v13;
    if ( (*(_DWORD *)(a2 + 1152) & 0x1000) != 0 )
    {
      if ( !*((_BYTE *)a1 + 59) )
        goto LABEL_58;
      v70 = *v13;
      v24 = a3;
      VidSchiSetInterruptTargetPresentId(a1, a3, v70, 0LL, 0, 0);
    }
    else
    {
      ++*(_QWORD *)&v77[2 * *v13 + 814];
      v56 = *v13;
      v57 = *(_QWORD *)&v77[2 * v56 + 814];
      *((_QWORD *)v13 + 1) = v57;
      v24 = a3;
      if ( *((_BYTE *)a1 + 59) )
      {
        v63 = *(_QWORD *)&v77[76 * v56 + 106];
        if ( (*(_DWORD *)(a2 + 1152) & 0x80000) != 0 )
        {
          if ( v57 == v63 )
            VidSchiSetInterruptTargetPresentId(a1, a3, v56, v57 + 1, 0, 1u);
        }
        else if ( v57 < v63 )
        {
          VidSchiSetInterruptTargetPresentId(a1, a3, v56, v57, 0, 0);
        }
      }
    }
LABEL_50:
    v31 = v88;
    ++v30;
    v34 = v76;
    v26 = v84;
    v85 = v30;
  }
  if ( (*(_DWORD *)(a2 + 1152) & 0x400) != 0 )
  {
    v35 = *(_DWORD *)(a2 + 1200);
    *(_DWORD *)a7 = v35;
    switch ( v35 )
    {
      case 0:
        *(_DWORD *)(a7 + 4) = 0;
        goto LABEL_19;
      case 134217729:
        *(_QWORD *)a7 = 1LL;
LABEL_19:
        *(_QWORD *)(a7 + 8) = 0LL;
        break;
      case 1:
        *(_DWORD *)(a7 + 4) = 28;
        *(_QWORD *)(a7 + 8) = a2 + 1204;
        break;
      case 2:
        *(_DWORD *)(a7 + 4) = 72;
        *(_QWORD *)(a7 + 8) = a2 + 1204;
        break;
      case -2147483646:
        *(_QWORD *)a7 = 2LL;
        goto LABEL_19;
    }
    *(_QWORD *)(a4 + 48) = a7;
  }
  if ( (*(_DWORD *)(a2 + 1152) & 0x800) != 0 )
  {
    *(_DWORD *)a8 = 0;
    *(_OWORD *)(a8 + 4) = *(_OWORD *)(a2 + 1276);
    v36 = *(_OWORD *)(a2 + 1292);
    *(_DWORD *)(a8 + 36) = 1;
    *(_OWORD *)(a8 + 20) = v36;
    *(_QWORD *)(a4 + 32) = a8;
  }
  if ( *((_BYTE *)a1 + 59) )
  {
    if ( v77[798] == -1 )
      v62 = *(_QWORD *)(a2 + 1312);
    else
      v62 = *(_QWORD *)(a2 + 1312) - (VidSchiGetCurrentVSyncPeriodQpc(a1, v24, 1) >> 1);
    *(_QWORD *)(a4 + 56) = v62;
    *(_QWORD *)(a2 + 1104) = v62;
  }
  result = a6;
  *(_QWORD *)(a4 + 24) = a6;
  return result;
}
