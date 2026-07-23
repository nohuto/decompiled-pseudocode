/*
 * XREFs of Amd64CheckCoreEventConstraints @ 0x140567D64
 * Callers:
 *     Amd64AllocateCounter @ 0x140567A3C (Amd64AllocateCounter.c)
 * Callees:
 *     <none>
 */

char __fastcall Amd64CheckCoreEventConstraints(int a1, int a2, unsigned __int64 a3, _BYTE *a4)
{
  int v4; // r11d
  int v5; // r10d
  int v8; // edx
  _BYTE *v9; // rdi
  char CpuType; // cl
  unsigned int v11; // eax
  bool v13; // zf
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  int v18; // r10d
  int v19; // r10d
  int v20; // r10d
  int v21; // r10d
  int v22; // r10d
  int v23; // r10d
  int v24; // r8d
  int v25; // ebx
  int v26; // ebx
  int v27; // eax
  __int64 v28; // rcx

  v4 = 1 << a1;
  v5 = (unsigned __int8)a3 | (a3 >> 24) & 0xF00;
  v8 = 0;
  v9 = a4;
  CpuType = KeGetCurrentPrcb()->CpuType;
  if ( CpuType != 21 )
  {
    if ( (unsigned __int8)CpuType < 0x17u || v5 != 3 )
      goto LABEL_10;
    if ( (v4 & 0x15) == 0 )
      return 0;
    LODWORD(a4) = KeGetPcr()->Prcb.Number;
    v24 = 0;
    v25 = a2 - 1;
    if ( v25 )
    {
      v26 = v25 - 99;
      if ( v26 )
      {
        if ( v26 != 1 )
          goto LABEL_53;
        if ( *(_QWORD *)(KiProcessorBlock[(_QWORD)a4] + 88) == -48LL )
          v24 = 0;
        else
          v24 = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[(_QWORD)a4] + 88) + 52LL);
      }
      if ( *(_QWORD *)(KiProcessorBlock[(_QWORD)a4] + 88) == -24LL )
        v27 = 0;
      else
        v27 = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[(_QWORD)a4] + 88) + 28LL);
      v24 += v27;
    }
    v28 = *(_QWORD *)(KiProcessorBlock[(_QWORD)a4] + 88);
    if ( v28 )
      v8 = *(_DWORD *)(v28 + 4);
    v24 += v8;
LABEL_53:
    if ( !__readmsr(*((_DWORD *)&Amd64EventSelectRegisters + (unsigned int)(v24 + a1 + 1))) )
    {
      *v9 = 1;
      return 1;
    }
    return 0;
  }
  v11 = a3 & 0xF0;
  if ( v11 > 0x60 )
  {
    v14 = v11 - 112;
    if ( v14 )
    {
      v15 = v14 - 16;
      if ( v15 )
      {
        v16 = v15 - 16;
        if ( v16 )
        {
          v17 = v16 - 48;
          if ( !v17 )
            goto LABEL_30;
          if ( v17 != 16 )
          {
LABEL_10:
            *a4 = 0;
            return 1;
          }
        }
      }
    }
LABEL_22:
    v18 = v5 - 219;
    if ( !v18 )
      goto LABEL_36;
    v19 = v18 - 1;
    if ( !v19 )
      goto LABEL_36;
    v20 = v19 - 1;
    if ( !v20 )
      goto LABEL_36;
    v21 = v20 - 1;
    if ( !v21 )
      goto LABEL_36;
    v22 = v21 - 1;
    if ( !v22 )
      goto LABEL_36;
    v23 = v22 - 241;
    if ( !v23 || v23 == 8 )
      goto LABEL_36;
    goto LABEL_29;
  }
  if ( v11 == 96 )
    goto LABEL_22;
  if ( (a3 & 0xF0) != 0 && v11 != 16 )
  {
    if ( v11 != 32 && v11 != 48 && v11 != 64 && v11 != 80 )
      goto LABEL_10;
LABEL_30:
    if ( v5 != 35 && v5 != 67 && v5 != 69 && v5 != 70 && v5 != 84 )
    {
      if ( v5 != 448 )
      {
LABEL_36:
        v13 = (v4 & 0x3F) == 0;
        return !v13;
      }
      goto LABEL_14;
    }
LABEL_29:
    v13 = (v4 & 7) == 0;
    return !v13;
  }
  if ( v5 && (unsigned int)(v5 - 3) >= 2 )
  {
LABEL_14:
    v13 = (v4 & 0x38) == 0;
    return !v13;
  }
  return (v4 & 8) != 0;
}
