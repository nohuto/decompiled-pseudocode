/*
 * XREFs of HalMapTransferEx @ 0x140391AE0
 * Callers:
 *     HalpAllocateAdapterCallbackV3 @ 0x140392140 (HalpAllocateAdapterCallbackV3.c)
 * Callees:
 *     IoFreeMdl @ 0x140267750 (IoFreeMdl.c)
 *     HalpDmaFlushBuffer @ 0x14038D450 (HalpDmaFlushBuffer.c)
 *     IoMapTransferInternal @ 0x140390384 (IoMapTransferInternal.c)
 *     HalpDmaCheckMdlAccessibility @ 0x140391F30 (HalpDmaCheckMdlAccessibility.c)
 *     HalpDmaControllerProgramChannel @ 0x140391FD8 (HalpDmaControllerProgramChannel.c)
 *     HalpDmaControllerQueryMaxFragments @ 0x1403932D4 (HalpDmaControllerQueryMaxFragments.c)
 *     HalpDmaFlushDriverMdl @ 0x14053C5C0 (HalpDmaFlushDriverMdl.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalMapTransferEx(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        char a7,
        _DWORD *a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v11; // r13
  bool v14; // zf
  __int64 v15; // rsi
  _DWORD *v16; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // r15
  unsigned int v21; // eax
  unsigned int v22; // r14d
  unsigned __int64 v23; // r12
  unsigned int *v24; // r12
  unsigned __int64 v25; // rcx
  unsigned int v26; // r12d
  int v27; // r9d
  unsigned int v28; // r8d
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  unsigned int v31; // edx
  __int16 v32; // bx
  __int64 v33; // r9
  __int64 v34; // rcx
  _DWORD *v35; // rax
  char v36; // bl
  unsigned int MaxFragments; // eax
  _DWORD *v38; // rax
  unsigned int v39; // eax
  PMDL v40; // rsi
  unsigned int v41; // r13d
  __int64 v42; // rdx
  unsigned int v43; // r10d
  __int64 *v44; // r11
  unsigned int v45; // edx
  __int64 v46; // r8
  unsigned int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rcx
  unsigned int v51; // eax
  unsigned int v52; // ebx
  struct _MDL *Next; // rbx
  int v54; // [rsp+40h] [rbp-69h]
  unsigned int v55; // [rsp+44h] [rbp-65h] BYREF
  unsigned int v56; // [rsp+48h] [rbp-61h]
  unsigned int v57; // [rsp+4Ch] [rbp-5Dh]
  unsigned __int64 v58; // [rsp+50h] [rbp-59h]
  __int64 *v59; // [rsp+58h] [rbp-51h]
  unsigned __int64 v60; // [rsp+60h] [rbp-49h]
  __int64 v61; // [rsp+68h] [rbp-41h]
  PMDL Mdl; // [rsp+70h] [rbp-39h] BYREF
  __int128 v63; // [rsp+78h] [rbp-31h] BYREF
  unsigned __int64 v64; // [rsp+88h] [rbp-21h]
  __int64 v65; // [rsp+90h] [rbp-19h]
  __int128 v66; // [rsp+98h] [rbp-11h]
  __int64 v67; // [rsp+A8h] [rbp-1h]
  char v68; // [rsp+F0h] [rbp+47h] BYREF
  unsigned __int64 v69; // [rsp+100h] [rbp+57h]

  v69 = a3;
  v11 = 0LL;
  v68 = 0;
  Mdl = 0LL;
  v67 = 0LL;
  v14 = *(_DWORD *)(a1 + 520) == 3;
  v15 = a2;
  LODWORD(v64) = 0;
  v66 = 0LL;
  v59 = 0LL;
  v63 = 0LL;
  if ( v14 && !a3 )
    return 3221225485LL;
  v65 = *(_QWORD *)(a1 + 512);
  v16 = a6;
  *(_BYTE *)(a1 + 524) = 1;
  v57 = 0;
  if ( *v16 )
  {
    if ( KeGetCurrentIrql() != 15 )
    {
      v18 = *(_QWORD *)(a1 + 360);
      if ( v18 )
      {
        if ( (*(_DWORD *)(v18 + 12) & 1) != 0 )
          return 3221225760LL;
      }
    }
    if ( !a2 )
      return 3221225485LL;
    while ( 1 )
    {
      v19 = *(unsigned int *)(v15 + 40);
      if ( a4 < v19 )
        break;
      v15 = *(_QWORD *)v15;
      a4 -= v19;
      if ( !v15 )
        return 3221225485LL;
    }
    v20 = (__int64)a8;
    if ( a8 )
    {
      v21 = a9;
      if ( a9 < 0x28 )
        return 3221225485LL;
    }
    else
    {
      if ( *(_BYTE *)(a1 + 441) )
        return 3221225485LL;
      v21 = *(_DWORD *)(a1 + 628);
      v20 = a1 + 632;
    }
    v22 = 0;
    *(_QWORD *)(v20 + 8) = 0LL;
    v23 = ((unsigned __int64)v21 - 16) / 0x18;
    v60 = v23;
    if ( !*(_BYTE *)(a1 + 441) )
    {
      MaxFragments = HalpDmaControllerQueryMaxFragments(*(_QWORD *)(a1 + 368), a1, (unsigned int)v23);
      if ( MaxFragments < (unsigned int)v23 )
        v23 = MaxFragments;
      v60 = v23;
    }
    v24 = a6;
    HalpDmaCheckMdlAccessibility(a1, v15, (unsigned int)a4, *a6, &v68, &Mdl);
    v14 = *(_DWORD *)(a1 + 520) == 3;
    v61 = 0LL;
    if ( v14 )
    {
      v39 = *(_DWORD *)(a1 + 252);
      if ( *v24 > v39 )
        *v24 = v39;
      v25 = v69;
      v59 = *(__int64 **)(v69 + 24);
      v11 = *v59;
      *(_QWORD *)(v69 + 40) = 0LL;
      *(_QWORD *)(v25 + 32) = 0LL;
    }
    else
    {
      v25 = v69;
    }
    v26 = *v24;
    v27 = 0;
    v54 = 0;
    if ( v25 )
    {
      LODWORD(v63) = 1;
      while ( v26 )
      {
        v28 = v26;
        v29 = a4 + *(_QWORD *)(v15 + 32) + *(unsigned int *)(v15 + 44);
        if ( *(_DWORD *)(v15 + 40) - (int)a4 <= v26 )
          v28 = *(_DWORD *)(v15 + 40) - a4;
        v26 -= v28;
        while ( 1 )
        {
          v56 = v28;
          v58 = v29;
          if ( !v28 )
            break;
          if ( v22 >= (unsigned int)v60 )
            goto LABEL_30;
          v55 = v28;
          v30 = IoMapTransferInternal(a1, v15, (_QWORD *)v25, v29, &v55, a7, v68);
          v31 = v55;
          v32 = v30;
          if ( !v55 )
          {
            v27 = v54;
            v25 = v69;
LABEL_30:
            v26 = 0;
            break;
          }
          v33 = -4096LL;
          *((_QWORD *)&v63 + 1) = v30 & 0xFFFFFFFFFFFFF000uLL;
          v14 = *(_DWORD *)(a1 + 520) == 3;
          v64 = (v55 + 4095LL + (v30 & 0xFFF)) & 0xFFFFFFFFFFFFF000uLL;
          if ( v14 )
          {
            if ( (((unsigned __int16)v30 | (unsigned __int16)v11) & 0xFFF) != 0 || !v61 )
            {
              if ( (v11 & 0xFFF) != 0 )
                v11 = v11 + 4096 - ((v11 + 4096) & 0xFFF);
              v50 = v20 + 8 * (v22 + 2 * (v22 + 1LL));
              v61 = v50;
              *(_QWORD *)v50 = v11 + (v58 & 0xFFF);
              *(_QWORD *)(v50 + 16) = v15;
              *(_DWORD *)(v50 + 8) = v31;
            }
            else
            {
              --v22;
              *(_DWORD *)(v61 + 8) += v55;
            }
            v51 = guard_dispatch_icall_no_overrides(v59, *(_QWORD *)(v69 + 40), 3LL, &v63);
            v52 = v55 + (v32 & 0xFFF);
            v57 = v51;
            *(_QWORD *)(v69 + 40) += v64;
            v11 += v52;
          }
          else
          {
            v34 = 3LL * v22;
            *(_QWORD *)(v20 + 8 * v34 + 32) = v15;
            *(_DWORD *)(v20 + 8 * v34 + 24) = v31;
            *(_QWORD *)(v20 + 8 * v34 + 16) = v30;
          }
          if ( *(_DWORD *)(a1 + 520) == 1 )
            v57 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v65 + 40), 3LL, &v63, v33);
          v27 = v55 + v54;
          v29 = v55 + v58;
          v28 = v56 - v55;
          v54 += v55;
          v25 = v69;
          ++v22;
        }
        v15 = *(_QWORD *)v15;
        a4 = 0LL;
        if ( !v15 )
          goto LABEL_32;
      }
    }
    else
    {
      v58 = 0LL;
      while ( v26 )
      {
        v41 = v26;
        v42 = *(unsigned int *)(v15 + 44);
        if ( *(_DWORD *)(v15 + 40) - (int)a4 <= v26 )
          v41 = *(_DWORD *)(v15 + 40) - a4;
        v26 -= v41;
        v43 = ((_WORD)v42 + (_WORD)a4) & 0xFFF;
        v56 = v43;
        v14 = *(_BYTE *)(a1 + 445) == 0;
        v44 = (__int64 *)(v15 + 8 * (((unsigned __int64)(unsigned int)(v42 + a4) >> 12) + 6));
        v59 = v44;
        if ( v14 )
        {
          HalpDmaFlushBuffer(v25, v15, a4 + v42 + *(_QWORD *)(v15 + 32), v41, a7, v68);
          v27 = v54;
          v43 = v56;
          v25 = v58;
          v44 = v59;
        }
        while ( v41 )
        {
          v45 = v41;
          v46 = v43 + (*v44 << 12);
          v47 = 4096 - v43;
          v43 = 0;
          if ( v47 <= v41 )
            v45 = v47;
          if ( v46 == v25 + 1 && ((v46 ^ v25) & 0x100000000LL) == 0 && v22 )
          {
            *(_DWORD *)(v20 + 24 * (v22 - 1 + 1LL)) += v45;
          }
          else
          {
            if ( v22 >= (unsigned int)v60 )
            {
              v26 = 0;
              break;
            }
            v48 = v22++;
            v49 = 3 * v48;
            *(_QWORD *)(v20 + 8 * v49 + 16) = v46;
            *(_DWORD *)(v20 + 8 * v49 + 24) = v45;
          }
          v27 += v45;
          v54 = v27;
          v25 = v46 + v45 - 1LL;
          v41 -= v45;
          v58 = v25;
          ++v44;
        }
        v15 = *(_QWORD *)v15;
        a4 = 0LL;
        if ( !v15 )
          goto LABEL_41;
      }
LABEL_32:
      if ( v15 )
        goto LABEL_33;
LABEL_41:
      if ( v26 && v22 )
      {
        *(_DWORD *)(v20 + 24 * (v22 - 1 + 1LL)) += v26;
        v27 += v26;
      }
    }
LABEL_33:
    v35 = a6;
    *(_DWORD *)v20 = v22;
    *v35 = v27;
    if ( v69 )
      *(_DWORD *)(v69 + 16) = v27;
    v36 = a7;
    if ( v68 )
    {
      v40 = Mdl;
      HalpDmaFlushDriverMdl((ULONG_PTR)Mdl);
      if ( v40 )
      {
        do
        {
          Next = v40->Next;
          IoFreeMdl(v40);
          v40 = Next;
        }
        while ( Next );
        v36 = a7;
      }
    }
    if ( *(_BYTE *)(a1 + 441) )
      return v57;
    else
      return HalpDmaControllerProgramChannel(*(_QWORD *)(a1 + 368), a1, a10, a11, v20, *(_QWORD *)(a1 + 456) + a5, v36);
  }
  else
  {
    v38 = a8;
    if ( a8 && a9 >= 0x10 )
    {
      *a8 = 0;
      *((_QWORD *)v38 + 1) = 0LL;
    }
    else if ( *(_BYTE *)(a1 + 441) )
    {
      return 3221225485LL;
    }
    return 0LL;
  }
}
