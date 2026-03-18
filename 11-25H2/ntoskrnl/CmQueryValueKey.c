/*
 * XREFs of CmQueryValueKey @ 0x140878350
 * Callers:
 *     CmQueryValueKeyCallout @ 0x1407BFE60 (CmQueryValueKeyCallout.c)
 *     NtQueryValueKey @ 0x140AD3580 (NtQueryValueKey.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlUpcaseUnicodeChar @ 0x140848120 (RtlUpcaseUnicodeChar.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140870454 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpUnlockKcbStack @ 0x1408713D0 (CmpUnlockKcbStack.c)
 *     CmpLockKcbStackShared @ 0x1408715A0 (CmpLockKcbStackShared.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpQueryKeyValueData @ 0x140879AE0 (CmpQueryKeyValueData.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpUnlockKcb @ 0x140BA92B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140BA9340 (CmpLockKcbShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BA94E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmQueryValueKey(__int64 a1, unsigned __int16 *a2, int a3, size_t a4, int a5, __int64 a6)
{
  __int64 v6; // r12
  __int16 v7; // r14
  __int64 v8; // rdi
  unsigned int v9; // r15d
  __int64 v10; // rcx
  __int64 v11; // rsi
  struct _PRIVILEGE_SET *v12; // r8
  int v13; // ebx
  __int64 v14; // r13
  __int16 v15; // bx
  char *v16; // rdi
  __int64 v17; // r12
  char *v18; // rcx
  __int64 v19; // rcx
  __int16 v20; // r8
  __int64 v21; // r13
  int v22; // edx
  char v23; // al
  __int16 v24; // r8
  int v25; // edx
  ULONG_PTR v26; // rsi
  int v27; // esi
  int v28; // edi
  __int64 v29; // rax
  __int64 v30; // rbx
  int KeyValueData; // edi
  ULONG_PTR *v32; // rbx
  ULONG_PTR *v33; // rcx
  int *v35; // rsi
  ULONG_PTR v36; // rbx
  __int64 v37; // r15
  unsigned int v38; // edi
  ULONG_PTR v39; // rdx
  __int64 CellFlat; // rax
  __int64 v41; // rdx
  ULONG_PTR v42; // rdx
  __int64 CellPaged; // rax
  unsigned __int8 *v44; // r13
  unsigned int v45; // r12d
  WCHAR *v46; // rbx
  unsigned int v47; // edi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int64 v49; // rsi
  unsigned __int64 v50; // r11
  struct _LIST_ENTRY *Flink; // rcx
  unsigned __int64 v52; // rax
  __int64 v53; // r13
  WCHAR *v54; // r10
  unsigned __int64 v55; // r8
  unsigned __int64 v56; // r9
  unsigned __int16 i; // di
  WCHAR v58; // si
  unsigned int v59; // r15d
  int v60; // esi
  unsigned int v61; // eax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rcx
  __int16 v66; // [rsp+48h] [rbp-C0h]
  __int16 v67; // [rsp+4Ah] [rbp-BEh]
  int v68; // [rsp+4Ch] [rbp-BCh]
  struct _PRIVILEGE_SET *Privileges; // [rsp+50h] [rbp-B8h]
  int v70; // [rsp+58h] [rbp-B0h]
  __int64 v71; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v72; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v73; // [rsp+70h] [rbp-98h] BYREF
  struct _LIST_ENTRY *v74; // [rsp+78h] [rbp-90h]
  __int64 v75; // [rsp+80h] [rbp-88h] BYREF
  __int128 v76; // [rsp+88h] [rbp-80h] BYREF
  __int128 v77; // [rsp+98h] [rbp-70h]
  unsigned int v78; // [rsp+A8h] [rbp-60h]
  int v79; // [rsp+ACh] [rbp-5Ch]
  __int64 v80; // [rsp+B0h] [rbp-58h]
  __int64 v81; // [rsp+B8h] [rbp-50h]
  __int64 v82; // [rsp+C0h] [rbp-48h]
  int *v83; // [rsp+C8h] [rbp-40h]
  ULONG_PTR v84; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int16 *v85; // [rsp+D8h] [rbp-30h]
  __int64 v86; // [rsp+E0h] [rbp-28h]
  size_t Size; // [rsp+E8h] [rbp-20h]
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-18h] BYREF

  v6 = a1;
  v7 = 0;
  v86 = a6;
  v8 = 0LL;
  v81 = a1;
  v76 = 0LL;
  v73 = 0LL;
  v9 = -1;
  v75 = 0LL;
  Size = a4;
  v79 = a3;
  v85 = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  WORD1(v76) = -1;
  v77 = 0LL;
  HvpGetCellContextInitialize(&v73);
  HvpGetCellContextInitialize(&v84);
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistry(v10);
  v11 = *(_QWORD *)(v6 + 8);
  v12 = 0LL;
  Privileges = 0LL;
  v13 = *(__int16 *)(v11 + 66);
  if ( v13 >= 2 )
  {
    Privileges = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL);
    v12 = Privileges;
    if ( !Privileges )
    {
      KeyValueData = -1073741670;
      Privileges = (struct _PRIVILEGE_SET *)*((_QWORD *)&v77 + 1);
      goto LABEL_45;
    }
  }
  v14 = *(__int16 *)(v11 + 66);
  LOWORD(v76) = v13;
  *((_QWORD *)&v77 + 1) = v12;
  v66 = v14;
  WORD1(v76) = v14;
  if ( (_WORD)v14 )
  {
    v64 = *(_QWORD *)(v11 + 192);
    if ( !v64 )
      goto LABEL_5;
    do
    {
      v65 = *(_QWORD *)(v64 + 16);
      if ( (__int16)v14 >= 2 )
      {
        *((_QWORD *)v12 + (__int16)v14 - 2) = v65;
      }
      else
      {
        *((_QWORD *)&v76 + (__int16)v14 + 1) = v65;
        v12 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v77 + 1);
      }
      v64 = *(_QWORD *)(v64 + 24);
      LOWORD(v14) = v14 - 1;
    }
    while ( v64 );
  }
  else
  {
    *((_QWORD *)&v76 + v14 + 1) = v11;
    v12 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v77 + 1);
  }
  LOWORD(v14) = WORD1(v76);
  v66 = WORD1(v76);
  Privileges = v12;
LABEL_5:
  if ( *(_QWORD *)(v6 + 56) || *(_QWORD *)(v6 + 64) )
  {
    CmpLockKcbStackShared((__int64)&v76);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v6, 0LL) )
    {
LABEL_136:
      KeyValueData = -1073740763;
      if ( (*(_BYTE *)(v6 + 48) & 1) == 0 )
        KeyValueData = -1073741444;
      goto LABEL_40;
    }
    CmpUnlockKcbStack((__int64)&v76);
    KeyValueData = CmpTransSearchAddTransFromKeyBody((_QWORD *)v6, &v75);
    if ( KeyValueData < 0 )
      goto LABEL_45;
    v12 = Privileges;
    v8 = v75;
  }
  v15 = 0;
  if ( (v14 & 0x8000u) == 0LL )
  {
    v16 = (char *)&v76 + 8;
    v17 = (char *)v12 - ((char *)&v76 + 8) - 16;
    do
    {
      if ( v15 >= 2 )
        v18 = &v16[v17];
      else
        v18 = v16;
      CmpLockKcbShared(*(_QWORD *)v18);
      ++v15;
      v16 += 8;
    }
    while ( v15 <= (__int16)v14 );
    v6 = v81;
    v8 = v75;
  }
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v6, v8) )
    goto LABEL_136;
  v20 = *(_WORD *)(v11 + 66);
  LODWORD(v21) = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v67 = v20;
      if ( v20 < 0 )
      {
LABEL_23:
        v26 = 0LL;
        goto LABEL_30;
      }
      v21 = v20 >= 2 ? *((_QWORD *)Privileges + v20 - 2) : *((_QWORD *)&v76 + v20 + 1);
      v22 = *(__int16 *)(v21 + 66);
      v19 = *(unsigned __int16 *)(v6 + 4);
      v82 = v21;
      if ( v22 == (_DWORD)v19 )
      {
        v23 = *(_BYTE *)(v21 + 65);
        if ( !v23 )
          goto LABEL_54;
      }
      else
      {
        if ( !(_WORD)v22 )
          goto LABEL_54;
        v23 = *(_BYTE *)(v21 + 65);
      }
      if ( v23 == 1 )
        goto LABEL_23;
LABEL_54:
      if ( *(_DWORD *)(v21 + 40) != -1 )
        break;
      --v20;
    }
    if ( v8 && *(_QWORD *)(v21 + 288) == v8 )
      v35 = (int *)(v21 + 280);
    else
      v35 = (int *)(v21 + 96);
    v36 = *(_QWORD *)(v21 + 32);
    v37 = *(unsigned int *)(v6 + 100);
    v84 = v36;
    v83 = v35;
    v72 = 0LL;
    v71 = 0LL;
    HvpGetCellContextInitialize(&v72);
    HvpGetCellContextInitialize(&v71);
    v38 = *v35;
    v78 = v38;
    if ( !v38 )
    {
      v9 = -1;
      goto LABEL_22;
    }
    v39 = (unsigned int)v35[1];
    if ( (*(_BYTE *)(v36 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(v36, v39, &v72);
    else
      CellFlat = HvpGetCellPaged(v36, v39, &v72);
    v80 = CellFlat;
    v41 = CellFlat;
    v19 = 0LL;
    if ( (unsigned int)v37 >= v38 )
      v37 = 0LL;
    while ( 1 )
    {
      v70 = v19;
      v68 = v37;
      if ( (unsigned int)v19 >= v38 )
        break;
      v42 = *(unsigned int *)(v41 + 4 * v37);
      if ( (*(_BYTE *)(v36 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(v36, v42, &v71);
      else
        CellPaged = HvpGetCellPaged(v36, v42, &v71);
      v44 = (unsigned __int8 *)(CellPaged + 20);
      v45 = *(unsigned __int16 *)(CellPaged + 2);
      v46 = (WCHAR *)*((_QWORD *)v85 + 1);
      v47 = *v85;
      if ( (*(_BYTE *)(CellPaged + 16) & 1) != 0 )
      {
        for ( i = (unsigned __int16)v47 >> 1; i && (_WORD)v45; --i )
        {
          v58 = *v46++;
          v59 = *v44++;
          if ( v58 != (_WORD)v59 )
          {
            if ( v58 >= 0x61u )
            {
              if ( v58 > 0x7Au )
                v58 = RtlUpcaseUnicodeChar(v58);
              else
                v58 -= 32;
            }
            if ( v59 >= 0x61 )
            {
              if ( v59 > 0x7A )
                LOWORD(v59) = RtlUpcaseUnicodeChar(v59);
              else
                LOWORD(v59) = v59 - 32;
            }
            v60 = v58 - (unsigned __int16)v59;
            if ( v60 )
              goto LABEL_85;
          }
          LOWORD(v45) = v45 - 1;
        }
        v60 = i - (unsigned __int16)v45;
LABEL_85:
        LODWORD(v37) = v68;
      }
      else
      {
        CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
        v49 = (unsigned __int64)v47 >> 1;
        v50 = (unsigned __int64)v45 >> 1;
        Flink = CurrentServerSiloGlobals[75].Flink;
        v52 = v49;
        v74 = Flink;
        if ( v49 > v50 )
          v52 = (unsigned __int64)v45 >> 1;
        v53 = v44 - (unsigned __int8 *)v46;
        v54 = &v46[v52];
        while ( v46 < v54 )
        {
          v55 = *v46;
          v56 = *(WCHAR *)((char *)v46 + v53);
          if ( (_WORD)v55 != (_WORD)v56 )
          {
            if ( (unsigned int)v55 >= 0x61 )
            {
              if ( (unsigned int)v55 > 0x7A )
              {
                if ( Flink && (unsigned __int16)v55 >= 0xC0u )
                {
                  v62 = *((unsigned __int16 *)&Flink->Flink + (v55 >> 8)) + (unsigned int)((unsigned __int8)v55 >> 4);
                  Flink = v74;
                  LOWORD(v55) = *((_WORD *)&v74->Flink + (v55 & 0xF) + *((unsigned __int16 *)&v74->Flink + v62)) + v55;
                }
              }
              else
              {
                LOWORD(v55) = v55 - 32;
              }
            }
            if ( (unsigned int)v56 >= 0x61 )
            {
              if ( (unsigned int)v56 > 0x7A )
              {
                if ( Flink && (unsigned __int16)v56 >= 0xC0u )
                {
                  v63 = *((unsigned __int16 *)&Flink->Flink + (v56 >> 8)) + (unsigned int)((unsigned __int8)v56 >> 4);
                  Flink = v74;
                  LOWORD(v56) = *((_WORD *)&v74->Flink + (v56 & 0xF) + *((unsigned __int16 *)&v74->Flink + v63)) + v56;
                }
              }
              else
              {
                LOWORD(v56) = v56 - 32;
              }
            }
            if ( (_WORD)v55 != (_WORD)v56 )
            {
              v60 = (unsigned __int16)v55 - (unsigned __int16)v56;
              goto LABEL_86;
            }
          }
          ++v46;
        }
        v60 = v49 - v50;
      }
LABEL_86:
      v36 = v84;
      if ( (*(_BYTE *)(v84 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v84, &v71);
      else
        HvpReleaseCellPaged(v84, &v71);
      v41 = v80;
      if ( !v60 )
      {
        v27 = v68;
        v28 = 0;
        v9 = *(_DWORD *)(v80 + 4LL * (unsigned int)v37);
        goto LABEL_25;
      }
      v61 = v37 + 1;
      v38 = v78;
      v19 = (unsigned int)(v70 + 1);
      v37 = 0LL;
      if ( v61 != v78 )
        v37 = v61;
    }
    v28 = -1073741772;
    v9 = -1;
    v27 = *v83;
LABEL_25:
    if ( v41 )
    {
      if ( (*(_BYTE *)(v36 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v36, &v72);
      else
        HvpReleaseCellPaged(v36, &v72);
    }
    if ( v28 >= 0 )
      break;
    v24 = v67;
    v6 = v81;
    v21 = v82;
LABEL_22:
    v25 = *(__int16 *)(v21 + 66);
    v19 = *(unsigned __int16 *)(v6 + 4);
    if ( v25 == (_DWORD)v19 || (_WORD)v25 && *(_BYTE *)(v21 + 65) )
      goto LABEL_23;
    v8 = v75;
    v20 = v24 - 1;
  }
  v21 = v82;
  *(_DWORD *)(v81 + 100) = v27;
  v26 = *(_QWORD *)(v21 + 32);
LABEL_30:
  if ( v9 == -1 )
  {
    KeyValueData = -1073741772;
  }
  else
  {
    if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
      v29 = HvpGetCellFlat(v26, v9, &v73);
    else
      v29 = HvpGetCellPaged(v26, v9, &v73);
    v30 = v29;
    if ( (*(_DWORD *)(v26 + 160) & 0x80000) != 0 && (*(_BYTE *)(v29 + 16) & 2) != 0 )
    {
      KeyValueData = -1073741772;
    }
    else
    {
      KeyValueData = CmpQueryKeyValueData(v21, v9, v29, v79, Size, a5, v86);
      if ( KeyValueData >= 0 )
        KeyValueData = 0;
    }
    if ( v30 )
    {
      if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v26, &v73);
      else
        HvpReleaseCellPaged(v26, &v73);
    }
  }
  LOWORD(v14) = v66;
LABEL_40:
  if ( (v14 & 0x8000u) == 0LL )
  {
    v32 = (ULONG_PTR *)&v76 + 1;
    do
    {
      if ( v7 >= 2 )
        v33 = (ULONG_PTR *)((char *)v32 + (char *)Privileges - ((char *)&v76 + 8) - 16);
      else
        v33 = v32;
      CmpUnlockKcb(*v33);
      ++v7;
      ++v32;
    }
    while ( v7 <= (__int16)v14 );
  }
LABEL_45:
  CmpUnlockRegistry(v19);
  CmpDetachFromRegistryProcess(&ApcState);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  return (unsigned int)KeyValueData;
}
