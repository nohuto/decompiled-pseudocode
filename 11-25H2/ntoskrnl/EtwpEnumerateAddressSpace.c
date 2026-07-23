/*
 * XREFs of EtwpEnumerateAddressSpace @ 0x1408C04E0
 * Callers:
 *     EtwpProcessEnumCallback @ 0x1408BEE80 (EtwpProcessEnumCallback.c)
 *     EtwTraceProcess @ 0x140920FCC (EtwTraceProcess.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     EtwpLogKernelEvent @ 0x1402561B0 (EtwpLogKernelEvent.c)
 *     KeAreInterruptsEnabled @ 0x140256C40 (KeAreInterruptsEnabled.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 *     EtwpTraceImageUnload @ 0x140447EF8 (EtwpTraceImageUnload.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObQueryNameStringMode @ 0x1408C0E20 (ObQueryNameStringMode.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1409F5620 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpEnumerateAddressSpace(PRKPROCESS PROCESS, __int64 a2, _DWORD *a3)
{
  int v3; // r12d
  __int64 v4; // r13
  struct _KPROCESS *v5; // r9
  int TimeDateStamp; // esi
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
  int CheckSum; // r14d
  unsigned __int64 ImageBase; // r15
  PIMAGE_NT_HEADERS v26; // rax
  int v27; // edx
  __int64 v28; // rcx
  void *v29; // r9
  int v30; // edi
  __m128i v31; // xmm2
  __m128i v32; // xmm3
  unsigned __int64 v33; // rcx
  unsigned int v34; // ecx
  unsigned int v35; // eax
  int v36; // eax
  __int64 v37; // [rsp+40h] [rbp-1A8h]
  __int16 v38; // [rsp+50h] [rbp-198h]
  int v39; // [rsp+54h] [rbp-194h] BYREF
  int v40; // [rsp+58h] [rbp-190h]
  __int16 v41; // [rsp+5Ch] [rbp-18Ch]
  __int16 v42; // [rsp+60h] [rbp-188h]
  __int16 v43; // [rsp+64h] [rbp-184h]
  int v44; // [rsp+68h] [rbp-180h]
  unsigned int v45; // [rsp+6Ch] [rbp-17Ch]
  int v46; // [rsp+70h] [rbp-178h]
  int v47; // [rsp+74h] [rbp-174h]
  int v48; // [rsp+78h] [rbp-170h]
  int v49; // [rsp+7Ch] [rbp-16Ch]
  int v50; // [rsp+80h] [rbp-168h]
  int v51; // [rsp+84h] [rbp-164h]
  int v52; // [rsp+88h] [rbp-160h]
  int v53; // [rsp+8Ch] [rbp-15Ch]
  int v54; // [rsp+90h] [rbp-158h]
  int v55; // [rsp+94h] [rbp-154h]
  unsigned __int16 *v56; // [rsp+98h] [rbp-150h]
  PRKPROCESS v57; // [rsp+A0h] [rbp-148h]
  __int64 v58; // [rsp+A8h] [rbp-140h]
  __int64 v59; // [rsp+B0h] [rbp-138h]
  int v60; // [rsp+B8h] [rbp-130h]
  int v61; // [rsp+BCh] [rbp-12Ch]
  __int64 v62; // [rsp+C0h] [rbp-128h]
  __int64 v63; // [rsp+C8h] [rbp-120h]
  __int64 v64; // [rsp+D0h] [rbp-118h]
  unsigned __int16 *v65; // [rsp+D8h] [rbp-110h]
  __int64 v66; // [rsp+E0h] [rbp-108h]
  unsigned __int64 v67; // [rsp+E8h] [rbp-100h]
  __int64 v68; // [rsp+F0h] [rbp-F8h]
  __m128i *v69; // [rsp+F8h] [rbp-F0h]
  PRKPROCESS v70; // [rsp+100h] [rbp-E8h]
  __int64 v71; // [rsp+108h] [rbp-E0h]
  PVOID P; // [rsp+110h] [rbp-D8h]
  _QWORD v73[2]; // [rsp+120h] [rbp-C8h] BYREF
  int Flink; // [rsp+130h] [rbp-B8h]
  int v75; // [rsp+134h] [rbp-B4h]
  int v76; // [rsp+138h] [rbp-B0h]
  char v77; // [rsp+13Ch] [rbp-ACh]
  char v78; // [rsp+13Dh] [rbp-ABh]
  __int16 v79; // [rsp+13Eh] [rbp-AAh]
  __int64 v80; // [rsp+140h] [rbp-A8h]
  __int64 v81; // [rsp+148h] [rbp-A0h]
  __int64 v82; // [rsp+150h] [rbp-98h]
  __int128 v83; // [rsp+160h] [rbp-88h] BYREF
  __m128i *v84; // [rsp+170h] [rbp-78h] BYREF
  unsigned int v85; // [rsp+178h] [rbp-70h]
  int v86; // [rsp+17Ch] [rbp-6Ch]
  _QWORD v87[3]; // [rsp+180h] [rbp-68h] BYREF
  int v88; // [rsp+198h] [rbp-50h]
  int v89; // [rsp+19Ch] [rbp-4Ch]
  __m128i v90; // [rsp+1A0h] [rbp-48h]

  v4 = a2;
  v59 = a2;
  v5 = PROCESS;
  v57 = PROCESS;
  v70 = PROCESS;
  v71 = a2;
  TimeDateStamp = 0;
  v39 = 0;
  v83 = 0LL;
  v62 = 0LL;
  if ( a3 && (*a3 & 4) != 0 )
  {
    v7 = 1;
    v40 = 1;
  }
  else
  {
    v7 = 0;
    v40 = 0;
  }
  v8 = a3 && (a3[1] & 0x8000) != 0;
  v44 = v7;
  if ( v8 )
  {
    v7 |= 4u;
    v40 = v7;
    v44 = v7;
  }
  if ( a2 && a3 && (*a3 & 0x8000) != 0 )
  {
    v7 |= 2u;
    v40 = v7;
    v44 = v7;
  }
  if ( !v7 )
  {
    Pool2 = 0LL;
    goto LABEL_49;
  }
  if ( a2 )
  {
    v9 = *(_QWORD *)(a2 + 32);
    v58 = v9;
    v66 = v9;
    v10 = *(_BYTE *)(v4 + 64);
    Pool2 = *(unsigned __int16 **)(v4 + 16);
    LOWORD(v9) = 5124 - (v10 != 0);
    v47 = v9;
    v41 = v9;
    LOWORD(v3) = 1064 - (v10 != 0);
    v12 = -(v10 != 0);
    v48 = (unsigned __int16)(v12 + 641);
    v43 = v12 + 641;
  }
  else
  {
    Pool2 = (unsigned __int16 *)ExAllocatePool2(0x40uLL);
    v3 = 1062;
    v48 = 611;
    v43 = 611;
    v58 = 0LL;
    v66 = 0LL;
    v47 = 0;
    v41 = 0;
    v5 = v57;
  }
  v42 = v3;
  v46 = v3;
  v65 = Pool2;
  v56 = Pool2;
  if ( Pool2 || (v7 &= ~1u, v40 = v7, (v44 = v7) != 0) )
  {
    v63 = 0LL;
    v50 = 0;
    v64 = 0LL;
    v51 = 0;
    v68 = 0LL;
    v38 = 0;
    v45 = 0;
    v13 = (__m128i *)MmEnumerateAddressSpaceAndReferenceImages(v5);
    P = v13;
    if ( v13 )
    {
      for ( i = v13; ; i += 3 )
      {
        while ( 1 )
        {
          v69 = i;
          if ( !i->m128i_i64[0] )
          {
            ExFreePoolWithTag(P, 0);
            goto LABEL_49;
          }
          v15 = i->m128i_i64[0] & 3;
          i->m128i_i64[0] &= 0xFFFFFFFFFFFFFFFCuLL;
          v16 = 0;
          v55 = 0;
          if ( !v15 )
            break;
          if ( v15 != 2 )
          {
            v38 = v3;
            v45 = 0x8000;
            v34 = 44;
            v16 = 3;
LABEL_54:
            v39 = v34;
            goto LABEL_55;
          }
          v38 = v48;
          v45 = 536903680;
          if ( v4 )
          {
            v34 = 32;
            goto LABEL_54;
          }
          v39 = 24;
          i[1].m128i_i32[1] = 0x8000;
          v34 = v39;
LABEL_55:
          if ( !v4 )
          {
            v36 = 6297858;
            if ( v16 )
              v36 = v16 | 0x601900;
            v84 = i;
            v85 = v34;
            v86 = 0;
            EtwTraceKernelEvent((int)&v84, 1, v45, v38, v36);
            goto LABEL_44;
          }
          v35 = 6297602;
          if ( v16 )
            v35 = v16 | 0x601800;
          *(_QWORD *)&v83 = i;
          *((_QWORD *)&v83 + 1) = v34;
          EtwpLogKernelEvent((struct _KTHREAD *)&v83, *(_QWORD *)(v58 + 1360), *(_DWORD *)v58, 1u, v38, v35);
          i += 3;
          LOBYTE(v7) = v40;
          LOWORD(v3) = v46;
        }
        if ( (v7 & 2) != 0 )
        {
          v54 = 1;
          v33 = i->m128i_u64[1];
          v63 = (v33 >> 1) & 0x1F;
          v50 = (v33 >> 1) & 0x1F;
          v68 = i[2].m128i_i64[0];
          i->m128i_i64[1] = v33 & 0xFFFFFFFFFFFFFFC0uLL;
          LODWORD(v33) = v33 & 1;
          v64 = (unsigned int)v33;
          v51 = v33;
        }
        else
        {
          v54 = 0;
        }
        v17 = i->m128i_u64[1];
        v18 = (v17 >> 6) & 0xF;
        v60 = (v17 >> 6) & 0xF;
        v19 = (v17 >> 10) & 7;
        v61 = (v17 >> 10) & 7;
        i->m128i_i64[1] = v17 & 0xFFFFFFFFFFFFE03FuLL;
        v62 = 0LL;
        if ( KeGetCurrentThread()->SpecialApcDisable
          || !KeAreInterruptsEnabled()
          || (CurrentIrql = KeGetCurrentIrql(), v21 = CurrentIrql == 0, v22 = 0, !v21) )
        {
          v22 = 1;
        }
        if ( v22 )
          NT_ASSERT("KeAreAllApcsDisabled() == 0");
        if ( !FltMgrCallbacks
          || (NameStringMode = guard_dispatch_icall_no_overrides(i->m128i_i64[0]),
              v49 = NameStringMode,
              NameStringMode < 0) )
        {
          NameStringMode = ObQueryNameStringMode(i->m128i_i64[0], (_DWORD)Pool2, 0x2000, (unsigned int)&v39, 0);
          v49 = NameStringMode;
        }
        v53 = 0;
        CheckSum = i[2].m128i_i32[2];
        v52 = CheckSum;
        ImageBase = i[1].m128i_u64[0];
        v67 = ImageBase;
        v26 = RtlImageNtHeader((PVOID)i->m128i_i64[1]);
        if ( v26 )
        {
          CheckSum = v26->OptionalHeader.CheckSum;
          v52 = CheckSum;
          TimeDateStamp = v26->FileHeader.TimeDateStamp;
          v53 = TimeDateStamp;
          ImageBase = v26->OptionalHeader.ImageBase;
          v67 = ImageBase;
        }
        if ( NameStringMode < 0 )
          break;
        if ( v59 )
        {
          memset_0(v73, 0, 0x40uLL);
          Pool2 = v56;
          if ( !v56 )
            goto LABEL_46;
          v27 = *v56;
          if ( !(_WORD)v27 )
            goto LABEL_46;
          v28 = *((_QWORD *)v56 + 1);
          TimeDateStamp = 0;
          if ( v28 )
          {
            Flink = (int)v57[1].Header.WaitListHead.Flink;
            v73[0] = i->m128i_i64[1];
            v73[1] = i[1].m128i_i64[1];
            v75 = i[2].m128i_i32[2];
            v76 = 0;
            v77 = v18;
            v78 = v19;
            v80 = i[1].m128i_i64[0];
            v79 = 0;
            v81 = 0LL;
            v82 = 0LL;
            v87[0] = v73;
            v87[1] = 56LL;
            v87[2] = v28;
            v88 = v27;
            v89 = 0;
            v90.m128i_i64[0] = (__int64)&EtwpNull;
            v90.m128i_i64[1] = 2LL;
            EtwpLogKernelEvent((struct _KTHREAD *)v87, *(_QWORD *)(v58 + 1360), *(_DWORD *)v58, 3u, v47, 0x501803u);
          }
        }
        else
        {
          v37 = ImageBase;
          Pool2 = v56;
          EtwpTraceImageUnload(
            v56,
            (__int64)v57,
            i->m128i_i64[1],
            i[1].m128i_i64[1],
            CheckSum,
            TimeDateStamp,
            v18,
            v19,
            v37,
            0);
          TimeDateStamp = 0;
        }
LABEL_39:
        if ( v62 )
          guard_dispatch_icall_no_overrides(v62);
        v29 = (void *)i->m128i_i64[0];
        v30 = v54;
        if ( v54 )
        {
          v31 = *i;
          v32 = i[1];
          v90 = i[2];
          *i = 0LL;
          i[1] = 0LL;
          i[2] = 0LL;
          i[2].m128i_i32[2] = (__int32)v57[1].Header.WaitListHead.Flink;
          i->m128i_i64[1] = *(_QWORD *)(v31.m128i_i64[0] + 24);
          i->m128i_i64[0] = _mm_srli_si128(v31, 8).m128i_u64[0];
          i[1].m128i_i64[1] = _mm_srli_si128(v32, 8).m128i_u64[0];
          i[2].m128i_i64[0] = v68;
          i[1].m128i_i64[0] = ((unsigned __int64)(unsigned int)v63 << 48) & 0xFF5FFFFFFFFFFFFFuLL ^ ((unsigned __int64)(unsigned int)v64 << 53) & 0x20000000000000LL ^ (i[1].m128i_i64[0] ^ ((unsigned __int64)(unsigned int)v63 << 48)) & 0xFF40FFFFFFFFFFFFuLL | 0x40000000000000LL;
          v38 = v46;
          v45 = 0x8000;
          v16 = 3;
          v39 = 44;
        }
        else
        {
          v16 = v55;
        }
        ObfDereferenceObject(v29);
        v4 = v59;
        if ( v30 )
        {
          v34 = v39;
          goto LABEL_55;
        }
LABEL_44:
        LOBYTE(v7) = v40;
        LOWORD(v3) = v46;
      }
      Pool2 = v56;
LABEL_46:
      TimeDateStamp = 0;
      goto LABEL_39;
    }
  }
LABEL_49:
  if ( !v4 && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
}
