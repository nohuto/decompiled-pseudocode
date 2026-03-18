/*
 * XREFs of MiObtainDynamicVa @ 0x1403A58DC
 * Callers:
 *     MiReservePoolMemory @ 0x1403A5398 (MiReservePoolMemory.c)
 *     MiObtainSystemVa @ 0x1403A5804 (MiObtainSystemVa.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     RtlSetBitsEx @ 0x1403A4600 (RtlSetBitsEx.c)
 *     MiReduceSystemRegionType @ 0x1403A6254 (MiReduceSystemRegionType.c)
 *     MiExtendDynamicBitMap @ 0x1403A7584 (MiExtendDynamicBitMap.c)
 *     MiFindNextAlignedForwardRunClearEx @ 0x1403A76F4 (MiFindNextAlignedForwardRunClearEx.c)
 */

unsigned __int64 __fastcall MiObtainDynamicVa(__int64 *a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r13
  unsigned __int64 NextAlignedForwardRunClear; // rdi
  unsigned int v5; // eax
  unsigned int v6; // r12d
  __int64 *v7; // r14
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v9; // rcx
  __int64 *v10; // r15
  __int64 *v11; // rsi
  volatile LONG *v12; // rcx
  int v13; // ebx
  __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r13
  __int64 v18; // r15
  unsigned __int64 v19; // r9
  char v20; // r10
  unsigned __int64 j; // r12
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rbx
  unsigned __int64 *v24; // rdx
  __int64 v25; // r8
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // r13
  __int64 v30; // r12
  unsigned __int64 v31; // r14
  unsigned __int64 v32; // rdx
  unsigned int v33; // r13d
  unsigned __int64 v34; // r15
  unsigned __int64 v35; // rsi
  unsigned __int64 *v36; // r8
  __int64 v37; // r9
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  unsigned int v42; // r10d
  unsigned __int64 *v43; // r11
  bool v44; // zf
  __int64 v45; // rax
  unsigned int v46; // r10d
  unsigned __int64 v47; // r9
  unsigned __int64 v48; // rax
  __int64 v49; // rdi
  unsigned int v50; // r10d
  unsigned __int64 *v51; // r11
  __int64 v52; // rax
  unsigned int v53; // r10d
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rax
  __int64 v56; // rdx
  unsigned __int64 v57; // r9
  __int64 v58; // rax
  unsigned int v59; // ecx
  unsigned __int64 *v60; // r8
  unsigned __int64 *v61; // rax
  __int64 v62; // r8
  unsigned __int64 v63; // r10
  __int64 v64; // rax
  unsigned int v65; // ecx
  unsigned __int64 *v66; // r9
  unsigned __int64 *v67; // rax
  __int64 v68; // rdx
  unsigned int v69; // r8d
  __int64 v70; // rcx
  unsigned int v71; // r9d
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rax
  unsigned __int64 v75; // rcx
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rcx
  unsigned __int64 v78; // rax
  __int64 v79; // rcx
  unsigned int v80; // eax
  __int64 v81; // rcx
  unsigned int v82; // eax
  __int64 v83; // [rsp+28h] [rbp-59h]
  __int64 v84; // [rsp+30h] [rbp-51h]
  __int64 v85; // [rsp+38h] [rbp-49h]
  __int64 v86; // [rsp+40h] [rbp-41h]
  __int64 v87; // [rsp+48h] [rbp-39h]
  __int64 v88; // [rsp+50h] [rbp-31h]
  __int64 v89; // [rsp+58h] [rbp-29h]
  __int64 v90; // [rsp+60h] [rbp-21h]
  __int64 *v91; // [rsp+68h] [rbp-19h]
  __int64 v92; // [rsp+70h] [rbp-11h]
  unsigned __int8 i; // [rsp+78h] [rbp-9h]
  __int64 *v94; // [rsp+80h] [rbp-1h]
  _OWORD v95[5]; // [rsp+88h] [rbp+7h] BYREF
  unsigned __int64 v99; // [rsp+100h] [rbp+7Fh]
  KIRQL v100; // [rsp+100h] [rbp+7Fh]

  v3 = 1LL;
  v92 = 1LL;
  v95[0] = 0LL;
  NextAlignedForwardRunClear = -1LL;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  CurrentIrql = KeGetCurrentIrql();
  for ( i = CurrentIrql; ; CurrentIrql = i )
  {
    v9 = v7[3];
    v91 = v7;
    v99 = v9;
    v10 = v7;
    if ( ((v5 - 10) & 0xFFFFFFFD) == 0 )
    {
      v10 = (__int64 *)v95;
      v91 = (__int64 *)v95;
      v15 = v7[1] + 8 * ((unsigned __int64)v7[2] >> 6);
      v9 = v7[6];
      *(_QWORD *)&v95[0] = v7[5];
      v99 = v9;
      *((_QWORD *)&v95[0] + 1) = v15 - 8LL * (*(_QWORD *)&v95[0] >> 6);
      if ( v6 >= 0x200 )
      {
        if ( (MiFlags & 0x40000000) != 0 )
          v3 = 512LL;
        v92 = v3;
      }
    }
    if ( *v10 )
    {
      v16 = v6;
      if ( v3 != 1 )
      {
        NextAlignedForwardRunClear = MiFindNextAlignedForwardRunClearEx(v10, v6, v3);
        goto LABEL_4;
      }
      v17 = *v10;
      v18 = v10[1];
      v19 = v17 - 1;
      if ( !v6 )
      {
        NextAlignedForwardRunClear = v9 & -(__int64)(v9 < v17) & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_16:
        v10 = v91;
        v3 = v92;
        goto LABEL_4;
      }
      v20 = a2;
      for ( j = v9 & -(__int64)(v9 < v17); ; j = 0LL )
      {
        LODWORD(v83) = 0;
        if ( v19 - j + 1 >= v16 )
          break;
        NextAlignedForwardRunClear = -1LL;
LABEL_26:
        if ( !j )
        {
LABEL_33:
          v7 = a1;
          v6 = a2;
          CurrentIrql = i;
          goto LABEL_16;
        }
        v26 = v16 + v9;
        if ( v16 + v9 > v17 )
          v26 = v17;
        v19 = v26 - 1;
      }
      v22 = v19 - v16 + 1;
      v23 = v18 + 8 * (v22 >> 6);
      v24 = (unsigned __int64 *)(v18 + 8 * (j >> 6));
      v25 = *v24 | ((1LL << (j & 0x3F)) - 1);
      if ( v16 > 0x7F )
      {
        v57 = v23 + 8;
        if ( (v22 & 0x3F) == 0 )
          v57 = v18 + 8 * (v22 >> 6);
        if ( v25 )
        {
          if ( *++v24 )
            goto LABEL_111;
          v44 = !_BitScanReverse64((unsigned __int64 *)&v58, v25);
          if ( v44 )
            v59 = 64;
          else
            v59 = 63 - v58;
          LODWORD(v84) = v59;
        }
        else
        {
          v59 = 0;
        }
        while ( 1 )
        {
          NextAlignedForwardRunClear = (((__int64)v24 - v18) >> 3 << 6) - v59;
          if ( NextAlignedForwardRunClear > v22 )
            goto LABEL_24;
          v60 = &v24[(v16 - v59) >> 6];
          while ( ++v24 != v60 )
          {
            if ( *v24 )
              goto LABEL_111;
          }
          v69 = (v20 - (_BYTE)v59) & 0x3F;
          if ( ((v20 - (_BYTE)v59) & 0x3F) == 0 )
            goto LABEL_32;
          v44 = !_BitScanForward64((unsigned __int64 *)&v70, *v24);
          if ( v44 )
            LODWORD(v70) = 64;
          LODWORD(v85) = v70;
          if ( (unsigned int)v70 >= v69 )
            goto LABEL_32;
          do
          {
LABEL_111:
            v61 = v24;
            if ( (unsigned __int64)v24 > v57 )
              goto LABEL_24;
            ++v24;
          }
          while ( *v24 );
          v44 = !_BitScanReverse64((unsigned __int64 *)&v62, *v61);
          if ( v44 )
            v59 = 64;
          else
            v59 = 63 - v62;
          HIDWORD(v84) = v59;
        }
      }
      if ( v16 < 0x40 )
      {
        if ( v16 > 1 )
        {
          v42 = 0;
          v43 = (unsigned __int64 *)(v18 + 8 * (v19 >> 6));
          while ( 1 )
          {
            if ( v25 == -1 )
            {
              while ( (unsigned __int64)++v24 <= v23 )
              {
                v25 = *v24;
                if ( *v24 != -1LL )
                {
                  v42 = 0;
                  goto LABEL_70;
                }
              }
LABEL_149:
              v20 = a2;
              NextAlignedForwardRunClear = -1LL;
              goto LABEL_25;
            }
LABEL_70:
            v44 = !_BitScanForward64((unsigned __int64 *)&v45, v25);
            if ( v44 )
              LODWORD(v45) = 64;
            HIDWORD(v86) = v45;
            if ( v42 + (unsigned int)v45 >= v16 )
              break;
            v46 = a2;
            v47 = ~v25;
            while ( 1 )
            {
              v47 &= v47 >> (v46 >> 1);
              if ( !v47 )
                break;
              v46 -= v46 >> 1;
              if ( v46 <= 1 )
              {
                _BitScanForward64(&v48, v47);
                LODWORD(v83) = v48;
                v49 = (unsigned int)v48;
                goto LABEL_77;
              }
            }
            if ( v24 == v43 )
              goto LABEL_149;
            v44 = !_BitScanReverse64((unsigned __int64 *)&v73, v25);
            if ( v44 )
              v42 = 64;
            else
              v42 = 63 - v73;
            ++v24;
            LODWORD(v87) = v42;
            v25 = *v24;
          }
          v49 = -(__int64)v42;
LABEL_77:
          v20 = a2;
          NextAlignedForwardRunClear = (((__int64)v24 - v18) >> 3 << 6) + v49;
        }
        else
        {
          while ( v25 == -1 )
          {
            if ( (unsigned __int64)++v24 > v23 )
              goto LABEL_24;
            v25 = *v24;
          }
          _BitScanForward64(&v27, ~v25);
          LODWORD(v83) = v27;
          NextAlignedForwardRunClear = v27 + (((__int64)v24 - v18) >> 3 << 6);
        }
        if ( NextAlignedForwardRunClear <= v22 )
        {
LABEL_32:
          if ( NextAlignedForwardRunClear != -1LL )
            goto LABEL_33;
          goto LABEL_25;
        }
LABEL_24:
        NextAlignedForwardRunClear = -1LL;
LABEL_25:
        v9 = v99;
        goto LABEL_26;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v25 < 0 )
          {
            if ( (unsigned __int64)++v24 > v23 )
              goto LABEL_24;
            v25 = *v24;
          }
          v44 = !_BitScanReverse64((unsigned __int64 *)&v79, v25);
          if ( v44 )
            v80 = 64;
          else
            v80 = 63 - v79;
          HIDWORD(v85) = v80;
          NextAlignedForwardRunClear = (((((__int64)v24 - v18) >> 3) + 1) << 6) - v80;
          if ( NextAlignedForwardRunClear > v22 )
            goto LABEL_24;
          v75 = v16 - v80;
          if ( v16 == v80 )
            goto LABEL_32;
          v25 = *++v24;
          if ( v75 >= 0x40 )
            break;
LABEL_169:
          v44 = !_BitScanForward64(&v76, v25);
          if ( v44 )
            v76 = 64LL;
          LODWORD(v86) = v76;
          if ( v76 >= v75 )
            goto LABEL_32;
        }
        if ( !*v24 )
        {
          v75 -= 64LL;
          if ( !v75 )
            goto LABEL_32;
          v25 = *++v24;
          goto LABEL_169;
        }
      }
    }
