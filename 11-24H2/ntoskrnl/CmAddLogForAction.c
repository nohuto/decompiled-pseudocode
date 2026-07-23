/*
 * XREFs of CmAddLogForAction @ 0x140A01858
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x140830F98 (CmpSetSecurityDescriptorInfo.c)
 *     CmDeleteKey @ 0x14086DF2C (CmDeleteKey.c)
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1408713A8 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x14090B2FC (CmpCreateChild.c)
 *     CmSetLastWriteTimeKey @ 0x140962C40 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x140963680 (CmSetKeyFlags.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpConstructName @ 0x14087A710 (CmpConstructName.c)
 *     CmpGetValueData @ 0x14087A8E0 (CmpGetValueData.c)
 *     CmpCopyCompressedName @ 0x140882750 (CmpCopyCompressedName.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpTransWriteLog @ 0x140A01E5C (CmpTransWriteLog.c)
 *     HvBufferCheckSum @ 0x140A02614 (HvBufferCheckSum.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmAddLogForAction(__int64 a1, ULONG a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx
  unsigned int v6; // r13d
  size_t v7; // r14
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rcx
  const void **v13; // r12
  int v14; // edx
  int v15; // ebx
  ULONG_PTR v16; // rcx
  __int64 CellPaged; // rax
  unsigned int v18; // eax
  unsigned int v19; // ecx
  int v20; // ebx
  __int64 CellFlat; // rax
  unsigned __int16 v22; // cx
  unsigned int v23; // edx
  unsigned int v24; // eax
  unsigned int v25; // ebx
  __int64 Pool2; // rax
  int v27; // edx
  int v28; // eax
  char *v29; // rbx
  __int16 v30; // ax
  size_t v31; // r8
  void *v32; // rdx
  bool v33; // zf
  __int64 v34; // rcx
  __int64 v35; // rdx
  BOOLEAN v36; // al
  __int64 v37; // r13
  CLFS_INFORMATION *v38; // rax
  CLFS_INFORMATION *v39; // r14
  __int64 v40; // rcx
  int v42; // ebx
  unsigned int v43; // edx
  size_t v44; // r8
  void *v45; // rcx
  __int64 v46; // rdx
  unsigned int v47[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v48; // [rsp+48h] [rbp-30h] BYREF
  void *Src; // [rsp+50h] [rbp-28h] BYREF
  CLFS_LSN v50; // [rsp+58h] [rbp-20h] BYREF
  __int64 v51; // [rsp+60h] [rbp-18h]
  size_t Size; // [rsp+C0h] [rbp+48h] BYREF
  ULONG pcbInfoBuffer; // [rsp+C8h] [rbp+50h] BYREF
  int v54; // [rsp+D0h] [rbp+58h]
  unsigned int v55; // [rsp+D8h] [rbp+60h]

  pcbInfoBuffer = a2;
  v4 = *(_QWORD *)(a1 + 56);
  v5 = 0;
  v50.ullOffset = 0LL;
  v6 = -1;
  v47[0] = -1;
  v7 = 0LL;
  v9 = *(_DWORD *)(v4 + 48);
  v10 = 0LL;
  v47[1] = 0;
  v11 = 0LL;
  v55 = 0;
  LODWORD(Size) = 0;
  v54 = 0;
  if ( (v9 & 0x80u) != 0 )
    return 0LL;
  v12 = *(_QWORD *)(a1 + 48);
  v51 = *(_QWORD *)(*(_QWORD *)(v12 + 32) + 4152LL);
  if ( !*(_QWORD *)(v51 + 96) || !*(_QWORD *)(v4 + 56) || *(_DWORD *)(a1 + 68) == 13 )
    return 0LL;
  v13 = (const void **)CmpConstructName(v12, v4, a3, a4);
  if ( v13 )
  {
    v14 = *(_DWORD *)(a1 + 68);
    if ( !v14 || v14 == 2 )
    {
      v42 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 88LL) + 24LL);
LABEL_64:
      v23 = 64;
      v5 = v42 + 64;
      goto LABEL_24;
    }
    if ( v14 != 4 && v14 != 5 && v14 != 6 )
    {
      if ( v14 == 7 || v14 == 8 )
      {
        v5 = 56;
        goto LABEL_25;
      }
      if ( v14 != 9 )
      {
LABEL_25:
        v24 = *(unsigned __int16 *)v13;
        v25 = v24 + v5;
        if ( v25 < v24 )
        {
          v20 = -1073741562;
          goto LABEL_50;
        }
        Pool2 = ExAllocatePool2(0x100uLL, v25, 0x20204D43u);
        v10 = Pool2;
        if ( Pool2 )
        {
          *(_DWORD *)(Pool2 + 4) = v25;
          *(_DWORD *)(Pool2 + 8) = 1;
          *(_OWORD *)(Pool2 + 16) = *(_OWORD *)(*(_QWORD *)(a1 + 56) + 88LL);
          *(_WORD *)(Pool2 + 32) = *(_WORD *)v13;
          *(_WORD *)(Pool2 + 34) = *((_WORD *)v13 + 1);
          v27 = *(_DWORD *)(a1 + 68);
          if ( !v27 || v27 == 2 )
          {
            *(_DWORD *)(Pool2 + 12) = (v27 != 0) + 1;
            *(_DWORD *)(Pool2 + 48) = *(_DWORD *)(a1 + 72);
            *(_QWORD *)(Pool2 + 40) = Pool2 + 64;
            memmove((void *)(Pool2 + 64), v13[1], *(unsigned __int16 *)v13);
            v45 = (void *)(v10 + 64 + *(unsigned __int16 *)v13);
            *(_QWORD *)(v10 + 56) = v45;
            v46 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 88LL);
            v44 = *(unsigned int *)(v46 + 24);
            goto LABEL_82;
          }
          if ( v27 != 4 && v27 != 5 && v27 != 6 )
          {
            if ( v27 == 7 )
            {
              *(_DWORD *)(Pool2 + 12) = 6;
              *(_QWORD *)(Pool2 + 40) = Pool2 + 56;
              memmove((void *)(Pool2 + 56), v13[1], *(unsigned __int16 *)v13);
              *(_DWORD *)(v10 + 48) = *(_DWORD *)(a1 + 88);
              goto LABEL_45;
            }
            if ( v27 == 8 )
            {
              *(_DWORD *)(Pool2 + 12) = 7;
              *(_QWORD *)(Pool2 + 40) = Pool2 + 56;
              memmove((void *)(Pool2 + 56), v13[1], *(unsigned __int16 *)v13);
              *(_QWORD *)(v10 + 48) = *(_QWORD *)(a1 + 88);
              goto LABEL_45;
            }
            if ( v27 != 9 )
              goto LABEL_45;
            *(_DWORD *)(Pool2 + 12) = *(_BYTE *)(a1 + 100) != 0 ? 10 : 8;
            *(_QWORD *)(Pool2 + 40) = Pool2 + 64;
            memmove((void *)(Pool2 + 64), v13[1], *(unsigned __int16 *)v13);
            v43 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 24LL);
            *(_DWORD *)(v10 + 48) = v43;
            v44 = v43;
            v45 = (void *)(v10 + 64 + *(unsigned __int16 *)v13);
            *(_QWORD *)(v10 + 56) = v45;
            v46 = *(_QWORD *)(a1 + 88);
LABEL_82:
            memmove(v45, (const void *)(v46 + 32), v44);
            *(_QWORD *)(v10 + 56) = 0LL;
LABEL_45:
            v35 = *(unsigned int *)(v10 + 4);
            *(_QWORD *)(v10 + 40) = 0LL;
            *(_DWORD *)v10 = HvBufferCheckSum(v10, v35);
            v36 = ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL));
            v37 = v51;
            v20 = CmpTransWriteLog(v51, v10, *(_DWORD *)(v10 + 4), v36 != 0 ? 2 : 0, &v50);
            if ( v20 >= 0 && ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL)) )
              *(CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL) = v50;
            pcbInfoBuffer = 120;
            v38 = (CLFS_INFORMATION *)ExAllocatePool2(0x100uLL, 0x78uLL, 0x20204D43u);
            v39 = v38;
            if ( v38 )
            {
              ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(v37 + 88), v38, &pcbInfoBuffer);
              ExFreePoolWithTag(v39, 0);
            }
LABEL_50:
            if ( !v11 )
            {
LABEL_53:
              if ( v10 )
                ExFreePoolWithTag((PVOID)v10, 0);
              goto LABEL_55;
            }
LABEL_51:
            v40 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
            if ( (*(_BYTE *)(v40 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v40, (__int64)v47);
            else
              HvpReleaseCellPaged(v40, v47);
            goto LABEL_53;
          }
          v48 = 0xFFFFFFFFLL;
          Src = 0LL;
          LOBYTE(pcbInfoBuffer) = 0;
          if ( v27 == 4 )
            *(_DWORD *)(Pool2 + 12) = 3;
          else
            *(_DWORD *)(Pool2 + 12) = (v27 != 5) + 4;
          v28 = *(_DWORD *)(v11 + 12);
          *(_QWORD *)(v10 + 40) = v10 + 80;
          *(_DWORD *)(v10 + 64) = v28;
          memmove((void *)(v10 + 80), v13[1], *(unsigned __int16 *)v13);
          v29 = (char *)(*(unsigned __int16 *)v13 + v10 + 80);
          *(_QWORD *)(v10 + 56) = v29;
          if ( (*(_BYTE *)(v11 + 16) & 1) != 0 )
            CmpCopyCompressedName((unsigned __int64)v29, v7, v11 + 20, *(unsigned __int16 *)(v11 + 2));
          else
            memmove(v29, (const void *)(v11 + 20), v7);
          *(_QWORD *)(v10 + 56) = 0LL;
          v30 = v54;
          *(_WORD *)(v10 + 50) = v54;
          *(_WORD *)(v10 + 48) = v30;
          if ( *(_DWORD *)(a1 + 68) == 6 )
          {
            *(_DWORD *)(v10 + 68) = 0;
            *(_QWORD *)(v10 + 72) = 0LL;
            goto LABEL_45;
          }
          *(_DWORD *)(v10 + 68) = v55;
          if ( CmpGetValueData(
                 *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
                 v6,
                 v11,
                 (unsigned int *)&Size,
                 (__int64)&Src,
                 (__int64)&pcbInfoBuffer,
                 &v48) )
          {
            v31 = (unsigned int)Size;
            v32 = Src;
            *(_QWORD *)(v10 + 72) = &v29[v7];
            memmove(&v29[v7], v32, v31);
            v33 = (_BYTE)pcbInfoBuffer == 1;
            *(_QWORD *)(v10 + 72) = 0LL;
            if ( v33 )
            {
              ExFreePoolWithTag(Src, 0);
            }
            else
            {
              v34 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
              if ( (*(_BYTE *)(v34 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v34, (__int64)&v48);
              else
                HvpReleaseCellPaged(v34, (unsigned int *)&v48);
            }
            goto LABEL_45;
          }
        }
        v20 = -1073741670;
        goto LABEL_50;
      }
      v42 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 24LL);
      goto LABEL_64;
    }
    v15 = 80;
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
    if ( (unsigned int)(v14 - 4) > 1 )
    {
      v6 = *(_DWORD *)(a1 + 88);
      if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v16, v6, v47);
      else
        CellFlat = HvpGetCellPaged(v16, v6, v47);
      v11 = CellFlat;
      if ( CellFlat )
      {
LABEL_21:
        v22 = 2 * *(_WORD *)(v11 + 2);
        if ( (*(_BYTE *)(v11 + 16) & 1) == 0 )
          v22 = *(_WORD *)(v11 + 2);
        v23 = v15;
        v7 = v22;
        v54 = v22;
        v5 = v22 + v15;
LABEL_24:
        if ( v5 < v23 )
        {
          v20 = -1073741675;
          goto LABEL_50;
        }
        goto LABEL_25;
      }
    }
    else
    {
      v6 = *(_DWORD *)(a1 + 92);
      if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(v16, v6, v47);
      else
        CellPaged = HvpGetCellPaged(v16, v6, v47);
      v11 = CellPaged;
      if ( CellPaged )
      {
        v18 = *(_DWORD *)(CellPaged + 4);
        v19 = v18 + 0x80000000;
        if ( v18 < 0x80000000 )
          v19 = v18;
        v55 = v19;
        LODWORD(Size) = v19;
        v15 = v19 + 80;
        if ( v19 >= 0xFFFFFFB0 )
        {
          v20 = -1073741675;
          goto LABEL_51;
        }
        goto LABEL_21;
      }
    }
    v20 = -1073741670;
LABEL_55:
    CmpFreeTransientPoolWithTag(v13, 0x624E4D43u);
    return (unsigned int)v20;
  }
  return 3221225626LL;
}
