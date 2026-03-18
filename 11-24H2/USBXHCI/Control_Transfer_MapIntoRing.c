/*
 * XREFs of Control_Transfer_MapIntoRing @ 0x14001E7C0
 * Callers:
 *     Control_EvtDmaCallback @ 0x14001DE90 (Control_EvtDmaCallback.c)
 *     Control_Transfer_Map @ 0x14001E4D0 (Control_Transfer_Map.c)
 * Callees:
 *     ESM_AddEvent @ 0x140006A44 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1400076A0 (WPP_RECORDER_SF_DDqq.c)
 *     XilUsbDevice_WriteDoorbell @ 0x14000C6B0 (XilUsbDevice_WriteDoorbell.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x140019000 (TR_AddTRBRangeToSecureTransferRing.c)
 *     TR_CalculateTDSize @ 0x140021070 (TR_CalculateTDSize.c)
 *     WPP_RECORDER_SF_DDDqD @ 0x140036124 (WPP_RECORDER_SF_DDDqD.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140043D58 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x140058BC0 (memmove.c)
 */

void __fastcall Control_Transfer_MapIntoRing(__int64 a1)
{
  __int64 v1; // r15
  int v3; // r14d
  __int64 v4; // rbx
  unsigned __int16 v5; // si
  __int64 v6; // rbx
  unsigned __int16 v7; // cx
  __int64 v8; // r9
  char v9; // cl
  int v10; // r14d
  __int64 v11; // rsi
  __int64 v12; // rdx
  unsigned int v13; // r11d
  __int64 v14; // r10
  unsigned int v15; // r13d
  unsigned int v16; // r8d
  int v17; // ecx
  int v18; // r9d
  bool v19; // zf
  int v20; // r8d
  int v21; // eax
  int v22; // eax
  __int64 v23; // r9
  char v24; // bl
  __int64 v25; // r12
  int v26; // edx
  int v27; // r8d
  int v28; // r8d
  unsigned int v29; // r8d
  int v30; // edx
  __int64 v31; // rax
  int v32; // edx
  int v33; // esi
  int v34; // edx
  int v35; // ecx
  int v36; // esi
  int v37; // esi
  int v38; // ecx
  int v39; // ecx
  __int64 v40; // rax
  unsigned int v41; // ecx
  unsigned int v42; // ebx
  _DWORD *v43; // rax
  unsigned int v44; // ebx
  char v45; // al
  __int64 v46; // rcx
  BOOL v47; // eax
  int v48; // eax
  int v49; // esi
  KIRQL v50; // dl
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // rcx
  int v54; // edx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rax
  signed __int32 v58[8]; // [rsp+0h] [rbp-79h] BYREF
  __int64 v59; // [rsp+20h] [rbp-59h]
  __int64 v60; // [rsp+28h] [rbp-51h]
  __int64 v61; // [rsp+30h] [rbp-49h]
  __int64 v62; // [rsp+38h] [rbp-41h]
  __int64 v63; // [rsp+40h] [rbp-39h]
  unsigned int v64; // [rsp+50h] [rbp-29h]
  unsigned int v65; // [rsp+54h] [rbp-25h]
  __int64 v66; // [rsp+58h] [rbp-21h]
  __int64 v67; // [rsp+60h] [rbp-19h]
  __int64 v68; // [rsp+68h] [rbp-11h]
  __int64 v69; // [rsp+70h] [rbp-9h]
  __int64 v70; // [rsp+78h] [rbp-1h]
  __int128 v71; // [rsp+80h] [rbp+7h] BYREF
  char v72; // [rsp+E0h] [rbp+67h]
  int v73; // [rsp+E8h] [rbp+6Fh]
  unsigned int v74; // [rsp+F0h] [rbp+77h]
  int v75; // [rsp+F8h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 360);
  v75 = 0;
  v3 = *(_DWORD *)(v1 + 104);
  v69 = *(_QWORD *)(v1 + 48);
  v73 = *(_DWORD *)(v69 + 32) & 1;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 720LL) )
  {
    v4 = *(_QWORD *)(a1 + 56);
    if ( !(unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline()
      || *(_WORD *)(v4 + 100)
      || !*(_BYTE *)(v4 + 39)
      || ((*(_DWORD *)(v4 + 128) - 1) & 0xFFFFFFFB) != 0 )
    {
      v5 = *(_WORD *)(v4 + 100) & 0x7FF;
    }
    else
    {
      v5 = *(_WORD *)(v4 + 105);
    }
    v6 = *(_QWORD *)(a1 + 56);
    if ( !(unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline()
      || *(_WORD *)(v6 + 100)
      || !*(_BYTE *)(v6 + 39)
      || ((*(_DWORD *)(v6 + 128) - 1) & 0xFFFFFFFB) != 0 )
    {
      v7 = *(_WORD *)(v6 + 100) & 0x7FF;
    }
    else
    {
      v7 = *(_WORD *)(v6 + 105);
    }
    v65 = (v3 + (unsigned int)v5 - 1) / v7;
  }
  else
  {
    v65 = 0;
  }
  v8 = *(unsigned int *)(a1 + 192);
  v9 = 0;
  v74 = 0;
  v67 = 0LL;
  v68 = a1 + 40;
  v10 = 1;
  v11 = *(_QWORD *)(a1 + 184) + 16LL * (unsigned int)v8;
  v12 = *(_QWORD *)(a1 + 40);
  v13 = 0;
  v14 = 0LL;
  v64 = 0;
  v15 = 0;
  v70 = v8;
  v66 = v11;
  v16 = v8;
  v72 = 0;
  if ( (*(_QWORD *)(v12 + 736) & 8) != 0 && (unsigned int)(v8 + 21) > *(_DWORD *)(a1 + 196) )
  {
    v17 = *(_DWORD *)(a1 + 200);
    v71 = 0LL;
    v18 = 6145 - (v17 != 0);
    v19 = (*(_QWORD *)(v12 + 736) & 0x800LL) == 0;
    HIDWORD(v71) = v18;
    if ( !v19 )
      v18 = 6161 - (v17 != 0);
    v20 = DWORD2(v71) & 0x3FFFFF;
    v21 = *(unsigned __int16 *)(a1 + 112);
    *(_QWORD *)v11 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL);
    v22 = v20 | (v21 << 22);
    v16 = 0;
    *(_DWORD *)(v11 + 8) = v22;
    *(_DWORD *)(v11 + 12) = v18 | 2;
    v19 = *(_DWORD *)(a1 + 200) == 0;
    *(_DWORD *)(a1 + 192) = 0;
    v9 = 0;
    *(_DWORD *)(a1 + 200) = v19;
  }
  v23 = 2LL;
  do
  {
    v24 = v9;
    v25 = *(_QWORD *)(a1 + 184) + 16LL * v16;
    if ( v16 + 1 > *(_DWORD *)(a1 + 196) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v26 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
        WPP_RECORDER_SF_DDDqD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v26,
          v16,
          34,
          v59,
          v26,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
          v16,
          v25,
          *(_DWORD *)(a1 + 200));
      }
      v27 = *(_DWORD *)(a1 + 200);
      *((_QWORD *)&v71 + 1) = 0LL;
      if ( v25 == v11 )
        v28 = 6145 - (v27 != 0);
      else
        v28 = v27 & 1 | 0x1800;
      if ( (*(_QWORD *)(*(_QWORD *)v68 + 736LL) & 0x800LL) == 0 )
      {
        if ( v25 == v11 )
        {
          v29 = v28 & 0xFFFFFFEF;
LABEL_36:
          v31 = *(_QWORD *)(a1 + 176);
          DWORD2(v71) = DWORD2(v71) & 0x3FFFFF | (*(unsigned __int16 *)(a1 + 112) << 22);
          v30 = DWORD2(v71);
          *(_QWORD *)&v71 = *(_QWORD *)(v31 + 24);
          *(_QWORD *)v25 = v71;
          *(_DWORD *)(v25 + 8) = v30;
          *(_DWORD *)(v25 + 12) = v29 | 2;
          v16 = 0;
          v19 = *(_DWORD *)(a1 + 200) == 0;
          *(_DWORD *)(a1 + 192) = 0;
          *(_DWORD *)(a1 + 200) = v19;
          goto LABEL_93;
        }
        if ( v10 != 5 && (unsigned int)(v10 - 6) >= 2 )
        {
          v29 = v28 & 0xFFFFFFEF;
          goto LABEL_36;
        }
      }
      v29 = v28 | 0x10;
      goto LABEL_36;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v32 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
      WPP_RECORDER_SF_DDDqD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v32,
        v16,
        35,
        v59,
        v32,
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
        v16,
        v25,
        *(_DWORD *)(a1 + 200));
      v14 = v67;
      v23 = 2LL;
      v13 = v74;
    }
    v71 = 0LL;
    if ( v10 == 7 )
      goto LABEL_89;
    v33 = 0;
    v34 = 0;
    if ( v10 == 1 )
    {
      v11 = v66;
      DWORD2(v71) = 8;
      *(_QWORD *)&v71 = *(_QWORD *)(v69 + 128);
      if ( *(_DWORD *)(v1 + 104) )
      {
        v35 = 133184;
        v10 = 2;
        if ( v73 )
          v35 = 198720;
        goto LABEL_80;
      }
      v35 = 2112;
      goto LABEL_84;
    }
    if ( v10 == 2 )
      goto LABEL_50;
    if ( v10 != 3 )
    {
      if ( v10 != 5 )
      {
        if ( v10 != 6 )
        {
          v35 = HIDWORD(v71);
LABEL_76:
          if ( v10 != 6 )
          {
            v33 = v34;
            if ( v10 != 7 )
              goto LABEL_79;
          }
          goto LABEL_78;
        }
        v11 = v66;
LABEL_89:
        ++v75;
        v35 = 7200;
        *(_QWORD *)&v71 = v1 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v10 == 7 )
        {
          v10 = 9;
          *(_QWORD *)&v71 = v1 & 0xFFFFFFFFFFFFFFF8uLL | 4;
          goto LABEL_80;
        }
LABEL_84:
        v10 = 3;
        goto LABEL_80;
      }
