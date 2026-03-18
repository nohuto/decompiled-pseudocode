/*
 * XREFs of EtwpEnumerateAddressSpace @ 0x1409690F0
 * Callers:
 *     EtwpProcessEnumCallback @ 0x14094ACC0 (EtwpProcessEnumCallback.c)
 *     EtwTraceProcess @ 0x14094CC44 (EtwTraceProcess.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     EtwpLogKernelEvent @ 0x140257180 (EtwpLogKernelEvent.c)
 *     KeAreInterruptsEnabled @ 0x140257E20 (KeAreInterruptsEnabled.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     EtwpTraceImageUnload @ 0x1403C4AF8 (EtwpTraceImageUnload.c)
 *     RtlImageNtHeader @ 0x14043E310 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140967B50 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     ObQueryNameStringMode @ 0x140969A30 (ObQueryNameStringMode.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpEnumerateAddressSpace(PRKPROCESS PROCESS, __int64 a2, _DWORD *a3)
{
  int v3; // r12d
  __int64 v4; // r13
  struct _KPROCESS *v5; // r9
  int v6; // esi
  int v7; // edi
  bool v8; // al
  __int64 v9; // rdx
  char v10; // cl
  unsigned __int16 *Pool2; // r15
  __int16 v12; // cx
  __m128i *v13; // rax
  __m128i *i; // rbx
  __int64 v15; // rcx
  int v16; // r14d
  unsigned __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // r13
  unsigned __int8 CurrentIrql; // al
  bool v21; // cf
  int v22; // eax
  int NameStringMode; // edi
  int v24; // r14d
  __int64 v25; // r15
  unsigned __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  void *v31; // r9
  int v32; // edi
  __m128i v33; // xmm2
  __m128i v34; // xmm3
  unsigned __int64 v35; // rcx
  unsigned int v36; // ecx
  unsigned int v37; // eax
  int v38; // eax
  __int64 v39; // [rsp+40h] [rbp-1A8h]
  __int16 v40; // [rsp+50h] [rbp-198h]
  int v41; // [rsp+54h] [rbp-194h] BYREF
  int v42; // [rsp+58h] [rbp-190h]
  __int16 v43; // [rsp+5Ch] [rbp-18Ch]
  __int16 v44; // [rsp+60h] [rbp-188h]
  __int16 v45; // [rsp+64h] [rbp-184h]
  int v46; // [rsp+68h] [rbp-180h]
  unsigned int v47; // [rsp+6Ch] [rbp-17Ch]
  int v48; // [rsp+70h] [rbp-178h]
  int v49; // [rsp+74h] [rbp-174h]
  int v50; // [rsp+78h] [rbp-170h]
  int v51; // [rsp+7Ch] [rbp-16Ch]
  int v52; // [rsp+80h] [rbp-168h]
  int v53; // [rsp+84h] [rbp-164h]
  int v54; // [rsp+88h] [rbp-160h]
  int v55; // [rsp+8Ch] [rbp-15Ch]
  int v56; // [rsp+90h] [rbp-158h]
  int v57; // [rsp+94h] [rbp-154h]
  unsigned __int16 *v58; // [rsp+98h] [rbp-150h]
  PRKPROCESS v59; // [rsp+A0h] [rbp-148h]
  __int64 v60; // [rsp+A8h] [rbp-140h]
  __int64 v61; // [rsp+B0h] [rbp-138h]
  int v62; // [rsp+B8h] [rbp-130h]
  int v63; // [rsp+BCh] [rbp-12Ch]
  __int64 v64; // [rsp+C0h] [rbp-128h] BYREF
  __int64 v65; // [rsp+C8h] [rbp-120h]
  __int64 v66; // [rsp+D0h] [rbp-118h]
  unsigned __int16 *v67; // [rsp+D8h] [rbp-110h]
  __int64 v68; // [rsp+E0h] [rbp-108h]
  __int64 v69; // [rsp+E8h] [rbp-100h]
  __int64 v70; // [rsp+F0h] [rbp-F8h]
  __m128i *v71; // [rsp+F8h] [rbp-F0h]
  PRKPROCESS v72; // [rsp+100h] [rbp-E8h]
  __int64 v73; // [rsp+108h] [rbp-E0h]
  PVOID P; // [rsp+110h] [rbp-D8h]
  _QWORD v75[2]; // [rsp+120h] [rbp-C8h] BYREF
  int Flink; // [rsp+130h] [rbp-B8h]
  __int32 v77; // [rsp+134h] [rbp-B4h]
  int v78; // [rsp+138h] [rbp-B0h]
  char v79; // [rsp+13Ch] [rbp-ACh]
  char v80; // [rsp+13Dh] [rbp-ABh]
  __int16 v81; // [rsp+13Eh] [rbp-AAh]
  __int64 v82; // [rsp+140h] [rbp-A8h]
  __int64 v83; // [rsp+148h] [rbp-A0h]
  __int64 v84; // [rsp+150h] [rbp-98h]
  __int128 v85; // [rsp+160h] [rbp-88h] BYREF
  __m128i *v86; // [rsp+170h] [rbp-78h] BYREF
  unsigned int v87; // [rsp+178h] [rbp-70h]
  int v88; // [rsp+17Ch] [rbp-6Ch]
  _QWORD v89[3]; // [rsp+180h] [rbp-68h] BYREF
  int v90; // [rsp+198h] [rbp-50h]
  int v91; // [rsp+19Ch] [rbp-4Ch]
  __m128i v92; // [rsp+1A0h] [rbp-48h]

  v4 = a2;
  v61 = a2;
  v5 = PROCESS;
  v59 = PROCESS;
  v72 = PROCESS;
  v73 = a2;
  v6 = 0;
  v41 = 0;
  v85 = 0LL;
  v64 = 0LL;
  if ( a3 && (*a3 & 4) != 0 )
  {
    v7 = 1;
    v42 = 1;
  }
  else
  {
    v7 = 0;
    v42 = 0;
  }
  v8 = a3 && (a3[1] & 0x8000) != 0;
  v46 = v7;
  if ( v8 )
  {
    v7 |= 4u;
    v42 = v7;
    v46 = v7;
  }
  if ( a2 && a3 && (*a3 & 0x8000) != 0 )
  {
    v7 |= 2u;
    v42 = v7;
    v46 = v7;
  }
  if ( !v7 )
  {
    Pool2 = 0LL;
    goto LABEL_49;
  }
  if ( a2 )
  {
    v9 = *(_QWORD *)(a2 + 32);
    v60 = v9;
    v68 = v9;
    v10 = *(_BYTE *)(v4 + 64);
    Pool2 = *(unsigned __int16 **)(v4 + 16);
    LOWORD(v9) = 5124 - (v10 != 0);
    v49 = v9;
    v43 = v9;
    LOWORD(v3) = 1064 - (v10 != 0);
    v12 = -(v10 != 0);
    v50 = (unsigned __int16)(v12 + 641);
    v45 = v12 + 641;
  }
  else
  {
    Pool2 = (unsigned __int16 *)ExAllocatePool2(0x40uLL);
    v3 = 1062;
    v50 = 611;
    v45 = 611;
    v60 = 0LL;
    v68 = 0LL;
    v49 = 0;
    v43 = 0;
    v5 = v59;
  }
  v44 = v3;
  v48 = v3;
  v67 = Pool2;
  v58 = Pool2;
  if ( Pool2 || (v7 &= ~1u, v42 = v7, (v46 = v7) != 0) )
  {
    v65 = 0LL;
    v52 = 0;
    v66 = 0LL;
    v53 = 0;
    v70 = 0LL;
    v40 = 0;
    v47 = 0;
    v13 = (__m128i *)MmEnumerateAddressSpaceAndReferenceImages(v5, v7);
    P = v13;
    if ( v13 )
    {
      for ( i = v13; ; i += 3 )
      {
        while ( 1 )
        {
          v71 = i;
          if ( !i->m128i_i64[0] )
          {
            ExFreePoolWithTag(P, 0);
            goto LABEL_49;
          }
          v15 = i->m128i_i64[0] & 3;
          i->m128i_i64[0] &= 0xFFFFFFFFFFFFFFFCuLL;
          v16 = 0;
          v57 = 0;
          if ( !v15 )
            break;
          if ( v15 != 2 )
          {
            v40 = v3;
            v47 = 0x8000;
            v36 = 44;
            v16 = 3;
LABEL_54:
            v41 = v36;
            goto LABEL_55;
          }
          v40 = v50;
          v47 = 536903680;
          if ( v4 )
          {
            v36 = 32;
            goto LABEL_54;
          }
          v41 = 24;
          i[1].m128i_i32[1] = 0x8000;
          v36 = v41;
LABEL_55:
          if ( !v4 )
          {
            v38 = 6297858;
            if ( v16 )
              v38 = v16 | 0x601900;
            v86 = i;
            v87 = v36;
            v88 = 0;
            EtwTraceKernelEvent((int)&v86, 1, v47, v40, v38);
            goto LABEL_44;
          }
          v37 = 6297602;
          if ( v16 )
            v37 = v16 | 0x601800;
          *(_QWORD *)&v85 = i;
          *((_QWORD *)&v85 + 1) = v36;
          EtwpLogKernelEvent((__int64)&v85, *(_QWORD *)(v60 + 1360), *(_DWORD *)v60, 1u, v40, v37);
          i += 3;
          LOBYTE(v7) = v42;
          LOWORD(v3) = v48;
        }
        if ( (v7 & 2) != 0 )
        {
          v56 = 1;
          v35 = i->m128i_u64[1];
          v65 = (v35 >> 1) & 0x1F;
          v52 = (v35 >> 1) & 0x1F;
          v70 = i[2].m128i_i64[0];
          i->m128i_i64[1] = v35 & 0xFFFFFFFFFFFFFFC0uLL;
          LODWORD(v35) = v35 & 1;
          v66 = (unsigned int)v35;
          v53 = v35;
        }
        else
        {
          v56 = 0;
        }
        v17 = i->m128i_u64[1];
        v18 = (v17 >> 6) & 0xF;
        v62 = (v17 >> 6) & 0xF;
        v19 = (v17 >> 10) & 7;
        v63 = (v17 >> 10) & 7;
        i->m128i_i64[1] = v17 & 0xFFFFFFFFFFFFE03FuLL;
        v64 = 0LL;
        if ( KeGetCurrentThread()->SpecialApcDisable
          || !KeAreInterruptsEnabled()
          || (CurrentIrql = KeGetCurrentIrql(), v21 = CurrentIrql == 0, v22 = 0, !v21) )
        {
          v22 = 1;
        }
        if ( v22 )
          NT_ASSERT("KeAreAllApcsDisabled() == 0");
        if ( !FltMgrCallbacks
          || (NameStringMode = guard_dispatch_icall_no_overrides(i->m128i_i64[0], 1024LL, Pool2, &v64),
              v51 = NameStringMode,
              NameStringMode < 0) )
        {
          NameStringMode = ObQueryNameStringMode(i->m128i_i64[0], (_DWORD)Pool2, 0x2000, (unsigned int)&v41, 0);
          v51 = NameStringMode;
        }
        v55 = 0;
        v24 = i[2].m128i_i32[2];
        v54 = v24;
        v25 = i[1].m128i_i64[0];
        v69 = v25;
        v26 = RtlImageNtHeader(i->m128i_u64[1]);
        if ( v26 )
        {
          v24 = *(_DWORD *)(v26 + 88);
          v54 = v24;
          v6 = *(_DWORD *)(v26 + 8);
          v55 = v6;
          v25 = *(_QWORD *)(v26 + 48);
          v69 = v25;
        }
        v29 = v61;
        if ( NameStringMode < 0 )
          break;
        if ( v61 )
        {
          memset_0(v75, 0, 0x40uLL);
          Pool2 = v58;
          if ( !v58 )
            goto LABEL_46;
          v29 = *v58;
          if ( !(_WORD)v29 )
            goto LABEL_46;
          v30 = *((_QWORD *)v58 + 1);
          v6 = 0;
          if ( v30 )
          {
            Flink = (int)v59[1].Header.WaitListHead.Flink;
            v75[0] = i->m128i_i64[1];
            v75[1] = i[1].m128i_i64[1];
            v77 = i[2].m128i_i32[2];
            v78 = 0;
            v79 = v18;
            v80 = v19;
            v82 = i[1].m128i_i64[0];
            v81 = 0;
            v83 = 0LL;
            v84 = 0LL;
            v89[0] = v75;
            v89[1] = 56LL;
            v89[2] = v30;
            v90 = v29;
            v91 = 0;
            v92.m128i_i64[0] = (__int64)&EtwpNull;
            v92.m128i_i64[1] = 2LL;
            EtwpLogKernelEvent((__int64)v89, *(_QWORD *)(v60 + 1360), *(_DWORD *)v60, 3u, v49, 0x501803u);
          }
        }
        else
        {
          v39 = v25;
          Pool2 = v58;
          EtwpTraceImageUnload(v58, (__int64)v59, i->m128i_i64[1], i[1].m128i_i64[1], v24, v6, v18, v19, v39, 0);
          v6 = 0;
        }
LABEL_39:
        if ( v64 )
          guard_dispatch_icall_no_overrides(v64, v29, v27, v28);
        v31 = (void *)i->m128i_i64[0];
        v32 = v56;
        if ( v56 )
        {
          v33 = *i;
          v34 = i[1];
          v92 = i[2];
          *i = 0LL;
          i[1] = 0LL;
          i[2] = 0LL;
          i[2].m128i_i32[2] = (__int32)v59[1].Header.WaitListHead.Flink;
          i->m128i_i64[1] = *(_QWORD *)(v33.m128i_i64[0] + 24);
          i->m128i_i64[0] = _mm_srli_si128(v33, 8).m128i_u64[0];
          i[1].m128i_i64[1] = _mm_srli_si128(v34, 8).m128i_u64[0];
          i[2].m128i_i64[0] = v70;
          i[1].m128i_i64[0] = ((unsigned __int64)(unsigned int)v65 << 48) & 0xFF5FFFFFFFFFFFFFuLL ^ ((unsigned __int64)(unsigned int)v66 << 53) & 0x20000000000000LL ^ (i[1].m128i_i64[0] ^ ((unsigned __int64)(unsigned int)v65 << 48)) & 0xFF40FFFFFFFFFFFFuLL | 0x40000000000000LL;
          v40 = v48;
          v47 = 0x8000;
          v16 = 3;
          v41 = 44;
        }
        else
        {
          v16 = v57;
        }
        ObfDereferenceObject(v31);
        v4 = v61;
        if ( v32 )
        {
          v36 = v41;
          goto LABEL_55;
        }
LABEL_44:
        LOBYTE(v7) = v42;
        LOWORD(v3) = v48;
      }
      Pool2 = v58;
LABEL_46:
      v6 = 0;
      goto LABEL_39;
    }
  }
LABEL_49:
  if ( !v4 && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
}
