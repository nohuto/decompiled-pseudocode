/*
 * XREFs of RtlDetectProcessorFeatures @ 0x140B6233C
 * Callers:
 *     KiSetProcessorSignature @ 0x1405C08F0 (KiSetProcessorSignature.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     RtlGetProcessorSignature @ 0x140B62B5C (RtlGetProcessorSignature.c)
 *     RtlpGetSpecificProcessorFlags @ 0x140B62D30 (RtlpGetSpecificProcessorFlags.c)
 */

__int64 __fastcall RtlDetectProcessorFeatures(int a1, __int64 *a2, __int64 *a3, _DWORD *a4)
{
  unsigned int ProcessorSignature; // edi
  __int64 v10; // r9
  __int64 v16; // r8
  __int64 v17; // r12
  __int64 v18; // r15
  unsigned int v19; // r14d
  unsigned int v20; // ebx
  unsigned int v21; // r13d
  __int64 v22; // rcx
  int *v23; // rsi
  unsigned int v24; // eax
  unsigned int v25; // eax
  int v31; // edx
  int v32; // ebx
  int v33; // eax
  int v34; // edx
  __int64 i; // r14
  __int64 *v36; // rsi
  unsigned int v37; // edx
  __int64 v38; // rdx
  unsigned __int64 v39; // r13
  __int64 v40; // rbx
  unsigned int v41; // eax
  unsigned int v42; // eax
  BOOL v43; // ecx
  int v44; // eax
  int v45; // edx
  int v46; // edx
  int v47; // eax
  int v48; // ecx
  int v49; // edx
  __int64 result; // rax
  _DWORD *v51; // rbx
  int v52; // [rsp+30h] [rbp-108h]
  unsigned int v53; // [rsp+30h] [rbp-108h]
  int v54; // [rsp+34h] [rbp-104h] BYREF
  __int128 v55; // [rsp+38h] [rbp-100h] BYREF
  __int64 v56; // [rsp+48h] [rbp-F0h] BYREF
  int v57; // [rsp+50h] [rbp-E8h]
  unsigned int v58; // [rsp+54h] [rbp-E4h]
  __int64 *v59; // [rsp+58h] [rbp-E0h]
  unsigned int v60; // [rsp+60h] [rbp-D8h]
  int v61; // [rsp+68h] [rbp-D0h]
  __int64 v62; // [rsp+70h] [rbp-C8h]
  __int64 v63; // [rsp+78h] [rbp-C0h]
  __int64 *v64; // [rsp+80h] [rbp-B8h]
  __int64 *v65; // [rsp+88h] [rbp-B0h]
  _DWORD *v66; // [rsp+90h] [rbp-A8h]
  unsigned __int64 v67; // [rsp+98h] [rbp-A0h]
  __int64 *v68; // [rsp+A0h] [rbp-98h]
  __int64 *v69; // [rsp+A8h] [rbp-90h]
  _DWORD *v70; // [rsp+B0h] [rbp-88h]
  __int128 v71; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v72; // [rsp+D0h] [rbp-68h]
  __int128 v73; // [rsp+E0h] [rbp-58h]

  v66 = a4;
  v65 = a3;
  v64 = a2;
  v57 = a1;
  v61 = a1;
  v68 = a2;
  v69 = a3;
  v70 = a4;
  v73 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v54 = 0;
  LODWORD(v55) = a1;
  ProcessorSignature = RtlGetProcessorSignature((char *)&v55 + 4, (char *)&v55 + 8, (char *)&v55 + 12, &v56);
  v60 = ProcessorSignature;
  HIDWORD(v56) = ProcessorSignature;
  _RAX = 0x80000000LL;
  __asm { cpuid }
  v10 = (unsigned int)_RAX;
  LODWORD(v59) = _RAX;
  _RAX = 0LL;
  __asm { cpuid }
  v16 = (unsigned int)_RAX;
  v58 = _RAX;
  *(_QWORD *)&v73 = __PAIR64__(_RBX, _RAX);
  *((_QWORD *)&v73 + 1) = __PAIR64__(_RDX, _RCX);
  v17 = 0LL;
  v62 = 0LL;
  v18 = 0LL;
  v63 = 0LL;
  v19 = 0;
  v20 = 0;
  v52 = 0;
  v21 = 0;
  v22 = BYTE4(v55);
  v23 = &dword_140008804;
  do
  {
    v24 = v23[3];
    if ( (v24 & 2) == 0 )
    {
      v25 = HIBYTE(v24);
      if ( !v25 || _bittest((const int *)&v25, v22) )
      {
        _RAX = (unsigned int)*(v23 - 1);
        if ( *(_QWORD *)(v23 - 1) != __PAIR64__(v20, v19) )
        {
          v19 = *(v23 - 1);
          v52 = *v23;
          if ( ((unsigned int)_RAX < 0x80000000 || (unsigned int)_RAX > (unsigned int)v10)
            && (unsigned int)_RAX > (unsigned int)v16 )
          {
            v73 = 0LL;
          }
          else
          {
            __asm { cpuid }
            *(_QWORD *)&v73 = __PAIR64__(_RBX, _RAX);
            *((_QWORD *)&v73 + 1) = __PAIR64__(_RDX, _RCX);
          }
        }
        v31 = 0;
        v54 = 0;
        if ( (*((_DWORD *)&v73 + v23[2]) & v23[1]) != 0
          || (v32 = v23[3], (v32 & 8) != 0) && (v17 & *(_QWORD *)(v23 + 5)) == *(_QWORD *)(v23 + 5)
          || (v32 & 0x10) != 0 && (v18 & *(_QWORD *)(v23 + 5)) == *(_QWORD *)(v23 + 5) )
        {
          v31 = 1;
          v54 = 1;
        }
        if ( *(_QWORD *)(v23 + 7) )
        {
          v71 = v55;
          v72 = v56;
          guard_dispatch_icall_no_overrides(&v71, &v54);
          v31 = v54;
          v16 = v58;
          v10 = (unsigned int)v59;
        }
        v33 = v23[3];
        if ( !v31 )
        {
          if ( (v33 & 1) != 0 )
            KeBugCheckEx(0x5Du, 0xFFFFFFFFuLL, (unsigned int)*(v23 - 1), (unsigned int)v23[1], v23[2]);
          if ( (v33 & 4) != 0 && (_DWORD)v55 )
          {
            if ( (v33 & 8) != 0 )
            {
              LOBYTE(v31) = (RtlpBspFeatureBits & *(_QWORD *)(v23 + 5)) == *(_QWORD *)(v23 + 5);
            }
            else if ( (v33 & 0x10) != 0 && (RtlpBspFeatureBits2 & *(_QWORD *)(v23 + 5)) == *(_QWORD *)(v23 + 5) )
            {
LABEL_88:
              KeBugCheckEx(0x5Du, 0xFFFFFFFEuLL, (unsigned int)*(v23 - 1), (unsigned int)v23[1], v23[2]);
            }
            if ( v31 )
              goto LABEL_88;
          }
          goto LABEL_40;
        }
        if ( (v33 & 8) != 0 )
        {
          v17 |= *(_QWORD *)(v23 + 5);
          v62 = v17;
        }
        else if ( (v33 & 0x10) != 0 )
        {
          v18 |= *(_QWORD *)(v23 + 5);
          v63 = v18;
        }
        if ( (v33 & 0x24) == 4 && (_DWORD)v55 )
        {
          v34 = 0;
          if ( (v33 & 8) != 0 )
          {
            LOBYTE(v34) = (RtlpBspFeatureBits & *(_QWORD *)(v23 + 5)) == *(_QWORD *)(v23 + 5);
            goto LABEL_39;
          }
          if ( (v33 & 0x10) == 0 || (RtlpBspFeatureBits2 & *(_QWORD *)(v23 + 5)) != *(_QWORD *)(v23 + 5) )
          {
LABEL_39:
            if ( !v34 )
              KeBugCheckEx(0x5Du, 0xFFFFFFFDuLL, (unsigned int)*(v23 - 1), (unsigned int)v23[1], v23[2]);
          }
        }
LABEL_40:
        v20 = v52;
        v22 = BYTE4(v55);
      }
    }
    ++v21;
    v23 += 10;
  }
  while ( v21 < 0x3B );
  for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
  {
    v22 = 3 * i;
    v36 = &KiMsrFeatureTable[3 * i];
    v59 = v36;
    v37 = *((_DWORD *)v36 + 1);
    if ( (v37 & 2) == 0 )
    {
      v22 = HIBYTE(v37);
      if ( !(_DWORD)v22 || _bittest((const int *)&v22, BYTE4(v55)) )
      {
        if ( (v37 & 8) != 0 )
        {
          v38 = v17;
        }
        else
        {
          if ( (v37 & 0x10) == 0 )
            continue;
          v38 = v18;
        }
        v22 = v36[2];
        if ( (v38 & v22) == v22 )
        {
          v22 = *(unsigned int *)v36;
          v39 = __readmsr(v22);
          v67 = v39;
          v40 = v36[1];
          if ( *(_QWORD *)v40 )
          {
            v22 = BYTE4(v55);
            v53 = BYTE4(v55);
LABEL_54:
            v41 = *(_DWORD *)(v40 + 8);
            if ( (v41 & 2) != 0 )
              goto LABEL_81;
            v42 = HIBYTE(v41);
            if ( v42 )
            {
              if ( !_bittest((const int *)&v42, v22) )
                goto LABEL_81;
            }
            v43 = (v39 & *(_QWORD *)v40) != 0;
            v54 = v43;
            if ( *(_QWORD *)(v40 + 24) )
            {
              v71 = v55;
              v72 = v56;
              guard_dispatch_icall_no_overrides(&v71, &v54);
              v43 = v54;
            }
            if ( v43 )
            {
              v46 = *(_DWORD *)(v40 + 8);
              v47 = v46 & 0x10;
              v48 = v46 & 8;
              if ( (v46 & 8) != 0 )
              {
                v17 |= *(_QWORD *)(v40 + 16);
                v62 = v17;
              }
              else if ( (v46 & 0x10) != 0 )
              {
                v18 |= *(_QWORD *)(v40 + 16);
                v63 = v18;
              }
              if ( (v46 & 4) != 0 && (_DWORD)v55 )
              {
                v49 = 0;
                if ( v48 )
                {
                  LOBYTE(v49) = (RtlpBspFeatureBits & *(_QWORD *)(v40 + 16)) == *(_QWORD *)(v40 + 16);
                }
                else if ( v47 && (RtlpBspFeatureBits2 & *(_QWORD *)(v40 + 16)) == *(_QWORD *)(v40 + 16) )
                {
                  goto LABEL_80;
                }
                if ( !v49 )
                  KeBugCheckEx(0x5Du, 0xFFFFFFFAuLL, *(unsigned int *)v36, *(_QWORD *)v40, HIDWORD(*(_QWORD *)v40));
              }
            }
            else
            {
              v44 = *(_DWORD *)(v40 + 8);
              if ( (v44 & 1) != 0 )
                KeBugCheckEx(0x5Du, 0xFFFFFFFCuLL, *(unsigned int *)v36, *(_QWORD *)v40, HIDWORD(*(_QWORD *)v40));
              if ( (v44 & 4) != 0 && (_DWORD)v55 )
              {
                v45 = 0;
                if ( (v44 & 8) != 0 )
                {
                  LOBYTE(v45) = (RtlpBspFeatureBits & *(_QWORD *)(v40 + 16)) == *(_QWORD *)(v40 + 16);
                }
                else if ( (v44 & 0x10) != 0 && (RtlpBspFeatureBits2 & *(_QWORD *)(v40 + 16)) == *(_QWORD *)(v40 + 16) )
                {
LABEL_91:
                  KeBugCheckEx(0x5Du, 0xFFFFFFFBuLL, *(unsigned int *)v36, *(_QWORD *)v40, HIDWORD(*(_QWORD *)v40));
                }
                if ( v45 )
                  goto LABEL_91;
              }
            }
LABEL_80:
            v22 = v53;
LABEL_81:
            v40 += 32LL;
            if ( !*(_QWORD *)v40 )
              continue;
            goto LABEL_54;
          }
        }
      }
    }
  }
  *v64 = v17;
  result = (__int64)v65;
  *v65 = v18;
  v51 = v66;
  if ( v66 )
  {
    LOBYTE(v22) = BYTE4(v55);
    result = RtlpGetSpecificProcessorFlags(v22, ProcessorSignature, v16, v10);
    *v51 = result;
  }
  if ( !v57 )
  {
    RtlpBspFeatureBits = v17;
    RtlpBspFeatureBits2 = v18;
  }
  return result;
}
