/*
 * XREFs of RaidInitializePerfOpts @ 0x140041BFC
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x14005585C (WPP_SF_.c)
 *     McTemplateK0qqdqqqq_EtwWriteTransfer @ 0x1400582C8 (McTemplateK0qqdqqqq_EtwWriteTransfer.c)
 *     RaidDmaGetAdapterInfo @ 0x14006B154 (RaidDmaGetAdapterInfo.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     RaidInitializeDma @ 0x140183F38 (RaidInitializeDma.c)
 *     RaidIsDmaInitialized @ 0x1401840CC (RaidIsDmaInitialized.c)
 */

__int64 __fastcall RaidInitializePerfOpts(__int64 a1, char a2, unsigned int *a3)
{
  int v5; // ebp
  char v6; // r13
  char v7; // r10
  char v8; // r9
  char v9; // r11
  unsigned int v10; // edi
  _DWORD *v11; // r15
  unsigned int v12; // edx
  int v13; // r14d
  _DWORD *v14; // rcx
  _DWORD *v15; // rax
  _DWORD *v16; // r8
  _DWORD *v17; // rcx
  _DWORD *v18; // rax
  __int64 v19; // rcx
  char v20; // dl
  char v21; // al
  unsigned int v22; // eax
  unsigned int v23; // ecx
  _WORD *v24; // rdx
  _QWORD *v25; // r13
  unsigned int v26; // r14d
  int v27; // ecx
  unsigned int v28; // r15d
  unsigned int v29; // eax
  unsigned int v30; // r15d
  __int64 v31; // rcx
  unsigned __int16 epi16; // r11
  unsigned __int64 v33; // rdx
  __int64 v34; // r9
  unsigned int v35; // edx
  unsigned int v36; // eax
  unsigned int v37; // ecx
  unsigned int v38; // eax
  unsigned int v39; // ecx
  char v41; // [rsp+50h] [rbp-A8h]
  char v42; // [rsp+51h] [rbp-A7h]
  char v43; // [rsp+52h] [rbp-A6h]
  char v44; // [rsp+53h] [rbp-A5h]
  _QWORD *v45; // [rsp+58h] [rbp-A0h]
  int v46; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v47[148]; // [rsp+64h] [rbp-94h] BYREF
  char v49; // [rsp+110h] [rbp+18h]
  char v50; // [rsp+118h] [rbp+20h]

  v43 = 0;
  v49 = 0;
  v5 = 0;
  v44 = 0;
  v6 = 0;
  v50 = 0;
  v41 = 0;
  v7 = 0;
  v42 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( !a3 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 22LL, &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids);
    }
    v10 = -1056964602;
    goto LABEL_118;
  }
  if ( (*(_BYTE *)(a1 + 104) & 0x10) == 0 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 23LL, &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids);
    }
    goto LABEL_12;
  }
  v11 = a3 + 1;
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
  {
    McTemplateK0qqdqqqq_EtwWriteTransfer(
      a1,
      (unsigned int)&EventAdapterInitPerfConfigData,
      (_DWORD)a3,
      *a3,
      *v11,
      a3[2],
      a3[3],
      a3[4],
      a3[5],
      a3[6]);
    v7 = 0;
    v8 = 0;
    v9 = 0;
  }
  v12 = *a3;
  v13 = 3;
  v14 = v11;
  if ( *a3 && *v11 >= 0xCu )
  {
    v6 = 1;
    v14 = a3 + 1;
  }
  v15 = v11;
  if ( v12 >= 2 && *v11 >= 0x18u )
  {
    v7 = 1;
    v43 = 1;
    v13 = 7;
    v15 = v14;
  }
  v16 = v15;
  if ( v12 >= 3 && *v15 >= 0x28u )
  {
    v8 = 1;
    v49 = 1;
    v13 |= 0x18u;
    v16 = a3 + 1;
  }
  v17 = v15;
  if ( v12 >= 4 && *v15 >= 0x28u )
  {
    v44 = 1;
    v13 |= 0x20u;
    v17 = v16;
  }
  v18 = v17;
  if ( v12 >= 5 && *v17 >= 0x28u )
  {
    if ( !KeGetCurrentIrql() )
    {
      memset_0(v47, 0, 0x54uLL);
      v46 = 1;
      if ( *(_BYTE *)(a1 + 4370) )
      {
        if ( !(unsigned __int8)RaidIsDmaInitialized(a1 + 880) )
          RaidInitializeDma(v19, *(_QWORD *)(a1 + 32), a1 + 384);
        if ( (int)RaidDmaGetAdapterInfo(a1 + 880, &v46) >= 0 && (v47[12] & 2) != 0 )
          v13 |= 0x40u;
      }
    }
    v7 = v43;
    v18 = a3 + 1;
    v8 = v49;
    v9 = 1;
    v50 = 1;
  }
  if ( *a3 < 6 || *v18 < 0x28u )
  {
    v20 = 0;
  }
  else
  {
    v20 = 1;
    v13 |= 0x80u;
    v41 = 1;
  }
  if ( *a3 < 7 || *v18 < 0x28u )
  {
    v21 = 0;
  }
  else
  {
    v21 = 1;
    v13 |= 0x100u;
    v42 = 1;
  }
  if ( !v6 && !v7 && !v8 && !v44 && !v9 && !v20 && !v21 )
  {
    if ( !a2 )
    {
      v10 = -1056964602;
      goto LABEL_118;
    }
    *a3 = 1;
    a3[1] = 12;
    goto LABEL_56;
  }
  if ( a2 )
  {
LABEL_56:
    a3[2] = v13;
    v5 = v13;
    goto LABEL_118;
  }
  v22 = a3[2];
  if ( (~v13 & v22) != 0 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 24LL, &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids);
    }
    v10 = -1056964607;
    goto LABEL_118;
  }
  if ( (v22 & 2) != 0 )
  {
    v5 = 2;
    *(_DWORD *)(a1 + 4664) = -a3[3];
  }
  v23 = a3[2];
  if ( (v23 & 1) == 0 )
  {
    if ( v7 && (v23 & 4) != 0 || (v23 & 0x20) != 0 )
      goto LABEL_12;
    goto LABEL_97;
  }
  v24 = (_WORD *)(a1 + 4660);
  v5 |= 1u;
  *(_WORD *)(a1 + 4660) |= 1u;
  if ( *(_BYTE *)(a1 + 4369) != 1
    || (v45 = (_QWORD *)(a1 + 4680), !*(_QWORD *)(a1 + 4680))
    || (v25 = (_QWORD *)(a1 + 4360), !*(_QWORD *)(a1 + 4360)) )
  {
LABEL_88:
    v23 = a3[2];
LABEL_97:
    if ( v49 && (v23 & 8) != 0 )
    {
      v5 |= 8u;
      a3[6] = *(_DWORD *)(a1 + 4656);
    }
    else
    {
      v35 = v23;
      if ( !v49 )
        goto LABEL_104;
    }
    v35 = v23;
    if ( (v23 & 0x10) == 0 )
    {
LABEL_104:
      v36 = v35;
      if ( v44 && (v35 & 0x20) != 0 )
      {
        v5 |= 0x20u;
        *(_BYTE *)(a1 + 4371) |= 2u;
        v36 = a3[2];
      }
      v37 = v36;
      if ( v9 && (v36 & 0x40) != 0 )
      {
        v5 |= 0x40u;
        *(_BYTE *)(a1 + 4371) |= 4u;
        v37 = a3[2];
      }
      v38 = v37;
      if ( v41 && (v37 & 0x80u) != 0 )
      {
        v5 |= 0x80u;
        *(_BYTE *)(a1 + 4371) |= 8u;
        v38 = a3[2];
      }
      v39 = v38;
      if ( v42 && (v38 & 0x100) != 0 )
      {
        *(_BYTE *)(a1 + 4371) |= 0x10u;
        v39 = a3[2];
        v5 |= 0x100u;
      }
      if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
        McTemplateK0qqdqqqq_EtwWriteTransfer(
          v39,
          (unsigned int)&EventAdapterFinalPerfConfigData,
          (_DWORD)v16,
          *a3,
          a3[1],
          v39,
          a3[3],
          a3[4],
          a3[5],
          a3[6]);
      goto LABEL_118;
    }
    if ( (v5 & 1) != 0 )
    {
      v5 |= 0x10u;
      *(_BYTE *)(a1 + 4371) |= 1u;
      v35 = a3[2];
      goto LABEL_104;
    }
LABEL_12:
    v10 = -1056964607;
    goto LABEL_118;
  }
  v26 = 0;
  v27 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 4352) + 4LL);
  v28 = v27 - 1;
  if ( !v7 || (v45 = (_QWORD *)(a1 + 4680), (a3[2] & 4) == 0) )
  {
LABEL_74:
    *v24 = (4 * v27) | 3;
    v30 = v28 + 1;
    *(_WORD *)(a1 + 4662) = KeQueryActiveGroupCount();
    if ( v26 < v30 )
    {
      v31 = 16LL * v26;
      do
      {
        epi16 = _mm_extract_epi16(*(__m128i *)(v31 + *v25), 4);
        v33 = *(_QWORD *)(v31 + *v25);
        if ( epi16 != 0xFFFF )
        {
          if ( v49 && (a3[2] & 0xC) == 0xC )
          {
            v5 |= 8u;
            *(_WORD *)(*((_QWORD *)a3 + 4) + v31 + 8) = epi16;
            *(_QWORD *)(v31 + *((_QWORD *)a3 + 4)) = v33;
          }
          if ( v26 < 0xFF )
          {
            for ( LODWORD(v16) = 0; v33; v33 >>= 1 )
            {
              if ( (v33 & 1) != 0 )
              {
                v34 = (unsigned int)v16 + (epi16 << 6);
                if ( *(_BYTE *)(v34 + *v45) == 0xFF )
                  *(_BYTE *)(v34 + *v45) = v26;
              }
              LODWORD(v16) = (_DWORD)v16 + 1;
            }
          }
        }
        ++v26;
        v31 += 16LL;
      }
      while ( v26 < v30 );
    }
    v9 = v50;
    goto LABEL_88;
  }
  v26 = a3[4];
  v29 = a3[5];
  if ( v26 <= v29 && v29 <= v28 )
  {
    v24 = (_WORD *)(a1 + 4660);
    v25 = (_QWORD *)(a1 + 4360);
    v28 = a3[5];
    LOWORD(v27) = v29 - v26 + 1;
    v5 |= 4u;
    v45 = (_QWORD *)(a1 + 4680);
    goto LABEL_74;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 25LL, &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids);
  }
  v10 = -1056964607;
LABEL_118:
  if ( v5 != a3[2] )
  {
    if ( (v5 & 2) != 0 )
      *(_DWORD *)(a1 + 4664) = 0;
    if ( (v5 & 1) != 0 )
    {
      *(_BYTE *)(a1 + 4371) &= ~1u;
      *(_WORD *)(a1 + 4660) = 0;
    }
    if ( (v5 & 0x20) != 0 )
      *(_BYTE *)(a1 + 4371) &= ~2u;
  }
  return v10;
}
