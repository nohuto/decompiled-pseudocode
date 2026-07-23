/*
 * XREFs of CmQueryMultipleValueKey @ 0x140870B80
 * Callers:
 *     NtQueryMultipleValueKey @ 0x1409618D0 (NtQueryMultipleValueKey.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     HvUnlockHiveFlusherShared @ 0x14086E934 (HvUnlockHiveFlusherShared.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x14086E968 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpFindValueByName @ 0x14086EAC4 (CmpFindValueByName.c)
 *     CmpFindNameInList @ 0x14086EAFC (CmpFindNameInList.c)
 *     CmpFindNameInListWithStatus @ 0x140870840 (CmpFindNameInListWithStatus.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpGetValueData @ 0x14087A8E0 (CmpGetValueData.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14087D698 (CmpTransSearchAddTransFromKeyBody.c)
 *     HvLockHiveFlusherShared @ 0x140881BD8 (HvLockHiveFlusherShared.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14090789C (CmQueryMultipleValueForLayeredKey.c)
 *     CmpLockTwoKcbsShared @ 0x1409E8950 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x1409EA714 (CmpUnlockTwoKcbs.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BBB480 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockKcbShared @ 0x140BBBA1C (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmQueryMultipleValueKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        _DWORD *a6,
        unsigned int *a7)
{
  ULONG_PTR v9; // r12
  __int64 v10; // r13
  __int64 v11; // rsi
  ULONG_PTR v12; // r14
  ULONG_PTR v13; // r15
  ULONG_PTR v14; // rdx
  __int64 CellFlat; // rax
  int v16; // r10d
  int v17; // esi
  unsigned int v18; // ecx
  __int64 v19; // r8
  unsigned __int16 v20; // cx
  __int64 v21; // rdx
  unsigned int ValueByName; // ecx
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // eax
  unsigned int v26; // edx
  unsigned int v27; // r8d
  unsigned int v28; // r10d
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned int v31; // r8d
  __int64 v32; // rcx
  unsigned int MultipleValueForLayeredKey; // ebx
  __int64 v35; // rcx
  int v36; // eax
  int v37; // ebx
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // eax
  ULONG_PTR v41; // rcx
  __int64 CellPaged; // rax
  char v43; // [rsp+40h] [rbp-E8h]
  __int64 v44; // [rsp+44h] [rbp-E4h] BYREF
  unsigned int Size; // [rsp+4Ch] [rbp-DCh] BYREF
  unsigned int Size_4; // [rsp+50h] [rbp-D8h]
  int v47; // [rsp+54h] [rbp-D4h]
  __int64 v48; // [rsp+58h] [rbp-D0h] BYREF
  _DWORD v49[2]; // [rsp+60h] [rbp-C8h] BYREF
  _DWORD v50[2]; // [rsp+68h] [rbp-C0h] BYREF
  int v51; // [rsp+70h] [rbp-B8h]
  _DWORD v52[2]; // [rsp+78h] [rbp-B0h] BYREF
  unsigned int v53; // [rsp+80h] [rbp-A8h]
  __int64 v54; // [rsp+88h] [rbp-A0h] BYREF
  __int64 v55; // [rsp+90h] [rbp-98h]
  void *Src; // [rsp+98h] [rbp-90h] BYREF
  unsigned int v57; // [rsp+A0h] [rbp-88h]
  unsigned int v58; // [rsp+A4h] [rbp-84h]
  ULONG_PTR v59; // [rsp+A8h] [rbp-80h]
  ULONG_PTR v60; // [rsp+B0h] [rbp-78h]
  __int64 v61; // [rsp+B8h] [rbp-70h]
  __int64 v62; // [rsp+C0h] [rbp-68h]
  _BYTE *v63; // [rsp+C8h] [rbp-60h]
  __int64 v64; // [rsp+D0h] [rbp-58h]
  ULONG_PTR v65; // [rsp+D8h] [rbp-50h]
  ULONG_PTR v66; // [rsp+E0h] [rbp-48h]
  __int64 v67; // [rsp+130h] [rbp+8h] BYREF
  __int64 v68; // [rsp+140h] [rbp+18h]
  unsigned int v69; // [rsp+148h] [rbp+20h]

  v69 = a4;
  v68 = a3;
  v60 = 0LL;
  v9 = 0LL;
  v59 = 0LL;
  v49[0] = -1;
  v49[1] = 0;
  Size_4 = 0;
  HIDWORD(v44) = 0;
  v43 = 0;
  v50[0] = -1;
  v50[1] = 0;
  v55 = 0LL;
  v52[0] = -1;
  v52[1] = 0;
  v10 = 0LL;
  v62 = 0LL;
  v11 = 0LL;
  v48 = 0LL;
  LOBYTE(v51) = 0;
  LOBYTE(v47) = 0;
  Src = 0LL;
  LOBYTE(v67) = 0;
  v54 = 0xFFFFFFFFLL;
  CmpLockRegistry(0xFFFFFFFFLL);
  v12 = *(_QWORD *)(a1 + 8);
  v66 = v12;
  if ( *(_WORD *)(v12 + 66) )
  {
    MultipleValueForLayeredKey = CmQueryMultipleValueForLayeredKey(a1, v68, v69, a5, (__int64)a6, (__int64)a7);
    CmpUnlockRegistry(v35);
    return MultipleValueForLayeredKey;
  }
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    CmpLockKcbShared(v12);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      v37 = (*(_DWORD *)(a1 + 48) & 1) != 0 ? 0x2A9 : 0;
      CmpUnlockKcb(v12);
      goto LABEL_65;
    }
    CmpUnlockKcb(v12);
    v17 = CmpTransSearchAddTransFromKeyBody(a1, &v48);
    if ( v17 < 0 )
    {
LABEL_48:
      CmpUnlockRegistry(v32);
      return (unsigned int)v17;
    }
    v11 = v48;
  }
  if ( a2 )
  {
    v10 = *(_QWORD *)(a2 + 8);
    v62 = v10;
  }
  CmpLockTwoKcbsShared(v10, v12);
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v11) )
  {
    v36 = *(_DWORD *)(a1 + 48);
LABEL_64:
    v37 = (v36 & 1) != 0 ? 0x2A9 : 0;
    CmpUnlockTwoKcbs(v10, v12);
LABEL_65:
    CmpUnlockRegistry(v38);
    return (unsigned int)(v37 - 1073741444);
  }
  if ( a2 && (unsigned __int8)CmpIsKeyDeletedForKeyBody(a2, v11) )
  {
    v36 = *(_DWORD *)(a2 + 48);
    goto LABEL_64;
  }
  v13 = *(_QWORD *)(v12 + 32);
  v65 = v13;
  HvLockHiveFlusherShared(v13);
  v14 = *(unsigned int *)(v12 + 40);
  v63 = (_BYTE *)(v13 + 140);
  if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v13, v14);
  else
    CellFlat = HvpGetCellPaged(v13);
  v61 = CellFlat;
  if ( CellFlat )
  {
    CmpUpdateKeyNodeAccessBits(v13, CellFlat, *(_DWORD *)(v12 + 40));
    HvUnlockHiveFlusherShared(v13);
    if ( v11 )
    {
      v40 = (unsigned __int8)v51;
      if ( *(_QWORD *)(v12 + 288) == v11 )
        v40 = 1;
      v51 = v40;
    }
    if ( !v10 )
    {
      LOBYTE(v16) = v47;
      goto LABEL_14;
    }
    v41 = *(_QWORD *)(v10 + 32);
    v60 = v41;
    if ( (*(_BYTE *)(v41 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(v41, *(unsigned int *)(v10 + 40));
    else
      CellPaged = HvpGetCellPaged(v41);
    v55 = CellPaged;
    if ( CellPaged )
    {
      LOBYTE(v16) = v47;
      if ( v11 )
      {
        v16 = (unsigned __int8)v47;
        if ( *(_QWORD *)(v10 + 288) == v11 )
          v16 = 1;
        v47 = v16;
      }
LABEL_14:
      v17 = 0;
      v18 = 0;
      while ( 1 )
      {
        v53 = v18;
        if ( v18 >= v69 )
          break;
        v64 = 3LL * v18;
        v19 = *(_QWORD *)(v68 + 24LL * v18);
        v48 = v19;
        v20 = *(_WORD *)v19;
        if ( *(_WORD *)v19 )
        {
          v21 = *(_QWORD *)(v19 + 8);
          do
          {
            if ( *(_WORD *)(v21 + 2 * ((unsigned __int64)v20 >> 1) - 2) )
              break;
            v20 -= 2;
            *(_WORD *)v19 = v20;
          }
          while ( v20 );
        }
        ValueByName = -1;
        LODWORD(v44) = -1;
        Size = -1;
        if ( v10 )
        {
          v9 = v60;
          v59 = v60;
          if ( (_BYTE)v16 )
          {
            CmpFindNameInList(v60, v10 + 280, v19, 0LL, 0LL, (__int64)&Size);
            ValueByName = Size;
            LODWORD(v44) = Size;
          }
          else
          {
            ValueByName = CmpFindValueByName(v60);
            LODWORD(v44) = ValueByName;
            Size = ValueByName;
          }
          v19 = v48;
        }
        if ( ValueByName == -1 )
        {
          v9 = v13;
          v59 = v13;
          if ( (_BYTE)v51 )
          {
            CmpFindNameInList(v13, v12 + 280, v19, 0LL, 0LL, (__int64)&Size);
            ValueByName = Size;
          }
          else
          {
            LODWORD(v44) = 0;
            CmpFindNameInListWithStatus(v13, (unsigned int *)(v61 + 36), (unsigned __int16 *)v19, 0, 0LL, &v44);
            ValueByName = v44;
          }
          LODWORD(v44) = ValueByName;
          if ( ValueByName == -1 )
          {
            v17 = -1073741772;
            break;
          }
        }
        if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
          v23 = HvpGetCellFlat(v9, ValueByName);
        else
          v23 = HvpGetCellPaged(v9);
        v24 = v23;
        v48 = v23;
        if ( !v23 )
        {
          v17 = -1073741670;
          goto LABEL_43;
        }
        v25 = *(_DWORD *)(v23 + 4);
        v26 = v25 + 0x80000000;
        if ( v25 < 0x80000000 )
          v26 = v25;
        Size = v26;
        v27 = (HIDWORD(v44) + 3) & 0xFFFFFFFC;
        HIDWORD(v44) = v27;
        v58 = v27;
        v28 = (Size_4 + 3) & 0xFFFFFFFC;
        Size_4 = v28;
        v57 = v28;
        if ( v26 + v27 > *a6 || v26 + v27 < v27 || v43 )
        {
          v43 = 1;
        }
        else
        {
          if ( !(unsigned __int8)CmpGetValueData(v9, (__int64)&Src, (__int64)&v67, (__int64)&v54) )
          {
            v17 = -1073741670;
            v24 = v48;
            goto LABEL_43;
          }
          LODWORD(v44) = Size;
          memmove((void *)(a5 + HIDWORD(v44)), Src, Size);
          v29 = v64;
          v30 = v68;
          *(_DWORD *)(v68 + 8 * v64 + 16) = *(_DWORD *)(v48 + 12);
          *(_QWORD *)(v30 + 8 * v29 + 8) = v44;
          if ( (_BYTE)v67 )
          {
            ExFreePoolWithTag(Src, 0);
            LOBYTE(v67) = 0;
          }
          else if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
          {
            HvpReleaseCellFlat(v9, &v54);
          }
          else
          {
            HvpReleaseCellPaged(v9, &v54);
          }
          Src = 0LL;
          v26 = v44;
          HIDWORD(v44) += v44;
          v28 = Size_4;
        }
        Size_4 = v26 + v28;
        if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v9, v49);
        else
          HvpReleaseCellPaged(v9, v49);
        v18 = v53 + 1;
        LOBYTE(v16) = v47;
      }
      v31 = Size_4;
      v24 = 0LL;
      if ( v17 >= 0 )
      {
        if ( v43 )
          v17 = -2147483643;
        *a6 = HIDWORD(v44);
        if ( a7 )
          *a7 = v31;
      }
LABEL_43:
      if ( v24 )
      {
        if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v9, v49);
        else
          HvpReleaseCellPaged(v9, v49);
      }
      if ( v55 )
      {
        if ( (*(_BYTE *)(v60 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v60, v52);
        else
          HvpReleaseCellPaged(v60, v52);
      }
      if ( (*v63 & 1) != 0 )
        HvpReleaseCellFlat(v13, v50);
      else
        HvpReleaseCellPaged(v13, v50);
      CmpUnlockTwoKcbs(v10, v12);
      goto LABEL_48;
    }
    if ( (*v63 & 1) != 0 )
      HvpReleaseCellFlat(v13, v50);
    else
      HvpReleaseCellPaged(v13, v50);
  }
  else
  {
    HvUnlockHiveFlusherShared(v13);
  }
  CmpUnlockTwoKcbs(v10, v12);
  CmpUnlockRegistry(v39);
  return 3221225626LL;
}
