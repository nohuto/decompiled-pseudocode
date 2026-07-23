/*
 * XREFs of RtlApplyHotPatch @ 0x140B53980
 * Callers:
 *     MiApplyHotPatchToDriverDataPages @ 0x1407E13E8 (MiApplyHotPatchToDriverDataPages.c)
 *     MiApplyImageHotPatch @ 0x1407E1800 (MiApplyImageHotPatch.c)
 *     MiApplyImageHotPatchRequest @ 0x1407E1A7C (MiApplyImageHotPatchRequest.c)
 *     MiApplyImageHotPatchDpc @ 0x140B53110 (MiApplyImageHotPatchDpc.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x140338AF0 (RtlFindClearBitsAndSet.c)
 *     RtlGetHotPatchSize @ 0x14069827C (RtlGetHotPatchSize.c)
 *     RtlGetHpatEntryAddress @ 0x140698294 (RtlGetHpatEntryAddress.c)
 *     RtlpRevertFunctionPatchFromUndoEntry @ 0x1406982B8 (RtlpRevertFunctionPatchFromUndoEntry.c)
 *     RtlPopulateHpatEntry @ 0x140698434 (RtlPopulateHpatEntry.c)
 *     RtlpApplyFunctionPatch @ 0x140698498 (RtlpApplyFunctionPatch.c)
 *     RtlpCheckFunctionPatchAppliedInOriginalImage @ 0x1406984B4 (RtlpCheckFunctionPatchAppliedInOriginalImage.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     RtlIsCodeInEcRanges @ 0x14081F5F4 (RtlIsCodeInEcRanges.c)
 *     RtlpDetermineHotPatchExtent @ 0x140B53F00 (RtlpDetermineHotPatchExtent.c)
 */

