/*
 * XREFs of RtlpUnwindPrologue @ 0x180044040
 * Callers:
 *     RtlpxVirtualUnwind @ 0x180043630 (RtlpxVirtualUnwind.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 *     RtlLocateExtendedFeature @ 0x180045900 (RtlLocateExtendedFeature.c)
 *     RtlpIsContinuationContextMachineFrameEntry @ 0x1800E9F20 (RtlpIsContinuationContextMachineFrameEntry.c)
 *     RtlpUnwindOpSlots @ 0x1800EC2E4 (RtlpUnwindOpSlots.c)
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
  __int64 v8; // rbx
  _BYTE *v9; // rdi
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // r10d
  _BYTE *v13; // rdx
  _QWORD *v14; // r8
  __int64 v15; // rax
  _QWORD **v16; // rdx
  unsigned __int64 v17; // r8
  _QWORD *v18; // rcx
  _QWORD *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rbx
  int v23; // edx
  unsigned int v24; // edx
  __int64 v25; // rdx
  _QWORD *v26; // r9
  __int64 v27; // r8
  _QWORD *v28; // rdx
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // r8
  __int64 v33; // rdx
  _QWORD *v34; // rdx
  _QWORD *ExtendedFeature; // rax
  __int64 v36; // rbx
  _QWORD *v37; // r8
  char v38; // [rsp+20h] [rbp-88h]
  int v39; // [rsp+40h] [rbp-68h]
  __int64 v40; // [rsp+48h] [rbp-60h]
  unsigned int v41; // [rsp+50h] [rbp-58h]

  v39 = 0;
  v40 = a5 + 120;
  while ( 2 )
  {
    v8 = 0LL;
    v38 = 0;
    v41 = a2 - *a4 - a1;
    v9 = (_BYTE *)(a1 + (unsigned int)a4[2]);
    while ( 1 )
    {
      v10 = (unsigned __int8)v9[2];
      if ( (unsigned int)v8 >= v10 )
        break;
      v11 = v9[2 * v8 + 5] & 0xF;
      v12 = (unsigned __int8)v9[2 * v8 + 5] >> 4;
      v13 = &v9[2 * v8];
      if ( v41 < (unsigned __int8)v13[4] )
      {
        v8 = (unsigned int)RtlpUnwindOpSlots(*((unsigned __int16 *)v13 + 2)) + (unsigned int)v8;
      }
      else
      {
        if ( (v9[2 * v8 + 5] & 0xF) == 0 )
        {
          v14 = *(_QWORD **)(a5 + 152);
          if ( *(_QWORD *)a8 )
          {
            if ( (unsigned __int64)v14 < **(_QWORD **)a8 )
              return 3221225512LL;
            if ( (unsigned __int64)v14 > **(_QWORD **)(a8 + 8) - 8LL )
              return 3221225512LL;
          }
          *(_QWORD *)(v40 + 8LL * v12) = *v14;
          v15 = *(_QWORD *)(a8 + 16);
          if ( v15 )
            *(_QWORD *)(v15 + 8LL * v12 + 128) = v14;
          *(_QWORD *)(a5 + 152) += 8LL;
          goto LABEL_13;
        }
        if ( v11 == 4 )
        {
          LODWORD(v8) = v8 + 1;
          v20 = (_QWORD *)(a3 + 8LL * *(unsigned __int16 *)&v9[2 * (unsigned int)v8 + 4]);
          if ( *(_QWORD *)a8 )
          {
            if ( (unsigned __int64)v20 < **(_QWORD **)a8 )
              return 3221225512LL;
            if ( (unsigned __int64)v20 > **(_QWORD **)(a8 + 8) - 8LL )
              return 3221225512LL;
          }
          *(_QWORD *)(v40 + 8LL * v12) = *v20;
          v21 = *(_QWORD *)(a8 + 16);
          if ( v21 )
          {
            *(_QWORD *)(v21 + 8LL * v12 + 128) = v20;
            v8 = (unsigned int)(v8 + 1);
          }
          else
          {
LABEL_13:
            v8 = (unsigned int)(v8 + 1);
          }
        }
        else if ( v11 == 2 )
        {
          *(_QWORD *)(a5 + 152) += 8 * v12 + 8;
          v8 = (unsigned int)(v8 + 1);
        }
        else
        {
          switch ( v9[2 * v8 + 5] & 0xF )
          {
            case 1:
              v22 = (unsigned int)(v8 + 1);
              v23 = *(unsigned __int16 *)&v9[2 * v22 + 4];
              if ( v12 )
              {
                v22 = (unsigned int)(v22 + 1);
                v24 = (*(unsigned __int16 *)&v9[2 * v22 + 4] << 16) + v23;
              }
              else
              {
                v24 = 8 * v23;
              }
              *(_QWORD *)(a5 + 152) += v24;
              v8 = (unsigned int)(v22 + 1);
              continue;
            case 3:
              v25 = *(_QWORD *)(v40 + 8LL * (v9[3] & 0xF));
              *(_QWORD *)(a5 + 152) = v25;
              *(_QWORD *)(a5 + 152) = v25 - (v9[3] & 0xF0);
              v8 = (unsigned int)(v8 + 1);
              continue;
            case 5:
              v36 = (unsigned int)(v8 + 2);
              v37 = (_QWORD *)(((unsigned __int64)*(unsigned __int16 *)&v9[2 * v36 + 4] << 16)
                             + a3
                             + *(unsigned __int16 *)&v9[2 * (unsigned int)(v36 - 1) + 4]);
              if ( *(_QWORD *)a8
                && ((unsigned __int64)v37 < **(_QWORD **)a8 || (unsigned __int64)v37 > **(_QWORD **)(a8 + 8) - 8LL) )
              {
                return 3221225512LL;
              }
              *(_QWORD *)(v40 + 8LL * v12) = *v37;
              v8 = (unsigned int)(v36 + 1);
              continue;
            case 6:
              v8 = (unsigned int)(v8 + 2);
              continue;
            case 7:
              v8 = (unsigned int)(v8 + 3);
              continue;
            case 8:
              v8 = (unsigned int)(v8 + 1);
              v26 = (_QWORD *)(a3 + 16LL * *(unsigned __int16 *)&v9[2 * v8 + 4]);
              goto LABEL_42;
            case 9:
              v8 = (unsigned int)(v8 + 2);
              v26 = (_QWORD *)(((unsigned __int64)*(unsigned __int16 *)&v9[2 * v8 + 4] << 16)
                             + a3
                             + *(unsigned __int16 *)&v9[2 * (unsigned int)(v8 - 1) + 4]);
LABEL_42:
              if ( !*(_QWORD *)a8 )
                goto LABEL_43;
              if ( (unsigned __int64)v26 < **(_QWORD **)a8 )
                return 3221225512LL;
              if ( (unsigned __int64)v26 > **(_QWORD **)(a8 + 8) - 16LL )
                return 3221225512LL;
LABEL_43:
              v27 = v26[1];
              v28 = (_QWORD *)(a5 + 416 + 16LL * v12);
              *v28 = *v26;
              v28[1] = v27;
              v29 = *(_QWORD *)(a8 + 16);
              if ( !v29 )
                goto LABEL_13;
              *(_QWORD *)(v29 + 8LL * v12) = v26;
              v8 = (unsigned int)(v8 + 1);
              break;
            case 0xA:
              v38 = 1;
              v31 = *(_QWORD *)(a5 + 152);
              v32 = (_QWORD *)(v31 + 8);
              if ( !v12 )
                v32 = *(_QWORD **)(a5 + 152);
              v33 = 32LL;
              if ( !v12 )
                v33 = 24LL;
              v34 = (_QWORD *)(v31 + v33);
              if ( !*(_QWORD *)a8 )
                goto LABEL_55;
              if ( (unsigned __int64)v32 < **(_QWORD **)a8 )
                return 3221225512LL;
              if ( (unsigned __int64)v32 > **(_QWORD **)(a8 + 8) - 8LL )
                return 3221225512LL;
LABEL_55:
              if ( *(_QWORD *)a8 )
              {
                if ( (unsigned __int64)v34 < **(_QWORD **)a8 )
                  return 3221225512LL;
                if ( (unsigned __int64)v34 > **(_QWORD **)(a8 + 8) - 8LL )
                  return 3221225512LL;
              }
              *(_QWORD *)(a5 + 248) = *v32;
              *(_QWORD *)(a5 + 152) = *v34;
              if ( !(unsigned __int8)RtlpIsContinuationContextMachineFrameEntry(v9) )
                goto LABEL_13;
              if ( (*(_DWORD *)(a5 + 48) & 0x100040) != 0x100040 )
                goto LABEL_13;
              ExtendedFeature = RtlLocateExtendedFeature((PCONTEXT_EX)(a5 + 1232), 0xBu, 0LL);
              if ( !ExtendedFeature || (*(_BYTE *)ExtendedFeature & 1) == 0 )
                goto LABEL_13;
              ExtendedFeature[1] += 8LL;
              v8 = (unsigned int)(v8 + 1);
              continue;
            default:
              goto LABEL_40;
          }
        }
      }
    }
    if ( (*v9 & 0x20) != 0 )
    {
      if ( (v10 & 1) != 0 )
        ++v10;
      a4 = &v9[2 * v10 + 4];
      if ( (unsigned int)++v39 > 0x20 )
LABEL_40:
        RtlRaiseStatus(-1073741569);
      continue;
    }
    break;
  }
  if ( !v38 )
  {
    if ( *(_QWORD *)a8 )
    {
      v16 = (_QWORD **)(a5 + 152);
      v17 = *(_QWORD *)(a5 + 152);
      if ( v17 < **(_QWORD **)a8 )
        return 3221225512LL;
      if ( v17 > **(_QWORD **)(a8 + 8) - 8LL )
        return 3221225512LL;
    }
    else
    {
      v16 = (_QWORD **)(a5 + 152);
    }
    v18 = *v16;
    *(_QWORD *)(a5 + 248) = **v16;
    *v16 = v18 + 1;
    if ( (*(_DWORD *)(a5 + 48) & 0x100040) == 0x100040 )
    {
      v30 = RtlLocateExtendedFeature((PCONTEXT_EX)(a5 + 1232), 0xBu, 0LL);
      if ( v30 )
      {
        if ( (*(_BYTE *)v30 & 1) != 0 )
          v30[1] += 8LL;
      }
    }
  }
  if ( a6 )
    *a6 = v38;
  *a7 = a4;
  return 0LL;
}
