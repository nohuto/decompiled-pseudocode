/*
 * XREFs of CcInitializeBcbProfiler @ 0x140BCDC74
 * Callers:
 *     CcInitializeCacheManager @ 0x140C049F8 (CcInitializeCacheManager.c)
 * Callees:
 *     RtlLookupFunctionTable @ 0x14025CE00 (RtlLookupFunctionTable.c)
 *     KeSetCoalescableTimer @ 0x1402ECF90 (KeSetCoalescableTimer.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1404102B0 (RtlSectionTableFromVirtualAddress.c)
 *     RtlpConvertFunctionEntry @ 0x14041B700 (RtlpConvertFunctionEntry.c)
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 *     KeInitializeTimer @ 0x140454D20 (KeInitializeTimer.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x140483600 (RtlpLookupPrimaryFunctionEntry.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     strstr @ 0x1404FB230 (strstr.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     KiAreCodePatchesAllowed @ 0x140C15B40 (KiAreCodePatchesAllowed.c)
 *     KiGetLoadOptions @ 0x140C15B8C (KiGetLoadOptions.c)
 */

char CcInitializeBcbProfiler()
{
  unsigned __int64 Pool2; // rax
  const char *LoadOptions; // rax
  _IMAGE_NT_HEADERS64 *v2; // r9
  unsigned __int64 v3; // rax
  void (__fastcall *v4)(__int64, __int64); // r8
  unsigned __int128 v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rsi
  PIMAGE_SECTION_HEADER v8; // rbx
  unsigned int *v9; // r8
  unsigned int *v10; // rdi
  int v11; // r14d
  unsigned int VirtualAddress; // edx
  unsigned int *v13; // r9
  unsigned int SizeOfRawData; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // eax
  ULONG_PTR v17; // r9
  unsigned __int64 v18; // rax
  unsigned __int128 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int128 v22; // rax
  unsigned __int64 v23; // r8
  int v24; // eax
  char v25; // cl
  int v26; // eax
  int v27; // eax
  int v28; // r10d
  unsigned int v29; // r10d
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  unsigned int v32; // r8d
  unsigned __int64 Dpc; // rbx
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  unsigned __int64 v38; // rax
  unsigned __int128 v39; // rax
  _BYTE *v40; // rax
  unsigned int *v41; // rax
  unsigned int v42; // r12d
  _QWORD *v43; // rdi
  __int64 v44; // r15
  int v45; // r10d
  _QWORD *v46; // r13
  unsigned int v47; // r14d
  _QWORD *v48; // r9
  unsigned __int64 v49; // rcx
  const char *v50; // rax
  __int64 v51; // r8
  unsigned int v52; // r11d
  __int64 v53; // rax
  __int64 v54; // r8
  unsigned __int64 v55; // rcx
  unsigned int v56; // edx
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  const char *v59; // rax
  __int64 v60; // r8
  __int64 v61; // rdx
  unsigned __int8 *v62; // rdi
  __int64 v63; // rax
  bool v64; // zf
  unsigned __int64 v65; // rax
  __int64 v66; // rcx
  LARGE_INTEGER v67; // r10
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rdx
  char SubStr[16]; // [rsp+38h] [rbp-51h] BYREF
  int v72; // [rsp+48h] [rbp-41h]
  int v73; // [rsp+4Ch] [rbp-3Dh]
  int v74; // [rsp+50h] [rbp-39h]
  int v75; // [rsp+54h] [rbp-35h]
  int v76; // [rsp+58h] [rbp-31h]
  int v77; // [rsp+5Ch] [rbp-2Dh]
  BOOL v78; // [rsp+60h] [rbp-29h]
  unsigned __int64 v79; // [rsp+68h] [rbp-21h]
  __int64 v80; // [rsp+78h] [rbp-11h]
  _QWORD v81[12]; // [rsp+80h] [rbp-9h] BYREF
  unsigned int v82; // [rsp+F0h] [rbp+67h] BYREF
  int v83; // [rsp+F8h] [rbp+6Fh]
  int v84; // [rsp+100h] [rbp+77h]
  int v85; // [rsp+108h] [rbp+7Fh]

  LOBYTE(Pool2) = -44;
  if ( MEMORY[0xFFFFF780000002D4] < 2u )
  {
    v83 = 339968;
    SubStr[0] = __ROR4__(339968, 12);
    v84 = 549901;
    SubStr[1] = __ROR4__(532480, 45);
    v85 = 18350080;
    SubStr[2] = __ROL4__(18350080, 14);
    v72 = 2260992;
    SubStr[3] = __ROR4__(2260992, 15);
    v73 = 276841488;
    SubStr[4] = __ROR4__(276824064, 54);
    v74 = 2588672;
    SubStr[5] = __ROL4__(2588672, 17);
    v75 = 20709376;
    SubStr[6] = __ROR4__(20709376, 18);
    v76 = 17465;
    SubStr[7] = __ROR4__(42, 63);
    v77 = 237568;
    SubStr[8] = __ROL4__(237568, 20);
    SubStr[9] = 0;
    LoadOptions = (const char *)KiGetLoadOptions();
    Pool2 = (unsigned __int64)strstr(LoadOptions, SubStr);
    if ( !Pool2 )
    {
      v2 = RtlImageNtHeader((PVOID)0x140000000LL);
      v3 = __rdtsc();
      v4 = CcBcbProfiler;
      v5 = (__ROR8__(v3, 3) ^ v3) * (unsigned __int128)0x7010008004002001uLL;
      v80 = *((_QWORD *)&v5 + 1);
      v6 = v5 ^ *((_QWORD *)&v5 + 1);
      *((_QWORD *)&v5 + 1) = (((unsigned __int64)v5 ^ *((_QWORD *)&v5 + 1)) * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
      v7 = v6 - 100 * ((*((_QWORD *)&v5 + 1) + ((unsigned __int64)(v6 - *((_QWORD *)&v5 + 1)) >> 1)) >> 6);
      v79 = v7;
      v78 = v7 >= 0x32;
      if ( v7 >= 0x32 )
        LODWORD(v4) = (unsigned int)sub_1406F0690;
      v8 = RtlSectionTableFromVirtualAddress(v2, (PVOID)0x140000000LL, (unsigned int)v4 - 0x40000000);
      v9 = (unsigned int *)RtlLookupFunctionTable((unsigned __int64)v8, v81, &v82);
      if ( !v9 || v82 < 0xC )
      {
        v17 = -1073741701LL;
LABEL_69:
        KeBugCheckEx(__ROL4__(-402653175, 101), 6uLL, (ULONG_PTR)v8, v17, 0LL);
      }
      v10 = 0LL;
      v11 = 0;
      VirtualAddress = v8->VirtualAddress;
      v13 = &v9[3 * (v82 / 0xC)];
      SizeOfRawData = v8->SizeOfRawData;
      if ( SizeOfRawData <= v8->Misc.PhysicalAddress )
        SizeOfRawData = v8->Misc.PhysicalAddress;
      v15 = VirtualAddress + SizeOfRawData;
      do
      {
        v16 = *v9;
        if ( *v9 < VirtualAddress )
        {
          if ( v16 >= v15 )
            break;
        }
        else
        {
          if ( v16 >= v15 )
            break;
          v11 = (int)v9;
          if ( !v10 )
            v10 = v9;
        }
        v9 += 3;
      }
      while ( v9 != v13 );
      if ( !v10 )
      {
        v17 = -1073741569LL;
        goto LABEL_69;
      }
      v18 = __rdtsc();
      v19 = (__ROR8__(v18, 3) ^ v18) * (unsigned __int128)0x7010008004002001uLL;
      v81[1] = *((_QWORD *)&v19 + 1);
      v20 = v19 ^ *((_QWORD *)&v19 + 1);
      Pool2 = 10 * (((unsigned __int64)v19 ^ *((_QWORD *)&v19 + 1)) / 0xA);
      if ( v20 - Pool2 < 5 )
      {
        v21 = __rdtsc();
        v22 = (__ROR8__(v21, 3) ^ v21) * (unsigned __int128)0x7010008004002001uLL;
        v81[2] = *((_QWORD *)&v22 + 1);
        v23 = ((unsigned __int64)v22 ^ *((_QWORD *)&v22 + 1)) % 0xB;
        if ( (unsigned int)v23 > 5 )
        {
          if ( (_DWORD)v23 != 6 )
          {
            if ( (_DWORD)v23 == 7 )
            {
              v24 = 1666411585;
              goto LABEL_31;
            }
            if ( (_DWORD)v23 != 8 )
            {
              if ( (_DWORD)v23 != 9 )
              {
                v30 = __rdtsc();
                v31 = __ROR8__(v30, 3);
                v32 = (((v31 ^ v30) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (67117057 * (v31 ^ v30));
                v29 = ((((((v32 % 0x1A + 97) << 8) | ((v32 >> 5) % 0x1A + 65)) << 8) | ((v32 >> 10) % 0x1A + 97)) << 8) | ((v32 >> 15) % 0x1A + 65);
                goto LABEL_45;
              }
              v25 = 33;
              v26 = 1480806214;
              goto LABEL_43;
            }
            v27 = 1113876033;
            goto LABEL_29;
          }
          v25 = 24;
          v26 = 1464235086;
        }
        else
        {
          if ( (_DWORD)v23 == 5 )
          {
            v27 = 1766089295;
            goto LABEL_29;
          }
          if ( (_DWORD)v23 )
          {
            if ( (_DWORD)v23 == 1 )
            {
              v24 = 1700422467;
              goto LABEL_31;
            }
            if ( (_DWORD)v23 != 2 )
            {
              if ( (_DWORD)v23 != 3 )
              {
                v24 = 1886800198;
LABEL_31:
                v29 = __ROL4__(__ROR4__(v24, v23), v23);
                goto LABEL_45;
              }
              v25 = 15;
              v26 = 1920421956;
              goto LABEL_43;
            }
            v27 = 1634559043;
LABEL_29:
            v25 = v23;
            v28 = __ROL4__(v27, v23);
LABEL_44:
            v29 = __ROR4__(v28, v25);
LABEL_45:
            Pool2 = ExAllocatePool2(0x40uLL, 0xD8uLL, v29);
            Dpc = Pool2;
            if ( Pool2 )
            {
              KeInitializeTimer((PKTIMER)(Pool2 + 64));
              *(_DWORD *)Dpc = 275;
              *(_QWORD *)(Dpc + 24) = CcBcbProfiler;
              *(_QWORD *)(Dpc + 32) = Dpc;
              *(_QWORD *)(Dpc + 56) = 0LL;
              *(_QWORD *)(Dpc + 16) = 0LL;
              v34 = __rdtsc();
              v35 = __ROR8__(v34, 3);
              *(_QWORD *)(Dpc + 160) = (0x7010008004002001LL * (v35 ^ v34)) ^ (((v35 ^ v34)
                                                                              * (unsigned __int128)0x7010008004002001uLL) >> 64);
              v36 = __rdtsc();
              v37 = __ROR8__(v36, 3);
              *(_BYTE *)(Dpc + 168) = ((0x7010008004002001LL * (v37 ^ v36)) ^ (((v37 ^ v36)
                                                                              * (unsigned __int128)0x7010008004002001uLL) >> 64))
                                    % 0x3F
                                    + 1;
              v38 = __rdtsc();
              *(_QWORD *)(Dpc + 136) = 0x140000000uLL;
              v39 = (__ROR8__(v38, 3) ^ v38) * (unsigned __int128)0x7010008004002001uLL;
              v40 = (_BYTE *)RtlpConvertFunctionEntry(
                               (unsigned __int64)&v10[3
                                                    * (((unsigned __int64)v39 ^ *((_QWORD *)&v39 + 1))
                                                     % (unsigned int)((v11 - (int)v10) / 12))],
                               0x140000000uLL);
              v41 = (unsigned int *)RtlpLookupPrimaryFunctionEntry(
                                      v40,
                                      *(_QWORD *)(Dpc + 136),
                                      *(_QWORD *)(Dpc + 136) + *(unsigned int *)v40);
              v42 = *(unsigned __int8 *)(Dpc + 168);
              v43 = v41;
              v44 = *(_QWORD *)(Dpc + 160);
              LOBYTE(v45) = *(_BYTE *)(Dpc + 168);
              *(_QWORD *)(Dpc + 128) = v41;
              v46 = (_QWORD *)(*(_QWORD *)(Dpc + 136) + *v41);
              v47 = v41[1] - *v41;
              v48 = v46;
              v49 = (unsigned __int64)v46 + v47;
              v82 = v42;
              v50 = (const char *)v46;
              if ( (unsigned __int64)v46 < v49 )
              {
                do
                {
                  _mm_prefetch(v50, 0);
                  v50 += 64;
                }
                while ( (unsigned __int64)v50 < v49 );
              }
              v51 = v44;
              v52 = v47 >> 7;
              if ( v47 >> 7 )
              {
                do
                {
                  v53 = 8LL;
                  do
                  {
                    v54 = v48[1] ^ __ROL8__(*v48 ^ v51, v45);
                    v48 += 2;
                    v51 = __ROL8__(v54, v45);
                    --v53;
                  }
                  while ( v53 );
                  v55 = __ROL8__(v44 ^ ((char *)v48 - (char *)v46), 17) ^ v44 ^ ((char *)v48 - (char *)v46);
                  v45 = ((unsigned __int8)(((v55 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v55) ^ (unsigned __int8)v45) & 0x3F;
                  if ( !v45 )
                    LOBYTE(v45) = 1;
                  --v52;
                }
                while ( v52 );
                v7 = v79;
                v42 = v82;
              }
              v56 = v47 & 0x7F;
              if ( v56 >= 8 )
              {
                v57 = (unsigned __int64)(v47 & 0x7F) >> 3;
                do
                {
                  v51 = __ROL8__(*v48++ ^ v51, v45);
                  v56 -= 8;
                  --v57;
                }
                while ( v57 );
              }
              for ( ; v56; --v56 )
              {
                v58 = *(unsigned __int8 *)v48;
                v48 = (_QWORD *)((char *)v48 + 1);
                v51 = __ROL8__(v58 ^ v51, v45);
              }
              *(_QWORD *)(Dpc + 152) = v51;
              v59 = (const char *)v43;
              if ( v43 < (_QWORD *)((char *)v43 + 12) )
              {
                do
                {
                  _mm_prefetch(v59, 0);
                  v59 += 64;
                }
                while ( v59 < (const char *)v43 + 12 );
              }
              v60 = __ROL8__(*v43 ^ v51, v42);
              LODWORD(v61) = 4;
              v62 = (unsigned __int8 *)(v43 + 1);
              do
              {
                v63 = *v62++;
                v60 = __ROL8__(v63 ^ v60, v42);
                v64 = (_DWORD)v61 == 1;
                v61 = (unsigned int)(v61 - 1);
              }
              while ( !v64 );
              *(_DWORD *)(Dpc + 172) = v78;
              *(_QWORD *)(Dpc + 152) = v60;
              *(_DWORD *)(Dpc + 144) = v47;
              *(_DWORD *)(Dpc + 176) = KiAreCodePatchesAllowed(v42, v61, v60, v48) != 0;
              if ( v7 >= 0x32 )
              {
                *(_QWORD *)(Dpc + 184) = 0LL;
                *(_QWORD *)(Dpc + 200) = sub_1406F0690;
                *(_QWORD *)(Dpc + 208) = Dpc;
              }
              v65 = __rdtsc();
              v66 = __ROR8__(v65, 3);
              v67.QuadPart = -1200000000LL
                           - ((0x7010008004002001LL * (v66 ^ v65)) ^ (((v66 ^ v65)
                                                                     * (unsigned __int128)0x7010008004002001uLL) >> 64))
                           % 0x5F5E100;
              v68 = __rdtsc();
              v69 = __ROR8__(v68, 3) ^ v68;
              LOBYTE(Pool2) = KeSetCoalescableTimer(
                                (PKTIMER)(Dpc + 64),
                                v67,
                                0,
                                ((0x7010008004002001LL * v69) ^ ((v69 * (unsigned __int128)0x7010008004002001uLL) >> 64))
                              % 0x2710,
                                (PKDPC)Dpc);
            }
            return Pool2;
          }
          v25 = 6;
          v26 = 1665295171;
        }
LABEL_43:
        v28 = __ROL4__(v26, v25);
        goto LABEL_44;
      }
    }
  }
  return Pool2;
}
