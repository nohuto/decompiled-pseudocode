/*
 * XREFs of Isoch_PrepareStage @ 0x14001DDB0
 * Callers:
 *     Isoch_MappingLoop @ 0x14001CC20 (Isoch_MappingLoop.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqd @ 0x14000FE1C (WPP_RECORDER_SF_DDqd.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x14001588C (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1400159CC (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDqqD @ 0x140017DF0 (WPP_RECORDER_SF_DDqqD.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x140017F80 (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_TransferData_Free @ 0x1400183E4 (Isoch_TransferData_Free.c)
 *     TR_GetNtStatusFromUsbdStatus @ 0x140019948 (TR_GetNtStatusFromUsbdStatus.c)
 *     Isoch_Stage_AcquireMdl @ 0x14001EF00 (Isoch_Stage_AcquireMdl.c)
 *     WPP_RECORDER_SF_DDqdDDDD @ 0x14001F300 (WPP_RECORDER_SF_DDqdDDDD.c)
 *     CommonBuffer_AcquireBuffers @ 0x14001F7C0 (CommonBuffer_AcquireBuffers.c)
 *     TR_AcquireSecureSegments @ 0x14001FC88 (TR_AcquireSecureSegments.c)
 *     Isoch_GetPacketLength @ 0x140023490 (Isoch_GetPacketLength.c)
 *     Isoch_Stage_Release @ 0x140025A1C (Isoch_Stage_Release.c)
 *     WPP_RECORDER_SF_DDqqDD @ 0x14002B478 (WPP_RECORDER_SF_DDqqDD.c)
 *     TR_EnsureInputBufferForTrbs @ 0x1400354F8 (TR_EnsureInputBufferForTrbs.c)
 *     WPP_RECORDER_SF_DDqDDD @ 0x14004D52C (WPP_RECORDER_SF_DDqDDD.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140059AC0 (memset.c)
 */