LABEL_50:
      if ( v10 == 2 )
        v37 = (v73 << 16) | 0xC00;
      else
        v37 = 1024;
      v38 = *(_DWORD *)(v1 + 64);
      HIDWORD(v71) = v37;
      if ( v38 == 2 )
      {
        if ( !v73 )
          memmove(*(void **)(*(_QWORD *)(v1 + 88) + 16LL), *(const void **)(v1 + 80), *(unsigned int *)(v1 + 104));
        v44 = *(_DWORD *)(v1 + 104);
        *(_QWORD *)&v71 = *(_QWORD *)(*(_QWORD *)(v1 + 88) + 24LL);
      }
      else
      {
        if ( !v38 )
          return;
        v39 = v38 - 1;
        if ( v39 )
        {
          if ( v39 != 2 )
          {
            v42 = DWORD2(v71);
            goto LABEL_75;
          }
          if ( !v15 )
          {
            v40 = *(_QWORD *)(v1 + 96);
            v14 = *(_QWORD *)(v40 + 24LL * v13 + 16);
            v15 = *(_DWORD *)(v40 + 24LL * v13 + 24);
            v67 = v14;
          }
          v41 = 0x10000;
          if ( v10 == 2 )
          {
            if ( v15 > 0x200 && (*(_QWORD *)(*(_QWORD *)v68 + 736LL) & 0x40) != 0 )
            {
              v41 = 512;
              if ( v73 )
                v72 = 1;
              goto LABEL_64;
            }
          }
          else
          {
            v72 = v24;
            if ( v24 )
            {
              v37 |= 0x10000u;
              v72 = v24;
            }
          }
          if ( v15 <= 0x10000 )
          {
            v43 = *(_DWORD **)(v1 + 96);
            v42 = v15 & 0x1FFFF | DWORD2(v71) & 0xFFFE0000;
            *(_QWORD *)&v71 = v14;
            v15 = 0;
            v74 = v13 + 1;
            v10 = (v13 + 1 == *v43) + 5;
            goto LABEL_75;
          }
LABEL_64:
          v10 = 5;
          *(_QWORD *)&v71 = v14;
          v42 = v41 | DWORD2(v71) & 0xFFFE0000;
          v15 -= v41;
          v67 = v41 + v14;
LABEL_75:
          v64 += v42 & 0x1FFFF;
          LOBYTE(v23) = v10 == 6;
          v45 = TR_CalculateTDSize(a1, v65, v64, v23);
          v33 = v37 | 0x10;
          v35 = v33;
          DWORD2(v71) = v42 & 0xFFC1FFFF | ((v45 & 0x1F) << 17);
          v34 = v33;
          goto LABEL_76;
        }
        v44 = *(_DWORD *)(v1 + 104);
        memmove(&v71, *(const void **)(v1 + 80), v44);
        v37 = HIDWORD(v71) | 0x40;
      }
      v10 = 6;
      v42 = DWORD2(v71) & 0xFFFE0000 | v44 & 0x1FFFF;
      goto LABEL_75;
    }
    v36 = 69632;
    v10 = 7;
    if ( v73 )
      v36 = 4096;
    v33 = v36 | 0x10;
