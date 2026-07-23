/*
 * XREFs of RtlpUnwindPrologue @ 0x140259E60
 * Callers:
 *     RtlpxVirtualUnwind @ 0x140259250 (RtlpxVirtualUnwind.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     RtlpIsNoShadowStackUnwindMachineFrameEntry @ 0x14047596C (RtlpIsNoShadowStackUnwindMachineFrameEntry.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpUnwindPrologue(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        char *a6,
        _QWORD *a7,
        __int64 a8)
{
  char *v9; // r10
  __int64 v10; // rdi
  __int64 v11; // r11
  unsigned int v12; // ecx
  int v13; // ecx
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rax
  _QWORD **v17; // r8
  unsigned __int64 v18; // rdx
  _QWORD *v19; // rcx
  _DWORD *v20; // r9
  __int64 v21; // r11
  char *v22; // r11
  __int64 v23; // rcx
  unsigned int v24; // edx
  __int64 v25; // r10
  char *v26; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  int v30; // edx
  unsigned int v31; // edx
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // r9
  __int64 v36; // r8
  _QWORD *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned __int64 v40; // r8
  __int64 v41; // rdx
  unsigned __int64 v42; // rdx
  char v43; // r8
  __int64 v44; // rcx
  int v45; // edx
  _QWORD *v46; // r8
  char v47; // [rsp+20h] [rbp-88h]
  int v48; // [rsp+40h] [rbp-68h]
  __int64 v49; // [rsp+48h] [rbp-60h]
  unsigned int v50; // [rsp+50h] [rbp-58h]

  v9 = 0LL;
  v48 = 0;
  v49 = a5 + 120;
LABEL_2:
  LODWORD(v10) = (_DWORD)v9;
  v47 = 0;
  v50 = a2 - *a4 - a1;
  v11 = a1 + (unsigned int)a4[2];
  if ( a2 <= 0x7FFFFFFEFFFFLL && (v11 & 3) != 0 )
LABEL_4:
    ExRaiseDatatypeMisalignment();
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_5:
      v12 = *(unsigned __int8 *)(v11 + 2);
      if ( (unsigned int)v10 >= v12 )
      {
        if ( (*(_BYTE *)v11 & 0x20) == 0 )
        {
          if ( v47 )
          {
            v26 = a6;
            if ( a6 )
            {
              while ( (unsigned int)v9 < 4 )
              {
                if ( (__int64 (__fastcall *)())v11 == RtlpSafeMachineFrameEntries[(unsigned int)v9] )
                {
                  v47 = 0;
                  goto LABEL_47;
                }
                LODWORD(v9) = (_DWORD)v9 + 1;
              }
              goto LABEL_47;
            }
          }
          else
          {
            if ( a2 <= 0x7FFFFFFEFFFFLL )
            {
              v16 = *(_QWORD *)(a5 + 152);
              if ( (v16 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
            }
            if ( *(_QWORD *)a8 )
            {
              v17 = (_QWORD **)(a5 + 152);
              v18 = *(_QWORD *)(a5 + 152);
              if ( v18 < **(_QWORD **)a8 )
                return 3221225512LL;
              if ( v18 > **(_QWORD **)(a8 + 8) - 8LL )
                return 3221225512LL;
            }
            else
            {
              v17 = (_QWORD **)(a5 + 152);
            }
            v19 = *v17;
            *(_QWORD *)(a5 + 248) = **v17;
            *v17 = v19 + 1;
            if ( (*(_DWORD *)(a5 + 48) & 0x100040) == 0x100040 )
            {
              v20 = (_DWORD *)(a5 + 1232);
              if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0x800) != 0
                && (MEMORY[0xFFFFF780000003EC] & 0xFFFFFFF8) == 0 )
              {
                v21 = *(int *)(a5 + 1248);
                if ( *v20 <= (int)v21 && *(_DWORD *)(a5 + 1236) + *v20 >= (int)v21 + *(_DWORD *)(a5 + 1252) )
                {
                  v22 = (char *)v20 + v21;
                  if ( v22 )
                  {
                    if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
                    {
                      v25 = MEMORY[0xFFFFF78000000448];
                      goto LABEL_41;
                    }
                    v23 = *((_QWORD *)v22 + 1);
                    if ( (v23 & 0x800) != 0 )
                    {
                      v24 = 576;
                      if ( (v23 & 4) != 0 )
                        v24 = MEMORY[0xFFFFF7800000060C] + 576;
                      if ( (v23 & 8) != 0 )
                      {
                        if ( (MEMORY[0xFFFFF780000005F8] & 8) != 0 )
                          v24 = (v24 + 63) & 0xFFFFFFC0;
                        v24 += MEMORY[0xFFFFF78000000610];
                      }
                      if ( (v23 & 0x10) != 0 )
                      {
                        if ( (MEMORY[0xFFFFF780000005F8] & 0x10) != 0 )
                          v24 = (v24 + 63) & 0xFFFFFFC0;
                        v24 += MEMORY[0xFFFFF78000000614];
                      }
                      if ( (v23 & 0x20) != 0 )
                      {
                        if ( (MEMORY[0xFFFFF780000005F8] & 0x20) != 0 )
                          v24 = (v24 + 63) & 0xFFFFFFC0;
                        v24 += MEMORY[0xFFFFF78000000618];
                      }
                      if ( (v23 & 0x40) != 0 )
                      {
                        if ( (MEMORY[0xFFFFF780000005F8] & 0x40) != 0 )
                          v24 = (v24 + 63) & 0xFFFFFFC0;
                        v24 += MEMORY[0xFFFFF7800000061C];
                      }
                      if ( (v23 & 0x80u) != 0LL )
                      {
                        if ( MEMORY[0xFFFFF780000005F8] < 0 )
                          v24 = (v24 + 63) & 0xFFFFFFC0;
                        v24 += MEMORY[0xFFFFF78000000620];
                      }
                      if ( (v23 & 0x100) != 0 )
                      {
                        if ( (MEMORY[0xFFFFF780000005F8] & 0x100) != 0 )
                          v24 = (v24 + 63) & 0xFFFFFFC0;
                        v24 += MEMORY[0xFFFFF78000000624];
                      }
                      if ( (v23 & 0x200) != 0 )
                      {
                        if ( (MEMORY[0xFFFFF780000005F8] & 0x200) != 0 )
                          v24 = (v24 + 63) & 0xFFFFFFC0;
                        v24 += MEMORY[0xFFFFF78000000628];
                      }
                      if ( (v23 & 0x400) != 0 )
                      {
                        if ( (MEMORY[0xFFFFF780000005F8] & 0x400) != 0 )
                          v24 = (v24 + 63) & 0xFFFFFFC0;
                        v24 += MEMORY[0xFFFFF7800000062C];
                      }
                      if ( (MEMORY[0xFFFFF780000005F8] & 0x800) != 0 )
                        v24 = (v24 + 63) & 0xFFFFFFC0;
                      v25 = v24;
LABEL_41:
                      v9 = &v22[v25 - 512];
                    }
                  }
                }
              }
              if ( v9 && (*v9 & 1) != 0 )
                *((_QWORD *)v9 + 1) += 8LL;
            }
            v26 = a6;
            if ( (*(_DWORD *)(a5 + 48) & 0x100080) == 0x100080 )
              *(_QWORD *)(*(int *)(a5 + 1256) + a5 + 1232) += 8LL;
LABEL_47:
            if ( v26 )
              *v26 = v47;
          }
          *a7 = a4;
          return 0LL;
        }
        if ( (v12 & 1) != 0 )
          ++v12;
        a4 = (_DWORD *)(v11 + 2 * (v12 + 2LL));
        if ( a2 <= 0x7FFFFFFEFFFFLL && (((_BYTE)v11 + 2 * ((_BYTE)v12 + 2)) & 3) != 0 )
          goto LABEL_4;
        if ( (unsigned int)++v48 > 0x20 )
LABEL_76:
          RtlRaiseStatus(-1073741569);
        goto LABEL_2;
      }
      v13 = *(_BYTE *)(v11 + 2LL * (unsigned int)v10 + 5) & 0xF;
      v14 = *(unsigned __int8 *)(v11 + 2LL * (unsigned int)v10 + 5) >> 4;
      v15 = v11 + 2LL * (unsigned int)v10;
      if ( v50 >= *(unsigned __int8 *)(v15 + 4) )
        break;
      v43 = *(_BYTE *)(v15 + 5);
      v44 = v43 & 0xF;
      if ( (unsigned int)v44 >= 0xB )
        goto LABEL_76;
      v45 = *((unsigned __int8 *)&RtlpUnwindOpSlotTable + v44);
      if ( (_DWORD)v44 == 1 && (v43 & 0xF0) != 0 )
        ++v45;
      LODWORD(v10) = v45 + v10;
    }
    if ( (*(_BYTE *)(v11 + 2LL * (unsigned int)v10 + 5) & 0xF) == 0 )
      break;
    if ( v13 == 1 )
    {
      v10 = (unsigned int)(v10 + 1);
      v30 = *(unsigned __int16 *)(v11 + 2 * v10 + 4);
      if ( (_DWORD)v14 )
      {
        v10 = (unsigned int)(v10 + 1);
        v31 = (*(unsigned __int16 *)(v11 + 2 * v10 + 4) << 16) + v30;
      }
      else
      {
        v31 = 8 * v30;
      }
      *(_QWORD *)(a5 + 152) += v31;
      LODWORD(v10) = v10 + 1;
    }
    else if ( v13 == 4 )
    {
      LODWORD(v10) = v10 + 1;
      v32 = a3 + 8LL * *(unsigned __int16 *)(v11 + 2LL * (unsigned int)v10 + 4);
      if ( a2 <= 0x7FFFFFFEFFFFLL && (v32 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( *(_QWORD *)a8 )
      {
        if ( v32 < **(_QWORD **)a8 )
          return 3221225512LL;
        if ( v32 > **(_QWORD **)(a8 + 8) - 8LL )
          return 3221225512LL;
      }
      *(_QWORD *)(v49 + 8LL * (unsigned int)v14) = *(_QWORD *)v32;
      v33 = *(_QWORD *)(a8 + 16);
      if ( v33 )
      {
        *(_QWORD *)(v33 + 8LL * (unsigned int)v14 + 128) = v32;
        LODWORD(v10) = v10 + 1;
      }
      else
      {
LABEL_59:
        LODWORD(v10) = v10 + 1;
      }
    }
    else
    {
      switch ( *(_BYTE *)(v11 + 2LL * (unsigned int)v10 + 5) & 0xF )
      {
        case 2:
          *(_QWORD *)(a5 + 152) += (unsigned int)(8 * v14 + 8);
          LODWORD(v10) = v10 + 1;
          goto LABEL_5;
        case 3:
          v34 = *(_QWORD *)(v49 + 8LL * (*(_BYTE *)(v11 + 3) & 0xF));
          *(_QWORD *)(a5 + 152) = v34;
          *(_QWORD *)(a5 + 152) = v34 - (*(_BYTE *)(v11 + 3) & 0xF0);
          LODWORD(v10) = v10 + 1;
          goto LABEL_5;
        case 5:
          v10 = (unsigned int)(v10 + 2);
          v46 = (_QWORD *)(((unsigned __int64)*(unsigned __int16 *)(v11 + 2 * v10 + 4) << 16)
                         + a3
                         + *(unsigned __int16 *)(v11 + 2LL * (unsigned int)(v10 - 1) + 4));
          if ( a2 <= 0x7FFFFFFEFFFFLL
            && (((_BYTE)a3 + (unsigned __int8)*(_WORD *)(v11 + 2LL * (unsigned int)(v10 - 1) + 4)) & 3) != 0 )
          {
            ExRaiseDatatypeMisalignment();
          }
          if ( *(_QWORD *)a8
            && ((unsigned __int64)v46 < **(_QWORD **)a8 || (unsigned __int64)v46 > **(_QWORD **)(a8 + 8) - 8LL) )
          {
            return 3221225512LL;
          }
          *(_QWORD *)(v49 + 8LL * (unsigned int)v14) = *v46;
          LODWORD(v10) = v10 + 1;
          goto LABEL_5;
        case 6:
          LODWORD(v10) = v10 + 2;
          goto LABEL_5;
        case 7:
          LODWORD(v10) = v10 + 3;
          goto LABEL_5;
        case 8:
          v10 = (unsigned int)(v10 + 1);
          v35 = a3 + 16LL * *(unsigned __int16 *)(v11 + 2 * v10 + 4);
          if ( a2 <= 0x7FFFFFFEFFFFLL && (v35 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          goto LABEL_86;
        case 9:
          v10 = (unsigned int)(v10 + 2);
          v35 = ((unsigned __int64)*(unsigned __int16 *)(v11 + 2 * v10 + 4) << 16)
              + a3
              + *(unsigned __int16 *)(v11 + 2LL * (unsigned int)(v10 - 1) + 4);
          if ( a2 <= 0x7FFFFFFEFFFFLL
            && (((_BYTE)a3 + (unsigned __int8)*(_WORD *)(v11 + 2LL * (unsigned int)(v10 - 1) + 4)) & 3) != 0 )
          {
            ExRaiseDatatypeMisalignment();
          }
LABEL_86:
          if ( !*(_QWORD *)a8 )
            goto LABEL_87;
          if ( v35 < **(_QWORD **)a8 )
            return 3221225512LL;
          if ( v35 > **(_QWORD **)(a8 + 8) - 16LL )
            return 3221225512LL;
LABEL_87:
          v36 = *(_QWORD *)(v35 + 8);
          v37 = (_QWORD *)(a5 + 416 + 16 * v14);
          *v37 = *(_QWORD *)v35;
          v37[1] = v36;
          v38 = *(_QWORD *)(a8 + 16);
          if ( !v38 )
            goto LABEL_59;
          *(_QWORD *)(v38 + 8 * v14) = v35;
          LODWORD(v10) = v10 + 1;
          goto LABEL_5;
        case 0xA:
          v47 = 1;
          v39 = *(_QWORD *)(a5 + 152);
          v40 = v39 + 8;
          if ( !(_DWORD)v14 )
            v40 = *(_QWORD *)(a5 + 152);
          v41 = 32LL;
          if ( !(_DWORD)v14 )
            v41 = 24LL;
          v42 = v39 + v41;
          if ( a2 <= 0x7FFFFFFEFFFFLL && (v40 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( !*(_QWORD *)a8 )
            goto LABEL_99;
          if ( v40 < **(_QWORD **)a8 )
            return 3221225512LL;
          if ( v40 > **(_QWORD **)(a8 + 8) - 8LL )
            return 3221225512LL;
LABEL_99:
          if ( a2 <= 0x7FFFFFFEFFFFLL && (v42 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( *(_QWORD *)a8 )
          {
            if ( v42 < **(_QWORD **)a8 )
              return 3221225512LL;
            if ( v42 > **(_QWORD **)(a8 + 8) - 8LL )
              return 3221225512LL;
          }
          *(_QWORD *)(a5 + 248) = *(_QWORD *)v40;
          *(_QWORD *)(a5 + 152) = *(_QWORD *)v42;
          if ( (*(_DWORD *)(a5 + 48) & 0x100080) != 0x100080
            || (unsigned __int8)RtlpIsNoShadowStackUnwindMachineFrameEntry(v11, v42, v40, 0x7FFFFFFEFFFFLL) )
          {
            goto LABEL_59;
          }
          *(_QWORD *)(*(int *)(a5 + 1256) + a5 + 1232) += 24LL;
          LODWORD(v10) = v10 + 1;
          break;
        default:
          goto LABEL_76;
      }
    }
  }
  v28 = *(_QWORD *)(a5 + 152);
  if ( a2 <= 0x7FFFFFFEFFFFLL && (v28 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( !*(_QWORD *)a8 )
    goto LABEL_56;
  if ( v28 < **(_QWORD **)a8 )
    return 3221225512LL;
  if ( v28 <= **(_QWORD **)(a8 + 8) - 8LL )
  {
LABEL_56:
    *(_QWORD *)(v49 + 8LL * (unsigned int)v14) = *(_QWORD *)v28;
    v29 = *(_QWORD *)(a8 + 16);
    if ( v29 )
      *(_QWORD *)(v29 + 8LL * (unsigned int)v14 + 128) = v28;
    *(_QWORD *)(a5 + 152) += 8LL;
    goto LABEL_59;
  }
  return 3221225512LL;
}
