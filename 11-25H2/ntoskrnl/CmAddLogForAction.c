/*
 * XREFs of CmAddLogForAction @ 0x140868A1C
 * Callers:
 *     CmSetLastWriteTimeKey @ 0x1408639C0 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x1408640B0 (CmSetKeyFlags.c)
 *     CmSetValueKey @ 0x140869F98 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14086BE88 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14086D4EC (CmDeleteKey.c)
 *     CmpCreateChild @ 0x1408884FC (CmpCreateChild.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1409765B8 (CmpSetSecurityDescriptorInfo.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140442030 (CmpFreeTransientPoolWithTag.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     CmpTransWriteLog @ 0x1408667CC (CmpTransWriteLog.c)
 *     HvBufferCheckSum @ 0x140867310 (HvBufferCheckSum.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpConstructName @ 0x14087A050 (CmpConstructName.c)
 *     CmpGetValueData @ 0x14087A220 (CmpGetValueData.c)
 *     CmpCopyCompressedName @ 0x14087DC70 (CmpCopyCompressedName.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmAddLogForAction(__int64 a1, ULONG a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx
  size_t v4; // r14
  int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rcx
  const void **v10; // r12
  int v11; // edx
  int v12; // ebx
  ULONG_PTR v13; // rcx
  __int64 CellPaged; // rax
  unsigned int v15; // eax
  unsigned int v16; // ecx
  int v17; // ebx
  __int64 CellFlat; // rax
  unsigned __int16 v19; // cx
  unsigned int v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // ebx
  __int64 Pool2; // rax
  int v24; // edx
  int v25; // eax
  char *v26; // rbx
  __int16 v27; // ax
  void *v28; // rdx
  bool v29; // zf
  __int64 v30; // rcx
  unsigned int v31; // edx
  BOOLEAN v32; // al
  __int64 v33; // r13
  CLFS_INFORMATION *v34; // rax
  CLFS_INFORMATION *v35; // r14
  __int64 v36; // rcx
  int v38; // ebx
  unsigned int v39; // edx
  size_t v40; // r8
  void *v41; // rcx
  __int64 v42; // rdx
  _DWORD v43[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v44; // [rsp+48h] [rbp-30h] BYREF
  void *Src; // [rsp+50h] [rbp-28h] BYREF
  CLFS_LSN v46; // [rsp+58h] [rbp-20h] BYREF
  __int64 v47; // [rsp+60h] [rbp-18h]
  unsigned int Size; // [rsp+C0h] [rbp+48h]
  ULONG pcbInfoBuffer; // [rsp+C8h] [rbp+50h] BYREF
  int v50; // [rsp+D0h] [rbp+58h]
  unsigned int v51; // [rsp+D8h] [rbp+60h]

  pcbInfoBuffer = a2;
  v2 = *(_QWORD *)(a1 + 56);
  v3 = 0;
  v46.ullOffset = 0LL;
  v43[0] = -1;
  v4 = 0LL;
  v6 = *(_DWORD *)(v2 + 48);
  v7 = 0LL;
  v43[1] = 0;
  v8 = 0LL;
  v51 = 0;
  Size = 0;
  v50 = 0;
  if ( (v6 & 0x80u) != 0 )
    return 0LL;
  v9 = *(_QWORD *)(a1 + 48);
  v47 = *(_QWORD *)(*(_QWORD *)(v9 + 32) + 4152LL);
  if ( !*(_QWORD *)(v47 + 96) || !*(_QWORD *)(v2 + 56) || *(_DWORD *)(a1 + 68) == 13 )
    return 0LL;
  v10 = (const void **)CmpConstructName(v9);
  if ( v10 )
  {
    v11 = *(_DWORD *)(a1 + 68);
    if ( !v11 || v11 == 2 )
    {
      v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 88LL) + 24LL);
LABEL_65:
      v20 = 64;
      v3 = v38 + 64;
      goto LABEL_24;
    }
    if ( v11 != 4 && v11 != 5 && v11 != 6 )
    {
      if ( v11 == 7 || v11 == 8 )
      {
        v3 = 56;
        goto LABEL_25;
      }
      if ( v11 != 9 )
      {
LABEL_25:
        v21 = *(unsigned __int16 *)v10;
        v22 = v21 + v3;
        if ( v22 < v21 )
        {
          v17 = -1073741562;
          goto LABEL_50;
        }
        Pool2 = ExAllocatePool2(0x100uLL);
        v7 = Pool2;
        if ( Pool2 )
        {
          *(_DWORD *)(Pool2 + 4) = v22;
          *(_DWORD *)(Pool2 + 8) = 1;
          *(_OWORD *)(Pool2 + 16) = *(_OWORD *)(*(_QWORD *)(a1 + 56) + 88LL);
          *(_WORD *)(Pool2 + 32) = *(_WORD *)v10;
          *(_WORD *)(Pool2 + 34) = *((_WORD *)v10 + 1);
          v24 = *(_DWORD *)(a1 + 68);
          if ( !v24 || v24 == 2 )
          {
            *(_DWORD *)(Pool2 + 12) = (v24 != 0) + 1;
            *(_DWORD *)(Pool2 + 48) = *(_DWORD *)(a1 + 72);
            *(_QWORD *)(Pool2 + 40) = Pool2 + 64;
            memmove((void *)(Pool2 + 64), v10[1], *(unsigned __int16 *)v10);
            v41 = (void *)(v7 + 64 + *(unsigned __int16 *)v10);
            *(_QWORD *)(v7 + 56) = v41;
            v42 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 88LL);
            v40 = *(unsigned int *)(v42 + 24);
            goto LABEL_82;
          }
          if ( v24 != 4 && v24 != 5 && v24 != 6 )
          {
            if ( v24 == 7 )
            {
              *(_DWORD *)(Pool2 + 12) = 6;
              *(_QWORD *)(Pool2 + 40) = Pool2 + 56;
              memmove((void *)(Pool2 + 56), v10[1], *(unsigned __int16 *)v10);
              *(_DWORD *)(v7 + 48) = *(_DWORD *)(a1 + 88);
              goto LABEL_45;
            }
            if ( v24 == 8 )
            {
              *(_DWORD *)(Pool2 + 12) = 7;
              *(_QWORD *)(Pool2 + 40) = Pool2 + 56;
              memmove((void *)(Pool2 + 56), v10[1], *(unsigned __int16 *)v10);
              *(_QWORD *)(v7 + 48) = *(_QWORD *)(a1 + 88);
              goto LABEL_45;
            }
            if ( v24 != 9 )
              goto LABEL_45;
            *(_DWORD *)(Pool2 + 12) = *(_BYTE *)(a1 + 100) != 0 ? 10 : 8;
            *(_QWORD *)(Pool2 + 40) = Pool2 + 64;
            memmove((void *)(Pool2 + 64), v10[1], *(unsigned __int16 *)v10);
            v39 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 24LL);
            *(_DWORD *)(v7 + 48) = v39;
            v40 = v39;
            v41 = (void *)(v7 + 64 + *(unsigned __int16 *)v10);
            *(_QWORD *)(v7 + 56) = v41;
            v42 = *(_QWORD *)(a1 + 88);
LABEL_82:
            memmove(v41, (const void *)(v42 + 32), v40);
            *(_QWORD *)(v7 + 56) = 0LL;
LABEL_45:
            v31 = *(_DWORD *)(v7 + 4);
            *(_QWORD *)(v7 + 40) = 0LL;
            *(_DWORD *)v7 = HvBufferCheckSum(v7, v31);
            v32 = ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL));
            v33 = v47;
            v17 = CmpTransWriteLog(v47, v7, *(_DWORD *)(v7 + 4), v32 != 0 ? 2 : 0, &v46);
            if ( v17 >= 0 && ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL)) )
              *(CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL) = v46;
            pcbInfoBuffer = 120;
            v34 = (CLFS_INFORMATION *)ExAllocatePool2(0x100uLL);
            v35 = v34;
            if ( v34 )
            {
              ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(v33 + 88), v34, &pcbInfoBuffer);
              ExFreePoolWithTag(v35, 0);
            }
LABEL_50:
            if ( !v8 )
            {
LABEL_53:
              if ( v7 )
                ExFreePoolWithTag((PVOID)v7, 0);
              goto LABEL_55;
            }
LABEL_51:
            v36 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
            if ( (*(_BYTE *)(v36 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v36, v43);
            else
              HvpReleaseCellPaged(v36, v43);
            goto LABEL_53;
          }
          v44 = 0xFFFFFFFFLL;
          Src = 0LL;
          LOBYTE(pcbInfoBuffer) = 0;
          if ( v24 == 4 )
            *(_DWORD *)(Pool2 + 12) = 3;
          else
            *(_DWORD *)(Pool2 + 12) = (v24 != 5) + 4;
          v25 = *(_DWORD *)(v8 + 12);
          *(_QWORD *)(v7 + 40) = v7 + 80;
          *(_DWORD *)(v7 + 64) = v25;
          memmove((void *)(v7 + 80), v10[1], *(unsigned __int16 *)v10);
          v26 = (char *)(*(unsigned __int16 *)v10 + v7 + 80);
          *(_QWORD *)(v7 + 56) = v26;
          if ( (*(_BYTE *)(v8 + 16) & 1) != 0 )
            CmpCopyCompressedName(v26, (unsigned int)v4, v8 + 20, *(unsigned __int16 *)(v8 + 2));
          else
            memmove(v26, (const void *)(v8 + 20), v4);
          *(_QWORD *)(v7 + 56) = 0LL;
          v27 = v50;
          *(_WORD *)(v7 + 50) = v50;
          *(_WORD *)(v7 + 48) = v27;
          if ( *(_DWORD *)(a1 + 68) == 6 )
          {
            *(_DWORD *)(v7 + 68) = 0;
            *(_QWORD *)(v7 + 72) = 0LL;
            goto LABEL_45;
          }
          *(_DWORD *)(v7 + 68) = v51;
          if ( (unsigned __int8)CmpGetValueData(
                                  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
                                  (__int64)&Src,
                                  (__int64)&pcbInfoBuffer,
                                  (__int64)&v44) )
          {
            v28 = Src;
            *(_QWORD *)(v7 + 72) = &v26[v4];
            memmove(&v26[v4], v28, Size);
            v29 = (_BYTE)pcbInfoBuffer == 1;
            *(_QWORD *)(v7 + 72) = 0LL;
            if ( v29 )
            {
              ExFreePoolWithTag(Src, 0);
            }
            else
            {
              v30 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
              if ( (*(_BYTE *)(v30 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v30, &v44);
              else
                HvpReleaseCellPaged(v30, &v44);
            }
            goto LABEL_45;
          }
        }
        v17 = -1073741670;
        goto LABEL_50;
      }
      v38 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 24LL);
      goto LABEL_65;
    }
    v12 = 80;
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
    if ( (unsigned int)(v11 - 4) > 1 )
    {
      if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v13, *(unsigned int *)(a1 + 88));
      else
        CellFlat = HvpGetCellPaged(v13);
      v8 = CellFlat;
      if ( CellFlat )
      {
LABEL_21:
        v19 = 2 * *(_WORD *)(v8 + 2);
        if ( (*(_BYTE *)(v8 + 16) & 1) == 0 )
          v19 = *(_WORD *)(v8 + 2);
        v20 = v12;
        v4 = v19;
        v50 = v19;
        v3 = v19 + v12;
LABEL_24:
        if ( v3 < v20 )
        {
          v17 = -1073741675;
          goto LABEL_50;
        }
        goto LABEL_25;
      }
    }
    else
    {
      if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(v13, *(unsigned int *)(a1 + 92));
      else
        CellPaged = HvpGetCellPaged(v13);
      v8 = CellPaged;
      if ( CellPaged )
      {
        v15 = *(_DWORD *)(CellPaged + 4);
        v16 = v15 + 0x80000000;
        if ( v15 < 0x80000000 )
          v16 = v15;
        v51 = v16;
        Size = v16;
        v12 = v16 + 80;
        if ( v16 >= 0xFFFFFFB0 )
        {
          v17 = -1073741675;
          goto LABEL_51;
        }
        goto LABEL_21;
      }
    }
    v17 = -1073741670;
LABEL_55:
    CmpFreeTransientPoolWithTag(v10, 0x624E4D43u);
    return (unsigned int)v17;
  }
  return 3221225626LL;
}