__int64 __fastcall Isoch_PrepareStage(__int64 a1)
{
  PMDL *v1; // r15
  __int64 v3; // r14
  unsigned int v4; // edx
  unsigned int v5; // ecx
  __int64 v6; // r8
  int v7; // r9d
  unsigned int v8; // eax
  __int64 v9; // rdx
  int v10; // r10d
  __int64 v11; // rax
  int v12; // esi
  unsigned __int8 *v13; // r12
  PMDL v14; // rdi
  _DWORD *v15; // rbp
  __int64 v16; // rdx
  PMDL v17; // rdi
  _DWORD *v18; // rbp
  __int64 v19; // rdx
  int v20; // ecx
  int v21; // edx
  unsigned int v22; // r8d
  __int64 v23; // rax
  _QWORD *v24; // rcx
  int v25; // eax
  KSPIN_LOCK *v26; // rbp
  __int64 v27; // r9
  _DWORD *v28; // rcx
  unsigned int v29; // edx
  int v30; // eax
  int v31; // edx
  int v32; // r9d
  KIRQL v33; // di
  __int64 v34; // rsi
  int v35; // ecx
  __int64 v36; // rdx
  int v37; // eax
  int v38; // edi
  KIRQL v39; // al
  __int128 *v40; // rcx
  __int64 v41; // r8
  unsigned int v42; // r8d
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 *v49; // rcx
  unsigned int v50; // edi
  unsigned int v51; // ebp
  __int64 v52; // rax
  __int64 v53; // rcx
  unsigned int v54; // eax
  int v55; // r11d
  __int64 v56; // r12
  int v57; // r11d
  unsigned int v58; // r11d
  unsigned int v59; // r8d
  unsigned int v60; // ecx
  unsigned int v61; // r10d
  unsigned int v62; // ebp
  __int64 v63; // rax
  _DWORD *v64; // r12
  unsigned int v65; // edi
  KIRQL v66; // al
  _QWORD *j; // rdx
  __int64 v68; // rax
  __int64 v69; // rax
  unsigned int v70; // eax
  unsigned int v71; // r11d
  unsigned int v72; // r12d
  int i; // eax
  int v74; // ecx
  int PacketLength; // eax
  int v76; // r11d
  int v77; // r11d
  int v78; // [rsp+20h] [rbp-C8h]
  _OWORD *v79; // [rsp+28h] [rbp-C0h]
  __int64 v80; // [rsp+30h] [rbp-B8h]
  __int64 v81; // [rsp+38h] [rbp-B0h]
  __int64 v82; // [rsp+40h] [rbp-A8h]
  __int64 v83; // [rsp+48h] [rbp-A0h]
  __int128 v84; // [rsp+70h] [rbp-78h] BYREF
  _OWORD v85[6]; // [rsp+80h] [rbp-68h] BYREF
  unsigned int v86; // [rsp+F0h] [rbp+8h]
  __int64 v87; // [rsp+F0h] [rbp+8h]
  PVOID Context; // [rsp+F8h] [rbp+10h]
  int Contexta; // [rsp+F8h] [rbp+10h]
  unsigned int v90; // [rsp+100h] [rbp+18h]

  v1 = *(PMDL **)(a1 + 376);
  v3 = (__int64)*v1;
  v4 = *(_DWORD *)&(*v1)[2].Size + *(_DWORD *)&(*v1)[2].AllocationProcessorNumber;
  *((_DWORD *)v1 + 10) = v4;
  v5 = *(_DWORD *)(a1 + 364);
  v6 = *(_QWORD *)(v3 + 48);
  v7 = *(unsigned __int16 *)(v6 + 2);
  v8 = v4 + v5 - 1;
  v9 = v4;
  LODWORD(v9) = v8 % v5;
  v10 = *(_DWORD *)(v6 + 128) + v8 / v5;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 88LL);
  if ( _bittest64((const signed __int64 *)(*(_QWORD *)(v11 + 8) + 736LL), 0x3Bu)
    || (*(_DWORD *)(v11 + 104) & 0x800) == 0 )
  {
    v35 = *(_DWORD *)(a1 + 336);
    if ( (v35 & 0x20) != 0 )
    {
      v9 = *(unsigned int *)(a1 + 372);
      if ( v10 != (_DWORD)v9 + 1 && ((v35 & 0x10) != 0 || *(_DWORD *)(a1 + 384)) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDqqDD(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            v9,
            *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
            v7);
        *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
        Isoch_Stage_Release(a1, v1);
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
        LODWORD(v34) = 2;
        return (unsigned int)v34;
      }
    }
  }
  if ( v7 != 56 )
  {
    switch ( *(_WORD *)(v6 + 2) )
    {
      case '9':
      case ':':
        goto LABEL_73;
      default:
        break;
    }
  }
  if ( (int)Isoch_Stage_AcquireMdl(v1, v9) < 0 )
  {
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v12 = 0;
    v13 = (unsigned __int8 *)*v1;
    if ( *((_BYTE *)v1 + 56) )
    {
      IoFreeMdl(v1[8]);
      v1[8] = 0LL;
      *((_BYTE *)v1 + 56) = 0;
    }
    v14 = v1[1];
    v15 = v1 + 1;
    if ( v14 != (PMDL)(v1 + 1) )
    {
      if ( (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 736LL) & 0x4000000000000LL) != 0 )
      {
        do
        {
          memset(v14->Process, 0, v14->ByteOffset);
          v14 = v14->Next;
        }
        while ( v15 != (_DWORD *)v14 );
      }
      v16 = a1 + 208;
      if ( *(_DWORD **)v15 != v15 )
      {
        v1[2]->Next = *(_MDL **)v16;
        *(_QWORD *)(*(_QWORD *)v16 + 8LL) = v1[2];
        *(_QWORD *)v16 = *(_QWORD *)v15;
        *(_QWORD *)(*(_QWORD *)v15 + 8LL) = v16;
        v1[2] = (PMDL)(v1 + 1);
        *(_QWORD *)v15 = v15;
      }
    }
    v17 = v1[3];
    v18 = v1 + 3;
    v19 = a1 + 208;
    if ( v17 != (PMDL)(v1 + 3) )
    {
      if ( (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 736LL) & 0x4000000000000LL) != 0 )
      {
        do
        {
          memset(v17->Process, 0, v17->ByteOffset);
          v17 = v17->Next;
        }
        while ( v18 != (_DWORD *)v17 );
        v19 = a1 + 208;
      }
      if ( *(_DWORD **)v18 != v18 )
      {
        **(_QWORD **)(v19 + 8) = *(_QWORD *)v18;
        *(_QWORD *)(*(_QWORD *)v18 + 8LL) = *(_QWORD *)(v19 + 8);
        v1[4]->Next = (_MDL *)v19;
        *(_QWORD *)(v19 + 8) = v1[4];
        v1[4] = (PMDL)(v1 + 3);
        *(_QWORD *)v18 = v18;
      }
    }
    v20 = v13[128];
    v21 = v13[132];
    --v13[130];
    v22 = v13[129];
    if ( v1 == (PMDL *)&v13[v21 * v20 + 144] )
      v13[132] = (v21 + 1) % v22;
    else
      v13[131] = (int)(v22 + v13[131] - 1) % (int)v22;
    if ( *(_DWORD *)(v3 + 112) != *(_DWORD *)(v3 + 116) )
    {
      v26 = (KSPIN_LOCK *)(a1 + 96);
      LODWORD(v34) = 4;
      *(_DWORD *)(v3 + 108) = *(_DWORD *)(v3 + 96) - *(_DWORD *)(v3 + 104);
      goto LABEL_43;
    }
    if ( *(_DWORD *)(v3 + 64) == 1 )
    {
      v23 = *(_QWORD *)v3;
      if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 )
        goto LABEL_64;
      v24 = *(_QWORD **)(v3 + 8);
      if ( *v24 != v3 )
        goto LABEL_64;
      *v24 = v23;
      *(_QWORD *)(v23 + 8) = v24;
      v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 2048))(
              WdfDriverGlobals,
              *(_QWORD *)(v3 + 24));
      if ( v25 >= 0 )
      {
        *(_DWORD *)(v3 + 64) = 0;
LABEL_23:
        v26 = (KSPIN_LOCK *)(a1 + 96);
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
        v27 = *(_QWORD *)(v3 + 48);
        if ( *(_WORD *)(v27 + 2) == 56 )
        {
LABEL_24:
          v28 = (_DWORD *)(v27 + 36);
        }
        else
        {
          switch ( *(_WORD *)(v27 + 2) )
          {
            case '9':
            case ':':
              v28 = (_DWORD *)(v27 + 52);
              break;
            default:
              goto LABEL_24;
          }
        }
        v29 = 0;
        *v28 = *(_DWORD *)(v3 + 84);
        if ( *(_DWORD *)(v3 + 96) )
        {
          while ( 1 )
          {
            v30 = *(_DWORD *)(v27 + 12LL * v29 + 148);
            if ( v30 == -1 )
              break;
            if ( v30 )
              goto LABEL_59;
            ++v12;
LABEL_29:
            ++*(_DWORD *)(a1 + 264);
            if ( ++v29 >= *(_DWORD *)(v3 + 96) )
              goto LABEL_30;
          }
          *(_DWORD *)(v27 + 12LL * v29 + 148) = -1073610752;
LABEL_59:
          ++*(_DWORD *)(v27 + 136);
          ++*(_DWORD *)(a1 + 268);
          goto LABEL_29;
        }
LABEL_30:
        *(_DWORD *)(v27 + 4) = -1073737728;
        *(_DWORD *)(v3 + 68) = TR_GetNtStatusFromUsbdStatus(-1073737728);
        ++*(_DWORD *)(a1 + 248);
        *(_QWORD *)(a1 + 256) += *(unsigned int *)(v3 + 84);
        if ( *(int *)(v3 + 68) < 0 )
          ++*(_DWORD *)(a1 + 252);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDqdDDDD(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            v31,
            *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
            v32);
        Isoch_TransferData_Free(v3);
        v33 = KfRaiseIrql(2u);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2104))(
          WdfDriverGlobals,
          *(_QWORD *)(v3 + 24),
          *(unsigned int *)(v3 + 68));
        KeLowerIrql(v33);
        *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
        goto LABEL_35;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDqd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          4u,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          0x11u,
          (__int64)&WPP_dd4fc339be0d3de3d8d0a5a4ecea6bb9_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_QWORD *)(v3 + 24),
          v25);
      *(_DWORD *)(v3 + 64) = 2;
      v49 = *(__int64 **)(a1 + 416);
      if ( *v49 != a1 + 408 )
