/*
 * XREFs of PnpGetDeviceLocationStrings @ 0x1409C470C
 * Callers:
 *     PiQueryRemovableDeviceOverride @ 0x140A32AF8 (PiQueryRemovableDeviceOverride.c)
 *     PiProcessNewDeviceNode @ 0x140A7C564 (PiProcessNewDeviceNode.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     PnpQueryInterface @ 0x1409C4D84 (PnpQueryInterface.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetDeviceLocationStrings(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // r14
  _BYTE *v4; // rsi
  _QWORD *v5; // rcx
  unsigned int v6; // r15d
  _QWORD *v7; // rax
  PVOID *v8; // r13
  _DWORD *v9; // r12
  unsigned int v10; // r13d
  int v11; // esi
  int v12; // ebx
  __int64 v13; // rdx
  int v14; // edi
  __int64 v15; // r8
  __int64 v16; // r9
  int v18; // r8d
  int v19; // r9d
  unsigned int v20; // edx
  _WORD *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  size_t v25; // rsi
  void *v26; // rax
  __int64 v27; // r14
  PVOID *v28; // rbx
  void *v29; // rax
  _WORD *v30; // rax
  unsigned int v31; // r12d
  int v32; // r14d
  char v33; // dl
  char v34; // r8
  __int64 v35; // rcx
  unsigned int v36; // r10d
  char *v37; // rbx
  unsigned int v38; // esi
  unsigned int v39; // edi
  unsigned int v40; // r12d
  unsigned int v41; // eax
  char *v42; // r14
  char v43; // r13
  char v44; // r9
  char v45; // r15
  unsigned int v46; // edx
  _WORD *v47; // rsi
  char v48; // dl
  char v49; // r8
  __int64 v50; // r8
  __int64 v51; // rcx
  char *v52; // r14
  __int64 v53; // r8
  unsigned int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // rax
  int v57; // r11d
  unsigned int v58; // [rsp+38h] [rbp-69h]
  int v59; // [rsp+3Ch] [rbp-65h]
  unsigned int v60; // [rsp+40h] [rbp-61h]
  PVOID P; // [rsp+48h] [rbp-59h] BYREF
  int v62; // [rsp+50h] [rbp-51h]
  unsigned int v63; // [rsp+54h] [rbp-4Dh]
  unsigned int v64; // [rsp+58h] [rbp-49h]
  PVOID Pool2; // [rsp+60h] [rbp-41h]
  unsigned int v66; // [rsp+68h] [rbp-39h]
  unsigned int v67; // [rsp+6Ch] [rbp-35h]
  __int64 v68; // [rsp+70h] [rbp-31h]
  PVOID v69; // [rsp+78h] [rbp-29h]
  int v70; // [rsp+80h] [rbp-21h]
  __int64 v71; // [rsp+88h] [rbp-19h]
  __int128 v72; // [rsp+90h] [rbp-11h] BYREF
  __int128 v73; // [rsp+A0h] [rbp-1h]
  __int64 v74; // [rsp+B0h] [rbp+Fh]
  __int64 v75; // [rsp+108h] [rbp+67h]
  char v76; // [rsp+108h] [rbp+67h]

  v75 = a1;
  v3 = a1;
  P = 0LL;
  v74 = 0LL;
  LOBYTE(v62) = 0;
  v63 = -1;
  v58 = -1;
  v4 = 0LL;
  v69 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v5 = IopRootDeviceNode;
  *a2 = 0LL;
  *a3 = 0;
  if ( (_QWORD *)v3 == v5 )
    return 3221225486LL;
  v6 = 0;
  v7 = (_QWORD *)v3;
  do
  {
    v7 = (_QWORD *)v7[2];
    ++v6;
  }
  while ( v7 != v5 );
  v67 = v6;
  v71 = v6;
  Pool2 = (PVOID)ExAllocatePool2(0x100uLL);
  v8 = (PVOID *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v68 = ExAllocatePool2(0x100uLL);
  v9 = (_DWORD *)v68;
  if ( !v68 )
  {
    v14 = -1073741670;
    goto LABEL_45;
  }
  v10 = 0;
  v11 = 1;
  v59 = 1;
  v12 = 0;
LABEL_10:
  if ( (PVOID)v3 != IopRootDeviceNode )
  {
    v14 = PnpQueryInterface(*(PVOID *)(v3 + 32), 0LL, &v72);
    if ( v14 < 0 )
    {
      v4 = 0LL;
      goto LABEL_44;
    }
    if ( !v74 )
    {
      v14 = -1073741823;
      goto LABEL_37;
    }
    P = 0LL;
    v14 = guard_dispatch_icall_no_overrides(*((_QWORD *)&v72 + 1), &P, v15, v16);
    if ( v14 < 0 )
      goto LABEL_14;
    if ( !P )
    {
      v14 = -1073741637;
LABEL_14:
      if ( P )
      {
        ExFreePoolWithTag(P, 0);
        P = 0LL;
      }
      goto LABEL_37;
    }
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v9[v10] = 0;
    v21 = P;
    if ( *(_WORD *)P )
    {
      do
      {
        ++v18;
        v22 = -1LL;
        v9[v10] = v18;
        do
          ++v22;
        while ( v21[v22] );
        v19 += v22 + 1;
        v23 = -1LL;
        do
          ++v23;
        while ( v21[v23] );
        if ( (unsigned int)v23 <= v20 )
          LODWORD(v23) = v20;
        v20 = v23;
        v24 = -1LL;
        do
          ++v24;
        while ( v21[v24] );
        v21 += v24 + 1;
      }
      while ( *v21 );
      v3 = v75;
    }
    v12 += v20;
    v59 = v18 * v11;
    v25 = 2LL * (unsigned int)(v19 + 1);
    v26 = (void *)ExAllocatePool2(0x100uLL);
    *((_QWORD *)Pool2 + v10) = v26;
    if ( !v26 )
    {
      v14 = -1073741670;
      goto LABEL_36;
    }
    memmove(v26, P, v25);
    v30 = (_WORD *)*((_QWORD *)Pool2 + v10);
    if ( !*v30 )
      goto LABEL_65;
    v31 = v63;
    LOBYTE(v32) = v62;
LABEL_55:
    v33 = 0;
    v34 = 0;
    while ( 1 )
    {
      if ( *v30 == 33 )
      {
        v33 = 1;
      }
      else
      {
        if ( *v30 != 64 )
        {
          v32 = (unsigned __int8)v32;
          if ( v34 )
            v32 = 1;
          if ( v33 && v31 == -1 )
            v31 = v10;
          v35 = -1LL;
          do
            ++v35;
          while ( v30[v35] );
          v30 += v35 + 1;
          if ( !*v30 )
          {
            v62 = v32;
            v3 = v75;
            v63 = v31;
            v9 = (_DWORD *)v68;
LABEL_65:
            ++v10;
LABEL_36:
            ExFreePoolWithTag(P, 0);
            v6 = v67;
            v11 = v59;
            P = 0LL;
LABEL_37:
            if ( *((_QWORD *)&v73 + 1) )
              guard_dispatch_icall_no_overrides(*((_QWORD *)&v72 + 1), v13, v15, v16);
            if ( v14 < 0 )
            {
              v4 = v69;
              goto LABEL_44;
            }
            if ( v14 != 288 && v10 != v6 )
            {
              v3 = *(_QWORD *)(v3 + 16);
              ++v12;
              v75 = v3;
              goto LABEL_10;
            }
            break;
          }
          goto LABEL_55;
        }
        v34 = 1;
      }
      ++v30;
    }
  }
  v70 = 0;
  v14 = 0;
  v29 = (void *)ExAllocatePool2(0x100uLL);
  v69 = v29;
  v4 = v29;
  if ( !v29 )
  {
    v14 = -1073741670;
    goto LABEL_44;
  }
  v36 = v10 - 1;
  v37 = (char *)v29;
  v38 = 0;
  v60 = v10 - 1;
  v64 = 0;
  if ( !v59 )
    goto LABEL_106;
  v39 = v59;
  do
  {
    v40 = v36;
    v41 = v39;
    v42 = v37;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    while ( 2 )
    {
      v66 = v41;
      v76 = v44;
      v46 = v38 / (v41 / *(_DWORD *)(v68 + 4LL * v40)) % *(_DWORD *)(v68 + 4LL * v40);
      v47 = (_WORD *)*((_QWORD *)Pool2 + v40);
      if ( v46 )
      {
        v55 = v46;
        do
        {
          v56 = -1LL;
          do
            ++v56;
          while ( v47[v56] );
          v47 += v56 + 1;
          --v55;
        }
        while ( v55 );
        v39 = v59;
      }
      v48 = 0;
      v49 = 0;
      while ( 1 )
      {
        if ( *v47 == 33 )
        {
          v48 = 1;
          goto LABEL_99;
        }
        if ( *v47 != 64 )
          break;
        v49 = 1;
LABEL_99:
        ++v47;
      }
      if ( v40 == v36 )
      {
        v76 = v48;
        v43 = v48;
        v44 = v48;
        v45 = v48;
        if ( v48 )
        {
          v58 = v40;
          goto LABEL_96;
        }
        v58 = -1;
LABEL_81:
        v76 = 0;
LABEL_82:
        if ( v49 )
        {
          v57 = -1;
          v76 = v48;
          v42 = v37;
          v43 = v48;
          v45 = v48;
          if ( v48 )
            v57 = v40;
          v58 = v57;
        }
        v50 = -1LL;
        do
          ++v50;
        while ( v47[v50] );
        memmove(v42, v47, 2 * v50);
        v51 = -1LL;
        do
          ++v51;
        while ( v47[v51] );
        v52 = &v42[2 * v51];
        if ( v40 )
        {
          v53 = v68;
          v54 = v66;
          v44 = v76;
          v38 = v64;
          v36 = v60;
          *(_WORD *)v52 = 35;
          v42 = v52 + 2;
          v41 = v54 / *(_DWORD *)(v53 + 4LL * v40--);
          continue;
        }
        if ( !v43 || v45 && v58 <= v63 )
        {
          *(_WORD *)v52 = 0;
          v37 = v52 + 2;
        }
        v36 = v60;
      }
      else
      {
        if ( !v48 )
          goto LABEL_81;
LABEL_96:
        if ( (_BYTE)v62 || v45 )
        {
          v58 = v40;
          v43 = 1;
          v45 = v44 != 0 ? v45 : 0;
          goto LABEL_82;
        }
      }
      break;
    }
    v38 = v64 + 1;
    v64 = v38;
  }
  while ( v38 < v39 );
  v14 = v70;
  v9 = (_DWORD *)v68;
LABEL_106:
  v4 = v69;
  *(_WORD *)v37 = 0;
  *a2 = v4;
  *a3 = (v37 - v4 + 2) >> 1;
LABEL_44:
  v8 = (PVOID *)Pool2;
LABEL_45:
  if ( v67 )
  {
    v27 = v71;
    v28 = v8;
    do
    {
      if ( *v28 )
        ExFreePoolWithTag(*v28, 0);
      ++v28;
      --v27;
    }
    while ( v27 );
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
