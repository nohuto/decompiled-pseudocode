/*
 * XREFs of Control_Transfer_MapIntoRing @ 0x140004F80
 * Callers:
 *     Control_EvtDmaCallback @ 0x140004600 (Control_EvtDmaCallback.c)
 *     Control_Transfer_Map @ 0x140004C90 (Control_Transfer_Map.c)
 * Callees:
 *     XilUsbDevice_SendRequestToRingDoorbell @ 0x140004518 (XilUsbDevice_SendRequestToRingDoorbell.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x140006770 (TR_AddTRBRangeToSecureTransferRing.c)
 *     McTemplateK0uqq_EtwWriteTransfer @ 0x140006AB0 (McTemplateK0uqq_EtwWriteTransfer.c)
 *     ESM_AddEvent @ 0x1400130A4 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_DDqq @ 0x140013D00 (WPP_RECORDER_SF_DDqq.c)
 *     WPP_RECORDER_SF_DDDqD @ 0x140037834 (WPP_RECORDER_SF_DDDqD.c)
 *     memmove @ 0x1400597C0 (memmove.c)
 */

__int64 __fastcall Control_Transfer_MapIntoRing(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // r9
  int v4; // r11d
  unsigned int v5; // ecx
  __int64 v6; // rdx
  char v7; // r13
  __int64 v8; // rax
  int v9; // esi
  __int64 v10; // r12
  unsigned int v11; // r8d
  int *v12; // rbx
  __int64 result; // rax
  __int64 v14; // r12
  int v15; // ebx
  int v16; // edx
  int v17; // ebx
  int v18; // ebx
  int v19; // ecx
  unsigned int v20; // r14d
  unsigned int v21; // r14d
  unsigned int v22; // r8d
  __int64 v23; // rax
  unsigned int v24; // ecx
  int v25; // ecx
  __int64 v26; // rcx
  BOOL v27; // eax
  char v28; // r14
  int v29; // eax
  KIRQL v30; // dl
  int v31; // r8d
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rsi
  __int64 v35; // rdx
  int v36; // ebx
  int v37; // ecx
  int v38; // r8d
  int v39; // r8d
  unsigned int v40; // r8d
  int v41; // edx
  __int64 v42; // rax
  bool v43; // zf
  unsigned int v44; // edx
  __int64 v45; // rax
  unsigned int v46; // ecx
  __int64 v47; // rax
  __int64 v48; // rcx
  int v49; // edx
  __int64 v50; // rcx
  int v51; // ecx
  int v52; // r10d
  int v53; // eax
  int v54; // edx
  int v55; // edx
  __int64 v56; // rcx
  signed __int32 v57[8]; // [rsp+0h] [rbp-79h] BYREF
  __int64 v58; // [rsp+20h] [rbp-59h]
  __int64 v59; // [rsp+28h] [rbp-51h]
  __int64 v60; // [rsp+38h] [rbp-41h]
  __int64 v61; // [rsp+40h] [rbp-39h]
  unsigned int v62; // [rsp+50h] [rbp-29h]
  unsigned int v63; // [rsp+54h] [rbp-25h]
  __int64 v64; // [rsp+58h] [rbp-21h]
  __int64 v65; // [rsp+60h] [rbp-19h]
  __int64 v66; // [rsp+68h] [rbp-11h]
  __int64 v67; // [rsp+70h] [rbp-9h]
  __int128 v68; // [rsp+78h] [rbp-1h] BYREF
  unsigned int v69; // [rsp+E0h] [rbp+67h]
  unsigned int v70; // [rsp+E8h] [rbp+6Fh]
  int v71; // [rsp+F0h] [rbp+77h]
  int v72; // [rsp+F8h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 360);
  v2 = *(_QWORD *)(a1 + 40);
  v72 = 0;
  v66 = *(_QWORD *)(v1 + 48);
  v4 = *(_DWORD *)(v66 + 32) & 1;
  v71 = v4;
  if ( *(_BYTE *)(v2 + 720) )
  {
    v5 = *(_WORD *)(*(_QWORD *)(a1 + 56) + 100LL) & 0x7FF;
    v63 = (v5 + *(_DWORD *)(v1 + 104) - 1) / v5;
  }
  else
  {
    v63 = 0;
  }
  v6 = *(unsigned int *)(a1 + 192);
  v7 = 0;
  v8 = *(_QWORD *)(v2 + 736);
  v9 = 1;
  v10 = *(_QWORD *)(a1 + 184) + 16 * v6;
  v11 = *(_DWORD *)(a1 + 192);
  v69 = 0;
  v64 = 0LL;
  v70 = 0;
  v62 = 0;
  v67 = v6;
  v65 = v10;
  if ( (v8 & 8) != 0 && (unsigned int)(v6 + 21) > *(_DWORD *)(a1 + 196) )
  {
    v51 = *(_DWORD *)(a1 + 200);
    v68 = 0LL;
    v52 = 6145 - (v51 != 0);
    v43 = (*(_QWORD *)(v2 + 736) & 0x800LL) == 0;
    HIDWORD(v68) = v52;
    if ( !v43 )
      v52 = 6161 - (v51 != 0);
    v53 = DWORD2(v68) & 0x3FFFFF | (*(unsigned __int16 *)(a1 + 112) << 22);
    *(_QWORD *)v10 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL);
    *(_DWORD *)(v10 + 8) = v53;
    *(_DWORD *)(v10 + 12) = v52 | 2;
    v43 = *(_DWORD *)(a1 + 200) == 0;
    *(_DWORD *)(a1 + 192) = 0;
    v11 = 0;
    *(_DWORD *)(a1 + 200) = v43;
  }
  v12 = (int *)(a1 + 200);
  while ( v9 != 9 )
  {
    result = v11 + 1;
    v14 = *(_QWORD *)(a1 + 184) + 16LL * v11;
    if ( (unsigned int)result > *(_DWORD *)(a1 + 196) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v54 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        WPP_RECORDER_SF_DDDqD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v54,
          v11,
          34,
          v58,
          v54,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          v11,
          v14,
          *v12);
        v4 = v71;
      }
      v38 = *v12;
      v68 = 0LL;
      if ( v14 == v65 )
        v39 = 6145 - (v38 != 0);
      else
        v39 = v38 & 1 | 0x1800;
      if ( (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 736LL) & 0x800LL) != 0 )
        goto LABEL_70;
      if ( v14 == v65 )
      {
        v40 = v39 & 0xFFFFFFEF;
        goto LABEL_67;
      }
      if ( v9 == 7 || v9 == 5 || v9 == 6 )