LABEL_64:
        __fastfail(3u);
      *(_QWORD *)v3 = a1 + 408;
      v26 = (KSPIN_LOCK *)(a1 + 96);
      *(_QWORD *)(v3 + 8) = v49;
      *v49 = v3;
      *(_QWORD *)(a1 + 416) = v3;
    }
    else
    {
      if ( *(_DWORD *)(v3 + 64) != 3 )
        goto LABEL_23;
      v26 = (KSPIN_LOCK *)(a1 + 96);
    }
LABEL_35:
    LODWORD(v34) = 1;
LABEL_43:
    KeReleaseSpinLock(v26, *(_BYTE *)(a1 + 104));
    return (unsigned int)v34;
  }
LABEL_73:
  v50 = *(_DWORD *)(v3 + 80) - *(_DWORD *)(v3 + 92) - *(_DWORD *)(v3 + 88);
  v51 = *(_DWORD *)(a1 + 4);
  memset(v85, 0, 20);
  if ( !*(_BYTE *)(a1 + 288) )
  {
    v52 = *(_QWORD *)(v3 + 48);
    v53 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL) + 24LL);
    LODWORD(v85[0]) = 1;
    *(_OWORD *)((char *)v85 + 4) = 0LL;
    v79 = v85;
    LOBYTE(v78) = (*(_BYTE *)(v52 + 32) & 1) == 0;
    (*(void (__fastcall **)(__int64, PMDL, _QWORD, _QWORD))(*(_QWORD *)(v53 + 8) + 136LL))(v53, v1[8], 0LL, v50);
    v54 = *(_DWORD *)(a1 + 8);
    if ( DWORD1(v85[0]) > v54 )
    {
      v70 = (v54 << 12) - 4096;
      if ( v70 < v51 )
        v51 = v70;
    }
  }
  LODWORD(v34) = 0;
  if ( v50 > v51 )
  {
    v71 = *(_DWORD *)(a1 + 364);
    v72 = *((_DWORD *)v1 + 10);
    v50 = 0;
    v90 = v71;
    for ( i = v72 / v71; ; ++i )
    {
      Contexta = i;
      v74 = 0;
      if ( v71 )
      {
        v34 = v71;
        do
        {
          PacketLength = Isoch_GetPacketLength(v3, v72);
          v77 = PacketLength + v76;
          ++v72;
          --v34;
        }
        while ( v34 );
        i = Contexta;
        v74 = v77;
        v71 = v90;
      }
      if ( v50 + v74 > v51 )
        break;
      v50 += v74;
    }
    v55 = i * v71;
  }
  else
  {
    v55 = *(_DWORD *)(v3 + 96);
  }
  *((_DWORD *)v1 + 11) = v55 - 1;
  *((_DWORD *)v1 + 13) = v50;
  v56 = *(_QWORD *)(a1 + 40);
  v87 = *(_QWORD *)(a1 + 56);
  v57 = (((unsigned __int64)*(unsigned int *)(v87 + 152) + 8190) >> 12) + 1;
  if ( !_bittest64((const signed __int64 *)(v56 + 736), 0x2Fu)
    || (v68 = *(_QWORD *)(a1 + 48), *(_DWORD *)(v68 + 20) != 1)
    || !*(_DWORD *)(v68 + 40) )
  {
    v57 = ((unsigned __int64)*(unsigned int *)(v87 + 152) + 8190) >> 12;
  }
  v58 = v57 + 1;
  if ( WORD1((*v1)[1].Next->Next) == 56 )
  {
LABEL_80:
    if ( v1[8]->ByteCount < v50 )
      v58 += 2;
  }
  else
  {
    switch ( WORD1((*v1)[1].Next->Next) )
    {
      case '9':
      case ':':
        break;
      default:
        goto LABEL_80;
    }
  }
  v59 = *(_DWORD *)(a1 + 196);
  *(_DWORD *)(a1 + 440) = v58;
  v60 = v59 - *(_DWORD *)(a1 + 192) - (v59 - *(_DWORD *)(a1 + 192)) % v58;
  v61 = v58 * (*((_DWORD *)v1 + 11) - *((_DWORD *)v1 + 10) + 1);
  if ( v61 <= v60 )
  {
    v62 = 0;
  }
  else
  {
    v59 -= v59 % v58;
    v62 = (v61 + v59 - v60 - 1) / v59;
  }
  if ( _bittest64((const signed __int64 *)(v56 + 736), 0x2Fu) )
  {
    v69 = *(_QWORD *)(a1 + 48);
    if ( *(_DWORD *)(v69 + 20) == 1 )
    {
      if ( *(_DWORD *)(v69 + 40) )
        ++v62;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_DDqDDD(
      *(_QWORD *)(v87 + 80),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      v59,
      *((_DWORD *)v1 + 11) - *((_DWORD *)v1 + 10) + 1,
      v78,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(v87 + 144),
      (char)v1,
      v62,
      v58,
      *((_BYTE *)v1 + 44) - *((_BYTE *)v1 + 40) + 1);
  if ( *(_BYTE *)(a1 + 288)
    && (int)TR_EnsureInputBufferForTrbs(
              a1,
              (unsigned int)(*(_DWORD *)(a1 + 440) * (*((_DWORD *)v1 + 11) - *((_DWORD *)v1 + 10) + 3))) < 0 )
  {
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    Isoch_Stage_Release(a1, v1);
    if ( *(_DWORD *)(v3 + 112) == *(_DWORD *)(v3 + 116) )
    {
      Isoch_Transfer_CompleteCancelable(a1, (__int64 *)v3, -1, -1073737728, 0, 0);
      LODWORD(v34) = 1;
    }
    else
    {
      LODWORD(v34) = 4;
      *(_DWORD *)(v3 + 108) = *(_DWORD *)(v3 + 96) - *(_DWORD *)(v3 + 104);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
    return (unsigned int)v34;
  }
  if ( !v62 )
    return (unsigned int)v34;
  v63 = *(_QWORD *)(a1 + 40);
  v64 = v1 + 1;
  v84 = 0LL;
  v65 = 0;
  Context = *(PVOID *)(v63 + 120);
  v66 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_BYTE *)(a1 + 104) = v66;
  for ( j = *(_QWORD **)(a1 + 208); (_QWORD *)(a1 + 208) != j; ++v65 )
    j = (_QWORD *)*j;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v66);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v83) = v62;
    LODWORD(v82) = v65;
    LODWORD(v81) = *(_DWORD *)(a1 + 64);
    LODWORD(v80) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL);
    LODWORD(v79) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    WPP_RECORDER_SF_DDDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      5u,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      0x10u,
      (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
      v79,
      v80,
      v81,
      v82,
      v83);
  }
  if ( v62 <= v65 )
  {
    v38 = 0;
    goto LABEL_50;
  }
  v36 = v62 - v65;
  *(_QWORD *)(a1 + 144) = a1;
  *(_DWORD *)(a1 + 152) = v36;
  *((_QWORD *)&v84 + 1) = &v84;
  *(_QWORD *)&v84 = &v84;
  *(_QWORD *)(a1 + 168) = TR_CommonBufferCallback;
  *(_DWORD *)(a1 + 156) = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 160) = 828862034;
  v86 = v62 - v65;
  if ( *(_BYTE *)(a1 + 288) )
    v37 = TR_AcquireSecureSegments(a1, v36, &v84);
  else
    v37 = CommonBuffer_AcquireBuffers(Context, a1, 828862034, a1 + 128);
  v38 = v37;
  if ( v37 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_133:
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      Isoch_Stage_Release(a1, v1);
      if ( *(_DWORD *)(v3 + 112) == *(_DWORD *)(v3 + 116) )
      {
        Isoch_Transfer_CompleteCancelable(a1, (__int64 *)v3, -1, -1073737728, 0, 0);
        LODWORD(v34) = 1;
      }
      else
      {
        LODWORD(v34) = 4;
        *(_DWORD *)(v3 + 108) = *(_DWORD *)(v3 + 96) - *(_DWORD *)(v3 + 104);
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
      return (unsigned int)v34;
    }
    LODWORD(v82) = v86;
    LODWORD(v81) = *(_DWORD *)(a1 + 64);
    LODWORD(v80) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL);
    LODWORD(v79) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    WPP_RECORDER_SF_DDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      2u,
      0xEu,
      0x11u,
      (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
      v79,
      v80,
      v81,
      v82);
