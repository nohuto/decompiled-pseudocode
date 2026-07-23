/*
 * XREFs of MiObtainDynamicVa @ 0x14026CBCC
 * Callers:
 *     MiReservePoolMemory @ 0x14026C688 (MiReservePoolMemory.c)
 *     MiObtainSystemVa @ 0x14026CAF4 (MiObtainSystemVa.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiReduceSystemRegionType @ 0x14026D544 (MiReduceSystemRegionType.c)
 *     RtlSetBitsEx @ 0x14026E120 (RtlSetBitsEx.c)
 *     MiExtendDynamicBitMap @ 0x14026ECB4 (MiExtendDynamicBitMap.c)
 *     MiFindNextAlignedForwardRunClearEx @ 0x14026EE24 (MiFindNextAlignedForwardRunClearEx.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
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
  int v13; // eax
  __int64 v14; // rdx
  int v15; // ebx
  __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r13
  __int64 v20; // r15
  unsigned __int64 v21; // r9
  char v22; // r10
  unsigned __int64 j; // r12
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // rbx
  unsigned __int64 *v26; // rdx
  __int64 v27; // r8
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // r13
  __int64 v32; // r12
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // rdx
  __int64 v35; // rdx
  unsigned int v36; // r13d
  unsigned __int64 v37; // r15
  unsigned __int64 v38; // rsi
  unsigned __int64 *v39; // r8
  __int64 v40; // r9
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rax
  __int64 v44; // rcx
  unsigned int v45; // r10d
  unsigned __int64 *v46; // r11
  bool v47; // zf
  __int64 v48; // rax
  unsigned int v49; // r10d
  unsigned __int64 v50; // r9
  unsigned __int64 v51; // rax
  __int64 v52; // rdi
  unsigned int v53; // r10d
  unsigned __int64 *v54; // r11
  __int64 v55; // rax
  unsigned int v56; // r10d
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // rax
  __int64 v59; // rdx
  unsigned __int64 v60; // r9
  __int64 v61; // rax
  unsigned int v62; // ecx
  unsigned __int64 *v63; // r8
  unsigned __int64 *v64; // rax
  __int64 v65; // r8
  unsigned __int64 v66; // r10
  __int64 v67; // rax
  unsigned int v68; // ecx
  unsigned __int64 *v69; // r9
  unsigned __int64 *v70; // rax
  __int64 v71; // rdx
  unsigned int v72; // r8d
  __int64 v73; // rcx
  unsigned int v74; // r9d
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rax
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // rcx
  unsigned __int64 v81; // rax
  __int64 v82; // rcx
  unsigned int v83; // eax
  __int64 v84; // rcx
  unsigned int v85; // eax
  __int64 *v86; // [rsp+68h] [rbp-19h]
  __int64 v87; // [rsp+70h] [rbp-11h]
  unsigned __int8 i; // [rsp+78h] [rbp-9h]
  __int64 *v89; // [rsp+80h] [rbp-1h]
  _OWORD v90[5]; // [rsp+88h] [rbp+7h] BYREF
  unsigned __int64 v94; // [rsp+100h] [rbp+7Fh]
  KIRQL v95; // [rsp+100h] [rbp+7Fh]

  v3 = 1LL;
  v87 = 1LL;
  v90[0] = 0LL;
  NextAlignedForwardRunClear = -1LL;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  CurrentIrql = KeGetCurrentIrql();
  for ( i = CurrentIrql; ; CurrentIrql = i )
  {
    v9 = v7[3];
    v86 = v7;
    v94 = v9;
    v10 = v7;
    if ( ((v5 - 10) & 0xFFFFFFFD) == 0 )
    {
      v10 = (__int64 *)v90;
      v86 = (__int64 *)v90;
      v17 = v7[1] + 8 * ((unsigned __int64)v7[2] >> 6);
      v9 = v7[6];
      *(_QWORD *)&v90[0] = v7[5];
      v94 = v9;
      *((_QWORD *)&v90[0] + 1) = v17 - 8LL * (*(_QWORD *)&v90[0] >> 6);
      if ( v6 >= 0x200 )
      {
        if ( (MiFlags & 0x40000000) != 0 )
          v3 = 512LL;
        v87 = v3;
      }
    }
    if ( *v10 )
    {
      v18 = v6;
      if ( v3 != 1 )
      {
        NextAlignedForwardRunClear = MiFindNextAlignedForwardRunClearEx(v10, v6, v3);
        goto LABEL_4;
      }
      v19 = *v10;
      v20 = v10[1];
      v21 = v19 - 1;
      if ( !v6 )
      {
        NextAlignedForwardRunClear = v9 & -(__int64)(v9 < v19) & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_16:
        v10 = v86;
        v3 = v87;
        goto LABEL_4;
      }
      v22 = a2;
      for ( j = v9 & -(__int64)(v9 < v19); v21 - j + 1 < v18; j = 0LL )
      {
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
        v28 = v18 + v9;
        if ( v18 + v9 > v19 )
          v28 = v19;
        v21 = v28 - 1;
      }
      v24 = v21 - v18 + 1;
      v25 = v20 + 8 * (v24 >> 6);
      v26 = (unsigned __int64 *)(v20 + 8 * (j >> 6));
      v27 = *v26 | ((1LL << (j & 0x3F)) - 1);
      if ( v18 > 0x7F )
      {
        v60 = v25 + 8;
        if ( (v24 & 0x3F) == 0 )
          v60 = v20 + 8 * (v24 >> 6);
        if ( v27 )
        {
          if ( *++v26 )
            goto LABEL_110;
          v47 = !_BitScanReverse64((unsigned __int64 *)&v61, v27);
          if ( v47 )
            v62 = 64;
          else
            v62 = 63 - v61;
        }
        else
        {
          v62 = 0;
        }
        while ( 1 )
        {
          NextAlignedForwardRunClear = (((__int64)v26 - v20) >> 3 << 6) - v62;
          if ( NextAlignedForwardRunClear > v24 )
            goto LABEL_24;
          v63 = &v26[(v18 - v62) >> 6];
          while ( ++v26 != v63 )
          {
            if ( *v26 )
              goto LABEL_110;
          }
          v72 = (v22 - (_BYTE)v62) & 0x3F;
          if ( ((v22 - (_BYTE)v62) & 0x3F) == 0 )
            goto LABEL_32;
          v47 = !_BitScanForward64((unsigned __int64 *)&v73, *v26);
          if ( v47 )
            LODWORD(v73) = 64;
          if ( (unsigned int)v73 >= v72 )
            goto LABEL_32;
          do
          {
LABEL_110:
            v64 = v26;
            if ( (unsigned __int64)v26 > v60 )
              goto LABEL_24;
            ++v26;
          }
          while ( *v26 );
          v47 = !_BitScanReverse64((unsigned __int64 *)&v65, *v64);
          if ( v47 )
            v62 = 64;
          else
            v62 = 63 - v65;
        }
      }
      if ( v18 < 0x40 )
      {
        if ( v18 > 1 )
        {
          v45 = 0;
          v46 = (unsigned __int64 *)(v20 + 8 * (v21 >> 6));
          while ( 1 )
          {
            if ( v27 == -1 )
            {
              while ( (unsigned __int64)++v26 <= v25 )
              {
                v27 = *v26;
                if ( *v26 != -1LL )
                {
                  v45 = 0;
                  goto LABEL_70;
                }
              }
LABEL_146:
              v22 = a2;
              NextAlignedForwardRunClear = -1LL;
              goto LABEL_25;
            }
LABEL_70:
            v47 = !_BitScanForward64((unsigned __int64 *)&v48, v27);
            if ( v47 )
              LODWORD(v48) = 64;
            if ( v45 + (unsigned int)v48 >= v18 )
              break;
            v49 = a2;
            v50 = ~v27;
            while ( 1 )
            {
              v50 &= v50 >> (v49 >> 1);
              if ( !v50 )
                break;
              v49 -= v49 >> 1;
              if ( v49 <= 1 )
              {
                _BitScanForward64(&v51, v50);
                v52 = (unsigned int)v51;
                goto LABEL_77;
              }
            }
            if ( v26 == v46 )
              goto LABEL_146;
            v47 = !_BitScanReverse64((unsigned __int64 *)&v76, v27);
            if ( v47 )
              v45 = 64;
            else
              v45 = 63 - v76;
            v27 = *++v26;
          }
          v52 = -(__int64)v45;
LABEL_77:
          v22 = a2;
          NextAlignedForwardRunClear = (((__int64)v26 - v20) >> 3 << 6) + v52;
        }
        else
        {
          while ( v27 == -1 )
          {
            if ( (unsigned __int64)++v26 > v25 )
              goto LABEL_24;
            v27 = *v26;
          }
          _BitScanForward64(&v29, ~v27);
          NextAlignedForwardRunClear = v29 + (((__int64)v26 - v20) >> 3 << 6);
        }
        if ( NextAlignedForwardRunClear <= v24 )
        {
LABEL_32:
          if ( NextAlignedForwardRunClear != -1LL )
            goto LABEL_33;
          goto LABEL_25;
        }
LABEL_24:
        NextAlignedForwardRunClear = -1LL;
LABEL_25:
        v9 = v94;
        goto LABEL_26;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v27 < 0 )
          {
            if ( (unsigned __int64)++v26 > v25 )
              goto LABEL_24;
            v27 = *v26;
          }
          v47 = !_BitScanReverse64((unsigned __int64 *)&v82, v27);
          if ( v47 )
            v83 = 64;
          else
            v83 = 63 - v82;
          NextAlignedForwardRunClear = (((((__int64)v26 - v20) >> 3) + 1) << 6) - v83;
          if ( NextAlignedForwardRunClear > v24 )
            goto LABEL_24;
          v78 = v18 - v83;
          if ( v18 == v83 )
            goto LABEL_32;
          v27 = *++v26;
          if ( v78 >= 0x40 )
            break;
LABEL_165:
          v47 = !_BitScanForward64(&v79, v27);
          if ( v47 )
            v79 = 64LL;
          if ( v79 >= v78 )
            goto LABEL_32;
        }
        if ( !*v26 )
        {
          v78 -= 64LL;
          if ( !v78 )
            goto LABEL_32;
          v27 = *++v26;
          goto LABEL_165;
        }
      }
    }
LABEL_4:
    v11 = v7 + 8;
    v89 = v7 + 8;
    v12 = (volatile LONG *)(v7 + 8);
    if ( CurrentIrql == 2 )
    {
      v95 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(v12);
    }
    else
    {
      v95 = ExAcquireSpinLockExclusive(v12);
    }
    if ( NextAlignedForwardRunClear != -1LL )
      break;
LABEL_7:
    v13 = MiExtendDynamicBitMap(v7, v10, 0LL, a3);
    LOBYTE(v14) = v95;
    v15 = v13;
    MiReleaseSpinLockExclusive(v11, v14);
    if ( !v15 )
      return 0LL;
    v5 = a3;
  }
  v30 = v6;
  if ( v3 == 1 )
  {
    v31 = *v10;
    v32 = v10[1];
    v33 = NextAlignedForwardRunClear & -(__int64)(NextAlignedForwardRunClear < *v10);
    v34 = *v10 - 1;
    if ( !v30 )
    {
      NextAlignedForwardRunClear = v33 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_38:
      v6 = a2;
      v7 = a1;
      v30 = a2;
      v3 = v87;
      goto LABEL_39;
    }
    while ( 1 )
    {
      if ( v34 - v33 + 1 < v30 )
      {
LABEL_53:
        v41 = -1LL;
        goto LABEL_54;
      }
      v37 = v34 - v30 + 1;
      v38 = v32 + 8 * (v37 >> 6);
      v39 = (unsigned __int64 *)(v32 + 8 * (v33 >> 6));
      v40 = *v39 | ((1LL << (v33 & 0x3F)) - 1);
      if ( v30 > 0x7F )
      {
        v66 = v38 + 8;
        if ( (v37 & 0x3F) == 0 )
          v66 = v32 + 8 * ((v34 - v30 + 1) >> 6);
        if ( v40 )
        {
          if ( *++v39 )
            goto LABEL_127;
          v47 = !_BitScanReverse64((unsigned __int64 *)&v67, v40);
          if ( v47 )
            v68 = 64;
          else
            v68 = 63 - v67;
        }
        else
        {
          v68 = 0;
        }
        while ( 1 )
        {
          v41 = (((__int64)v39 - v32) >> 3 << 6) - v68;
          if ( v41 > v37 )
            goto LABEL_53;
          v69 = &v39[(v30 - v68) >> 6];
          while ( ++v39 != v69 )
          {
            if ( *v39 )
              goto LABEL_127;
          }
          v74 = ((_BYTE)a2 - (_BYTE)v68) & 0x3F;
          if ( (((_BYTE)a2 - (_BYTE)v68) & 0x3F) == 0 )
            goto LABEL_61;
          v47 = !_BitScanForward64((unsigned __int64 *)&v75, *v39);
          if ( v47 )
            LODWORD(v75) = 64;
          if ( (unsigned int)v75 >= v74 )
            goto LABEL_61;
          do
          {
LABEL_127:
            v70 = v39;
            if ( (unsigned __int64)v39 > v66 )
              goto LABEL_53;
            ++v39;
          }
          while ( *v39 );
          v47 = !_BitScanReverse64((unsigned __int64 *)&v71, *v70);
          if ( v47 )
            v68 = 64;
          else
            v68 = 63 - v71;
        }
      }
      if ( v30 >= 0x40 )
        break;
      if ( v30 > 1 )
      {
        v53 = 0;
        v54 = (unsigned __int64 *)(v32 + 8 * (v34 >> 6));
        while ( v40 != -1 )
        {
LABEL_81:
          v47 = !_BitScanForward64((unsigned __int64 *)&v55, v40);
          if ( v47 )
            LODWORD(v55) = 64;
          if ( v53 + (unsigned int)v55 >= v30 )
          {
            v59 = -(__int64)v53;
LABEL_88:
            v41 = (((__int64)v39 - v32) >> 3 << 6) + v59;
            goto LABEL_60;
          }
          v56 = a2;
          v57 = ~v40;
          while ( 1 )
          {
            v57 &= v57 >> (v56 >> 1);
            if ( !v57 )
              break;
            v56 -= v56 >> 1;
            if ( v56 <= 1 )
            {
              _BitScanForward64(&v58, v57);
              v59 = (unsigned int)v58;
              goto LABEL_88;
            }
          }
          if ( v39 == v54 )
            goto LABEL_53;
          v47 = !_BitScanReverse64((unsigned __int64 *)&v77, v40);
          if ( v47 )
            v53 = 64;
          else
            v53 = 63 - v77;
          v40 = *++v39;
        }
        while ( 1 )
        {
          if ( (unsigned __int64)++v39 > v38 )
            goto LABEL_53;
          v40 = *v39;
          if ( *v39 != -1LL )
          {
            v53 = 0;
            goto LABEL_81;
          }
        }
      }
      while ( v40 == -1 )
      {
        if ( (unsigned __int64)++v39 > v38 )
          goto LABEL_53;
        v40 = *v39;
      }
      _BitScanForward64(&v43, ~v40);
      v41 = v43 + (((__int64)v39 - v32) >> 3 << 6);
LABEL_60:
      if ( v41 > v37 )
        goto LABEL_53;
LABEL_61:
      if ( v41 != -1LL )
        goto LABEL_62;
LABEL_54:
      if ( !v33 )
      {
LABEL_62:
        v11 = v89;
        NextAlignedForwardRunClear = v41;
        v10 = v86;
        goto LABEL_38;
      }
      v42 = v30 + NextAlignedForwardRunClear;
      if ( v30 + NextAlignedForwardRunClear > v31 )
        v42 = v31;
      v34 = v42 - 1;
      v33 = 0LL;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v40 < 0 )
        {
          if ( (unsigned __int64)++v39 > v38 )
            goto LABEL_53;
          v40 = *v39;
        }
        v47 = !_BitScanReverse64((unsigned __int64 *)&v84, v40);
        if ( v47 )
          v85 = 64;
        else
          v85 = 63 - v84;
        v41 = (((((__int64)v39 - v32) >> 3) + 1) << 6) - v85;
        if ( v41 > v37 )
          goto LABEL_53;
        v80 = v30 - v85;
        if ( v30 == v85 )
          goto LABEL_61;
        v40 = *++v39;
        if ( v80 >= 0x40 )
          break;
LABEL_175:
        v47 = !_BitScanForward64(&v81, v40);
        if ( v47 )
          v81 = 64LL;
        if ( v81 >= v80 )
          goto LABEL_61;
      }
      if ( !*v39 )
      {
        v80 -= 64LL;
        if ( !v80 )
          goto LABEL_61;
        v40 = *++v39;
        goto LABEL_175;
      }
    }
  }
  NextAlignedForwardRunClear = MiFindNextAlignedForwardRunClearEx(v10, v6, v3);
LABEL_39:
  if ( NextAlignedForwardRunClear == -1LL )
    goto LABEL_7;
  RtlSetBitsEx(v10, NextAlignedForwardRunClear, v30);
  v36 = a3;
  if ( ((a3 - 10) & 0xFFFFFFFD) != 0 )
  {
    if ( v6 == 1 )
      v7[3] = NextAlignedForwardRunClear + 1;
  }
  else
  {
    v44 = 8 * (v10[1] - v7[1]);
    if ( v6 == 1 )
      v7[6] = NextAlignedForwardRunClear + 1;
    NextAlignedForwardRunClear += v44;
    v36 = MiReduceSystemRegionType(a3);
  }
  if ( v7 == &qword_140E2F0C0 )
  {
    qword_140E2EF08 -= v30 << 21;
    if ( (unsigned __int64)qword_140E2EF08 <= 0x8000000 )
      KeSetEvent(&Event, 0, 0);
  }
  _InterlockedAdd64(&qword_140E38A48[v36], v30);
  LOBYTE(v35) = v95;
  MiReleaseSpinLockExclusive(v11, v35);
  return v7[4] + (NextAlignedForwardRunClear << 21);
}
