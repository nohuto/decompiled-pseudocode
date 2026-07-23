/*
 * XREFs of RtlApplyHotPatch @ 0x140B65BA0
 * Callers:
 *     MiApplyHotPatchToDriverDataPages @ 0x1407F1858 (MiApplyHotPatchToDriverDataPages.c)
 *     MiApplyImageHotPatch @ 0x1407F1C70 (MiApplyImageHotPatch.c)
 *     MiApplyImageHotPatchRequest @ 0x1407F1EEC (MiApplyImageHotPatchRequest.c)
 *     MiApplyImageHotPatchDpc @ 0x140B65330 (MiApplyImageHotPatchDpc.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14027BEE0 (RtlFindClearBitsAndSet.c)
 *     RtlGetHotPatchSize @ 0x1406A44AC (RtlGetHotPatchSize.c)
 *     RtlGetHpatEntryAddress @ 0x1406A44C4 (RtlGetHpatEntryAddress.c)
 *     RtlpRevertFunctionPatchFromUndoEntry @ 0x1406A44E8 (RtlpRevertFunctionPatchFromUndoEntry.c)
 *     RtlPopulateHpatEntry @ 0x1406A4664 (RtlPopulateHpatEntry.c)
 *     RtlpApplyFunctionPatch @ 0x1406A46C8 (RtlpApplyFunctionPatch.c)
 *     RtlpCheckFunctionPatchAppliedInOriginalImage @ 0x1406A46E4 (RtlpCheckFunctionPatchAppliedInOriginalImage.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     RtlIsCodeInEcRanges @ 0x140B66104 (RtlIsCodeInEcRanges.c)
 *     RtlpDetermineHotPatchExtent @ 0x140B66158 (RtlpDetermineHotPatchExtent.c)
 */

