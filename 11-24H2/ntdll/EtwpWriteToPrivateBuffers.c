/*
 * XREFs of EtwpWriteToPrivateBuffers @ 0x18001B700
 * Callers:
 *     EtwEventWrite @ 0x18001AD00 (EtwEventWrite.c)
 *     EtwEventWriteTransfer @ 0x18001B000 (EtwEventWriteTransfer.c)
 *     EtwpEventWriteFull @ 0x18001B350 (EtwpEventWriteFull.c)
 *     EtwEventWriteString @ 0x1800E4C30 (EtwEventWriteString.c)
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x18001A8A0 (RtlQueryPerformanceCounter.c)
 *     EtwpCheckForEnoughStackSpace @ 0x18001C728 (EtwpCheckForEnoughStackSpace.c)
 *     RtlWalkFrameChain @ 0x18001CA20 (RtlWalkFrameChain.c)
 *     EtwpDemuxUmTraceHandle @ 0x18001D750 (EtwpDemuxUmTraceHandle.c)
 *     EtwpSwitchBuffer @ 0x18001D9B0 (EtwpSwitchBuffer.c)
 *     RtlGetSystemTimePrecise @ 0x18001DB80 (RtlGetSystemTimePrecise.c)
 *     RtlResetStackOverflow @ 0x180132B4C (RtlResetStackOverflow.c)
 *     NtQueryInformationToken @ 0x180160470 (NtQueryInformationToken.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwpWriteToPrivateBuffers(
        __int64 a1,
        _OWORD *a2,
        __int16 a3,
        unsigned __int16 a4,
        __int16 a5,
        _GUID *a6,
        _OWORD *a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10)
{
  _OWORD *v10; // rsi
  __int64 v11; // r13
  unsigned int v12; // r15d
  unsigned int i; // edi
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rcx
  unsigned __int8 v17; // al
  __int64 v18; // r14
  unsigned int v19; // eax
  __int64 v20; // r10
  int v21; // edi
  unsigned int v22; // esi
  int v23; // ecx
  __int64 v24; // r13
  unsigned int v25; // edx
  unsigned __int16 v26; // bx
  unsigned int v27; // r9d
  char v28; // al
  unsigned int Reserved; // ebx
  unsigned int v30; // edi
  unsigned int v31; // r15d
  unsigned int v32; // ecx
  __int64 v33; // r14
  __int64 v34; // rcx
  unsigned __int32 v35; // edx
  __int64 v36; // rdi
  __int64 v37; // r14
  struct _TEB *v38; // rcx
  void *v40; // rsp
  __int16 v41; // di
  NTSTATUS v42; // eax
  ULONG v43; // eax
  char v44; // al
  unsigned __int64 QuadPart; // rbx
  _GUID ActivityId; // xmm0
  _WORD *v47; // r14
  unsigned int v48; // r15d
  void *v49; // rax
  _BYTE *v50; // r14
  __int64 v51; // r15
  unsigned int v52; // r12d
  int v53; // edx
  char v54; // al
  void *v55; // rcx
  unsigned __int16 *v56; // r13
  unsigned int v57; // ecx
  unsigned __int16 v58; // r15
  __int64 v59; // rsi
  unsigned __int16 *v60; // rsi
  __int64 v61; // rcx
  unsigned __int16 v62; // ax
  size_t v63; // rsi
  _WORD *v64; // rsi
  unsigned __int16 v65; // r15
  _DWORD *v66; // rdx
  void *v67; // rsi
  __int16 v68; // [rsp+0h] [rbp-810h] BYREF
  int v69; // [rsp+2h] [rbp-80Eh]
  __int16 v70; // [rsp+6h] [rbp-80Ah]
  __int64 v71; // [rsp+8h] [rbp-808h]
  PVOID v72; // [rsp+10h] [rbp-800h] BYREF
  char v73; // [rsp+810h] [rbp+0h]
  unsigned __int16 v74; // [rsp+814h] [rbp+4h]
  int v75; // [rsp+818h] [rbp+8h]
  char v76; // [rsp+81Ch] [rbp+Ch]
  unsigned __int16 v77; // [rsp+820h] [rbp+10h]
  ULONG ReturnLength; // [rsp+824h] [rbp+14h] BYREF
  int v79; // [rsp+828h] [rbp+18h]
  unsigned int v80; // [rsp+82Ch] [rbp+1Ch]
  __int64 v81; // [rsp+830h] [rbp+20h]
  _OWORD *v82; // [rsp+838h] [rbp+28h]
  unsigned int v83; // [rsp+840h] [rbp+30h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+848h] [rbp+38h] BYREF
  __int64 v85; // [rsp+850h] [rbp+40h]
  void *v86; // [rsp+858h] [rbp+48h]
  ULONG v87; // [rsp+860h] [rbp+50h]
  int v88; // [rsp+864h] [rbp+54h]
  void *v89; // [rsp+868h] [rbp+58h]
  __int64 v90; // [rsp+870h] [rbp+60h]
  __int64 v91; // [rsp+878h] [rbp+68h]
  int v92; // [rsp+880h] [rbp+70h]
  unsigned int v93; // [rsp+884h] [rbp+74h]
  void *Src; // [rsp+888h] [rbp+78h]
  _OWORD *v95; // [rsp+890h] [rbp+80h]
  __int64 v96; // [rsp+8A0h] [rbp+90h]
  _DWORD *v97; // [rsp+8B0h] [rbp+A0h]
  _BYTE TokenInformation[16]; // [rsp+8D0h] [rbp+C0h] BYREF
  _BYTE v99[80]; // [rsp+8E0h] [rbp+D0h] BYREF

  v10 = a2;
  v11 = a1;
  v91 = a1;
  v95 = a7;
  v82 = a7;
  v81 = a1;
  v85 = a9;
  v96 = a10;
  v12 = 0;
  v89 = 0LL;
  v90 = 0LL;
  v74 = 0;
  v77 = 0;
  Src = 0LL;
  v97 = (_DWORD *)(a10 + 128);
  *(_DWORD *)(a10 + 128) = 0;
  if ( a8 <= 0x80 )
  {
    if ( (*(_BYTE *)(a1 + 232) & 4) != 0 && (unsigned __int8)EtwpCheckForEnoughStackSpace() )
    {
      v40 = alloca(2064LL);
      v89 = &v68;
      v41 = 8 * RtlWalkFrameChain(&v72, 0x100u, 0);
      if ( v41 )
      {
        v90 = (unsigned __int16)(v41 + 23) & 0xFFF8;
        memset_thunk_772440563353939046(
          (char *)&v68 + (unsigned __int16)(v41 + 16),
          0,
          v90 - (unsigned __int16)(v41 + 16));
        v71 = 0LL;
        v68 = (v41 + 23) & 0xFFF8;
        v69 = 6;
        v70 = v41;
      }
      else
      {
        v89 = 0LL;
      }
    }
    for ( i = 0; ; ++i )
    {
      v80 = i;
      if ( i >= 4 )
        return v12;
      v82 = 0LL;
      v75 = 80;
      v73 = 0;
      v76 = 0;
      LOWORD(v87) = 0;
      PerformanceCounter.QuadPart = 0LL;
      ReturnLength = 0;
      memset_thunk_772440563353939046(TokenInformation, 0, 0x58uLL);
      v74 = 0;
      v79 = 0;
      v86 = 0LL;
      v14 = v11 + 24 * (i + 5LL);
      v15 = a4;
      if ( _bittest(&v15, i) )
        continue;
      v16 = *((_QWORD *)v10 + 1);
      if ( !*(_BYTE *)(v14 + 20) )
        continue;
      v17 = *(_BYTE *)(v14 + 21);
      if ( *((_BYTE *)v10 + 4) > v17 )
      {
        if ( v17 )
          continue;
      }
      if ( ((*(_BYTE *)(v14 + 16) & 0x40) == 0 || v16)
        && ((v16 & *(_QWORD *)(v14 + 8)) == 0 || (*(_QWORD *)v14 & v16) != *(_QWORD *)v14) )
      {
        continue;
      }
      v18 = *(unsigned __int8 *)(v14 + 22);
      v93 = v18;
      v19 = v18;
      v83 = v18;
      if ( !EtwpLoggerArray )
      {
        v12 = 4201;
        continue;
      }
      if ( (unsigned int)v18 >= 0x40 )
      {
        v12 = EtwpDemuxUmTraceHandle((unsigned int)v18, &v83);
        if ( v12 )
          continue;
        v19 = v83;
      }
      _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v19 + 8));
      v20 = *(_QWORD *)(EtwpLoggerArray + 16LL * v19);
      v81 = v20;
      if ( (v20 & 1) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v83 + 8));
        v12 = 4201;
        continue;
      }
      v12 = 0;
      v88 = 0;
      v21 = 104;
      if ( !v95 )
        v21 = 80;
      v22 = v21;
      if ( (*(_BYTE *)(v14 + 16) & 1) != 0 )
      {
        v42 = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 1u, TokenInformation, 0x58u, &ReturnLength);
        v20 = v81;
        if ( v42 >= 0 )
        {
          v43 = ReturnLength - 16;
          ReturnLength = v43;
          LOWORD(v43) = (v43 + 15) & 0xFFF8;
          v87 = v43;
          v73 = 1;
          v22 = v21 + (unsigned __int16)v43;
        }
      }
      v23 = *(_DWORD *)(v14 + 16);
      if ( (v23 & 4) != 0 && v89 )
      {
        v76 = 1;
        v22 += (unsigned __int16)v90;
      }
      v92 = v23 & 2;
      if ( (v23 & 2) != 0 )
        v22 += 16;
      v24 = v96 + 32LL * (unsigned int)*v97;
      v25 = 0;
      v26 = 0;
      while ( v25 < a8 )
      {
        v27 = v22;
        if ( (*(_WORD *)(v91 + 86) & 0x4000) != 0 )
          v28 = *(_BYTE *)(v85 + 16LL * v25 + 12);
        else
          v28 = 0;
        if ( v28 )
        {
          if ( v28 == 1 )
          {
            v26 += *(_WORD *)(v85 + 16LL * v25 + 8);
            v74 = v26;
            ++v79;
          }
          else if ( v28 == 2 )
          {
            Src = *(void **)(v85 + 16LL * v25);
            v77 = *(_WORD *)(v85 + 16LL * v25 + 8);
            v22 += (v77 + 15) & 0xFFFFFFF8;
          }
        }
        else
        {
          v22 += *(_DWORD *)(v85 + 16LL * v25 + 8);
        }
        if ( v22 < v27 )
        {
          v12 = 534;
          v88 = 534;
          break;
        }
        ++v25;
      }
      if ( v79 )
        v22 += (v26 + 15) & 0xFFFFFFF8;
      if ( v12 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16 * v18 + 8));
        return v12;
      }
      *(_DWORD *)(v24 + 24) = v22;
      Reserved = NtCurrentTeb()->CurrentIdealProcessor.Reserved;
      if ( v22 > *(_DWORD *)(v20 + 196) )
      {
LABEL_70:
        _InterlockedIncrement((volatile signed __int32 *)(v20 + 368));
        if ( (*(_DWORD *)(v20 + 308) & 0x10000) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v20 + 496)
                                                          + 12LL
                                                          * *(unsigned __int16 *)(*(_QWORD *)(v20 + 536) + 4LL * Reserved)
                                                          + 4));
        v36 = 0LL;
        v37 = 0LL;
LABEL_73:
        QuadPart = PerformanceCounter.QuadPart;
        goto LABEL_74;
      }
      v30 = (v22 + 7) & 0xFFFFFFF8;
      v31 = *(_DWORD *)(v20 + 192);
      v32 = *(_DWORD *)(v20 + 188);
      if ( Reserved >= v32 )
        Reserved %= v32;
      v33 = v20 + 8LL * Reserved;
      while ( 1 )
      {
        v34 = *(_QWORD *)(v33 + 560);
        if ( v34 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v34 + 12));
          if ( *(_DWORD *)(v34 + 44) == 1 && *(_DWORD *)(v34 + 8) <= v31 )
            break;
        }
LABEL_69:
        v44 = EtwpSwitchBuffer(v20, v34, Reserved);
        v20 = v81;
        if ( v44 != 1 )
          goto LABEL_70;
      }
      v35 = _InterlockedExchangeAdd((volatile signed __int32 *)(v34 + 8), v30);
      if ( v35 + v30 > v31 )
        break;
      v36 = v34 + v35;
      v37 = v34;
      if ( *(_DWORD *)(v20 + 16) == 2 )
      {
        QuadPart = RtlGetSystemTimePrecise().QuadPart;
        PerformanceCounter.QuadPart = QuadPart;
        v20 = v81;
      }
      else
      {
        if ( *(_DWORD *)(v20 + 16) != 3 )
        {
          RtlQueryPerformanceCounter(&PerformanceCounter);
          v20 = v81;
          goto LABEL_73;
        }
        QuadPart = __rdtsc();
        PerformanceCounter.QuadPart = QuadPart;
      }
LABEL_74:
      if ( !v36 )
      {
        if ( v22 > 0xFFF8 )
        {
          v12 = 534;
        }
        else
        {
          v12 = 8;
          if ( v22 > *(_DWORD *)(v20 + 196) )
            v12 = 234;
        }
        _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v93 + 8));
        return v12;
      }
      *(_QWORD *)v24 = v20;
      *(_QWORD *)(v24 + 8) = v36;
      *(_QWORD *)(v24 + 16) = v37;
      ++*v97;
      *(_DWORD *)v36 = v22 | 0xC0130000;
      *(_WORD *)(v36 + 4) = a5;
      *(_WORD *)(v36 + 6) = a3;
      v11 = v91;
      *(_OWORD *)(v36 + 24) = *(_OWORD *)(v91 + 32);
      *(_OWORD *)(v36 + 40) = *a2;
      if ( a6 )
      {
        ActivityId = *a6;
      }
      else
      {
        ActivityId = NtCurrentTeb()->ActivityId;
        QuadPart = PerformanceCounter.QuadPart;
      }
      *(_GUID *)(v36 + 64) = ActivityId;
      if ( a7 )
      {
        v47 = (_WORD *)(v36 + 80);
        v82 = (_OWORD *)(v36 + 80);
        *(_DWORD *)(v36 + 80) = 65560;
        *(_DWORD *)(v36 + 84) = 0x100000;
        *(_OWORD *)(v36 + 88) = *a7;
        *(_WORD *)(v36 + 4) |= 1u;
        v48 = 104;
        v75 = 104;
      }
      else
      {
        v47 = 0LL;
        v48 = v75;
      }
      if ( v73 == 1 )
      {
        v64 = (_WORD *)(v36 + v48);
        v65 = v87;
        *v64 = v87;
        v64[1] = 2;
        v64[3] = ReturnLength;
        v64[2] = 0;
        memmove(v64 + 4, v99, ReturnLength);
        *(_WORD *)(v36 + 4) |= 1u;
        v48 = v65 + v75;
        v75 = v48;
        if ( v47 )
          v47[2] |= 1u;
        v47 = v64;
        v82 = v64;
      }
      if ( v92 )
      {
        v66 = (_DWORD *)(v36 + v48);
        *v66 = 196624;
        v66[1] = 0x40000;
        v66[2] = NtCurrentPeb()->SessionId;
        *(_WORD *)(v36 + 4) |= 1u;
        v48 += 16;
        v75 = v48;
        if ( v47 )
          v47[2] |= 1u;
        v47 = v66;
        v82 = v66;
        QuadPart = PerformanceCounter.QuadPart;
      }
      if ( v76 == 1 )
      {
        v67 = (void *)(v36 + v48);
        memmove(v67, v89, (unsigned __int16)v90);
        *(_WORD *)(v36 + 4) |= 1u;
        v48 += (unsigned __int16)v90;
        v75 = v48;
        if ( v47 )
          v47[2] |= 1u;
        v47 = v67;
        v82 = v67;
      }
      v49 = Src;
      if ( Src )
      {
        v56 = (unsigned __int16 *)(v36 + v48);
        v57 = v77;
        v58 = (v77 + 15) & 0xFFF8;
        *v56 = v58;
        *(_DWORD *)(v56 + 1) = 12;
        v56[3] = v57;
        v59 = v57;
        memmove(v56 + 4, v49, v57);
        memset_thunk_772440563353939046((char *)v56 + v59 + 8, 0, (unsigned __int16)(v58 - v77 - 8));
        *(_WORD *)(v36 + 4) |= 1u;
        v48 = *v56 + v75;
        v75 = v48;
        if ( v82 )
          *((_WORD *)v82 + 2) |= 1u;
        v47 = v56;
        v11 = v91;
      }
      if ( v79 )
      {
        v60 = (unsigned __int16 *)(v36 + v48);
        v61 = v74;
        v62 = (v74 + 15) & 0xFFF8;
        *v60 = v62;
        *(_DWORD *)(v60 + 1) = 11;
        v60[3] = v61;
        v86 = v60 + 4;
        memset_thunk_772440563353939046((char *)v60 + v61 + 8, 0, (unsigned __int16)(v62 - v61 - 8));
        *(_WORD *)(v36 + 4) |= 1u;
        v75 = *v60 + v48;
        if ( v47 )
          v47[2] |= 1u;
      }
      if ( a8 )
      {
        v50 = (_BYTE *)(v85 + 12);
        v51 = a8;
        v52 = v75;
        do
        {
          v53 = *((_DWORD *)v50 - 1);
          if ( (*(_WORD *)(v11 + 86) & 0x4000) != 0 )
            v54 = *v50;
          else
            v54 = 0;
          if ( v54 )
          {
            if ( v54 == 1 )
            {
              v63 = *((unsigned int *)v50 - 1);
              memmove(v86, *(const void **)(v50 - 12), v63);
              v86 = (char *)v86 + v63;
            }
            else if ( v54 == 3 && v53 == 8 )
            {
              QuadPart = **(_QWORD **)(v50 - 12);
            }
          }
          else
          {
            v55 = (void *)(v36 + v52);
            v52 += v53;
            memmove(v55, *(const void **)(v50 - 12), *((unsigned int *)v50 - 1));
          }
          v50 += 16;
          --v51;
        }
        while ( v51 );
      }
      *(_QWORD *)(v36 + 16) = QuadPart;
      if ( *(_DWORD *)(v81 + 16) == 3 )
        *(_QWORD *)(v36 + 56) = QuadPart;
      else
        *(_QWORD *)(v36 + 56) = __rdtsc();
      v38 = NtCurrentTeb();
      *(_DWORD *)(v36 + 8) = v38->ClientId.UniqueThread;
      *(_DWORD *)(v36 + 12) = v38->ClientId.UniqueProcess;
      v12 = v88;
      i = v80;
      v10 = a2;
    }
    if ( v35 <= v31 )
      *(_DWORD *)(v34 + 4) = v35;
    goto LABEL_69;
  }
  return 87LL;
}
