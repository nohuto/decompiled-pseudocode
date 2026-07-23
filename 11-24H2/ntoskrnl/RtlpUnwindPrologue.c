/*
 * XREFs of RtlpUnwindPrologue @ 0x140235620
 * Callers:
 *     RtlpxVirtualUnwind @ 0x1402345C0 (RtlpxVirtualUnwind.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     RtlLocateExtendedFeature @ 0x140237160 (RtlLocateExtendedFeature.c)
 *     RtlpIsNoShadowStackUnwindMachineFrameEntry @ 0x140471F28 (RtlpIsNoShadowStackUnwindMachineFrameEntry.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v9; // r10
  __int64 v10; // rdi
  __int64 v11; // r11
  unsigned int v12; // ecx
  int v13; // ecx
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rax
  _QWORD **v17; // r8
  unsigned __int64 v18; // rdx
  _QWORD *v19; // rcx
  char *v20; // rcx
  unsigned __int64 v22; // r8
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // r14
  __int64 v28; // r8
  _QWORD *v29; // rdx
  __int64 v30; // rax
  _QWORD *ExtendedFeature; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // r8
  __int64 v34; // rdx
  unsigned __int64 v35; // rdx
  int v36; // edx
  unsigned int v37; // edx
  char v38; // r8
  __int64 v39; // rcx
  int v40; // edx
  _QWORD *v41; // r8
  char v42; // [rsp+20h] [rbp-88h]
  int v43; // [rsp+40h] [rbp-68h]
  __int64 v44; // [rsp+48h] [rbp-60h]
  unsigned int v45; // [rsp+50h] [rbp-58h]

  v9 = 0LL;
  v43 = 0;
  v44 = a5 + 120;
LABEL_2:
  LODWORD(v10) = v9;
  v42 = 0;
  v45 = a2 - *a4 - a1;
  v11 = a1 + (unsigned int)a4[2];
  if ( a2 <= 0x7FFFFFFEFFFFLL && (v11 & 3) != 0 )
LABEL_4:
    ExRaiseDatatypeMisalignment();
  while ( 1 )
  {
    while ( 1 )
    {
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
              if ( v42 )
              {
                v20 = a6;
                if ( !a6 )
                {
LABEL_25:
                  *a7 = a4;
                  return 0LL;
                }
                while ( (unsigned int)v9 < 4 )
                {
                  if ( (__int64 (__fastcall *)())v11 == RtlpSafeMachineFrameEntries[v9] )
                  {
                    v42 = 0;
                    break;
                  }
                  v9 = (unsigned int)(v9 + 1);
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
                  ExtendedFeature = RtlLocateExtendedFeature((PCONTEXT_EX)(a5 + 1232), 0xBu, 0LL);
                  if ( ExtendedFeature )
                  {
                    if ( (*(_BYTE *)ExtendedFeature & 1) != 0 )
                      ExtendedFeature[1] += 8LL;
                  }
                }
                v20 = a6;
                if ( (*(_DWORD *)(a5 + 48) & 0x100080) == 0x100080 )
                  *(_QWORD *)(*(int *)(a5 + 1256) + a5 + 1232) += 8LL;
              }
              if ( v20 )
                *v20 = v42;
              goto LABEL_25;
            }
            if ( (v12 & 1) != 0 )
              ++v12;
            a4 = (_DWORD *)(v11 + 2 * (v12 + 2LL));
            if ( a2 <= 0x7FFFFFFEFFFFLL && (((_BYTE)v11 + 2 * ((_BYTE)v12 + 2)) & 3) != 0 )
              goto LABEL_4;
            if ( (unsigned int)++v43 > 0x20 )
LABEL_48:
              RtlRaiseStatus(-1073741569);
            goto LABEL_2;
          }
          v13 = *(_BYTE *)(v11 + 2LL * (unsigned int)v10 + 5) & 0xF;
          v14 = *(unsigned __int8 *)(v11 + 2LL * (unsigned int)v10 + 5) >> 4;
          v15 = v11 + 2LL * (unsigned int)v10;
          if ( v45 >= *(unsigned __int8 *)(v15 + 4) )
            break;
          v38 = *(_BYTE *)(v15 + 5);
          v39 = v38 & 0xF;
          if ( (unsigned int)v39 >= 0xB )
            goto LABEL_48;
          v40 = *((unsigned __int8 *)RtlpUnwindOpSlotTable + v39);
          if ( (_DWORD)v39 == 1 && (v38 & 0xF0) != 0 )
            ++v40;
          LODWORD(v10) = v40 + v10;
        }
        if ( (*(_BYTE *)(v11 + 2LL * (unsigned int)v10 + 5) & 0xF) != 0 )
          break;
        v22 = *(_QWORD *)(a5 + 152);
        if ( a2 <= 0x7FFFFFFEFFFFLL && (v22 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( *(_QWORD *)a8 )
        {
          if ( v22 < **(_QWORD **)a8 )
            return 3221225512LL;
          if ( v22 > **(_QWORD **)(a8 + 8) - 8LL )
            return 3221225512LL;
        }
        *(_QWORD *)(v44 + 8 * v14) = *(_QWORD *)v22;
        v23 = *(_QWORD *)(a8 + 16);
        if ( v23 )
          *(_QWORD *)(v23 + 8 * v14 + 128) = v22;
        *(_QWORD *)(a5 + 152) += 8LL;
LABEL_33:
        LODWORD(v10) = v10 + 1;
      }
      if ( v13 == 4 )
        break;
      if ( v13 == 2 )
      {
        *(_QWORD *)(a5 + 152) += (unsigned int)(8 * v14 + 8);
        LODWORD(v10) = v10 + 1;
      }
      else
      {
        switch ( *(_BYTE *)(v11 + 2LL * (unsigned int)v10 + 5) & 0xF )
        {
          case 1:
            v10 = (unsigned int)(v10 + 1);
            v36 = *(unsigned __int16 *)(v11 + 2 * v10 + 4);
            if ( (_DWORD)v14 )
            {
              v10 = (unsigned int)(v10 + 1);
              v37 = (*(unsigned __int16 *)(v11 + 2 * v10 + 4) << 16) + v36;
            }
            else
            {
              v37 = 8 * v36;
            }
            *(_QWORD *)(a5 + 152) += v37;
            LODWORD(v10) = v10 + 1;
            goto LABEL_5;
          case 3:
            v26 = *(_QWORD *)(v44 + 8LL * (*(_BYTE *)(v11 + 3) & 0xF));
            *(_QWORD *)(a5 + 152) = v26;
            *(_QWORD *)(a5 + 152) = v26 - (*(_BYTE *)(v11 + 3) & 0xF0);
            LODWORD(v10) = v10 + 1;
            goto LABEL_5;
          case 5:
            v10 = (unsigned int)(v10 + 2);
            v41 = (_QWORD *)(((unsigned __int64)*(unsigned __int16 *)(v11 + 2 * v10 + 4) << 16)
                           + a3
                           + *(unsigned __int16 *)(v11 + 2LL * (unsigned int)(v10 - 1) + 4));
            if ( a2 <= 0x7FFFFFFEFFFFLL
              && (((_BYTE)a3 + (unsigned __int8)*(_WORD *)(v11 + 2LL * (unsigned int)(v10 - 1) + 4)) & 3) != 0 )
            {
              ExRaiseDatatypeMisalignment();
            }
            if ( *(_QWORD *)a8
              && ((unsigned __int64)v41 < **(_QWORD **)a8 || (unsigned __int64)v41 > **(_QWORD **)(a8 + 8) - 8LL) )
            {
              return 3221225512LL;
            }
            *(_QWORD *)(v44 + 8LL * (unsigned int)v14) = *v41;
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
            v27 = a3 + 16LL * *(unsigned __int16 *)(v11 + 2 * v10 + 4);
            if ( a2 <= 0x7FFFFFFEFFFFLL && (v27 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            goto LABEL_57;
          case 9:
            v10 = (unsigned int)(v10 + 2);
            v27 = ((unsigned __int64)*(unsigned __int16 *)(v11 + 2 * v10 + 4) << 16)
                + a3
                + *(unsigned __int16 *)(v11 + 2LL * (unsigned int)(v10 - 1) + 4);
            if ( a2 <= 0x7FFFFFFEFFFFLL
              && (((_BYTE)a3 + (unsigned __int8)*(_WORD *)(v11 + 2LL * (unsigned int)(v10 - 1) + 4)) & 3) != 0 )
            {
              ExRaiseDatatypeMisalignment();
            }
LABEL_57:
            if ( !*(_QWORD *)a8 )
              goto LABEL_58;
            if ( v27 < **(_QWORD **)a8 )
              return 3221225512LL;
            if ( v27 > **(_QWORD **)(a8 + 8) - 16LL )
              return 3221225512LL;
LABEL_58:
            v28 = *(_QWORD *)(v27 + 8);
            v29 = (_QWORD *)(a5 + 416 + 16 * v14);
            *v29 = *(_QWORD *)v27;
            v29[1] = v28;
            v30 = *(_QWORD *)(a8 + 16);
            if ( !v30 )
              goto LABEL_33;
            *(_QWORD *)(v30 + 8 * v14) = v27;
            LODWORD(v10) = v10 + 1;
            goto LABEL_5;
          case 0xA:
            v42 = 1;
            v32 = *(_QWORD *)(a5 + 152);
            v33 = v32 + 8;
            if ( !(_DWORD)v14 )
              v33 = *(_QWORD *)(a5 + 152);
            v34 = 32LL;
            if ( !(_DWORD)v14 )
              v34 = 24LL;
            v35 = v32 + v34;
            if ( a2 <= 0x7FFFFFFEFFFFLL && (v33 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( !*(_QWORD *)a8 )
              goto LABEL_77;
            if ( v33 < **(_QWORD **)a8 )
              return 3221225512LL;
            if ( v33 > **(_QWORD **)(a8 + 8) - 8LL )
              return 3221225512LL;
LABEL_77:
            if ( a2 <= 0x7FFFFFFEFFFFLL && (v35 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( *(_QWORD *)a8 )
            {
              if ( v35 < **(_QWORD **)a8 )
                return 3221225512LL;
              if ( v35 > **(_QWORD **)(a8 + 8) - 8LL )
                return 3221225512LL;
            }
            *(_QWORD *)(a5 + 248) = *(_QWORD *)v33;
            *(_QWORD *)(a5 + 152) = *(_QWORD *)v35;
            if ( (*(_DWORD *)(a5 + 48) & 0x100080) != 0x100080
              || (unsigned __int8)RtlpIsNoShadowStackUnwindMachineFrameEntry(v11) )
            {
              goto LABEL_33;
            }
            *(_QWORD *)(*(int *)(a5 + 1256) + a5 + 1232) += 24LL;
            LODWORD(v10) = v10 + 1;
            break;
          default:
            goto LABEL_48;
        }
      }
    }
    LODWORD(v10) = v10 + 1;
    v24 = a3 + 8LL * *(unsigned __int16 *)(v11 + 2LL * (unsigned int)v10 + 4);
    if ( a2 <= 0x7FFFFFFEFFFFLL && (v24 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( *(_QWORD *)a8 )
    {
      if ( v24 < **(_QWORD **)a8 )
        return 3221225512LL;
      if ( v24 > **(_QWORD **)(a8 + 8) - 8LL )
        return 3221225512LL;
    }
    *(_QWORD *)(v44 + 8LL * (unsigned int)v14) = *(_QWORD *)v24;
    v25 = *(_QWORD *)(a8 + 16);
    if ( !v25 )
      goto LABEL_33;
    *(_QWORD *)(v25 + 8LL * (unsigned int)v14 + 128) = v24;
    LODWORD(v10) = v10 + 1;
  }
}
