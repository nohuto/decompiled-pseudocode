/*
 * XREFs of RaidUnitClaimIrp @ 0x14004FB60
 * Callers:
 *     RaUnitStartIo @ 0x14004E6F0 (RaUnitStartIo.c)
 *     RaUnitStartResetIo @ 0x14009942C (RaUnitStartResetIo.c)
 * Callees:
 *     RaidAdapterMapBuffers @ 0x140024BF0 (RaidAdapterMapBuffers.c)
 *     StorRemapSenseInfo @ 0x140026090 (StorRemapSenseInfo.c)
 *     TranslateToExtendedSrb @ 0x140027B60 (TranslateToExtendedSrb.c)
 *     RaUnitAddToPendingList @ 0x14004D5D0 (RaUnitAddToPendingList.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0zqjuuujssstqq_EtwWriteTransfer @ 0x140090950 (McTemplateK0zqjuuujssstqq_EtwWriteTransfer.c)
 *     StorpDataInBufferAllocateMdlAndLockPages @ 0x1400A3A34 (StorpDataInBufferAllocateMdlAndLockPages.c)
 */

__int64 __fastcall RaidUnitClaimIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _DWORD *v5; // r15
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v10; // rbx
  __int64 v12; // rcx
  char v13; // r15
  unsigned int v14; // r11d
  _DWORD *v15; // rdi
  __int64 v16; // r9
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // r10
  __int64 v20; // r8
  int v21; // ecx
  int v22; // ecx
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // ecx
  __int64 result; // rax
  int **v33; // rdi
  bool v34; // zf
  int v35; // eax
  int *v36; // rax
  int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  int *v43; // r8
  __int64 v44; // r14
  __int64 v45; // rdx
  __int64 v46; // rax
  int *v47; // rcx
  __int64 v48; // rdx
  int v49; // r9d
  struct _MDL *v50; // rcx
  unsigned __int8 v51; // cl
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rdi
  __int64 v56; // rdx
  int v57; // eax
  char v58; // [rsp+80h] [rbp-68h]
  __int64 v59; // [rsp+88h] [rbp-60h] BYREF
  __int64 v60; // [rsp+90h] [rbp-58h]
  __int64 v61; // [rsp+98h] [rbp-50h]
  __int64 v62; // [rsp+A0h] [rbp-48h]
  unsigned __int8 v63; // [rsp+F8h] [rbp+10h]

  v4 = *(_QWORD *)(a2 + 184);
  v5 = 0LL;
  v6 = *(_QWORD *)(a4 + 16);
  v7 = 0LL;
  v8 = 0LL;
  v58 = 0;
  v62 = 0LL;
  v10 = *(_QWORD *)(v4 + 8);
  v63 = 0;
  v59 = 0LL;
  if ( *(_BYTE *)(v10 + 2) == 40 )
  {
    v12 = v10 + *(unsigned int *)(v10 + 52);
    *(_WORD *)v12 = 1;
    *(_DWORD *)(v12 + 4) = 4;
    *(_BYTE *)(v12 + 8) = *(_BYTE *)(a1 + 104);
    *(_BYTE *)(v12 + 9) = *(_BYTE *)(a1 + 105);
    *(_BYTE *)(v12 + 10) = *(_BYTE *)(a1 + 106);
    v13 = *(_BYTE *)(v10 + 2);
    v60 = *(_QWORD *)(v10 + 80);
    v61 = *(_QWORD *)(v10 + 64);
    if ( v13 == 40 && !*(_DWORD *)(v10 + 20) )
    {
      v14 = *(_DWORD *)(v10 + 56);
      v15 = (_DWORD *)(v10 + 56);
      v16 = 0LL;
      if ( !v14 )
        goto LABEL_17;
      while ( 1 )
      {
        v17 = *(unsigned int *)(v10 + 4 * v16 + 120);
        if ( (unsigned int)v17 < 0x80 )
          goto LABEL_12;
        v18 = *(unsigned int *)(v10 + 16);
        if ( (unsigned int)v17 >= (unsigned int)v18 )
          goto LABEL_12;
        v19 = v17 + v10;
        v20 = (unsigned int)v17;
        v21 = *(_DWORD *)(v17 + v10) - 64;
        if ( !v21 )
          goto LABEL_10;
        v22 = v21 - 1;
        if ( v22 )
          break;
        v23 = v20 + 56;
LABEL_11:
        if ( v23 <= v18 )
        {
          v63 = *(_BYTE *)(v19 + 9);
          goto LABEL_17;
        }
LABEL_12:
        v16 = (unsigned int)(v16 + 1);
        if ( (unsigned int)v16 >= v14 )
          goto LABEL_17;
      }
      if ( v22 != 1 )
        goto LABEL_12;
LABEL_10:
      v23 = v20 + 40;
      goto LABEL_11;
    }
    v63 = 0;
    v15 = (_DWORD *)(v10 + 56);
    if ( v13 == 40 )
    {
LABEL_17:
      if ( (*(_BYTE *)(v10 + 24) & 0xC0) == 0xC0 )
      {
        v24 = 0LL;
        if ( *v15 )
        {
          while ( 1 )
          {
            v25 = *(unsigned int *)(v10 + 4 * v24 + 120);
            if ( (unsigned int)v25 >= 0x80 )
            {
              v26 = *(unsigned int *)(v10 + 16);
              if ( (unsigned int)v25 <= (unsigned int)v26 )
              {
                v27 = v25 + v10;
                if ( *(_DWORD *)(v25 + v10) == 1 && v25 + 24 <= v26 )
                  break;
              }
            }
            v24 = (unsigned int)(v24 + 1);
            if ( (unsigned int)v24 >= *v15 )
              goto LABEL_41;
          }
          if ( v27 && *(_QWORD *)(v27 + 16) )
          {
            v28 = (unsigned int)*v15;
            if ( !(_DWORD)v28 )
              goto LABEL_33;
            v29 = 0LL;
            while ( 1 )
            {
              v30 = *(unsigned int *)(v10 + 4 * v29 + 120);
              if ( (unsigned int)v30 >= 0x80
                && (unsigned int)v30 < *(_DWORD *)(v10 + 16)
                && *(_DWORD *)(v30 + v10) == 160 )
              {
                break;
              }
              v29 = (unsigned int)(v29 + 1);
              if ( (unsigned int)v29 >= (unsigned int)v28 )
                goto LABEL_33;
            }
            v7 = *(_QWORD *)(v30 + v10 + 8);
            if ( v7 )
            {
              v8 = *(_QWORD *)(v27 + 16);
              v59 = *(_QWORD *)(v30 + v10 + 8);
            }
            else
            {
LABEL_33:
              v31 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
              if ( v31 == 315412 || v31 == 315464 )
                v28 = *(unsigned __int8 *)(a2 + 64);
              else
                LOBYTE(v28) = 0;
              v8 = *(_QWORD *)(v27 + 16);
              result = StorpDataInBufferAllocateMdlAndLockPages(&v59, *(unsigned int *)(v27 + 8), v8, v28);
              if ( (int)result < 0 )
                return result;
              v7 = v59;
            }
          }
        }
      }
    }
LABEL_41:
    v33 = (int **)(a1 + 24);
    v5 = (_DWORD *)v10;
  }
  else
  {
    v33 = (int **)(a1 + 24);
    *(_BYTE *)(v10 + 6) = *(_BYTE *)(a1 + 105);
    *(_BYTE *)(v10 + 5) = *(_BYTE *)(a1 + 104);
    *(_BYTE *)(v10 + 7) = *(_BYTE *)(a1 + 106);
    v60 = *(_QWORD *)(v10 + 48);
    v61 = *(_QWORD *)(v10 + 24);
    v63 = *(_BYTE *)(v10 + 11);
    v36 = *(int **)(a1 + 24);
    v37 = *v36;
    if ( *v36 == 1314275652 )
    {
      v38 = (__int64)v36 + 274;
    }
    else
    {
      v38 = (__int64)v36 + 482;
      if ( v37 != 1094997074 )
        v38 = 98LL;
    }
    if ( *(_BYTE *)v38 == 1 )
    {
      v39 = *(_QWORD *)(v6 + 760);
      if ( !v39 )
      {
        *(_BYTE *)(v10 + 3) = 48;
        result = 3221225626LL;
        *(_DWORD *)(v10 + 64) = -1073741670;
        return result;
      }
      if ( v37 == 1094997074 )
      {
        v40 = (__int64)(v36 + 152);
      }
      else if ( v37 == 1314275652 )
      {
        v40 = (__int64)(v36 + 100);
      }
      else
      {
        v40 = 232LL;
      }
      result = TranslateToExtendedSrb(
                 v39,
                 v10,
                 *(_DWORD *)(v6 + 744),
                 a4,
                 a3,
                 (*(_DWORD *)(*(_QWORD *)v40 + 184LL) & 0x80) != 0);
      if ( (int)result < 0 )
      {
        *(_BYTE *)(v10 + 3) = 48;
        *(_DWORD *)(v10 + 64) = result;
        return result;
      }
      *(_BYTE *)(v6 + 16) |= 0x40u;
      v5 = *(_DWORD **)(v6 + 760);
      *(_QWORD *)(v6 + 752) = v10;
      v41 = *(_QWORD *)(a2 + 184);
      v62 = v10;
      v10 = (__int64)v5;
      v58 = 1;
      *(_QWORD *)(v41 + 8) = v5;
    }
  }
  v34 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(v6 + 160) = a2;
  *(_QWORD *)(v6 + 168) = v10;
  *(_QWORD *)(v6 + 224) = a1;
  *(_QWORD *)(v6 + 104) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v6 + 136) = v7;
  if ( !v34 )
    IoGetActivityIdIrp(a2, v6 + 728);
  if ( ((*v33)[1165] & 1) != 0 )
  {
    if ( *(_BYTE *)(v10 + 2) == 40 )
      v35 = v5[24];
    else
      v35 = *(_DWORD *)(v10 + 56);
    *(_DWORD *)(v6 + 20) = v35;
  }
  else
  {
    *(_WORD *)(v6 + 20) = -1;
    *(_BYTE *)(v6 + 22) = -1;
  }
  LOBYTE(v42) = *(_BYTE *)(v6 + 16) & 0xE7;
  *(_DWORD *)(v6 + 24) = 0;
  *(_QWORD *)(v6 + 192) = v8;
  *(_BYTE *)(v6 + 16) = v42 | 4;
  *(_QWORD *)(v6 + 176) = v60;
  HIDWORD(v42) = HIDWORD(v61);
  *(_QWORD *)(v6 + 184) = v61;
  if ( *(_BYTE *)(v10 + 2) == 40 )
  {
    *((_QWORD *)v5 + 12) = v6;
    v43 = *v33;
    if ( **v33 == 1094997074 && (*((_BYTE *)v43 + 111) & 4) != 0 )
    {
      LODWORD(v42) = HIDWORD(KeGetPcr()[1].LockArray);
      _InterlockedIncrement(*(volatile signed __int32 **)(8 * v42 + *((_QWORD *)v43 + 771)));
      v44 = a4;
      v45 = **(_QWORD **)(8 * v42 + *((_QWORD *)v43 + 771));
      v5[11] = HIDWORD(v45);
      v5[8] = v45;
    }
    else
    {
      v44 = a4;
      v5[8] = *(_DWORD *)a4;
    }
  }
  else
  {
    *(_QWORD *)(v10 + 48) = v6;
    if ( **v33 == 1094997074 && (*((_BYTE *)*v33 + 111) & 4) != 0 )
    {
      v44 = a4;
      *(_BYTE *)(v10 + 8) = -1;
    }
    else
    {
      v44 = a4;
      *(_BYTE *)(v10 + 8) = *(_BYTE *)a4;
    }
  }
  v46 = 79LL;
  v47 = *v33;
  v48 = *(_QWORD *)(v44 + 8);
  v49 = **v33;
  if ( *(_BYTE *)(v10 + 2) == 40 )
  {
    if ( v49 != 1314275652 )
      v46 = 131LL;
    if ( ((v47[v46] + 7) & 0xFFFFFFF8) != 0 )
      *(_QWORD *)(v10 + 104) = v48;
  }
  else
  {
    if ( v49 != 1314275652 )
      v46 = 131LL;
    if ( ((v47[v46] + 7) & 0xFFFFFFF8) != 0 )
      *(_QWORD *)(v10 + 56) = v48;
  }
  if ( (unsigned int)RaidAdapterMapBuffers(*v33, a2) == -1073741670 )
  {
    if ( *(_BYTE *)(v10 + 2) == 40 )
    {
      if ( !v58 )
      {
        v5[11] = -1073741670;
LABEL_91:
        v50 = *(struct _MDL **)(v6 + 136);
        if ( v50 )
        {
          MmUnlockPages(v50);
          IoFreeMdl(*(PMDL *)(v6 + 136));
          *(_QWORD *)(v6 + 136) = 0LL;
        }
        return 3221225626LL;
      }
    }
    else if ( !v58 )
    {
      *(_QWORD *)(v10 + 48) = *(_QWORD *)(v6 + 176);
      goto LABEL_90;
    }
    v10 = v62;
    *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) = v62;
