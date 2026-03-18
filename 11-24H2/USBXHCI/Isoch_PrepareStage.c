/*
 * XREFs of Isoch_PrepareStage @ 0x14000F1B0
 * Callers:
 *     Isoch_MappingLoop @ 0x14000E020 (Isoch_MappingLoop.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x140004124 (WPP_RECORDER_SF_DDDD.c)
 *     Isoch_Stage_AcquireMdl @ 0x140010300 (Isoch_Stage_AcquireMdl.c)
 *     TR_GetNtStatusFromUsbdStatus @ 0x140010CD8 (TR_GetNtStatusFromUsbdStatus.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x140010D60 (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_TransferData_Free @ 0x1400111C4 (Isoch_TransferData_Free.c)
 *     WPP_RECORDER_SF_DDqqD @ 0x140011240 (WPP_RECORDER_SF_DDqqD.c)
 *     WPP_RECORDER_SF_DDqdDDDD @ 0x140012700 (WPP_RECORDER_SF_DDqdDDDD.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x140012D68 (WPP_RECORDER_SF_DDDDD.c)
 *     TR_EnsureInputBufferForTrbs @ 0x140016584 (TR_EnsureInputBufferForTrbs.c)
 *     CommonBuffer_AcquireBuffers @ 0x1400168C0 (CommonBuffer_AcquireBuffers.c)
 *     TR_AcquireSecureSegments @ 0x140016D88 (TR_AcquireSecureSegments.c)
 *     Isoch_GetPacketLength @ 0x140022660 (Isoch_GetPacketLength.c)
 *     Isoch_Stage_Release @ 0x140022B24 (Isoch_Stage_Release.c)
 *     WPP_RECORDER_SF_DDqqDD @ 0x14002B888 (WPP_RECORDER_SF_DDqqDD.c)
 *     WPP_RECORDER_SF_DDqd @ 0x14002F21C (WPP_RECORDER_SF_DDqd.c)
 *     WPP_RECORDER_SF_DDqDDD @ 0x14004CC1C (WPP_RECORDER_SF_DDqDDD.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

__int64 __fastcall Isoch_PrepareStage(__int64 a1)
{
  PMDL *v1; // r15
  PMDL v3; // r14
  unsigned int v4; // edx
  unsigned int v5; // ecx
  _MDL *Next; // r8
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
  _MDL *v23; // rax
  PMDL *v24; // rcx
  int v25; // eax
  KSPIN_LOCK *v26; // rbp
  _MDL *v27; // r9
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
  _OWORD *v40; // rcx
  int v41; // r8d
  unsigned int v42; // r8d
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rdx
  int v47; // r8d
  PMDL *v49; // rcx
  unsigned int v50; // edi
  unsigned int v51; // ebp
  _MDL *v52; // rax
  __int64 v53; // rcx
  int v54; // r11d
  __int64 v55; // r12
  int v56; // r11d
  unsigned int v57; // r11d
  unsigned int v58; // r8d
  unsigned int v59; // ecx
  unsigned int v60; // r10d
  unsigned int v61; // ebp
  __int64 v62; // rax
  _DWORD *v63; // r12
  unsigned int v64; // edi
  KIRQL v65; // al
  _QWORD *j; // rdx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  int v70; // r8d
  unsigned int v71; // r11d
  unsigned int v72; // r12d
  int i; // eax
  int v74; // ecx
  int PacketLength; // eax
  int v76; // r11d
  int v77; // r11d
  __int64 v78; // rdx
  int v79; // eax
  int v80; // edx
  int v81; // edx
  int v82; // [rsp+20h] [rbp-C8h]
  _OWORD v83[7]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v84; // [rsp+F0h] [rbp+8h]
  PVOID Context; // [rsp+F8h] [rbp+10h]
  int Contexta; // [rsp+F8h] [rbp+10h]
  unsigned int v87; // [rsp+100h] [rbp+18h]

  v1 = *(PMDL **)(a1 + 376);
  v3 = *v1;
  v4 = *(_DWORD *)&(*v1)[2].Size + *(_DWORD *)&(*v1)[2].AllocationProcessorNumber;
  *((_DWORD *)v1 + 10) = v4;
  v5 = *(_DWORD *)(a1 + 364);
  Next = v3[1].Next;
  v7 = WORD1(Next->Next);
  v8 = v4 + v5 - 1;
  v9 = v4;
  LODWORD(v9) = v8 % v5;
  v10 = LODWORD(Next[2].StartVa) + v8 / v5;
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
            *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
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
    switch ( WORD1(Next->Next) )
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
    if ( LODWORD(v3[2].Process) != HIDWORD(v3[2].Process) )
    {
      v26 = (KSPIN_LOCK *)(a1 + 96);
      LODWORD(v34) = 4;
      *(_DWORD *)&v3[2].AllocationProcessorNumber = LODWORD(v3[2].Next) - *(_DWORD *)&v3[2].Size;
      goto LABEL_43;
    }
    if ( LODWORD(v3[1].Process) == 1 )
    {
      v23 = v3->Next;
      if ( *(PMDL *)&v3->Next->Size != v3 )
        goto LABEL_64;
      v24 = *(PMDL **)&v3->Size;
      if ( *v24 != v3 )
        goto LABEL_64;
      *v24 = v23;
      *(_QWORD *)&v23->Size = v24;
      v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, void *))(WdfFunctions_01033 + 2048))(
              WdfDriverGlobals,
              v3->MappedSystemVa);
      if ( v25 >= 0 )
      {
        LODWORD(v3[1].Process) = 0;
LABEL_23:
        v26 = (KSPIN_LOCK *)(a1 + 96);
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
        v27 = v3[1].Next;
        if ( WORD1(v27->Next) == 56 )
        {
LABEL_24:
          v28 = (_DWORD *)&v27->StartVa + 1;
        }
        else
        {
          switch ( WORD1(v27->Next) )
          {
            case '9':
            case ':':
              v28 = (_DWORD *)&v27[1].Next + 1;
              break;
            default:
              goto LABEL_24;
          }
        }
        v29 = 0;
        *v28 = HIDWORD(v3[1].StartVa);
        if ( LODWORD(v3[2].Next) )
        {
          while ( 1 )
          {
            v30 = *((_DWORD *)&v27[3].Next + 3 * v29 + 1);
            if ( v30 == -1 )
              break;
            if ( v30 )
              goto LABEL_59;
            ++v12;
LABEL_29:
            ++*(_DWORD *)(a1 + 264);
            if ( ++v29 >= LODWORD(v3[2].Next) )
              goto LABEL_30;
          }
          *((_DWORD *)&v27[3].Next + 3 * v29 + 1) = -1073610752;
LABEL_59:
          ++v27[2].ByteCount;
          ++*(_DWORD *)(a1 + 268);
          goto LABEL_29;
        }
LABEL_30:
        HIDWORD(v27->Next) = -1073737728;
        HIDWORD(v3[1].Process) = TR_GetNtStatusFromUsbdStatus(3221229568LL);
        ++*(_DWORD *)(a1 + 248);
        *(_QWORD *)(a1 + 256) += HIDWORD(v3[1].StartVa);
        if ( SHIDWORD(v3[1].Process) < 0 )
          ++*(_DWORD *)(a1 + 252);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDqdDDDD(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            v31,
            *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
            v32);
        Isoch_TransferData_Free(v3);
        v33 = KfRaiseIrql(2u);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, void *, _QWORD))(WdfFunctions_01033 + 2104))(
          WdfDriverGlobals,
          v3->MappedSystemVa,
          HIDWORD(v3[1].Process));
        KeLowerIrql(v33);
        *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
        goto LABEL_35;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v69 = *(_QWORD *)(a1 + 48);
        v70 = *(unsigned __int8 *)(v69 + 143);
        LOBYTE(v69) = 4;
        WPP_RECORDER_SF_DDqd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v69,
          v70,
          17,
          (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
          v70,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
          (char)v3->MappedSystemVa,
          v25);
      }
      LODWORD(v3[1].Process) = 2;
      v49 = *(PMDL **)(a1 + 416);
      if ( *v49 != (PMDL)(a1 + 408) )
LABEL_64:
        __fastfail(3u);
      v3->Next = (_MDL *)(a1 + 408);
      v26 = (KSPIN_LOCK *)(a1 + 96);
      *(_QWORD *)&v3->Size = v49;
      *v49 = v3;
      *(_QWORD *)(a1 + 416) = v3;
    }
    else
    {
      if ( LODWORD(v3[1].Process) != 3 )
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
  v50 = LODWORD(v3[1].StartVa) - v3[1].ByteOffset - v3[1].ByteCount;
  v51 = *(_DWORD *)(a1 + 4);
  memset(&v83[1], 0, 20);
  if ( !*(_BYTE *)(a1 + 288) )
  {
    v52 = v3[1].Next;
    v53 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL) + 24LL);
    LODWORD(v83[1]) = 1;
    *(_OWORD *)((char *)&v83[1] + 4) = 0LL;
    LOBYTE(v82) = ((__int64)v52->StartVa & 1) == 0;
    (*(void (__fastcall **)(__int64, PMDL, _QWORD, _QWORD))(*(_QWORD *)(v53 + 8) + 136LL))(v53, v1[8], 0LL, v50);
  }
  LODWORD(v34) = 0;
  if ( v50 > v51 )
  {
    v71 = *(_DWORD *)(a1 + 364);
    v72 = *((_DWORD *)v1 + 10);
    v50 = 0;
    v87 = v71;
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
        v71 = v87;
      }
      if ( v50 + v74 > v51 )
        break;
      v50 += v74;
    }
    v54 = i * v71;
  }
  else
  {
    v54 = (int)v3[2].Next;
  }
  *((_DWORD *)v1 + 11) = v54 - 1;
  *((_DWORD *)v1 + 13) = v50;
  v55 = *(_QWORD *)(a1 + 40);
  v84 = *(_QWORD *)(a1 + 56);
  v56 = (((unsigned __int64)*(unsigned int *)(v84 + 160) + 8190) >> 12) + 1;
  if ( !_bittest64((const signed __int64 *)(v55 + 736), 0x2Fu)
    || (v67 = *(_QWORD *)(a1 + 48), *(_DWORD *)(v67 + 20) != 1)
    || !*(_DWORD *)(v67 + 40) )
  {
    v56 = ((unsigned __int64)*(unsigned int *)(v84 + 160) + 8190) >> 12;
  }
  v57 = v56 + 1;
  if ( WORD1((*v1)[1].Next->Next) == 56 )
  {
LABEL_80:
    if ( v1[8]->ByteCount < v50 )
      v57 += 2;
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
  v58 = *(_DWORD *)(a1 + 196);
  *(_DWORD *)(a1 + 440) = v57;
  v59 = v58 - *(_DWORD *)(a1 + 192) - (v58 - *(_DWORD *)(a1 + 192)) % v57;
  v60 = v57 * (*((_DWORD *)v1 + 11) - *((_DWORD *)v1 + 10) + 1);
  if ( v60 <= v59 )
  {
    v61 = 0;
  }
  else
  {
    v58 -= v58 % v57;
    v61 = (v60 + v58 - v59 - 1) / v58;
  }
  if ( _bittest64((const signed __int64 *)(v55 + 736), 0x2Fu) )
  {
    v68 = *(_QWORD *)(a1 + 48);
    if ( *(_DWORD *)(v68 + 20) == 1 )
    {
      if ( *(_DWORD *)(v68 + 40) )
        ++v61;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_DDqDDD(
      *(_QWORD *)(v84 + 80),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
      v58,
      *((_DWORD *)v1 + 11) - *((_DWORD *)v1 + 10) + 1,
      v82,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
      *(_DWORD *)(v84 + 152),
      (char)v1,
      v61,
      v57,
      *((_BYTE *)v1 + 44) - *((_BYTE *)v1 + 40) + 1);
  if ( *(_BYTE *)(a1 + 288)
    && (int)TR_EnsureInputBufferForTrbs(
              a1,
              (unsigned int)(*(_DWORD *)(a1 + 440) * (*((_DWORD *)v1 + 11) - *((_DWORD *)v1 + 10) + 3))) < 0 )
  {
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    Isoch_Stage_Release(a1, v1);
    if ( LODWORD(v3[2].Process) == HIDWORD(v3[2].Process) )
    {
      Isoch_Transfer_CompleteCancelable(a1, (_DWORD)v3, -1, -1073737728, 0, 0);
      LODWORD(v34) = 1;
    }
    else
    {
      LODWORD(v34) = 4;
      *(_DWORD *)&v3[2].AllocationProcessorNumber = LODWORD(v3[2].Next) - *(_DWORD *)&v3[2].Size;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
    return (unsigned int)v34;
  }
  if ( !v61 )
    return (unsigned int)v34;
  v62 = *(_QWORD *)(a1 + 40);
  v63 = v1 + 1;
  v83[0] = 0LL;
  v64 = 0;
  Context = *(PVOID *)(v62 + 120);
  v65 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_BYTE *)(a1 + 104) = v65;
  for ( j = *(_QWORD **)(a1 + 208); (_QWORD *)(a1 + 208) != j; ++v64 )
    j = (_QWORD *)*j;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v65);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v78 = *(_QWORD *)(a1 + 56);
    v79 = *(_DWORD *)(v78 + 152);
    LOBYTE(v78) = 5;
    WPP_RECORDER_SF_DDDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      v78,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
      16,
      (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
      v79,
      *(_DWORD *)(a1 + 64),
      v64,
      v61);
  }
  if ( v61 <= v64 )
  {
    v38 = 0;
    goto LABEL_50;
  }
  v36 = v61 - v64;
  *(_QWORD *)(a1 + 144) = a1;
  *(_DWORD *)(a1 + 152) = v36;
  *((_QWORD *)&v83[0] + 1) = v83;
  *(_QWORD *)&v83[0] = v83;
  *(_QWORD *)(a1 + 168) = TR_CommonBufferCallback;
  *(_DWORD *)(a1 + 156) = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 160) = 828862034;
  if ( *(_BYTE *)(a1 + 288) )
    v37 = TR_AcquireSecureSegments(a1, v36, v83);
  else
    v37 = CommonBuffer_AcquireBuffers(Context, a1, 828862034, a1 + 128);
  v38 = v37;
  if ( v37 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_130:
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      Isoch_Stage_Release(a1, v1);
      if ( LODWORD(v3[2].Process) == HIDWORD(v3[2].Process) )
      {
        Isoch_Transfer_CompleteCancelable(a1, (_DWORD)v3, -1, -1073737728, 0, 0);
        LODWORD(v34) = 1;
      }
      else
      {
        LODWORD(v34) = 4;
        *(_DWORD *)&v3[2].AllocationProcessorNumber = LODWORD(v3[2].Next) - *(_DWORD *)&v3[2].Size;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
      return (unsigned int)v34;
    }
    WPP_RECORDER_SF_DDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      2u,
      0xEu,
      0x11u,
      (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids);
LABEL_128:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v80 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
      LOBYTE(v80) = 2;
      WPP_RECORDER_SF_DDqqD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v80,
        v47,
        49,
        v82,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
        (char)v3->MappedSystemVa,
        (char)v1,
        v61);
    }
    goto LABEL_130;
  }
  v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v40 = *(_OWORD **)&v83[0];
  *(_BYTE *)(a1 + 104) = v39;
  if ( v40 != v83 )
  {
    **(_QWORD **)(a1 + 216) = v40;
    *(_QWORD *)(*(_QWORD *)&v83[0] + 8LL) = *(_QWORD *)(a1 + 216);
    **((_QWORD **)&v83[0] + 1) = a1 + 208;
    *(_QWORD *)(a1 + 216) = *((_QWORD *)&v83[0] + 1);
    *((_QWORD *)&v83[0] + 1) = v83;
    *(_QWORD *)&v83[0] = v83;
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
      v46 = *(_QWORD *)v63;
      if ( *(_DWORD **)(*(_QWORD *)v63 + 8LL) != v63 )
        goto LABEL_64;
      *v44 = v46;
      ++v42;
      v44[1] = v63;
      *(_QWORD *)(v46 + 8) = v44;
      *(_QWORD *)v63 = v44;
    }
    while ( v42 < v61 );
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
    if ( v38 >= 0 )
    {
      *(_DWORD *)(a1 + 344) = 0;
      return (unsigned int)v34;
    }
    goto LABEL_128;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v81 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
    LOBYTE(v81) = 4;
    WPP_RECORDER_SF_DDqqD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v81,
      v41,
      48,
      v82,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
      (char)v3->MappedSystemVa,
      (char)v1,
      v61);
  }
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  Isoch_Stage_Release(a1, v1);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  LODWORD(v34) = 3;
  return (unsigned int)v34;
}
