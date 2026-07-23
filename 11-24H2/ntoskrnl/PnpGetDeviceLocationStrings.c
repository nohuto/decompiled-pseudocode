/*
 * XREFs of PnpGetDeviceLocationStrings @ 0x1409824C0
 * Callers:
 *     PiQueryRemovableDeviceOverride @ 0x140A26B08 (PiQueryRemovableDeviceOverride.c)
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PnpQueryInterface @ 0x140982B38 (PnpQueryInterface.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetDeviceLocationStrings(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // r14
  _BYTE *v4; // rsi
  _QWORD *v5; // rcx
  __int64 v6; // r15
  _QWORD *v7; // rax
  PVOID *v8; // r13
  _DWORD *v9; // r12
  unsigned int v10; // r13d
  int v11; // esi
  int v12; // ebx
  __int64 v13; // rdx
  int v14; // edi
  int v16; // r8d
  int v17; // r9d
  unsigned int v18; // edx
  _WORD *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  ULONG_PTR v23; // rsi
  void *v24; // rax
  __int64 v25; // r14
  PVOID *v26; // rbx
  void *v27; // rax
  _WORD *v28; // rax
  unsigned int v29; // r12d
  int v30; // r14d
  char v31; // dl
  char v32; // r8
  __int64 v33; // rcx
  unsigned int v34; // r10d
  char *v35; // rbx
  unsigned int v36; // esi
  unsigned int v37; // edi
  unsigned int v38; // r12d
  unsigned int v39; // eax
  char *v40; // r14
  char v41; // r13
  char v42; // r9
  char v43; // r15
  unsigned int v44; // edx
  _WORD *v45; // rsi
  char v46; // dl
  char v47; // r8
  __int64 v48; // r8
  __int64 v49; // rcx
  char *v50; // r14
  __int64 v51; // r8
  unsigned int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rax
  int v55; // r11d
  unsigned int v56; // [rsp+38h] [rbp-69h]
  int v57; // [rsp+3Ch] [rbp-65h]
  unsigned int v58; // [rsp+40h] [rbp-61h]
  PVOID P; // [rsp+48h] [rbp-59h] BYREF
  int v60; // [rsp+50h] [rbp-51h]
  unsigned int v61; // [rsp+54h] [rbp-4Dh]
  unsigned int v62; // [rsp+58h] [rbp-49h]
  PVOID Pool2; // [rsp+60h] [rbp-41h]
  unsigned int v64; // [rsp+68h] [rbp-39h]
  int v65; // [rsp+6Ch] [rbp-35h]
  __int64 v66; // [rsp+70h] [rbp-31h]
  PVOID v67; // [rsp+78h] [rbp-29h]
  int v68; // [rsp+80h] [rbp-21h]
  __int64 v69; // [rsp+88h] [rbp-19h]
  __int128 v70; // [rsp+90h] [rbp-11h] BYREF
  __int128 v71; // [rsp+A0h] [rbp-1h]
  __int64 v72; // [rsp+B0h] [rbp+Fh]
  __int64 v73; // [rsp+108h] [rbp+67h]
  char v74; // [rsp+108h] [rbp+67h]

  v73 = a1;
  v3 = a1;
  P = 0LL;
  v72 = 0LL;
  LOBYTE(v60) = 0;
  v61 = -1;
  v56 = -1;
  v4 = 0LL;
  v67 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v5 = IopRootDeviceNode;
  *a2 = 0LL;
  *a3 = 0;
  if ( (_QWORD *)v3 == v5 )
    return 3221225486LL;
  LODWORD(v6) = 0;
  v7 = (_QWORD *)v3;
  do
  {
    v7 = (_QWORD *)v7[2];
    v6 = (unsigned int)(v6 + 1);
  }
  while ( v7 != v5 );
  v65 = v6;
  v69 = (unsigned int)v6;
  Pool2 = (PVOID)ExAllocatePool2(0x100uLL, 8 * v6, 0x75737050u);
  v8 = (PVOID *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v66 = ExAllocatePool2(0x100uLL, 4 * v6, 0x75737050u);
  v9 = (_DWORD *)v66;
  if ( !v66 )
  {
    v14 = -1073741670;
    goto LABEL_45;
  }
  v10 = 0;
  v11 = 1;
  v57 = 1;
  v12 = 0;
  while ( 2 )
  {
    if ( (PVOID)v3 == IopRootDeviceNode )
      goto LABEL_52;
    v14 = PnpQueryInterface(*(PVOID *)(v3 + 32), 0LL, &v70);
    if ( v14 < 0 )
    {
      v4 = 0LL;
      goto LABEL_44;
    }
    if ( !v72 )
    {
      v14 = -1073741823;
      goto LABEL_37;
    }
    P = 0LL;
    v14 = guard_dispatch_icall_no_overrides(*((_QWORD *)&v70 + 1), &P);
    if ( v14 < 0 )
    {
LABEL_14:
      if ( P )
      {
        ExFreePoolWithTag(P, 0);
        P = 0LL;
      }
      goto LABEL_37;
    }
    if ( !P )
    {
      v14 = -1073741637;
      goto LABEL_14;
    }
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v9[v10] = 0;
    v19 = P;
    if ( *(_WORD *)P )
    {
      do
      {
        ++v16;
        v20 = -1LL;
        v9[v10] = v16;
        do
          ++v20;
        while ( v19[v20] );
        v17 += v20 + 1;
        v21 = -1LL;
        do
          ++v21;
        while ( v19[v21] );
        if ( (unsigned int)v21 <= v18 )
          LODWORD(v21) = v18;
        v18 = v21;
        v22 = -1LL;
        do
          ++v22;
        while ( v19[v22] );
        v19 += v22 + 1;
      }
      while ( *v19 );
      v3 = v73;
    }
    v12 += v18;
    v57 = v16 * v11;
    v23 = 2LL * (unsigned int)(v17 + 1);
    v24 = (void *)ExAllocatePool2(0x100uLL, v23, 0x75737050u);
    *((_QWORD *)Pool2 + v10) = v24;
    if ( !v24 )
    {
      v14 = -1073741670;
      goto LABEL_36;
    }
    memmove(v24, P, v23);
    v28 = (_WORD *)*((_QWORD *)Pool2 + v10);
    if ( !*v28 )
      goto LABEL_66;
    v29 = v61;
    LOBYTE(v30) = v60;
    do
    {
      v31 = 0;
      v32 = 0;
      while ( 1 )
      {
        if ( *v28 == 33 )
        {
          v31 = 1;
          goto LABEL_71;
        }
        if ( *v28 != 64 )
          break;
        v32 = 1;
LABEL_71:
        ++v28;
      }
      v30 = (unsigned __int8)v30;
      if ( v32 )
        v30 = 1;
      if ( v31 && v29 == -1 )
        v29 = v10;
      v33 = -1LL;
      do
        ++v33;
      while ( v28[v33] );
      v28 += v33 + 1;
    }
    while ( *v28 );
    v60 = v30;
    v3 = v73;
    v61 = v29;
    v9 = (_DWORD *)v66;
LABEL_66:
    ++v10;
LABEL_36:
    ExFreePoolWithTag(P, 0);
    LODWORD(v6) = v65;
    v11 = v57;
    P = 0LL;
LABEL_37:
    if ( *((_QWORD *)&v71 + 1) )
      guard_dispatch_icall_no_overrides(*((_QWORD *)&v70 + 1), v13);
    if ( v14 < 0 )
    {
      v4 = v67;
      goto LABEL_44;
    }
    if ( v14 != 288 && v10 != (_DWORD)v6 )
    {
      v3 = *(_QWORD *)(v3 + 16);
      ++v12;
      v73 = v3;
      continue;
    }
    break;
  }
  ++v12;
LABEL_52:
  v68 = 0;
  v14 = 0;
  v27 = (void *)ExAllocatePool2(0x100uLL, 2LL * (unsigned int)(v11 * v12 + 1), 0x75737050u);
  v67 = v27;
  v4 = v27;
  if ( !v27 )
  {
    v14 = -1073741670;
    goto LABEL_44;
  }
  v34 = v10 - 1;
  v35 = (char *)v27;
  v36 = 0;
  v58 = v10 - 1;
  v62 = 0;
  if ( !v57 )
    goto LABEL_107;
  v37 = v57;
  while ( 2 )
  {
    v38 = v34;
    v39 = v37;
    v40 = v35;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    while ( 2 )
    {
      v64 = v39;
      v74 = v42;
      v44 = v36 / (v39 / *(_DWORD *)(v66 + 4LL * v38)) % *(_DWORD *)(v66 + 4LL * v38);
      v45 = (_WORD *)*((_QWORD *)Pool2 + v38);
      if ( v44 )
      {
        v53 = v44;
        do
        {
          v54 = -1LL;
          do
            ++v54;
          while ( v45[v54] );
          v45 += v54 + 1;
          --v53;
        }
        while ( v53 );
        v37 = v57;
      }
      v46 = 0;
      v47 = 0;
      while ( 2 )
      {
        if ( *v45 == 33 )
        {
          v46 = 1;
LABEL_100:
          ++v45;
          continue;
        }
        break;
      }
      if ( *v45 == 64 )
      {
        v47 = 1;
        goto LABEL_100;
      }
      if ( v38 == v34 )
      {
        v74 = v46;
        v41 = v46;
        v42 = v46;
        v43 = v46;
        if ( v46 )
        {
          v56 = v38;
          goto LABEL_97;
        }
        v56 = -1;
LABEL_82:
        v74 = 0;
LABEL_83:
        if ( v47 )
        {
          v55 = -1;
          v74 = v46;
          v40 = v35;
          v41 = v46;
          v43 = v46;
          if ( v46 )
            v55 = v38;
          v56 = v55;
        }
        v48 = -1LL;
        do
          ++v48;
        while ( v45[v48] );
        memmove(v40, v45, 2 * v48);
        v49 = -1LL;
        do
          ++v49;
        while ( v45[v49] );
        v50 = &v40[2 * v49];
        if ( v38 )
        {
          v51 = v66;
          v52 = v64;
          v42 = v74;
          v36 = v62;
          v34 = v58;
          *(_WORD *)v50 = 35;
          v40 = v50 + 2;
          v39 = v52 / *(_DWORD *)(v51 + 4LL * v38--);
          continue;
        }
        if ( !v41 || v43 && v56 <= v61 )
        {
          *(_WORD *)v50 = 0;
          v35 = v50 + 2;
        }
        v34 = v58;
      }
      else
      {
        if ( !v46 )
          goto LABEL_82;
LABEL_97:
        if ( (_BYTE)v60 || v43 )
        {
          v56 = v38;
          v41 = 1;
          v43 = v42 != 0 ? v43 : 0;
          goto LABEL_83;
        }
      }
      break;
    }
    v36 = v62 + 1;
    v62 = v36;
    if ( v36 < v37 )
      continue;
    break;
  }
  v14 = v68;
  v9 = (_DWORD *)v66;
LABEL_107:
  v4 = v67;
  *(_WORD *)v35 = 0;
  *a2 = v4;
  *a3 = (v35 - v4 + 2) >> 1;
LABEL_44:
  v8 = (PVOID *)Pool2;
LABEL_45:
  if ( v65 )
  {
    v25 = v69;
    v26 = v8;
    do
    {
      if ( *v26 )
        ExFreePoolWithTag(*v26, 0);
      ++v26;
      --v25;
    }
    while ( v25 );
  }
  ExFreePoolWithTag(v8, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v14 < 0 )
  {
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
  }
  return (unsigned int)v14;
}