LABEL_4:
    v11 = v7 + 8;
    v94 = v7 + 8;
    v12 = (volatile LONG *)(v7 + 8);
    if ( CurrentIrql == 2 )
    {
      v100 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(v12);
    }
    else
    {
      v100 = ExAcquireSpinLockExclusive(v12);
    }
    if ( NextAlignedForwardRunClear != -1LL )
      break;
LABEL_7:
    v13 = MiExtendDynamicBitMap(v7, v10, 0LL, a3, v83, v84, v85, v86, v87, v88, v89, v90);
    MiReleaseSpinLockExclusive(v11, v100);
    if ( !v13 )
      return 0LL;
    v5 = a3;
  }
  v28 = v6;
  if ( v3 == 1 )
  {
    v29 = *v10;
    v30 = v10[1];
    v31 = NextAlignedForwardRunClear & -(__int64)(NextAlignedForwardRunClear < *v10);
    v32 = *v10 - 1;
    if ( !v28 )
    {
      NextAlignedForwardRunClear = v31 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_38:
      v6 = a2;
      v7 = a1;
      v28 = a2;
      v3 = v92;
      goto LABEL_39;
    }
    while ( 1 )
    {
      HIDWORD(v83) = 0;
      if ( v32 - v31 + 1 < v28 )
      {
LABEL_53:
        v38 = -1LL;
        goto LABEL_54;
      }
      v34 = v32 - v28 + 1;
      v35 = v30 + 8 * (v34 >> 6);
      v36 = (unsigned __int64 *)(v30 + 8 * (v31 >> 6));
      v37 = *v36 | ((1LL << (v31 & 0x3F)) - 1);
      if ( v28 > 0x7F )
      {
        v63 = v35 + 8;
        if ( (v34 & 0x3F) == 0 )
          v63 = v30 + 8 * ((v32 - v28 + 1) >> 6);
        if ( v37 )
        {
          if ( *++v36 )
            goto LABEL_130;
          v44 = !_BitScanReverse64((unsigned __int64 *)&v64, v37);
          if ( v44 )
            v65 = 64;
          else
            v65 = 63 - v64;
          HIDWORD(v87) = v65;
        }
        else
        {
          v65 = 0;
        }
        while ( 1 )
        {
          v38 = (((__int64)v36 - v30) >> 3 << 6) - v65;
          if ( v38 > v34 )
            goto LABEL_53;
          v66 = &v36[(v28 - v65) >> 6];
          while ( ++v36 != v66 )
          {
            if ( *v36 )
              goto LABEL_130;
          }
          v71 = ((_BYTE)a2 - (_BYTE)v65) & 0x3F;
          if ( (((_BYTE)a2 - (_BYTE)v65) & 0x3F) == 0 )
            goto LABEL_61;
          v44 = !_BitScanForward64((unsigned __int64 *)&v72, *v36);
          if ( v44 )
            LODWORD(v72) = 64;
          HIDWORD(v88) = v72;
          if ( (unsigned int)v72 >= v71 )
            goto LABEL_61;
          do
          {
LABEL_130:
            v67 = v36;
            if ( (unsigned __int64)v36 > v63 )
              goto LABEL_53;
            ++v36;
          }
          while ( *v36 );
          v44 = !_BitScanReverse64((unsigned __int64 *)&v68, *v67);
          if ( v44 )
            v65 = 64;
          else
            v65 = 63 - v68;
          LODWORD(v88) = v65;
        }
      }
      if ( v28 >= 0x40 )
        break;
      if ( v28 > 1 )
      {
        v50 = 0;
        v51 = (unsigned __int64 *)(v30 + 8 * (v32 >> 6));
        while ( v37 != -1 )
        {
LABEL_81:
          v44 = !_BitScanForward64((unsigned __int64 *)&v52, v37);
          if ( v44 )
            LODWORD(v52) = 64;
          LODWORD(v90) = v52;
          if ( v50 + (unsigned int)v52 >= v28 )
          {
            v56 = -(__int64)v50;
LABEL_88:
            v38 = (((__int64)v36 - v30) >> 3 << 6) + v56;
            goto LABEL_60;
          }
          v53 = a2;
          v54 = ~v37;
          while ( 1 )
          {
            v54 &= v54 >> (v53 >> 1);
            if ( !v54 )
              break;
            v53 -= v53 >> 1;
            if ( v53 <= 1 )
            {
              _BitScanForward64(&v55, v54);
              HIDWORD(v83) = v55;
              v56 = (unsigned int)v55;
              goto LABEL_88;
            }
          }
          if ( v36 == v51 )
            goto LABEL_53;
          v44 = !_BitScanReverse64((unsigned __int64 *)&v74, v37);
          if ( v44 )
            v50 = 64;
          else
            v50 = 63 - v74;
          ++v36;
          HIDWORD(v90) = v50;
          v37 = *v36;
        }
        while ( 1 )
        {
          if ( (unsigned __int64)++v36 > v35 )
            goto LABEL_53;
          v37 = *v36;
          if ( *v36 != -1LL )
          {
            v50 = 0;
            goto LABEL_81;
          }
        }
      }
      while ( v37 == -1 )
      {
        if ( (unsigned __int64)++v36 > v35 )
          goto LABEL_53;
        v37 = *v36;
      }
      _BitScanForward64(&v40, ~v37);
      HIDWORD(v83) = v40;
      v38 = v40 + (((__int64)v36 - v30) >> 3 << 6);
LABEL_60:
      if ( v38 > v34 )
        goto LABEL_53;
LABEL_61:
      if ( v38 != -1LL )
        goto LABEL_62;
LABEL_54:
      if ( !v31 )
      {
LABEL_62:
        v11 = v94;
        NextAlignedForwardRunClear = v38;
        v10 = v91;
        goto LABEL_38;
      }
      v39 = v28 + NextAlignedForwardRunClear;
      if ( v28 + NextAlignedForwardRunClear > v29 )
        v39 = v29;
      v32 = v39 - 1;
      v31 = 0LL;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v37 < 0 )
        {
          if ( (unsigned __int64)++v36 > v35 )
            goto LABEL_53;
          v37 = *v36;
        }
        v44 = !_BitScanReverse64((unsigned __int64 *)&v81, v37);
        if ( v44 )
          v82 = 64;
        else
          v82 = 63 - v81;
        LODWORD(v89) = v82;
        v38 = (((((__int64)v36 - v30) >> 3) + 1) << 6) - v82;
        if ( v38 > v34 )
          goto LABEL_53;
        v77 = v28 - v82;
        if ( v28 == v82 )
          goto LABEL_61;
        v37 = *++v36;
        if ( v77 >= 0x40 )
          break;
LABEL_179:
        v44 = !_BitScanForward64(&v78, v37);
        if ( v44 )
          v78 = 64LL;
        HIDWORD(v89) = v78;
        if ( v78 >= v77 )
          goto LABEL_61;
      }
      if ( !*v36 )
      {
        v77 -= 64LL;
        if ( !v77 )
          goto LABEL_61;
        v37 = *++v36;
        goto LABEL_179;
      }
    }
  }
  NextAlignedForwardRunClear = MiFindNextAlignedForwardRunClearEx(v10, v6, v3);
LABEL_39:
  if ( NextAlignedForwardRunClear == -1LL )
    goto LABEL_7;
  RtlSetBitsEx((__int64)v10, NextAlignedForwardRunClear, v28);
  v33 = a3;
  if ( ((a3 - 10) & 0xFFFFFFFD) != 0 )
  {
    if ( v6 == 1 )
      v7[3] = NextAlignedForwardRunClear + 1;
  }
  else
  {
    v41 = 8 * (v10[1] - v7[1]);
    if ( v6 == 1 )
      v7[6] = NextAlignedForwardRunClear + 1;
    NextAlignedForwardRunClear += v41;
    v33 = MiReduceSystemRegionType(a3);
  }
  if ( v7 == &qword_140E2EF80 )
  {
    qword_140E2EDC8 -= v28 << 21;
    if ( (unsigned __int64)qword_140E2EDC8 <= 0x8000000 )
      KeSetEvent(&stru_140E39570, 0, 0);
  }
  _InterlockedAdd64(&qword_140E38908[v33], v28);
  MiReleaseSpinLockExclusive(v11, v100);
  return v7[4] + (NextAlignedForwardRunClear << 21);
}