LABEL_90:
    *(_DWORD *)(v10 + 64) = -1073741670;
    goto LABEL_91;
  }
  v51 = *(_BYTE *)(a1 + 1860);
  if ( v63 > v51 )
    v51 = v63;
  StorRemapSenseInfo(v6, *(_QWORD *)(v44 + 24), v51);
  RaUnitAddToPendingList(a1, a2);
  if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline(v53, v52)
    && StorEtwLoggingEnabled )
  {
    if ( (v54 = *(_QWORD *)(v6 + 104)) != 0
      && (v55 = *(_QWORD *)(a1 + 8), (*(_DWORD *)(v55 + 152) & *(_DWORD *)(v54 + 44)) != 0)
      || (v56 = *(_QWORD *)(v6 + 136)) != 0
      && (v55 = *(_QWORD *)(a1 + 8), (*(_DWORD *)(v55 + 152) & *(_DWORD *)(v56 + 44)) != 0) )
    {
      if ( (byte_140171466 & 2) != 0 )
      {
        if ( v54 )
          v57 = *(_DWORD *)(v54 + 44);
        else
          v57 = *(_DWORD *)(*(_QWORD *)(v6 + 136) + 44LL);
        McTemplateK0zqjuuujssstqq_EtwWriteTransfer(
          a1 + 242,
          a1 + 177,
          a1 + 168,
          *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4720LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_QWORD *)(a1 + 24) + 5064LL,
          *(_BYTE *)(a1 + 104),
          *(_BYTE *)(a1 + 105),
          *(_BYTE *)(a1 + 106),
          a1 + 2104,
          a1 + 168,
          a1 + 177,
          a1 + 242,
          *(_BYTE *)(a1 + 506) & 1,
          *(_DWORD *)(v55 + 152),
          v57);
      }
    }
  }
  return 0LL;
}
