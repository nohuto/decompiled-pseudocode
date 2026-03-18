/*
 * XREFs of Bulk_PrepareStage @ 0x14001B580
 * Callers:
 *     Bulk_MapTransfers @ 0x14001AB60 (Bulk_MapTransfers.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDDD @ 0x14001588C (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1400159CC (WPP_RECORDER_SF_DDDD.c)
 *     Bulk_Stage_Release @ 0x140018DCC (Bulk_Stage_Release.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x140018F80 (Bulk_Transfer_CompleteCancelable.c)
 *     Bulk_Stage_EstimateRequiredTrbs @ 0x14001BF50 (Bulk_Stage_EstimateRequiredTrbs.c)
 *     Bulk_Stage_AcquireMdl @ 0x14001C910 (Bulk_Stage_AcquireMdl.c)
 *     CommonBuffer_AcquireBuffers @ 0x14001F7C0 (CommonBuffer_AcquireBuffers.c)
 *     TR_AcquireSecureSegments @ 0x14001FC88 (TR_AcquireSecureSegments.c)
 *     WPP_RECORDER_SF_DDDDDDD @ 0x140022708 (WPP_RECORDER_SF_DDDDDDD.c)
 *     TR_EnsureInputBufferForTrbs @ 0x1400354F8 (TR_EnsureInputBufferForTrbs.c)
 *     WPP_RECORDER_SF_DDDqqD @ 0x14004DD04 (WPP_RECORDER_SF_DDDqqD.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140059AC0 (memset.c)
 */

__int64 __fastcall Bulk_PrepareStage(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 *v3; // rdi
  unsigned int v4; // r14d
  unsigned int v5; // esi
  __int64 v6; // r13
  int v7; // r9d
  unsigned int v8; // edx
  unsigned int v9; // esi
  unsigned int v10; // ecx
  unsigned int v11; // esi
  unsigned int v13; // r15d
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // r10d
  unsigned __int8 *v17; // r13
  __int64 *v18; // rsi
  __int64 *v19; // r14
  __int64 v20; // rdx
  __int64 *v21; // rsi
  __int64 *v22; // r14
  __int64 v23; // rdx
  int v24; // ecx
  int v25; // edx
  unsigned int v26; // r8d
  __int64 v27; // rax
  unsigned int v28; // r12d
  KIRQL v29; // al
  _QWORD *i; // rcx
  int v31; // r12d
  int v32; // eax
  KIRQL v33; // al
  __int128 *v34; // rcx
  int v35; // r8d
  unsigned int v36; // r8d
  __int64 v37; // rcx
  __int64 *v38; // r9
  _QWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rdx
  int v42; // r8d
  int v43; // [rsp+20h] [rbp-A8h]
  __int128 v44; // [rsp+60h] [rbp-68h] BYREF
  int v45; // [rsp+70h] [rbp-58h]
  __int128 v46; // [rsp+74h] [rbp-54h]
  PVOID Context; // [rsp+D8h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 368);
  v3 = *(unsigned __int8 **)v1;
  switch ( *(_DWORD *)(*(_QWORD *)v1 + 76LL) )
  {
    case 1:
      *(_QWORD *)(v1 + 64) = *((_QWORD *)v3 + 11) + *((unsigned int *)v3 + 28);
      break;
    case 2:
      *(_QWORD *)(v1 + 64) = *((_QWORD *)v3 + 11) + *((unsigned int *)v3 + 28);
      *(_QWORD *)(v1 + 72) = *((_QWORD *)v3 + 12);
      break;
    case 3:
      if ( *(_WORD *)(*((_QWORD *)v3 + 6) + 2LL) != 56 )
      {
        switch ( *(_WORD *)(*((_QWORD *)v3 + 6) + 2LL) )
        {
          case '9':
          case ':':
            goto LABEL_4;
          default:
            break;
        }
      }
      if ( (int)Bulk_Stage_AcquireMdl(v1) < 0 )
      {
        *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
        v17 = *(unsigned __int8 **)v1;
        if ( *(_BYTE *)(v1 + 44) )
        {
          IoFreeMdl(*(PMDL *)(v1 + 48));
          *(_QWORD *)(v1 + 48) = 0LL;
          *(_BYTE *)(v1 + 44) = 0;
        }
        v18 = *(__int64 **)(v1 + 8);
        v19 = (__int64 *)(v1 + 8);
        if ( v18 != (__int64 *)(v1 + 8) )
        {
          if ( _bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 40) + 736LL), 0x32u) )
          {
            do
            {
              memset((void *)v18[2], 0, *((unsigned int *)v18 + 11));
              v18 = (__int64 *)*v18;
            }
            while ( v19 != v18 );
          }
          v20 = a1 + 208;
          if ( (__int64 *)*v19 != v19 )
          {
            **(_QWORD **)(v1 + 16) = *(_QWORD *)v20;
            *(_QWORD *)(*(_QWORD *)v20 + 8LL) = *(_QWORD *)(v1 + 16);
            *(_QWORD *)v20 = *v19;
            *(_QWORD *)(*v19 + 8) = v20;
            *(_QWORD *)(v1 + 16) = v1 + 8;
            *v19 = (__int64)v19;
          }
        }
        v21 = *(__int64 **)(v1 + 24);
        v22 = (__int64 *)(v1 + 24);
        v23 = a1 + 208;
        if ( v21 != (__int64 *)(v1 + 24) )
        {
          if ( _bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 40) + 736LL), 0x32u) )
          {
            do
            {
              memset((void *)v21[2], 0, *((unsigned int *)v21 + 11));
              v21 = (__int64 *)*v21;
            }
            while ( v22 != v21 );
            v23 = a1 + 208;
          }
          if ( (__int64 *)*v22 != v22 )
          {
            **(_QWORD **)(v23 + 8) = *v22;
            *(_QWORD *)(*v22 + 8) = *(_QWORD *)(v23 + 8);
            **(_QWORD **)(v1 + 32) = v23;
            *(_QWORD *)(v23 + 8) = *(_QWORD *)(v1 + 32);
            *(_QWORD *)(v1 + 32) = v1 + 24;
            *v22 = (__int64)v22;
          }
        }
        v24 = v17[128];
        v25 = v17[132];
        --v17[130];
        v26 = v17[129];
        if ( (unsigned __int8 *)v1 == &v17[v25 * v24 + 144] )
          v17[132] = (v25 + 1) % v26;
        else
          v17[131] = (int)(v26 + v17[131] - 1) % (int)v26;
        if ( *((_DWORD *)v3 + 30) == *((_DWORD *)v3 + 29) )
        {
          Bulk_Transfer_CompleteCancelable(a1, (__int64 *)v3, -1073737728, 1);
          v4 = 1;
          goto LABEL_38;
        }