__int64 __fastcall RtlApplyHotPatch(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        char a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9,
        int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        unsigned int a14,
        unsigned int *a15,
        unsigned int a16,
        __int64 a17,
        unsigned int a18,
        _DWORD *a19,
        unsigned int *a20,
        char a21,
        unsigned __int16 a22,
        PRTL_BITMAP BitMapHeader,
        __int64 a24,
        __int128 *a25,
        int a26,
        __int64 a27,
        __int64 a28,
        unsigned int a29)
{
  __int128 *v29; // rsi
  unsigned int *v30; // rbx
  __int64 v31; // r14
  __int64 v32; // rdi
  int HotPatchSize; // edx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r10
  unsigned int v37; // r11d
  int v38; // r12d
  __int64 v39; // r15
  unsigned int v40; // r13d
  int v41; // r12d
  int v42; // edi
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned __int16 v45; // r14
  __int64 result; // rax
  __int64 v47; // rax
  _WORD *v48; // rdi
  __int64 v49; // r10
  _BYTE *v50; // rdx
  unsigned int v51; // eax
  __int64 HpatEntryAddress; // rax
  __int64 v53; // r10
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r11
  __int64 v57; // rcx
  unsigned int v58; // r11d
  __int64 v59; // rax
  __int64 v60; // r10
  _BYTE *v61; // rcx
  _RTL_BITMAP *v62; // rbx
  ULONG ClearBitsAndSet; // r8d
  __int64 v64; // rsi
  _DWORD *v65; // rdx
  __int64 v66; // rax
  int v67; // [rsp+38h] [rbp-71h]
  unsigned int *v68; // [rsp+58h] [rbp-51h]
  __int64 v69; // [rsp+60h] [rbp-49h]
  int v70; // [rsp+68h] [rbp-41h]
  __int128 *v71; // [rsp+70h] [rbp-39h]
  __int64 v72; // [rsp+78h] [rbp-31h]
  __int64 v73; // [rsp+80h] [rbp-29h]
  __int64 v74; // [rsp+88h] [rbp-21h]
  __int128 v75; // [rsp+90h] [rbp-19h] BYREF
  __int64 v76; // [rsp+A0h] [rbp-9h]

  a26 = 0;
  v29 = &v75;
  v30 = a20;
  a10 = 0;
  v72 = 0LL;
  v69 = 0LL;
  v31 = a3;
  a29 = 0;
  v68 = 0LL;
  v70 = 0;
  a28 = 0LL;
  v32 = a1;
  v74 = 0LL;
  v76 = 0LL;
  v75 = 0LL;
  if ( a25 )
    v29 = a25;
  a27 = 0LL;
  a16 = 0;
  v71 = v29;
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
      v73 = 0LL;
      LOBYTE(a20) = 0;
      if ( v38 < 0 )
      {
        if ( (a21 & 2) == 0 )
          goto LABEL_14;
        v35 = a17;
        v34 = a18;
        v39 = a11;
        v72 = *((_QWORD *)v29 + 2);
        v69 = a13;
        a29 = a14;
        v68 = a15;
        v70 = a12;
        a27 = a17;
        a16 = a18;
        a28 = v32;
        v74 = v36;
      }
      else
      {
        LODWORD(a20) = a21 & 1;
        if ( (a21 & 1) != 0 )
        {
          v35 = a7;
          v34 = a8;
          v72 = *((_QWORD *)v29 + 1);
          v68 = a5;
          a28 = a11;
          v74 = a12;
          a27 = a7;
          a16 = a8;
          v69 = v31;
          a29 = v37;
          v70 = v36;
        }
        v39 = v32 & -(__int64)((a21 & 1) != 0);
      }
      v73 = v39;
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
            v42 = *v30;
            v45 = -21916;
            if ( !(unsigned __int8)RtlIsCodeInEcRanges(*v30, v35, v34) )
              v45 = a22;
            if ( !*(_QWORD *)v29 )
              break;
            RtlpDetermineHotPatchExtent(v40, v45, &a10, &a26);
            result = guard_dispatch_icall_no_overrides(v72, (unsigned int)(v42 + a10));
            if ( (int)result < 0 )
              return result;
            HotPatchSize = (int)a25;
            --v41;
            v29 = v71;
            v35 = a27;
            v34 = a16;
            v30 += (unsigned int)a25;
            if ( v40 == 114688 )
            {
              if ( v68 )
                ++*v68;
            }
          }
          v47 = v30[1];
          v48 = (_WORD *)(v73 + *v30);
          v49 = v47 + v74;
          switch ( v40 )
          {
            case 0x1C000u:
              if ( (_DWORD)a25 == 2 )
                v50 = 0LL;
              else
                v50 = v30 + 2;
              v51 = RtlpCheckFunctionPatchAppliedInOriginalImage((char *)(v73 + *v30), v50, v43, v44, v69);
              if ( v51 == -1 )
                return 3221225496LL;
              if ( v51 == -2 )
              {
                if ( *v68 >= a29 )
                  return 3221226668LL;
                HpatEntryAddress = RtlGetHpatEntryAddress(v69, *v68);
                RtlPopulateHpatEntry(
                  HpatEntryAddress,
                  (_QWORD *)(HpatEntryAddress + 4096),
                  v53,
                  HpatEntryAddress + v70 - v73,
                  v73,
                  0,
                  v67,
                  v45,
                  a21);
                v57 = a24;
                if ( a24 && (_BYTE)a20 )
                {
                  *(_DWORD *)(a24 + 8 * v56) = *v30;
                  *(_DWORD *)(v57 + 8 * v56 + 4) = *(_DWORD *)v48;
                }
                RtlpApplyFunctionPatch(v48, v70 + *v30, v54, v55, v55);
                ++*v68;
              }
              else
              {
                if ( v51 >= a29 )
                  return 3221225496LL;
                v59 = RtlGetHpatEntryAddress(v69, v51);
                *(_QWORD *)(v59 + 4096) = v60;
              }
              if ( BitMapHeader && (_BYTE)a20 )
              {
                v61 = (char *)BitMapHeader->Buffer + ((unsigned __int64)v58 >> 3);
                *v61 |= 1 << (v58 & 7);
              }
              break;
            case 0x2C000u:
              if ( v45 == 0x8664 || v45 == 0xAA64 )
                *(_QWORD *)v48 = v49;
              else
                *(_DWORD *)v48 = v49;
              break;
            case 0x5C000u:
              if ( v45 == 0x8664 || v45 == 0xAA64 )
                *(_QWORD *)v48 = *(_QWORD *)(v47 + a28);
              else
                *(_DWORD *)v48 = *(_DWORD *)(v47 + a28);
              break;
            case 0x78000u:
              if ( a9 == -1 )
                return 3221225520LL;
              if ( a9 && *(_BYTE *)(v47 + a9) == 0xFF )
                *(_QWORD *)v48 += *(_QWORD *)(8 * v47);
              break;
          }
          HotPatchSize = (int)a25;
          --v41;
          v29 = v71;
          v35 = a27;
          v34 = a16;
          v30 += (unsigned int)a25;
        }
      }
      v30 += (unsigned int)(v41 * HotPatchSize);
    }
  }
  v62 = BitMapHeader;
  if ( BitMapHeader )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(BitMapHeader, 1u, 0);
    if ( ClearBitsAndSet != -1 )
    {
      v64 = a24;
      do
      {
        v65 = (_DWORD *)(v64 + 8LL * ClearBitsAndSet);
        v66 = (unsigned int)*v65;
        if ( (_DWORD)v66 )
          RtlpRevertFunctionPatchFromUndoEntry((_DWORD *)(v32 + v66), v65);
        ClearBitsAndSet = RtlFindClearBitsAndSet(v62, 1u, ClearBitsAndSet);
      }
      while ( ClearBitsAndSet != -1 );
    }
  }
  return 0LL;
}
