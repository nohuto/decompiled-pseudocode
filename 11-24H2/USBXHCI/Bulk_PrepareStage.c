/*
 * XREFs of Bulk_PrepareStage @ 0x140014A70
 * Callers:
 *     Bulk_MappingLoop @ 0x140038CF0 (Bulk_MappingLoop.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x140004124 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x140012D68 (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDDDDDD @ 0x1400148FC (WPP_RECORDER_SF_DDDDDDD.c)
 *     Bulk_Stage_EstimateRequiredTrbs @ 0x140015440 (Bulk_Stage_EstimateRequiredTrbs.c)
 *     Bulk_Stage_AcquireMdl @ 0x140015840 (Bulk_Stage_AcquireMdl.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x140015D30 (Bulk_Transfer_CompleteCancelable.c)
 *     Bulk_Stage_Release @ 0x1400163D8 (Bulk_Stage_Release.c)
 *     TR_EnsureInputBufferForTrbs @ 0x140016584 (TR_EnsureInputBufferForTrbs.c)
 *     CommonBuffer_AcquireBuffers @ 0x1400168C0 (CommonBuffer_AcquireBuffers.c)
 *     TR_AcquireSecureSegments @ 0x140016D88 (TR_AcquireSecureSegments.c)
 *     WPP_RECORDER_SF_DDDqqD @ 0x14004D434 (WPP_RECORDER_SF_DDDqqD.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

__int64 __fastcall Bulk_PrepareStage(__int64 a1)
{
  unsigned __int8 *v1; // rbx
  unsigned __int8 *v3; // rdi
  unsigned int v4; // r14d
  unsigned int v5; // esi
  __int64 v6; // r13
  __int64 v7; // r9
  unsigned int v8; // esi
  unsigned int v9; // ecx
  unsigned int v10; // esi
  unsigned int v12; // r15d
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // r10d
  unsigned __int8 *v16; // r13
  unsigned __int8 *v17; // rsi
  unsigned __int8 *v18; // r14
  __int64 v19; // rdx
  unsigned __int8 *v20; // rsi
  unsigned __int8 *v21; // r14
  __int64 v22; // rdx
  int v23; // ecx
  int v24; // edx
  unsigned int v25; // r8d
  __int64 v26; // rax
  unsigned int v27; // r12d
  KIRQL v28; // al
  _QWORD *i; // rcx
  int v30; // r12d
  int v31; // eax
  KIRQL v32; // al
  __int128 *v33; // rcx
  int v34; // r8d
  unsigned int v35; // r8d
  __int64 v36; // rcx
  _DWORD *v37; // r9
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rdx
  int v41; // r8d
  int v42; // [rsp+20h] [rbp-A8h]
  __int128 v43; // [rsp+60h] [rbp-68h] BYREF
  int v44; // [rsp+70h] [rbp-58h]
  __int128 v45; // [rsp+74h] [rbp-54h]
  PVOID Context; // [rsp+D8h] [rbp+10h]

  v1 = *(unsigned __int8 **)(a1 + 368);
  v3 = *(unsigned __int8 **)v1;
  switch ( *(_DWORD *)(*(_QWORD *)v1 + 76LL) )
  {
    case 1:
      *((_QWORD *)v1 + 8) = *((_QWORD *)v3 + 11) + *((unsigned int *)v3 + 28);
      break;
    case 2:
      *((_QWORD *)v1 + 8) = *((_QWORD *)v3 + 11) + *((unsigned int *)v3 + 28);
      *((_QWORD *)v1 + 9) = *((_QWORD *)v3 + 12);
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
        v16 = *(unsigned __int8 **)v1;
        if ( v1[44] )
        {
          IoFreeMdl(*((PMDL *)v1 + 6));
          *((_QWORD *)v1 + 6) = 0LL;
          v1[44] = 0;
        }
        v17 = (unsigned __int8 *)*((_QWORD *)v1 + 1);
        v18 = v1 + 8;
        if ( v17 != v1 + 8 )
        {
          if ( _bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 40) + 736LL), 0x32u) )
          {
            do
            {
              memset(*((void **)v17 + 2), 0, *((unsigned int *)v17 + 11));
              v17 = *(unsigned __int8 **)v17;
            }
            while ( v18 != v17 );
          }
          v19 = a1 + 208;
          if ( *(unsigned __int8 **)v18 != v18 )
          {
            **((_QWORD **)v1 + 2) = *(_QWORD *)v19;
            *(_QWORD *)(*(_QWORD *)v19 + 8LL) = *((_QWORD *)v1 + 2);
            *(_QWORD *)v19 = *(_QWORD *)v18;
            *(_QWORD *)(*(_QWORD *)v18 + 8LL) = v19;
            *((_QWORD *)v1 + 2) = v1 + 8;
            *(_QWORD *)v18 = v18;
          }
        }
        v20 = (unsigned __int8 *)*((_QWORD *)v1 + 3);
        v21 = v1 + 24;
        v22 = a1 + 208;
        if ( v20 != v1 + 24 )
        {
          if ( _bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 40) + 736LL), 0x32u) )
          {
            do
            {
              memset(*((void **)v20 + 2), 0, *((unsigned int *)v20 + 11));
              v20 = *(unsigned __int8 **)v20;
            }
            while ( v21 != v20 );
            v22 = a1 + 208;
          }
          if ( *(unsigned __int8 **)v21 != v21 )
          {
            **(_QWORD **)(v22 + 8) = *(_QWORD *)v21;
            *(_QWORD *)(*(_QWORD *)v21 + 8LL) = *(_QWORD *)(v22 + 8);
            **((_QWORD **)v1 + 4) = v22;
            *(_QWORD *)(v22 + 8) = *((_QWORD *)v1 + 4);
            *((_QWORD *)v1 + 4) = v1 + 24;
            *(_QWORD *)v21 = v21;
          }
        }
        v23 = v16[128];
        v24 = v16[132];
        --v16[130];
        v25 = v16[129];
        if ( v1 == &v16[v24 * v23 + 144] )
          v16[132] = (v24 + 1) % v25;
        else
          v16[131] = (int)(v25 + v16[131] - 1) % (int)v25;
        if ( *((_DWORD *)v3 + 30) == *((_DWORD *)v3 + 29) )
        {
          Bulk_Transfer_CompleteCancelable(a1, v3, 3221229568LL);
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
    v12 = *(_DWORD *)(a1 + 4);
    if ( !*(_BYTE *)(a1 + 288) )
    {
      v13 = *((_QWORD *)v3 + 6);
      v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL) + 24LL);
      v45 = 0LL;
      v44 = 1;
      LOBYTE(v42) = (*(_BYTE *)(v13 + 32) & 1) == 0;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v14 + 8) + 136LL))(
        v14,
        *((_QWORD *)v1 + 6),
        0LL,
        v5);
    }
    if ( v5 > v12 )
      v5 = v12;
  }
  *((_DWORD *)v1 + 10) = v5;
  Bulk_Stage_EstimateRequiredTrbs(v1);
  if ( *(_BYTE *)(a1 + 288) && (int)TR_EnsureInputBufferForTrbs(a1, *((unsigned int *)v1 + 21)) < 0 )
  {
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    Bulk_Stage_Release(a1, v1);
    if ( *((_DWORD *)v3 + 30) == *((_DWORD *)v3 + 29) )
    {
      Bulk_Transfer_CompleteCancelable(a1, v3, 3221229568LL);
      goto LABEL_38;
    }
    goto LABEL_37;
  }
  v6 = *(_QWORD *)(*(_QWORD *)v1 + 56LL);
  if ( (*(_QWORD *)(*(_QWORD *)(v6 + 40) + 736LL) & 8) != 0 )
  {
    v10 = 1;
  }
  else
  {
    v7 = *(unsigned int *)(v6 + 192);
    v8 = *(_DWORD *)(v6 + 196) - v7 - (unsigned int)(*(_DWORD *)(v6 + 196) - v7) % *((_DWORD *)v1 + 20);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_DDDDDDD(
        *(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 143LL),
        *(unsigned int *)(v6 + 196),
        v7,
        v42);
    v9 = *((_DWORD *)v1 + 21);
    if ( v9 > v8 )
    {
      v15 = *(_DWORD *)(v6 + 196) - *(_DWORD *)(v6 + 196) % *((_DWORD *)v1 + 20);
      v10 = (v9 - v8 + v15 - 1) / v15;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_DDDDD(
          *(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL),
          5u,
          *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 143LL),
          0x22u,
          (__int64)&WPP_b35432f3067b3bf93fefc5589952cfde_Traceguids);
    }
    else
    {
      v10 = 0;
    }
  }
  if ( _bittest64((const signed __int64 *)(*(_QWORD *)(v6 + 40) + 736LL), 0x31u)
    && *(_DWORD *)(*(_QWORD *)(v6 + 48) + 20LL) == 3
    && *(_DWORD *)(*(_QWORD *)(v6 + 56) + 128LL) == 6 )
  {
    ++v10;
  }
  if ( !v10 )
    return 0;
  v26 = *(_QWORD *)(a1 + 40);
  v27 = 0;
  v43 = 0LL;
  Context = *(PVOID *)(v26 + 120);
  v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_BYTE *)(a1 + 104) = v28;
  for ( i = *(_QWORD **)(a1 + 208); (_QWORD *)(a1 + 208) != i; ++v27 )
    i = (_QWORD *)*i;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v28);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_DDDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      5u,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
      0x10u,
      (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids);
  if ( v10 <= v27 )
  {
    v30 = 0;
    goto LABEL_52;
  }
  *(_QWORD *)(a1 + 144) = a1;
  *(_DWORD *)(a1 + 152) = v10 - v27;
  *((_QWORD *)&v43 + 1) = &v43;
  *(_QWORD *)&v43 = &v43;
  *(_QWORD *)(a1 + 168) = TR_CommonBufferCallback;
  *(_DWORD *)(a1 + 156) = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 160) = 828862034;
  if ( *(_BYTE *)(a1 + 288) )
    v31 = TR_AcquireSecureSegments(a1, v10 - v27, &v43);
  else
    v31 = CommonBuffer_AcquireBuffers(Context, a1, 828862034, a1 + 128);
  v30 = v31;
  if ( v31 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_83:
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      Bulk_Stage_Release(a1, v1);
      if ( *((_DWORD *)v3 + 30) == *((_DWORD *)v3 + 29) )
      {
        Bulk_Transfer_CompleteCancelable(a1, v3, 3221229568LL);
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
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
        v41,
        36,
        v42,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
        *(_DWORD *)(a1 + 64),
        *((_QWORD *)v3 + 3),
        (char)v1,
        v10);
    goto LABEL_83;
  }
  v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v33 = (__int128 *)v43;
  *(_BYTE *)(a1 + 104) = v32;
  if ( v33 != &v43 )
  {
    **(_QWORD **)(a1 + 216) = v33;
    *(_QWORD *)(v43 + 8) = *(_QWORD *)(a1 + 216);
    **((_QWORD **)&v43 + 1) = a1 + 208;
    *(_QWORD *)(a1 + 216) = *((_QWORD *)&v43 + 1);
    *((_QWORD *)&v43 + 1) = &v43;
    *(_QWORD *)&v43 = &v43;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  if ( v30 != 259 )
  {
LABEL_52:
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v35 = 0;
    v36 = a1 + 208;
    v37 = v1 + 8;
    do
    {
      v38 = *(_QWORD **)v36;
      if ( *(_QWORD *)(*(_QWORD *)v36 + 8LL) != v36
        || (v39 = *v38, *(_QWORD **)(*v38 + 8LL) != v38)
        || (*(_QWORD *)v36 = v39,
            *(_QWORD *)(v39 + 8) = v36,
            v40 = *(_QWORD *)v37,
            *(_DWORD **)(*(_QWORD *)v37 + 8LL) != v37) )
      {
        __fastfail(3u);
      }
      *v38 = v40;
      ++v35;
      v38[1] = v37;
      *(_QWORD *)(v40 + 8) = v38;
      *(_QWORD *)v37 = v38;
    }
    while ( v35 < v10 );
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
    if ( v30 >= 0 )
    {
      *(_DWORD *)(a1 + 340) = 0;
      return 0;
    }
    goto LABEL_81;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDDqqD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
      v34,
      35,
      v42,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
      *(_DWORD *)(a1 + 64),
      *((_QWORD *)v3 + 3),
      (char)v1,
      v10);
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  Bulk_Stage_Release(a1, v1);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return 3;
}