LABEL_70:
        v40 = v39 | 0x10;
      else
        v40 = v39 & 0xFFFFFFEF;
LABEL_67:
      v42 = *(_QWORD *)(a1 + 176);
      DWORD2(v68) = DWORD2(v68) & 0x3FFFFF | (*(unsigned __int16 *)(a1 + 112) << 22);
      v41 = DWORD2(v68);
      *(_QWORD *)v14 = *(_QWORD *)(v42 + 24);
      *(_DWORD *)(v14 + 8) = v41;
      *(_DWORD *)(v14 + 12) = v40 | 2;
      v43 = *v12 == 0;
      *(_DWORD *)(a1 + 192) = 0;
      v11 = 0;
      *v12 = v43;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        result = (__int64)WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v55 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
          result = WPP_RECORDER_SF_DDDqD(
                     *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                     v55,
                     v11,
                     35,
                     v58,
                     v55,
                     *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
                     v11,
                     v14,
                     *v12);
          v4 = v71;
        }
      }
      v68 = 0LL;
      if ( v9 == 7 )
        goto LABEL_33;
      v15 = 0;
      v16 = 0;
      if ( v9 != 1 )
      {
        switch ( v9 )
        {
          case 2:
            goto LABEL_18;
          case 3:
            v9 = 7;
            v17 = 69632;
            if ( v4 )
              v17 = 4096;
            v15 = v17 | 0x10;
LABEL_29:
            v25 = v15 | 2;
            goto LABEL_30;
          case 5:
LABEL_18:
            if ( v9 == 2 )
              v18 = (v4 << 16) | 0xC00;
            else
              v18 = 1024;
            v19 = *(_DWORD *)(v1 + 64);
            HIDWORD(v68) = v18;
            if ( v19 == 2 )
            {
              if ( !v4 )
                memmove(*(void **)(*(_QWORD *)(v1 + 88) + 16LL), *(const void **)(v1 + 80), *(unsigned int *)(v1 + 104));
              v20 = *(_DWORD *)(v1 + 104);
              *(_QWORD *)&v68 = *(_QWORD *)(*(_QWORD *)(v1 + 88) + 24LL);
LABEL_24:
              v9 = 6;
              v21 = DWORD2(v68) & 0xFFFE0000 | v20 & 0x1FFFF;
LABEL_25:
              v22 = (v21 & 0x1FFFF) + v62;
              v23 = *(_QWORD *)(a1 + 40);
              v62 = v22;
              if ( v9 == 6 || !*(_BYTE *)(v23 + 720) )
              {
                LOBYTE(v24) = 0;
              }
              else
              {
                v24 = v63 - v22 / (*(_WORD *)(*(_QWORD *)(a1 + 56) + 100LL) & 0x7FFu);
                if ( v24 > 0x1F )
                  LOBYTE(v24) = 31;
              }
              v15 = v18 | 0x10;
              DWORD2(v68) = v21 & 0xFFC1FFFF | ((v24 & 0x1F) << 17);
              v25 = v15;
              v16 = v15;
LABEL_28:
              if ( v9 != 6 )
              {
                v15 = v16;
                if ( v9 != 7 )
                  goto LABEL_30;
              }
              goto LABEL_29;
            }
            if ( !v19 )
              return result;
            v37 = v19 - 1;
            if ( !v37 )
            {
              v20 = *(_DWORD *)(v1 + 104);
              memmove(&v68, *(const void **)(v1 + 80), v20);
              v18 = HIDWORD(v68) | 0x40;
              goto LABEL_24;
            }
            if ( v37 != 2 )
            {
              v21 = DWORD2(v68);
              goto LABEL_25;
            }
            v44 = v70;
            if ( !v70 )
            {
              v45 = *(_QWORD *)(v1 + 96);
              v64 = *(_QWORD *)(v45 + 24LL * v69 + 16);
              v44 = *(_DWORD *)(v45 + 24LL * v69 + 24);
            }
            v46 = 0x10000;
            if ( v9 == 2 )
            {
              if ( v44 > 0x200 && (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 736LL) & 0x40) != 0 )
              {
                v46 = 512;
                if ( v4 )
                  v7 = 1;
LABEL_80:
                v9 = 5;
                *(_QWORD *)&v68 = v64;
                v21 = v46 | DWORD2(v68) & 0xFFFE0000;
                v64 += v46;
                v70 = v44 - v46;
                goto LABEL_25;
              }
            }
            else if ( v7 )
            {
              v18 |= 0x10000u;
            }
            if ( v44 <= 0x10000 )
            {
              *(_QWORD *)&v68 = v64;
              v21 = v44 & 0x1FFFF | DWORD2(v68) & 0xFFFE0000;
              v70 = 0;
              v9 = (++v69 == **(_DWORD **)(v1 + 96)) + 5;
              goto LABEL_25;
            }
            goto LABEL_80;
        }
        if ( v9 != 6 )
        {
          v25 = HIDWORD(v68);
          goto LABEL_28;
        }