__int64 __fastcall RtlApplyHotPatch(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        char a6,
        unsigned int *a7,
        unsigned int a8,
        __int64 a9,
        int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        unsigned int a14,
        unsigned int *a15,
        unsigned int a16,
        unsigned int *a17,
        unsigned int a18,
        _DWORD *a19,
        unsigned int *a20,
        char a21,
        unsigned __int16 a22,
        PRTL_BITMAP BitMapHeader,
        __int64 a24,
        __int128 *a25,
        int a26,
        unsigned int *a27,
        __int64 a28,
        unsigned int a29)
{
  __int128 *v29; // rsi
  unsigned int *v30; // rbx
  __int64 v31; // r14
  __int64 v32; // rdi
  int HotPatchSize; // edx
  unsigned int v34; // r8d
  unsigned int *v35; // r9
  __int64 v36; // r10
  unsigned int v37; // r11d
  int v38; // r12d
  __int64 v39; // r15
  unsigned int v40; // r13d
  int v41; // r12d
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned __int16 v44; // r14
  __int64 result; // rax
  __int64 v46; // rax
  _WORD *v47; // rdi
  __int64 v48; // r10
  _BYTE *v49; // rdx
  unsigned int v50; // eax
  __int64 HpatEntryAddress; // rax
  __int64 v52; // r10
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // r11
  __int64 v56; // rcx
  unsigned int v57; // r11d
  __int64 v58; // rax
  __int64 v59; // r10
  _BYTE *v60; // rcx
  _RTL_BITMAP *v61; // rbx
  ULONG ClearBitsAndSet; // r8d
  __int64 v63; // rsi
  _DWORD *v64; // rdx
  __int64 v65; // rax
  int v66; // [rsp+38h] [rbp-71h]
  unsigned int *v67; // [rsp+58h] [rbp-51h]
  __int64 v68; // [rsp+60h] [rbp-49h]
  int v69; // [rsp+68h] [rbp-41h]
  __int128 *v70; // [rsp+70h] [rbp-39h]
  __int64 v71; // [rsp+78h] [rbp-31h]
  __int64 v72; // [rsp+80h] [rbp-29h]
  __int64 v73; // [rsp+88h] [rbp-21h]
  __int128 v74; // [rsp+90h] [rbp-19h] BYREF
  __int64 v75; // [rsp+A0h] [rbp-9h]

  a26 = 0;
  v29 = &v74;
  v30 = a20;
  a10 = 0;
  v71 = 0LL;
  v68 = 0LL;
  v31 = a3;
  a29 = 0;
  v67 = 0LL;
  v69 = 0;
  a28 = 0LL;
  v32 = a1;
  v73 = 0LL;
  v75 = 0LL;
  v74 = 0LL;
  if ( a25 )
    v29 = a25;
  a27 = 0LL;
  a16 = 0;
  v70 = v29;
  LODWORD(a25) = 0;
  if ( a20 )
  {
    HotPatchSize = RtlGetHotPatchSize(a19);
    LODWORD(a25) = HotPatchSize;
    while ( 1 )
    {
LABEL_5:
      if ( !v30 )
        break;
      v38 = *v30;
      if ( !*v30 )
        break;
      v39 = 0LL;
      v72 = 0LL;
      LOBYTE(a20) = 0;
      if ( v38 < 0 )
      {
        if ( (a21 & 2) == 0 )
          goto LABEL_14;
        v35 = a17;
        v34 = a18;
        v39 = a11;
        v71 = *((_QWORD *)v29 + 2);
        v68 = a13;
        a29 = a14;
        v67 = a15;
        v69 = a12;
        a27 = a17;
        a16 = a18;
        a28 = v32;
        v73 = v36;
      }
      else
      {
        LODWORD(a20) = a21 & 1;
        if ( (a21 & 1) != 0 )
        {
          v35 = a7;
          v34 = a8;
          v71 = *((_QWORD *)v29 + 1);
          v67 = a5;
          a28 = a11;
          v73 = a12;
          a27 = a7;
          a16 = a8;
          v68 = v31;
          a29 = v37;
          v69 = v36;
        }
        v39 = v32 & -(__int64)((a21 & 1) != 0);
      }
      v72 = v39;
LABEL_14:
      ++v30;
      v40 = v38 & 0xFC000;
      v41 = v38 & 0xFFF;
      if ( v39 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( !v41 )
            {
              v32 = a1;
              v36 = a2;
              v37 = a4;
              v31 = a3;
              goto LABEL_5;
            }
            v44 = -21916;
            if ( !RtlIsCodeInEcRanges(*v30, v35, v34) )
              v44 = a22;
            if ( !*(_QWORD *)v29 )
              break;
            RtlpDetermineHotPatchExtent(v40, v44, &a10, &a26);
            result = guard_dispatch_icall_no_overrides(v71);
            if ( (int)result < 0 )
              return result;
            HotPatchSize = (int)a25;
            --v41;
            v29 = v70;
            v35 = a27;
            v34 = a16;
            v30 += (unsigned int)a25;
            if ( v40 == 114688 )
            {
              if ( v67 )
                ++*v67;
            }
          }
          v46 = v30[1];
          v47 = (_WORD *)(v72 + *v30);
          v48 = v46 + v73;
          switch ( v40 )
          {
            case 0x1C000u:
              if ( (_DWORD)a25 == 2 )
                v49 = 0LL;
              else
                v49 = v30 + 2;
              v50 = RtlpCheckFunctionPatchAppliedInOriginalImage((char *)(v72 + *v30), v49, v42, v43, v68);
              if ( v50 == -1 )
                return 3221225496LL;
              if ( v50 == -2 )
              {
                if ( *v67 >= a29 )
                  return 3221226668LL;
                HpatEntryAddress = RtlGetHpatEntryAddress(v68, *v67);
                RtlPopulateHpatEntry(
                  HpatEntryAddress,
                  (_QWORD *)(HpatEntryAddress + 4096),
                  v52,
                  HpatEntryAddress + v69 - v72,
                  v72,
                  0,
                  v66,
                  v44,
                  a21);
                v56 = a24;
                if ( a24 && (_BYTE)a20 )
                {
                  *(_DWORD *)(a24 + 8 * v55) = *v30;
                  *(_DWORD *)(v56 + 8 * v55 + 4) = *(_DWORD *)v47;
                }
                RtlpApplyFunctionPatch(v47, v69 + *v30, v53, v54, v54);
                ++*v67;
              }
              else
              {
                if ( v50 >= a29 )
                  return 3221225496LL;
                v58 = RtlGetHpatEntryAddress(v68, v50);
                *(_QWORD *)(v58 + 4096) = v59;
              }
              if ( BitMapHeader && (_BYTE)a20 )
              {
                v60 = (char *)BitMapHeader->Buffer + ((unsigned __int64)v57 >> 3);
                *v60 |= 1 << (v57 & 7);
              }
              break;
            case 0x2C000u:
              if ( v44 == 0x8664 || v44 == 0xAA64 )
                *(_QWORD *)v47 = v48;
              else
                *(_DWORD *)v47 = v48;
              break;
            case 0x5C000u:
              if ( v44 == 0x8664 || v44 == 0xAA64 )
                *(_QWORD *)v47 = *(_QWORD *)(v46 + a28);
              else
                *(_DWORD *)v47 = *(_DWORD *)(v46 + a28);
              break;
            case 0x78000u:
              if ( a9 == -1 )
                return 3221225520LL;
              if ( a9 && *(_BYTE *)(v46 + a9) == 0xFF )
                *(_QWORD *)v47 += *(_QWORD *)(8 * v46);
              break;
          }
          HotPatchSize = (int)a25;
          --v41;
          v29 = v70;
          v35 = a27;
          v34 = a16;
          v30 += (unsigned int)a25;
        }
      }
      v30 += (unsigned int)(v41 * HotPatchSize);
    }
  }
  v61 = BitMapHeader;
  if ( BitMapHeader )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(BitMapHeader, 1u, 0);
    if ( ClearBitsAndSet != -1 )
    {
      v63 = a24;
      do
      {
        v64 = (_DWORD *)(v63 + 8LL * ClearBitsAndSet);
        v65 = (unsigned int)*v64;
        if ( (_DWORD)v65 )
          RtlpRevertFunctionPatchFromUndoEntry((_DWORD *)(v32 + v65), v64);
        ClearBitsAndSet = RtlFindClearBitsAndSet(v61, 1u, ClearBitsAndSet);
      }
      while ( ClearBitsAndSet != -1 );
    }
  }
  return 0LL;
}
