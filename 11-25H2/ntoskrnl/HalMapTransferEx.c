/*
 * XREFs of HalMapTransferEx @ 0x140332780
 * Callers:
 *     HalpAllocateAdapterCallbackV3 @ 0x1403326B0 (HalpAllocateAdapterCallbackV3.c)
 * Callees:
 *     IoFreeMdl @ 0x1402D5960 (IoFreeMdl.c)
 *     HalpDmaControllerQueryMaxFragments @ 0x1403315D0 (HalpDmaControllerQueryMaxFragments.c)
 *     HalpDmaCheckMdlAccessibility @ 0x140332BD0 (HalpDmaCheckMdlAccessibility.c)
 *     HalpDmaControllerProgramChannel @ 0x140332C78 (HalpDmaControllerProgramChannel.c)
 *     HalpDmaFlushBuffer @ 0x140333700 (HalpDmaFlushBuffer.c)
 *     IoMapTransferInternal @ 0x140333E20 (IoMapTransferInternal.c)
 *     HalpDmaFlushDriverMdl @ 0x140539DBC (HalpDmaFlushDriverMdl.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalMapTransferEx(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
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
  __int64 *v15; // rsi
  _DWORD *v16; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // r15
  unsigned int v21; // eax
  unsigned int v22; // r14d
  unsigned __int64 v23; // r12
  unsigned int *v24; // r12
  __int64 v25; // rcx
  unsigned int v26; // r12d
  int v27; // r9d
  unsigned int v28; // r8d
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  unsigned int v31; // edx
  __int16 v32; // bx
  __int64 v33; // rcx
  _DWORD *v34; // rax
  char v35; // bl
  unsigned int MaxFragments; // eax
  _DWORD *v37; // rax
  unsigned int v38; // eax
  PMDL v39; // rsi
  unsigned int v40; // r13d
  __int64 v41; // rdx
  unsigned int v42; // r10d
  __int64 *v43; // r11
  unsigned int v44; // edx
  __int64 v45; // r8
  unsigned int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  unsigned int v50; // eax
  unsigned int v51; // ebx
  struct _MDL *Next; // rbx
  int v53; // [rsp+20h] [rbp-89h]
  int v54; // [rsp+28h] [rbp-81h]
  int v55; // [rsp+40h] [rbp-69h]
  unsigned int v56; // [rsp+44h] [rbp-65h] BYREF
  unsigned int v57; // [rsp+48h] [rbp-61h]
  unsigned int v58; // [rsp+4Ch] [rbp-5Dh]
  unsigned __int64 v59; // [rsp+50h] [rbp-59h]
  __int64 *v60; // [rsp+58h] [rbp-51h]
  unsigned __int64 v61; // [rsp+60h] [rbp-49h]
  __int64 v62; // [rsp+68h] [rbp-41h]
  PMDL Mdl; // [rsp+70h] [rbp-39h] BYREF
  __int128 v64; // [rsp+78h] [rbp-31h]
  unsigned __int64 v65; // [rsp+88h] [rbp-21h]
  __int64 v66; // [rsp+90h] [rbp-19h]
  __int128 v67; // [rsp+98h] [rbp-11h]
  __int64 v68; // [rsp+A8h] [rbp-1h]
  char v69; // [rsp+F0h] [rbp+47h] BYREF
  __int64 v70; // [rsp+100h] [rbp+57h]

  v70 = a3;
  v11 = 0LL;
  v69 = 0;
  Mdl = 0LL;
  v68 = 0LL;
  v14 = *(_DWORD *)(a1 + 520) == 3;
  v15 = a2;
  LODWORD(v65) = 0;
  v67 = 0LL;
  v60 = 0LL;
  v64 = 0LL;
  if ( v14 && !a3 )
    return 3221225485LL;
  v66 = *(_QWORD *)(a1 + 512);
  v16 = a6;
  *(_BYTE *)(a1 + 524) = 1;
  v58 = 0;
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
      v19 = *((unsigned int *)v15 + 10);
      if ( a4 < v19 )
        break;
      v15 = (__int64 *)*v15;
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
    v61 = v23;
    if ( !*(_BYTE *)(a1 + 441) )
    {
      MaxFragments = HalpDmaControllerQueryMaxFragments(*(_QWORD *)(a1 + 368), a1);
      if ( MaxFragments < (unsigned int)v23 )
        v23 = MaxFragments;
      v61 = v23;
    }
    v24 = a6;
    HalpDmaCheckMdlAccessibility(a1, v15, (unsigned int)a4, *a6, &v69, &Mdl);
    v14 = *(_DWORD *)(a1 + 520) == 3;
    v62 = 0LL;
    if ( v14 )
    {
      v38 = *(_DWORD *)(a1 + 252);
      if ( *v24 > v38 )
        *v24 = v38;
      v25 = v70;
      v60 = *(__int64 **)(v70 + 24);
      v11 = *v60;
      *(_QWORD *)(v70 + 40) = 0LL;
      *(_QWORD *)(v25 + 32) = 0LL;
    }
    else
    {
      v25 = v70;
    }
    v26 = *v24;
    v27 = 0;
    v55 = 0;
    if ( v25 )
    {
      LODWORD(v64) = 1;
      while ( v26 )
      {
        v28 = v26;
        v29 = a4 + v15[4] + *((unsigned int *)v15 + 11);
        if ( *((_DWORD *)v15 + 10) - (int)a4 <= v26 )
          v28 = *((_DWORD *)v15 + 10) - a4;
        v26 -= v28;
        while ( 1 )
        {
          v57 = v28;
          v59 = v29;
          if ( !v28 )
            break;
          if ( v22 >= (unsigned int)v61 )
            goto LABEL_30;
          v56 = v28;
          v30 = IoMapTransferInternal(a1, (_DWORD)v15, v25, v29, (__int64)&v56, a7, v69);
          v31 = v56;
          v32 = v30;
          if ( !v56 )
          {
            v27 = v55;
            LODWORD(v25) = v70;
LABEL_30:
            v26 = 0;
            break;
          }
          *((_QWORD *)&v64 + 1) = v30 & 0xFFFFFFFFFFFFF000uLL;
          v14 = *(_DWORD *)(a1 + 520) == 3;
          v65 = (v56 + 4095LL + (v30 & 0xFFF)) & 0xFFFFFFFFFFFFF000uLL;
          if ( v14 )
          {
            if ( (((unsigned __int16)v30 | (unsigned __int16)v11) & 0xFFF) != 0 || !v62 )
            {
              if ( (v11 & 0xFFF) != 0 )
                v11 = v11 + 4096 - ((v11 + 4096) & 0xFFF);
              v49 = v20 + 8 * (v22 + 2 * (v22 + 1LL));
              v62 = v49;
              *(_QWORD *)v49 = v11 + (v59 & 0xFFF);
              *(_QWORD *)(v49 + 16) = v15;
              *(_DWORD *)(v49 + 8) = v31;
            }
            else
            {
              --v22;
              *(_DWORD *)(v62 + 8) += v56;
            }
            v50 = guard_dispatch_icall_no_overrides(v60, *(_QWORD *)(v70 + 40));
            v51 = v56 + (v32 & 0xFFF);
            v58 = v50;
            *(_QWORD *)(v70 + 40) += v65;
            v11 += v51;
          }
          else
          {
            v33 = 3LL * v22;
            *(_QWORD *)(v20 + 8 * v33 + 32) = v15;
            *(_DWORD *)(v20 + 8 * v33 + 24) = v31;
            *(_QWORD *)(v20 + 8 * v33 + 16) = v30;
          }
          if ( *(_DWORD *)(a1 + 520) == 1 )
            v58 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v66 + 40), 3LL);
          v27 = v56 + v55;
          v29 = v56 + v59;
          v28 = v57 - v56;
          v55 += v56;
          LODWORD(v25) = v70;
          ++v22;
        }
        v15 = (__int64 *)*v15;
        a4 = 0LL;
        if ( !v15 )
          goto LABEL_32;
      }
    }
    else
    {
      v59 = 0LL;
      while ( v26 )
      {
        v40 = v26;
        v41 = *((unsigned int *)v15 + 11);
        if ( *((_DWORD *)v15 + 10) - (int)a4 <= v26 )
          v40 = *((_DWORD *)v15 + 10) - a4;
        v26 -= v40;
        v42 = ((_WORD)v41 + (_WORD)a4) & 0xFFF;
        v57 = v42;
        v14 = *(_BYTE *)(a1 + 445) == 0;
        v43 = &v15[((unsigned __int64)(unsigned int)(v41 + a4) >> 12) + 6];
        v60 = v43;
        if ( v14 )
        {
          LOBYTE(v54) = v69;
          LOBYTE(v53) = a7;
          HalpDmaFlushBuffer(v25, v15, a4 + v41 + v15[4], v40, v53, v54);
          v27 = v55;
          v42 = v57;
          v25 = v59;
          v43 = v60;
        }
        while ( v40 )
        {
          v44 = v40;
          v45 = v42 + (*v43 << 12);
          v46 = 4096 - v42;
          v42 = 0;
          if ( v46 <= v40 )
            v44 = v46;
          if ( v45 == v25 + 1 && ((v45 ^ v25) & 0x100000000LL) == 0 && v22 )
          {
            *(_DWORD *)(v20 + 24 * (v22 - 1 + 1LL)) += v44;
          }
          else
          {
            if ( v22 >= (unsigned int)v61 )
            {
              v26 = 0;
              break;
            }
            v47 = v22++;
            v48 = 3 * v47;
            *(_QWORD *)(v20 + 8 * v48 + 16) = v45;
            *(_DWORD *)(v20 + 8 * v48 + 24) = v44;
          }
          v27 += v44;
          v55 = v27;
          v25 = v45 + v44 - 1LL;
          v40 -= v44;
          v59 = v25;
          ++v43;
        }
        v15 = (__int64 *)*v15;
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
    v34 = a6;
    *(_DWORD *)v20 = v22;
    *v34 = v27;
    if ( v70 )
      *(_DWORD *)(v70 + 16) = v27;
    v35 = a7;
    if ( v69 )
    {
      v39 = Mdl;
      HalpDmaFlushDriverMdl((ULONG_PTR)Mdl);
      if ( v39 )
      {
        do
        {
          Next = v39->Next;
          IoFreeMdl(v39);
          v39 = Next;
        }
        while ( Next );
        v35 = a7;
      }
    }
    if ( *(_BYTE *)(a1 + 441) )
      return v58;
    else
      return HalpDmaControllerProgramChannel(*(_QWORD *)(a1 + 368), a1, a10, a11, v20, *(_QWORD *)(a1 + 456) + a5, v35);
  }
  else
  {
    v37 = a8;
    if ( a8 && a9 >= 0x10 )
    {
      *a8 = 0;
      *((_QWORD *)v37 + 1) = 0LL;
    }
    else if ( *(_BYTE *)(a1 + 441) )
    {
      return 3221225485LL;
    }
    return 0LL;
  }
}