LABEL_33:
        ++v72;
        v25 = 7200;
        *(_QWORD *)&v68 = v1 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v9 == 7 )
        {
          v9 = 9;
          *(_QWORD *)&v68 = v1 & 0xFFFFFFFFFFFFFFF8uLL | 4;
          goto LABEL_30;
        }
LABEL_51:
        v9 = 3;
        goto LABEL_30;
      }
      DWORD2(v68) = 8;
      *(_QWORD *)&v68 = *(_QWORD *)(v66 + 128);
      if ( !*(_DWORD *)(v1 + 104) )
      {
        v25 = 2112;
        goto LABEL_51;
      }
      v25 = 133184;
      v9 = 2;
      if ( v4 )
        v25 = 198720;
LABEL_30:
      v12 = (int *)(a1 + 200);
      if ( v14 == v65 )
        HIDWORD(v68) = v25 & 0xFFFFFFFE | (*(_DWORD *)(a1 + 200) == 0);
      else
        HIDWORD(v68) = v25 & 0xFFFFFFFE | *(_DWORD *)(a1 + 200) & 1;
      v4 = v71;
      DWORD2(v68) = DWORD2(v68) & 0x3FFFFF | (*(unsigned __int16 *)(a1 + 112) << 22);
      *(_OWORD *)v14 = v68;
      v11 = ++*(_DWORD *)(a1 + 192);
    }
  }
  *(_DWORD *)(v1 + 160) = v11;
  v26 = *(unsigned int *)(a1 + 192);
  v27 = *v12 == 0;
  v68 = 0LL;
  HIDWORD(v68) = v27;
  *(_OWORD *)(*(_QWORD *)(a1 + 184) + 16 * v26) = v68;
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_DWORD *)(v1 + 128) = v72;
  *(_DWORD *)(a1 + 368) |= 1u;
  if ( *(_DWORD *)(a1 + 108) == 3 )
  {
    v28 = 0;
    v29 = 2;
  }
  else
  {
    v28 = 1;
    v29 = 0;
  }
  v30 = *(_BYTE *)(a1 + 104);
  *(_DWORD *)(a1 + 108) = v29;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v30);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v47 = *(_QWORD *)(a1 + 48);
    v48 = *(_QWORD *)(a1 + 56);
    v61 = v1;
    v49 = *(unsigned __int8 *)(v47 + 135);
    v60 = *(_QWORD *)(v1 + 24);
    LODWORD(v47) = *(_DWORD *)(v48 + 144);
    v50 = *(_QWORD *)(v48 + 80);
    LOBYTE(v59) = v49;
    LOBYTE(v49) = 4;
    WPP_RECORDER_SF_DDqq(
      v50,
      v49,
      v31,
      36,
      (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
      v59,
      v47,
      v60,
      v1);
  }
  *(_BYTE *)(v65 + 12) ^= 1u;
  _InterlockedOr(v57, 0);
  TR_AddTRBRangeToSecureTransferRing(a1, 0, *(_QWORD *)(v1 + 152), v67, *(_DWORD *)(a1 + 192), v1 + 168);
  result = *(_QWORD *)(a1 + 56);
  v32 = *(unsigned __int8 *)(a1 + 288);
  v33 = *(unsigned int *)(a1 + 64);
  v34 = *(_QWORD *)(result + 16);
  v35 = *(unsigned int *)(result + 144);
  if ( *(_QWORD *)(v34 + 160) )
  {
    v36 = ((_DWORD)v33 << 16) | (unsigned __int8)v35;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
      McTemplateK0uqq_EtwWriteTransfer(v32, v35, v33, *(unsigned __int8 *)(v34 + 135), v35, *(_DWORD *)(a1 + 64));
    result = *(_QWORD *)(v34 + 160);
    *(_DWORD *)result = v36;
    _InterlockedOr(v57, 0);
  }
  else if ( !(_BYTE)v32 )
  {
    result = XilUsbDevice_SendRequestToRingDoorbell((__int64 *)(v34 + 608), v35, v33);
  }
  if ( v28 )
  {
    v56 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v56 + 37) )
      return ESM_AddEvent((PVOID)(v56 + 296));
    result = *(_QWORD *)(v56 + 136);
    if ( _InterlockedIncrement((volatile signed __int32 *)(result + 20)) == *(_DWORD *)(result + 8) )
      return ESM_AddEvent((PVOID)(v56 + 296));
  }
  return result;
}