LABEL_131:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDqqD(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), 2u, v47, 0x31u, v78);
    goto LABEL_133;
  }
  v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v40 = (__int128 *)v84;
  *(_BYTE *)(a1 + 104) = v39;
  if ( v40 != &v84 )
  {
    **(_QWORD **)(a1 + 216) = v40;
    *(_QWORD *)(v84 + 8) = *(_QWORD *)(a1 + 216);
    **((_QWORD **)&v84 + 1) = a1 + 208;
    *(_QWORD *)(a1 + 216) = *((_QWORD *)&v84 + 1);
    *((_QWORD *)&v84 + 1) = &v84;
    *(_QWORD *)&v84 = &v84;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  if ( v38 != 259 )
  {
LABEL_50:
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v42 = 0;
    v43 = a1 + 208;
    do
    {
      v44 = *(_QWORD **)v43;
      if ( *(_QWORD *)(*(_QWORD *)v43 + 8LL) != v43 )
        goto LABEL_64;
      v45 = *v44;
      if ( *(_QWORD **)(*v44 + 8LL) != v44 )
        goto LABEL_64;
      *(_QWORD *)v43 = v45;
      *(_QWORD *)(v45 + 8) = v43;
      v46 = *(_QWORD *)v64;
      if ( *(_DWORD **)(*(_QWORD *)v64 + 8LL) != v64 )
        goto LABEL_64;
      *v44 = v46;
      ++v42;
      v44[1] = v64;
      *(_QWORD *)(v46 + 8) = v44;
      *(_QWORD *)v64 = v44;
    }
    while ( v42 < v62 );
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
    if ( v38 >= 0 )
    {
      *(_DWORD *)(a1 + 344) = 0;
      return (unsigned int)v34;
    }
    goto LABEL_131;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDqqD(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), 4u, v41, 0x30u, v78);
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  Isoch_Stage_Release(a1, v1);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  LODWORD(v34) = 3;
  return (unsigned int)v34;
}