LABEL_37:
        v4 = 4;
        *((_DWORD *)v3 + 28) = *((_DWORD *)v3 + 26);
LABEL_38:
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
        return v4;
      }
      break;
  }
LABEL_4:
  v4 = 1;
  v5 = *((_DWORD *)v3 + 26) - *((_DWORD *)v3 + 28);
  if ( *((_DWORD *)v3 + 19) == 3 )
  {
    v13 = *(_DWORD *)(a1 + 4);
    if ( !*(_BYTE *)(a1 + 288) )
    {
      v14 = *((_QWORD *)v3 + 6);
      v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL) + 24LL);
      v46 = 0LL;
      v45 = 1;
      LOBYTE(v43) = (*(_BYTE *)(v14 + 32) & 1) == 0;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v15 + 8) + 136LL))(
        v15,
        *(_QWORD *)(v1 + 48),
        0LL,
        v5);
    }
    if ( v5 > v13 )
      v5 = v13;
  }
  *(_DWORD *)(v1 + 40) = v5;
  Bulk_Stage_EstimateRequiredTrbs(v1);
  if ( *(_BYTE *)(a1 + 288) && (int)TR_EnsureInputBufferForTrbs(a1, *(unsigned int *)(v1 + 84)) < 0 )
  {
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    Bulk_Stage_Release(a1, (unsigned __int8 *)v1);
    if ( *((_DWORD *)v3 + 30) == *((_DWORD *)v3 + 29) )
    {
      Bulk_Transfer_CompleteCancelable(a1, (__int64 *)v3, -1073737728, 1);
      goto LABEL_38;
    }
    goto LABEL_37;
  }
  v6 = *(_QWORD *)(*(_QWORD *)v1 + 56LL);
  if ( (*(_QWORD *)(*(_QWORD *)(v6 + 40) + 736LL) & 8) != 0 )
  {
    v11 = 1;
  }
  else
  {
    v7 = *(_DWORD *)(v6 + 192);
    v8 = (unsigned int)(*(_DWORD *)(v6 + 196) - v7) % *(_DWORD *)(v1 + 80);
    v9 = *(_DWORD *)(v6 + 196) - v7 - v8;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_DDDDDDD(
        *(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 135LL),
        *(_DWORD *)(v6 + 196),
        v7,
        (_BYTE)v43,
        *(_BYTE *)(*(_QWORD *)(v6 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(v6 + 56) + 144LL),
        *(_DWORD *)(v6 + 64),
        *(_DWORD *)(v1 + 84),
        *(_DWORD *)(v6 + 196),
        v7,
        *(_BYTE *)(v6 + 196) - v7 - v8);
    v10 = *(_DWORD *)(v1 + 84);
    if ( v10 > v9 )
    {
      v16 = *(_DWORD *)(v6 + 196) - *(_DWORD *)(v6 + 196) % *(_DWORD *)(v1 + 80);
      v11 = (v10 - v9 + v16 - 1) / v16;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_DDDDD(
          *(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL),
          5u,
          *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 135LL),
          0x21u,
          (__int64)&WPP_af203940883a35574f6554fa7269ecc3_Traceguids);
    }
    else
    {
      v11 = 0;
    }
  }
  if ( _bittest64((const signed __int64 *)(*(_QWORD *)(v6 + 40) + 736LL), 0x31u)
    && *(_DWORD *)(*(_QWORD *)(v6 + 48) + 20LL) == 3
    && *(_DWORD *)(*(_QWORD *)(v6 + 56) + 120LL) == 6 )
  {
    ++v11;
  }
  if ( !v11 )
    return 0;
  v27 = *(_QWORD *)(a1 + 40);
  v28 = 0;
  v44 = 0LL;
  Context = *(PVOID *)(v27 + 120);
  v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_BYTE *)(a1 + 104) = v29;
  for ( i = *(_QWORD **)(a1 + 208); (_QWORD *)(a1 + 208) != i; ++v28 )
    i = (_QWORD *)*i;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v29);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_DDDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      5u,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      0x10u,
      (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids);
  if ( v11 <= v28 )
  {
    v31 = 0;
    goto LABEL_52;
  }
  *(_QWORD *)(a1 + 144) = a1;
  *(_DWORD *)(a1 + 152) = v11 - v28;
  *((_QWORD *)&v44 + 1) = &v44;
  *(_QWORD *)&v44 = &v44;
  *(_QWORD *)(a1 + 168) = TR_CommonBufferCallback;
  *(_DWORD *)(a1 + 156) = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 160) = 828862034;
  if ( *(_BYTE *)(a1 + 288) )
    v32 = TR_AcquireSecureSegments(a1, v11 - v28, &v44);
  else
    v32 = CommonBuffer_AcquireBuffers(Context, a1, 828862034, a1 + 128);
  v31 = v32;
  if ( v32 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_83:
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      Bulk_Stage_Release(a1, (unsigned __int8 *)v1);
      if ( *((_DWORD *)v3 + 30) == *((_DWORD *)v3 + 29) )
      {
        Bulk_Transfer_CompleteCancelable(a1, (__int64 *)v3, -1073737728, 1);
      }
      else
      {
        v4 = 4;
        *((_DWORD *)v3 + 28) = *((_DWORD *)v3 + 26);
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
      return v4;
    }
    WPP_RECORDER_SF_DDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      2u,
      0xEu,
      0x11u,
      (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids);
LABEL_81:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDqqD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        v42,
        35,
        v43,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_DWORD *)(a1 + 64),
        *((_QWORD *)v3 + 3),
        v1,
        v11);
    goto LABEL_83;
  }
  v33 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v34 = (__int128 *)v44;
  *(_BYTE *)(a1 + 104) = v33;
  if ( v34 != &v44 )
  {
    **(_QWORD **)(a1 + 216) = v34;
    *(_QWORD *)(v44 + 8) = *(_QWORD *)(a1 + 216);
    **((_QWORD **)&v44 + 1) = a1 + 208;
    *(_QWORD *)(a1 + 216) = *((_QWORD *)&v44 + 1);
    *((_QWORD *)&v44 + 1) = &v44;
    *(_QWORD *)&v44 = &v44;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  if ( v31 != 259 )
  {
LABEL_52:
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v36 = 0;
    v37 = a1 + 208;
    v38 = (__int64 *)(v1 + 8);
    do
    {
      v39 = *(_QWORD **)v37;
      if ( *(_QWORD *)(*(_QWORD *)v37 + 8LL) != v37
        || (v40 = *v39, *(_QWORD **)(*v39 + 8LL) != v39)
        || (*(_QWORD *)v37 = v40, *(_QWORD *)(v40 + 8) = v37, v41 = *v38, *(__int64 **)(*v38 + 8) != v38) )
      {
        __fastfail(3u);
      }
      *v39 = v41;
      ++v36;
      v39[1] = v38;
      *(_QWORD *)(v41 + 8) = v39;
      *v38 = (__int64)v39;
    }
    while ( v36 < v11 );
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
    if ( v31 >= 0 )
    {
      *(_DWORD *)(a1 + 340) = 0;
      return 0;
    }
    goto LABEL_81;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDDqqD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      v35,
      34,
      v43,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_DWORD *)(a1 + 64),
      *((_QWORD *)v3 + 3),
      v1,
      v11);
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  Bulk_Stage_Release(a1, (unsigned __int8 *)v1);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return 3;
}