LABEL_78:
    v35 = v33 | 2;
LABEL_79:
    v11 = v66;
LABEL_80:
    if ( v25 == v11 )
      HIDWORD(v71) = v35 & 0xFFFFFFFE | (*(_DWORD *)(a1 + 200) == 0);
    else
      HIDWORD(v71) = v35 & 0xFFFFFFFE | *(_DWORD *)(a1 + 200) & 1;
    DWORD2(v71) = DWORD2(v71) & 0x3FFFFF | (*(unsigned __int16 *)(a1 + 112) << 22);
    *(_OWORD *)v25 = v71;
    v16 = ++*(_DWORD *)(a1 + 192);
LABEL_93:
    v9 = v72;
    v23 = 2LL;
    v14 = v67;
    v13 = v74;
  }
  while ( v10 != 9 );
  *(_DWORD *)(v1 + 160) = v16;
  v46 = *(unsigned int *)(a1 + 192);
  v47 = *(_DWORD *)(a1 + 200) == 0;
  v71 = 0LL;
  HIDWORD(v71) = v47;
  *(_OWORD *)(*(_QWORD *)(a1 + 184) + 16 * v46) = v71;
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_DWORD *)(v1 + 128) = v75;
  v48 = 2;
  v49 = *(_DWORD *)(a1 + 108);
  *(_DWORD *)(a1 + 368) |= 1u;
  v50 = *(_BYTE *)(a1 + 104);
  if ( v49 != 3 )
    v48 = 0;
  *(_DWORD *)(a1 + 108) = v48;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v50);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v52 = *(_QWORD *)(a1 + 48);
    v53 = *(_QWORD *)(a1 + 56);
    v63 = v1;
    v54 = *(unsigned __int8 *)(v52 + 143);
    v62 = *(_QWORD *)(v1 + 24);
    LODWORD(v52) = *(_DWORD *)(v53 + 152);
    v55 = *(_QWORD *)(v53 + 80);
    LODWORD(v61) = v52;
    LODWORD(v60) = v54;
    WPP_RECORDER_SF_DDqq(
      v55,
      4u,
      v51,
      0x24u,
      (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
      v60,
      v61,
      v62,
      v1);
  }
  *(_BYTE *)(v66 + 12) ^= 1u;
  _InterlockedOr(v58, 0);
  TR_AddTRBRangeToSecureTransferRing(a1, 0LL, *(_QWORD **)(v1 + 152), v70, *(_DWORD *)(a1 + 192), (_OWORD *)(v1 + 168));
  XilUsbDevice_WriteDoorbell(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL),
    *(unsigned int *)(*(_QWORD *)(a1 + 56) + 152LL),
    *(unsigned int *)(a1 + 64),
    *(_BYTE *)(a1 + 288) == 0);
  if ( v49 != 3 )
  {
    v56 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v56 + 37)
      || (v57 = *(_QWORD *)(v56 + 144),
          _InterlockedIncrement((volatile signed __int32 *)(v57 + 20)) == *(_DWORD *)(v57 + 8)) )
    {
      ESM_AddEvent((KSPIN_LOCK *)(v56 + 304), 20);
    }
  }
}
