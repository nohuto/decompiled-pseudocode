/*
 * XREFs of sub_140C0AE44 @ 0x140C0AE44
 * Callers:
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     RtlImageNtHeader @ 0x140432E80 (RtlImageNtHeader.c)
 *     KeKvaShadowingActive @ 0x1404A367C (KeKvaShadowingActive.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     KeGuardDispatchICall @ 0x140BDCA60 (KeGuardDispatchICall.c)
 */

__int64 __fastcall sub_140C0AE44(__int64 a1, int a2, __int64 a3, int a4)
{
  PIMAGE_NT_HEADERS v5; // rax
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v7; // rax
  unsigned __int128 v8; // rax
  unsigned __int64 v9; // rbx
  char v10; // cl
  int v11; // r9d
  int v12; // r9d
  unsigned int v13; // r9d
  int v14; // r9d
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  BOOL v19; // r11d
  char v25; // r9
  char v26; // r10
  BOOL v32; // r11d
  int *v33; // r8
  unsigned __int64 v34; // rax
  unsigned __int128 v35; // rax
  _DWORD *v36; // rbx
  unsigned __int64 v37; // rax
  unsigned __int128 v38; // rax
  _DWORD *v39; // r9
  unsigned __int64 v40; // rax
  unsigned __int128 v41; // rax
  int v42; // eax
  unsigned __int64 v43; // rax
  unsigned __int128 v44; // rax
  int v45; // r9d
  unsigned __int64 v46; // rax
  unsigned __int128 v47; // rax
  int v48; // r8d
  unsigned __int64 v49; // rax
  unsigned __int128 v50; // rax
  BOOL v51; // ecx
  unsigned __int64 v52; // rax
  unsigned __int128 v53; // rax
  __int64 v54; // rcx
  unsigned __int64 v55; // rax
  unsigned __int128 v56; // rax
  unsigned __int64 v57; // rbx
  char v58; // cl
  int v59; // r9d
  int v60; // r9d
  int v61; // r9d
  unsigned __int64 v62; // rax
  __int64 v63; // rcx
  unsigned int v64; // r9d
  int v65; // ebx
  __int64 v66; // r15
  _QWORD *v67; // rax
  void *v68; // rcx
  __int64 v69; // rdx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  unsigned __int64 *v71; // rcx
  int v72; // edx
  int v73; // r8d
  _KIDTENTRY64 *v74; // r10
  _KIDTENTRY64 *v75; // rbx
  __int64 v76; // r9
  unsigned __int64 *v77; // rcx
  int v78; // eax
  unsigned __int8 v79; // dl
  unsigned __int64 v80; // rcx
  unsigned __int64 v81; // rax
  _KIDTENTRY64 *IdtBase; // [rsp+90h] [rbp-98h]
  __int64 v84; // [rsp+A0h] [rbp-88h]
  __int64 v85; // [rsp+E8h] [rbp-40h]
  int v87; // [rsp+140h] [rbp+18h]

  v87 = a3;
  if ( a4 )
  {
    *(_WORD *)((unsigned int)KeGuardDispatchICall - a2 + a3) = -7937;
    *(_BYTE *)((unsigned int)KeGuardCheckICall - a2 + a3) = -61;
  }
  *(_QWORD *)(a1 + 2280) = 0x140000000uLL;
  v5 = RtlImageNtHeader((PVOID)0x140000000LL);
  *(_QWORD *)(a1 + 2296) = v5;
  *(_QWORD *)(a1 + 2288) = 0x140000000LL + v5->OptionalHeader.SizeOfImage;
  *(_DWORD *)(a1 + 2252) = dword_1410085E0;
  *(_DWORD *)(a1 + 2256) = dword_141008618;
  *(_DWORD *)(a1 + 2260) = KeIstStackSize;
  if ( (_DWORD)qword_1410085E8 != 8 )
    KeBugCheckEx(__ROL4__(-402653175, 101), 4uLL, 0LL, qword_1410085E8, 8uLL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  *(_QWORD *)(a1 + 2264) = *(_QWORD *)(*(unsigned int *)(a1 + 2256)
                                     + *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(a1 + 1136))(254LL));
  __writecr8(CurrentIrql);
  *(_WORD *)(a1 + 2200) = -12472;
  IdtBase = KeGetPcr()->IdtBase;
  *(_KIDTENTRY64 *)(a1 + 2152) = IdtBase[1];
  *(_KIDTENTRY64 *)(a1 + 2168) = IdtBase[2];
  *(_KIDTENTRY64 *)(a1 + 2184) = IdtBase[18];
  v7 = __rdtsc();
  v8 = (__ROR8__(v7, 3) ^ v7) * (unsigned __int128)0x7010008004002001uLL;
  v9 = ((unsigned __int64)v8 ^ *((_QWORD *)&v8 + 1)) % 0xB;
  if ( (unsigned int)v9 > 5 )
  {
    switch ( (_DWORD)v9 )
    {
      case 6:
        v13 = __ROR4__(__ROL4__(1464235086, 24), 24);
        break;
      case 7:
        v10 = 7;
        v12 = __ROR4__(1666411585, 7);
        goto LABEL_14;
      case 8:
        v10 = 8;
        v11 = __ROL4__(1113876033, 8);
        goto LABEL_17;
      case 9:
        v10 = 33;
        v14 = __ROL4__(1480806214, 33) ^ 9;
        goto LABEL_16;
      default:
        v15 = __rdtsc();
        v16 = __ROR8__(v15, 3);
        v84 = ((v16 ^ v15) * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v13 = ((((((((unsigned int)v84 ^ (67117057 * ((unsigned int)v16 ^ (unsigned int)v15))) % 0x1A + 97) << 8) | ((((unsigned int)v84 ^ (67117057 * ((unsigned int)v16 ^ (unsigned int)v15))) >> 5) % 0x1A + 65)) << 8) | ((((unsigned int)v84 ^ (67117057 * ((unsigned int)v16 ^ (unsigned int)v15))) >> 10) % 0x1A + 97)) << 8) | ((((unsigned int)v84 ^ (67117057 * ((unsigned int)v16 ^ (unsigned int)v15))) >> 15) % 0x1A + 65);
        break;
    }
  }
  else if ( (_DWORD)v9 == 5 )
  {
    v13 = __ROR4__(__ROL4__(1766089295, 5), 5);
  }
  else if ( (_DWORD)v9 )
  {
    if ( (_DWORD)v9 != 1 )
    {
      if ( (_DWORD)v9 == 2 )
      {
        v10 = 2;
        v11 = __ROL4__(1634559043, 2);
        goto LABEL_17;
      }
      if ( (_DWORD)v9 == 3 )
      {
        v10 = 15;
        v14 = __ROL4__(1920421956, 15) ^ 3;
      }
      else
      {
        if ( (unsigned int)v9 % 3 )
        {
          v10 = ((unsigned __int64)v8 ^ *((_QWORD *)&v8 + 1)) % 0xB;
          if ( (unsigned int)v9 % 3 != 1 )
          {
            v11 = __ROL4__(1886800198, v9);
LABEL_17:
            v13 = __ROR4__(v11, v10);
            goto LABEL_32;
          }
          v12 = __ROR4__(1886800198, v9);
LABEL_14:
          v13 = __ROL4__(v12, v10);
          goto LABEL_32;
        }
        v10 = 3 * (v9 + 2);
        v14 = v9 ^ __ROL4__(1886800198, v10);
      }
LABEL_16:
      v11 = v9 ^ v14;
      goto LABEL_17;
    }
    v13 = __ROL4__(__ROR4__(1700422467, 1), 1);
  }
  else
  {
    v13 = __ROR4__(__ROL4__(1665295171, 6), 6);
  }
LABEL_32:
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 256))(64LL, 432LL, v13);
  *(_QWORD *)(a1 + 2304) = v17;
  if ( !v17 )
    return 0LL;
  *(_QWORD *)(a1 + 2304) = (v17 + 128) & 0xFFFFFFFFFFFFFF80uLL;
  *(_DWORD *)(a1 + 2204) = -2025323249;
  *(_DWORD *)(a1 + 2208) = 1686184972;
  *(_DWORD *)(a1 + 2212) = -16838620;
  *(_DWORD *)(a1 + 2216) = -817299457;
  *(_BYTE *)(a1 + 2202) = -61;
  v18 = *(_QWORD *)(a1 + 2016);
  v19 = 0;
  if ( *(_BYTE *)(v18 + *(_QWORD *)(a1 + 1656)) == *(_BYTE *)(a1 + 1664) )
  {
    _RAX = 0LL;
    __asm { cpuid }
    v25 = *(_BYTE *)(v18 + *(_QWORD *)(a1 + 1648));
    v26 = *(_BYTE *)(v18 + *(_QWORD *)(a1 + 1640));
    if ( (unsigned int)_RAX >= 7 )
    {
      _RAX = 7LL;
      __asm { cpuid }
      v19 = (_RBX & 0x800) != 0;
    }
    if ( *(_BYTE *)(v18 + *(_QWORD *)(a1 + 1632)) == 6
      && (v25 == 60 && v26 == 3 || v25 == 63 && v26 == 2 || v25 == 69 && v26 == 1 || v25 == 70 && v26 == 1) )
    {
      v19 = 0;
    }
  }
  if ( v19 )
    *(_BYTE *)(a1 + 2203) |= 4u;
  if ( (unsigned int)KeKvaShadowingActive() )
    *(_BYTE *)(a1 + 2203) |= 8u;
  *(_DWORD *)(a1 + 2220) = 606896968;
  *(_WORD *)(a1 + 2224) = 18434;
  *(_BYTE *)(a1 + 2226) = -49;
  v32 = MEMORY[0xFFFFF78000000289] != 0;
  if ( (NtBuildNumber & 0xF0000000) == 0xC0000000 )
    v32 = 1;
  v33 = (int *)(a1 + 2520);
  if ( (*(_DWORD *)(a1 + 2520) & 0x8000000) == 0 )
  {
    *(_DWORD *)(*(unsigned int *)(a1 + 2060) + a1 + 11) = -*(_DWORD *)(a1 + 2060);
    v34 = __rdtsc();
    v35 = (__ROR8__(v34, 3) ^ v34) * (unsigned __int128)0x7010008004002001uLL;
    v36 = (_DWORD *)(a1 + 2520);
    if ( !(((unsigned __int64)v35 ^ *((_QWORD *)&v35 + 1)) % 0xA)
      && (*v33 & 0x40008000) == 0
      && *(_DWORD *)(a1 + 2136) != 7 )
    {
      *(_BYTE *)(a1 + 2203) |= 1u;
      v36 = (_DWORD *)(a1 + 2520);
    }
    v37 = __rdtsc();
    v38 = (__ROR8__(v37, 3) ^ v37) * (unsigned __int128)0x7010008004002001uLL;
    v39 = v36;
    if ( !(((unsigned __int64)v38 ^ *((_QWORD *)&v38 + 1)) % 0xA)
      && (*v33 & 0x40008000) == 0
      && *(_DWORD *)(a1 + 2136) != 7 )
    {
      *(_BYTE *)(a1 + 2203) |= 2u;
      v39 = (_DWORD *)(a1 + 2520);
    }
    v40 = __rdtsc();
    v41 = (__ROR8__(v40, 3) ^ v40) * (unsigned __int128)0x7010008004002001uLL;
    if ( (((unsigned __int8)v41 ^ BYTE8(v41)) & 3) == 0 )
    {
      v42 = *v36;
      v36 = v39;
      if ( (v42 & 0x40008000) == 0 && v32 && *(_DWORD *)(a1 + 2136) != 7 )
        *(_BYTE *)(a1 + 2203) |= 0x20u;
    }
    v43 = __rdtsc();
    v44 = (__ROR8__(v43, 3) ^ v43) * (unsigned __int128)0x7010008004002001uLL;
    v33 = v36;
    if ( !(((unsigned __int64)v44 ^ *((_QWORD *)&v44 + 1)) % 0xA)
      && (*v36 & 0x40008000) == 0
      && v32
      && *(_DWORD *)(a1 + 2136) != 7 )
    {
      *(_BYTE *)(a1 + 2203) |= 0x10u;
    }
  }
  if ( dword_141008088 )
  {
    v45 = *v33;
    if ( (*v33 & 0x8000000) == 0 )
    {
      v46 = __rdtsc();
      v47 = (__ROR8__(v46, 3) ^ v46) * (unsigned __int128)0x7010008004002001uLL;
      if ( ((unsigned __int64)v47 ^ *((_QWORD *)&v47 + 1)) % 0xA < 5 )
      {
        v48 = *(_DWORD *)(a1 + 2524) | 0x400;
        *(_DWORD *)(a1 + 2524) = v48;
        if ( (v45 & 0x40000000) == 0 )
        {
          v49 = __rdtsc();
          v50 = (__ROR8__(v49, 3) ^ v49) * (unsigned __int128)0x7010008004002001uLL;
          if ( ((unsigned __int64)v50 ^ *((_QWORD *)&v50 + 1)) % 0xA < 3 && *(_DWORD *)(a1 + 2136) != 7 )
            *(_DWORD *)(a1 + 2524) = v48 | 0x800;
        }
      }
    }
  }
  v51 = 0;
  if ( MEMORY[0xFFFFF78000000289] )
    v51 = (*(_BYTE *)(a1 + 2203) & 4) != 0;
  if ( (NtBuildNumber & 0xF0000000) == 0xC0000000 )
    v51 = 1;
  if ( !v51 )
    goto LABEL_131;
  if ( (*(_DWORD *)(a1 + 2520) & 0x48000000) != 0 )
    goto LABEL_131;
  if ( *(_DWORD *)(a1 + 2136) == 7 )
    goto LABEL_131;
  if ( (*(_DWORD *)(a1 + 2524) & 0x10000) != 0 )
    goto LABEL_131;
  v52 = __rdtsc();
  v53 = (__ROR8__(v52, 3) ^ v52) * (unsigned __int128)0x7010008004002001uLL;
  if ( ((unsigned __int64)v53 ^ *((_QWORD *)&v53 + 1)) % 0xA >= 3 )
    goto LABEL_131;
  v54 = qword_141008080;
  if ( !qword_141008080 )
  {
    v55 = __rdtsc();
    v56 = (__ROR8__(v55, 3) ^ v55) * (unsigned __int128)0x7010008004002001uLL;
    v57 = ((unsigned __int64)v56 ^ *((_QWORD *)&v56 + 1)) % 0xB;
    if ( (unsigned int)v57 > 5 )
    {
      switch ( (_DWORD)v57 )
      {
        case 6:
          v58 = 24;
          v61 = __ROL4__(1464235086, 24) ^ 6;
          break;
        case 7:
          v58 = 7;
          v60 = __ROR4__(1666411585, 7);
          goto LABEL_113;
        case 8:
          v58 = 8;
          v59 = __ROL4__(1113876033, 8);
          goto LABEL_115;
        case 9:
          v58 = 33;
          v61 = __ROL4__(1480806214, 33) ^ 9;
          break;
        default:
          v62 = __rdtsc();
          v63 = __ROR8__(v62, 3);
          v85 = ((v63 ^ v62) * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v64 = ((((((((unsigned int)v85 ^ (67117057 * ((unsigned int)v63 ^ (unsigned int)v62))) % 0x1A + 97) << 8) | ((((unsigned int)v85 ^ (67117057 * ((unsigned int)v63 ^ (unsigned int)v62))) >> 5) % 0x1A + 65)) << 8) | ((((unsigned int)v85 ^ (67117057 * ((unsigned int)v63 ^ (unsigned int)v62))) >> 10) % 0x1A + 97)) << 8) | ((((unsigned int)v85 ^ (67117057 * ((unsigned int)v63 ^ (unsigned int)v62))) >> 15) % 0x1A + 65);
          goto LABEL_116;
      }
    }
    else
    {
      if ( (_DWORD)v57 == 5 )
      {
        v58 = 5;
        v59 = __ROL4__(1766089295, 5);
        goto LABEL_115;
      }
      if ( (_DWORD)v57 )
      {
        switch ( (_DWORD)v57 )
        {
          case 1:
            v58 = 1;
            v60 = __ROR4__(1700422467, 1);
            goto LABEL_113;
          case 2:
            v58 = 2;
            v59 = __ROL4__(1634559043, 2);
            goto LABEL_115;
          case 3:
            v58 = 15;
            v61 = __ROL4__(1920421956, 15) ^ 3;
            break;
          default:
            if ( (unsigned int)v57 % 3 )
            {
              v58 = ((unsigned __int64)v56 ^ *((_QWORD *)&v56 + 1)) % 0xB;
              if ( (unsigned int)v57 % 3 != 1 )
              {
                v59 = __ROL4__(1886800198, v57);
LABEL_115:
                v64 = __ROR4__(v59, v58);
LABEL_116:
                v65 = 5248;
                v66 = 64LL;
                v67 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 256))(64LL, 5248LL, v64);
                v68 = v67;
                qword_141008080 = (__int64)v67;
                if ( v67 )
                {
                  v69 = 656LL;
                  do
                  {
                    *v67++ = 0LL;
                    v65 -= 8;
                    --v69;
                  }
                  while ( v69 );
                  for ( ; v65; --v65 )
                  {
                    *(_BYTE *)v67 = 0;
                    v67 = (_QWORD *)((char *)v67 + 1);
                  }
                  PhysicalAddress = MmGetPhysicalAddress(v68);
                  v71 = (unsigned __int64 *)qword_141008080;
                  *(_QWORD *)(qword_141008080 + 5144) = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
                  v72 = 512;
                  v73 = 512;
                  v74 = IdtBase;
                  v75 = IdtBase;
                  v76 = 64LL;
                  do
                  {
                    *v71++ = v75->Alignment;
                    v75 = (_KIDTENTRY64 *)((char *)v75 + 8);
                    v73 -= 8;
                    --v76;
                  }
                  while ( v76 );
                  for ( ; v73; --v73 )
                  {
                    *(_BYTE *)v71 = v75->OffsetLow;
                    v71 = (unsigned __int64 *)((char *)v71 + 1);
                    v75 = (_KIDTENTRY64 *)((char *)v75 + 1);
                  }
                  v77 = (unsigned __int64 *)(qword_141008080 + 512);
                  do
                  {
                    *v77++ = v74->Alignment;
                    v74 = (_KIDTENTRY64 *)((char *)v74 + 8);
                    v72 -= 8;
                    --v66;
                  }
                  while ( v66 );
                  for ( ; v72; --v72 )
                  {
                    *(_BYTE *)v77 = v74->OffsetLow;
                    v77 = (unsigned __int64 *)((char *)v77 + 1);
                    v74 = (_KIDTENTRY64 *)((char *)v74 + 1);
                  }
                  v54 = qword_141008080;
                  *(_WORD *)(qword_141008080 + 68) &= ~0x8000u;
                  *(_WORD *)(v54 + 64) = v54;
                  *(_WORD *)(v54 + 70) = WORD1(v54);
                  *(_DWORD *)(v54 + 72) = HIDWORD(v54);
                  goto LABEL_130;
                }
                return 0LL;
              }
              v60 = __ROR4__(1886800198, v57);
LABEL_113:
              v64 = __ROL4__(v60, v58);
              goto LABEL_116;
            }
            v58 = 3 * (v57 + 2);
            v61 = v57 ^ __ROL4__(1886800198, v58);
            break;
        }
      }
      else
      {
        v58 = 6;
        v61 = __ROL4__(1665295171, 6);
      }
    }
    v59 = v57 ^ v61;
    goto LABEL_115;
  }
LABEL_130:
  *(_DWORD *)(a1 + 2524) |= 0x8000u;
  *(_QWORD *)(a1 + 2272) = v54;
  *(_DWORD *)(a1 + 2324) = v87 - a1 + (unsigned int)KiMceThunk - a2;
  *(_DWORD *)(a1 + 2227) = 686588744;
  *(_DWORD *)(a1 + 2231) = -2092428801;
  *(_WORD *)(a1 + 2235) = 10436;
  *(_BYTE *)(a1 + 2237) = -61;
LABEL_131:
  v78 = *(_DWORD *)(a1 + 2520);
  if ( (v78 & 0x40000000) != 0 )
  {
    v78 |= 0x4000000u;
    *(_DWORD *)(a1 + 2520) = v78;
  }
  if ( (v78 & 0x4000000) == 0 )
  {
    v79 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    v80 = __readcr0();
    __writecr0(v80 & 0xFFFFFFFFFFFEFFFFuLL);
    v81 = __readcr0();
    if ( v80 != v81 )
      __writecr0(v80);
    __writecr8(v79);
  }
  return a1;
}
