/*
 * XREFs of RtlpUnwindPrologue @ 0x1800796F0
 * Callers:
 *     RtlpxVirtualUnwind @ 0x180078D20 (RtlpxVirtualUnwind.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18007C3F0 (RtlRaiseStatus.c)
 *     RtlpVirtualPopShadowStack @ 0x1800D4B80 (RtlpVirtualPopShadowStack.c)
 *     RtlpIsContinuationContextMachineFrameEntry @ 0x1800EFF30 (RtlpIsContinuationContextMachineFrameEntry.c)
 *     RtlpUnwindOpSlots @ 0x1800F31D4 (RtlpUnwindOpSlots.c)
 */

__int64 __fastcall RtlpUnwindPrologue(
        __int64 a1,
        int a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        char *a6,
        _QWORD *a7,
        __int64 a8)
{
  char *v8; // r15
  __int64 v9; // rbx
  _BYTE *v10; // rdi
  unsigned int v11; // eax
  int v12; // ecx
  unsigned int v13; // r10d
  _BYTE *v14; // rdx
  _QWORD *v15; // r8
  __int64 v16; // rax
  _QWORD **v17; // rdx
  unsigned __int64 v18; // r8
  _QWORD *v19; // rcx
  _QWORD *v21; // rdx
  __int64 v22; // rax
  int v23; // edx
  unsigned int v24; // edx
  __int64 v25; // rdx
  _QWORD *v26; // r9
  __int64 v27; // r8
  _QWORD *v28; // rdx
  __int64 v29; // rax
  _DWORD *v30; // r14
  __int64 v31; // r8
  char *v32; // rdx
  __int64 v33; // r8
  unsigned int v34; // ecx
  __int64 v35; // r15
  __int64 v36; // rcx
  _QWORD *v37; // r8
  __int64 v38; // rdx
  _QWORD *v39; // rdx
  _QWORD *v40; // r8
  char v41; // [rsp+20h] [rbp-88h]
  int v42; // [rsp+40h] [rbp-68h]
  __int64 v43; // [rsp+48h] [rbp-60h]
  unsigned int v44; // [rsp+50h] [rbp-58h]

  v8 = 0LL;
  v42 = 0;
  v43 = a5 + 120;
  while ( 2 )
  {
    LODWORD(v9) = 0;
    v41 = 0;
    v44 = a2 - *a4 - a1;
    v10 = (_BYTE *)(a1 + (unsigned int)a4[2]);
    while ( 1 )
    {
      v11 = (unsigned __int8)v10[2];
      if ( (unsigned int)v9 >= v11 )
        break;
      v12 = v10[2 * (unsigned int)v9 + 5] & 0xF;
      v13 = (unsigned __int8)v10[2 * (unsigned int)v9 + 5] >> 4;
      v14 = &v10[2 * (unsigned int)v9];
      if ( v44 < (unsigned __int8)v14[4] )
      {
        LODWORD(v9) = RtlpUnwindOpSlots(*((unsigned __int16 *)v14 + 2)) + v9;
      }
      else
      {
        if ( (v10[2 * (unsigned int)v9 + 5] & 0xF) == 0 )
        {
          v15 = *(_QWORD **)(a5 + 152);
          if ( *(_QWORD *)a8 )
          {
            if ( (unsigned __int64)v15 < **(_QWORD **)a8 )
              return 3221225512LL;
            if ( (unsigned __int64)v15 > **(_QWORD **)(a8 + 8) - 8LL )
              return 3221225512LL;
          }
          *(_QWORD *)(v43 + 8LL * v13) = *v15;
          v16 = *(_QWORD *)(a8 + 16);
          if ( v16 )
            *(_QWORD *)(v16 + 8LL * v13 + 128) = v15;
          *(_QWORD *)(a5 + 152) += 8LL;
          goto LABEL_13;
        }
        if ( v12 == 4 )
        {
          LODWORD(v9) = v9 + 1;
          v21 = (_QWORD *)(a3 + 8LL * *(unsigned __int16 *)&v10[2 * (unsigned int)v9 + 4]);
          if ( *(_QWORD *)a8 )
          {
            if ( (unsigned __int64)v21 < **(_QWORD **)a8 )
              return 3221225512LL;
            if ( (unsigned __int64)v21 > **(_QWORD **)(a8 + 8) - 8LL )
              return 3221225512LL;
          }
          *(_QWORD *)(v43 + 8LL * v13) = *v21;
          v22 = *(_QWORD *)(a8 + 16);
          if ( v22 )
          {
            *(_QWORD *)(v22 + 8LL * v13 + 128) = v21;
            LODWORD(v9) = v9 + 1;
          }
          else
          {
LABEL_13:
            LODWORD(v9) = v9 + 1;
          }
        }
        else if ( v12 == 2 )
        {
          *(_QWORD *)(a5 + 152) += 8 * v13 + 8;
          LODWORD(v9) = v9 + 1;
        }
        else
        {
          switch ( v10[2 * (unsigned int)v9 + 5] & 0xF )
          {
            case 1:
              v9 = (unsigned int)(v9 + 1);
              v23 = *(unsigned __int16 *)&v10[2 * v9 + 4];
              if ( v13 )
              {
                v9 = (unsigned int)(v9 + 1);
                v24 = (*(unsigned __int16 *)&v10[2 * v9 + 4] << 16) + v23;
              }
              else
              {
                v24 = 8 * v23;
              }
              *(_QWORD *)(a5 + 152) += v24;
              LODWORD(v9) = v9 + 1;
              continue;
            case 3:
              v25 = *(_QWORD *)(v43 + 8LL * (v10[3] & 0xF));
              *(_QWORD *)(a5 + 152) = v25;
              *(_QWORD *)(a5 + 152) = v25 - (v10[3] & 0xF0);
              LODWORD(v9) = v9 + 1;
              continue;
            case 5:
              v9 = (unsigned int)(v9 + 2);
              v40 = (_QWORD *)(((unsigned __int64)*(unsigned __int16 *)&v10[2 * v9 + 4] << 16)
                             + a3
                             + *(unsigned __int16 *)&v10[2 * (unsigned int)(v9 - 1) + 4]);
              if ( *(_QWORD *)a8
                && ((unsigned __int64)v40 < **(_QWORD **)a8 || (unsigned __int64)v40 > **(_QWORD **)(a8 + 8) - 8LL) )
              {
                return 3221225512LL;
              }
              *(_QWORD *)(v43 + 8LL * v13) = *v40;
              LODWORD(v9) = v9 + 1;
              continue;
            case 6:
              LODWORD(v9) = v9 + 2;
              continue;
            case 7:
              LODWORD(v9) = v9 + 3;
              continue;
            case 8:
              v9 = (unsigned int)(v9 + 1);
              v26 = (_QWORD *)(a3 + 16LL * *(unsigned __int16 *)&v10[2 * v9 + 4]);
              goto LABEL_42;
            case 9:
              v9 = (unsigned int)(v9 + 2);
              v26 = (_QWORD *)(((unsigned __int64)*(unsigned __int16 *)&v10[2 * v9 + 4] << 16)
                             + a3
                             + *(unsigned __int16 *)&v10[2 * (unsigned int)(v9 - 1) + 4]);
LABEL_42:
              if ( !*(_QWORD *)a8 )
                goto LABEL_43;
              if ( (unsigned __int64)v26 < **(_QWORD **)a8 )
                return 3221225512LL;
              if ( (unsigned __int64)v26 > **(_QWORD **)(a8 + 8) - 16LL )
                return 3221225512LL;
LABEL_43:
              v27 = v26[1];
              v28 = (_QWORD *)(a5 + 416 + 16LL * v13);
              *v28 = *v26;
              v28[1] = v27;
              v29 = *(_QWORD *)(a8 + 16);
              if ( !v29 )
                goto LABEL_13;
              *(_QWORD *)(v29 + 8LL * v13) = v26;
              LODWORD(v9) = v9 + 1;
              break;
            case 0xA:
              v41 = 1;
              v36 = *(_QWORD *)(a5 + 152);
              v37 = (_QWORD *)(v36 + 8);
              if ( !v13 )
                v37 = *(_QWORD **)(a5 + 152);
              v38 = 32LL;
              if ( !v13 )
                v38 = 24LL;
              v39 = (_QWORD *)(v36 + v38);
              if ( !*(_QWORD *)a8 )
                goto LABEL_101;
              if ( (unsigned __int64)v37 < **(_QWORD **)a8 )
                return 3221225512LL;
              if ( (unsigned __int64)v37 > **(_QWORD **)(a8 + 8) - 8LL )
                return 3221225512LL;
LABEL_101:
              if ( *(_QWORD *)a8 )
              {
                if ( (unsigned __int64)v39 < **(_QWORD **)a8 )
                  return 3221225512LL;
                if ( (unsigned __int64)v39 > **(_QWORD **)(a8 + 8) - 8LL )
                  return 3221225512LL;
              }
              *(_QWORD *)(a5 + 248) = *v37;
              *(_QWORD *)(a5 + 152) = *v39;
              if ( !(unsigned __int8)RtlpIsContinuationContextMachineFrameEntry(v10) )
                goto LABEL_13;
              RtlpVirtualPopShadowStack(a5);
              LODWORD(v9) = v9 + 1;
              continue;
            default:
              goto LABEL_40;
          }
        }
      }
    }
    if ( (*v10 & 0x20) != 0 )
    {
      if ( (v11 & 1) != 0 )
        ++v11;
      a4 = &v10[2 * v11 + 4];
      if ( (unsigned int)++v42 > 0x20 )
LABEL_40:
        RtlRaiseStatus(-1073741569);
      continue;
    }
    break;
  }
  if ( !v41 )
  {
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
      v30 = (_DWORD *)(a5 + 1232);
      if ( ((MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0x800) != 0 && (MEMORY[0x7FFE03EC] & 0xFFFFFFF8) == 0 )
      {
        v31 = *(int *)(a5 + 1248);
        if ( *v30 <= (int)v31 && *(_DWORD *)(a5 + 1236) + *v30 >= (int)v31 + *(_DWORD *)(a5 + 1252) )
        {
          v32 = (char *)v30 + v31;
          if ( (_DWORD *)((char *)v30 + v31) )
          {
            if ( (MEMORY[0x7FFE03EC] & 2) == 0 )
            {
              v35 = MEMORY[0x7FFE0448] - 512LL;
LABEL_89:
              v8 = &v32[v35];
              goto LABEL_90;
            }
            v33 = *((_QWORD *)v32 + 1);
            if ( (v33 & 0x800) != 0 )
            {
              v34 = 576;
              if ( (v33 & 4) != 0 )
                v34 = MEMORY[0x7FFE060C] + 576;
              if ( (v33 & 8) != 0 )
              {
                if ( (MEMORY[0x7FFE05F8] & 8) != 0 )
                  v34 = (v34 + 63) & 0xFFFFFFC0;
                v34 += MEMORY[0x7FFE0610];
              }
              if ( (v33 & 0x10) != 0 )
              {
                if ( (MEMORY[0x7FFE05F8] & 0x10) != 0 )
                  v34 = (v34 + 63) & 0xFFFFFFC0;
                v34 += MEMORY[0x7FFE0614];
              }
              if ( (v33 & 0x20) != 0 )
              {
                if ( (MEMORY[0x7FFE05F8] & 0x20) != 0 )
                  v34 = (v34 + 63) & 0xFFFFFFC0;
                v34 += MEMORY[0x7FFE0618];
              }
              if ( (v33 & 0x40) != 0 )
              {
                if ( (MEMORY[0x7FFE05F8] & 0x40) != 0 )
                  v34 = (v34 + 63) & 0xFFFFFFC0;
                v34 += MEMORY[0x7FFE061C];
              }
              if ( (v33 & 0x80u) != 0LL )
              {
                if ( MEMORY[0x7FFE05F8] < 0 )
                  v34 = (v34 + 63) & 0xFFFFFFC0;
                v34 += MEMORY[0x7FFE0620];
              }
              if ( (v33 & 0x100) != 0 )
              {
                if ( (MEMORY[0x7FFE05F8] & 0x100) != 0 )
                  v34 = (v34 + 63) & 0xFFFFFFC0;
                v34 += MEMORY[0x7FFE0624];
              }
              if ( (v33 & 0x200) != 0 )
              {
                if ( (MEMORY[0x7FFE05F8] & 0x200) != 0 )
                  v34 = (v34 + 63) & 0xFFFFFFC0;
                v34 += MEMORY[0x7FFE0628];
              }
              if ( (v33 & 0x400) != 0 )
              {
                if ( (MEMORY[0x7FFE05F8] & 0x400) != 0 )
                  v34 = (v34 + 63) & 0xFFFFFFC0;
                v34 += MEMORY[0x7FFE062C];
              }
              if ( (MEMORY[0x7FFE05F8] & 0x800) != 0 )
                v34 = (v34 + 63) & 0xFFFFFFC0;
              v35 = v34 - 512LL;
              goto LABEL_89;
            }
          }
        }
      }
LABEL_90:
      if ( v8 && (*v8 & 1) != 0 )
        *((_QWORD *)v8 + 1) += 8LL;
    }
  }
  if ( a6 )
    *a6 = v41;
  *a7 = a4;
  return 0LL;
}
