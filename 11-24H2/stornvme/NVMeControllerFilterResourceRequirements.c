/*
 * XREFs of NVMeControllerFilterResourceRequirements @ 0x14001C804
 * Callers:
 *     NVMeHwAdapterControl @ 0x14000DBA0 (NVMeHwAdapterControl.c)
 * Callees:
 *     GetProcessorInformation @ 0x14000C190 (GetProcessorInformation.c)
 *     GetProcessorGroupInformation @ 0x14001A010 (GetProcessorGroupInformation.c)
 *     IsPci3MsiInterrupt @ 0x14001B66C (IsPci3MsiInterrupt.c)
 *     memmove @ 0x1400311C0 (memmove.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

void *__fastcall NVMeControllerFilterResourceRequirements(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  unsigned int v6; // r14d
  char v7; // r12
  __int16 v8; // si
  void *result; // rax
  char ProcessorInformation; // al
  __int64 v11; // r11
  __int64 v12; // rbx
  unsigned int v13; // r15d
  _BYTE *v14; // rdx
  unsigned int v15; // r15d
  _BYTE *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r8
  unsigned int i; // edx
  bool v20; // al
  int v21; // edx
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // r10
  int v25; // r11d
  __int16 v26; // cx
  __int64 v27; // rax
  __int64 v28; // r8
  unsigned int v29; // r11d
  int v30; // edx
  __int64 v31; // r8
  char v32; // r9
  __int64 v33; // r10
  __int64 v34; // r8
  unsigned int v35; // r8d
  unsigned int v36; // edx
  int v37; // edx
  _OWORD *v38; // rcx
  unsigned int v39; // r9d
  unsigned int v40; // r10d
  __int64 v41; // rax
  unsigned int v42; // ecx
  unsigned int j; // edx
  __int64 v44; // r8
  __int64 v45; // rax
  const void *v46; // rdx
  unsigned int *v47; // rdx
  __int64 v48; // r8
  int v49; // eax
  unsigned int v50; // r12d
  unsigned int v51; // esi
  unsigned int v52; // r8d
  __int64 v53; // rcx
  __int64 v54; // rdx
  int v55; // r9d
  int v56; // r15d
  __int64 v57; // r14
  __int64 v58; // r13
  int v59; // eax
  unsigned __int64 v60; // rdx
  __int64 v61; // rcx
  unsigned int v62; // r13d
  int v63; // r14d
  unsigned int v64; // r13d
  __int64 v65; // r15
  int v66; // eax
  unsigned __int64 v67; // rdx
  __int64 v68; // r12
  int v69; // r14d
  unsigned int v70; // r12d
  __int64 v71; // r15
  int v72; // eax
  unsigned __int64 v73; // rdx
  __int64 v74; // rax
  unsigned int v75; // [rsp+40h] [rbp-38h]
  unsigned int v76; // [rsp+44h] [rbp-34h]
  unsigned int v77; // [rsp+48h] [rbp-30h]
  unsigned int v78; // [rsp+4Ch] [rbp-2Ch]
  int v79; // [rsp+4Ch] [rbp-2Ch]
  unsigned int v80; // [rsp+50h] [rbp-28h]
  __int64 v81; // [rsp+58h] [rbp-20h]
  int v84; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v85; // [rsp+D8h] [rbp+60h] BYREF

  v4 = a2;
  v78 = 0;
  v6 = 0;
  v80 = 0;
  v7 = 1;
  v8 = 4;
  if ( !GetProcessorGroupInformation(a1, a2, a3, a4) )
  {
    *(_DWORD *)(a1 + 28) = 9;
    return (void *)StorPortExtendedFunction(98LL, a1, 0LL, 10LL);
  }
  ProcessorInformation = GetProcessorInformation(a1);
  LODWORD(v11) = 0;
  if ( !ProcessorInformation )
  {
    *(_DWORD *)(a1 + 28) = 10;
    return (void *)StorPortExtendedFunction(98LL, a1, 0LL, 10LL);
  }
  v12 = *(_QWORD *)(v4 + 8);
  v13 = *(_DWORD *)(v12 + 36);
  v75 = v13;
  if ( v13 )
  {
    v14 = (_BYTE *)(v12 + 41);
    v15 = 0;
    do
    {
      if ( IsPci3MsiInterrupt((__int64)(v14 - 1)) )
      {
        ++v6;
      }
      else if ( *v16 == 1 && (v16[3] & 1) != 0 )
      {
        ++v15;
      }
      v14 = v16 + 32;
    }
    while ( v17 != 1 );
    v80 = v15;
    v13 = v75;
  }
  v18 = *(unsigned __int16 *)(a1 + 234);
  if ( v6 <= (int)v18 + 1 )
  {
    if ( g_HeteroSystem == (_BYTE)v11 )
      goto LABEL_52;
    if ( v6 <= 1 )
      goto LABEL_52;
    if ( v6 >= (unsigned int)v18 )
      goto LABEL_52;
    v85 = v11;
    v84 = v11;
    v77 = v11;
    v76 = v11;
    v49 = StorPortExtendedFunction(0LL, a1, v18, 1701672526LL);
    LODWORD(v11) = 0;
    if ( v49 )
      goto LABEL_52;
    v50 = *(_DWORD *)(a1 + 300);
    if ( v50 >= v6 )
      v50 = v6 >> 1;
    v51 = 0;
    if ( v6 > 2 )
    {
      v52 = *(_DWORD *)(v12 + 36);
      do
      {
        if ( v51 >= v52 )
          goto LABEL_75;
        v53 = 32LL * v51++ + v12 + 40;
      }
      while ( !IsPci3MsiInterrupt(v53) );
      *(_DWORD *)(v54 + v12 + 48) = v55;
      *(_WORD *)(v54 + v12 + 44) |= 4u;
      *(_DWORD *)(v54 + v12 + 52) = v55;
      *(_DWORD *)(v54 + v12 + 56) = v11;
      *(_DWORD *)(v54 + v12 + 60) = 3;
      *(_QWORD *)(v54 + v12 + 64) = v11;
    }
LABEL_75:
    v56 = v11;
    v57 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL);
    while ( v51 < *(_DWORD *)(v12 + 36) && v50 )
    {
      if ( IsPci3MsiInterrupt(32LL * v51 + v12 + 40) )
      {
        do
        {
          if ( !v57 )
            goto LABEL_86;
          while ( 1 )
          {
            v58 = 1LL << v56;
            if ( ((1LL << v56) & v57) != 0 )
              break;
            ++v56;
          }
          LOWORD(v84) = v78;
          BYTE2(v84) = v56;
          v59 = StorPortExtendedFunction(56LL, a1, &v84, &v85);
          LODWORD(v11) = 0;
          if ( v59 )
            goto LABEL_51;
          v60 = v85;
          v57 &= ~(1LL << v56++);
        }
        while ( *(_BYTE *)(*(_QWORD *)(a1 + 264) + 72LL * v85 + 4) );
        ++v77;
        v61 = 32LL * v51;
        *(_WORD *)(v61 + v12 + 44) |= 4u;
        *(_DWORD *)(v61 + v12 + 48) = -2;
        *(_DWORD *)(v61 + v12 + 52) = -2;
        *(_WORD *)(v61 + v12 + 58) = v78;
        *(_WORD *)(v61 + v12 + 56) = 4;
        *(_DWORD *)(v61 + v12 + 60) = 3;
        *(_QWORD *)(v61 + v12 + 64) = v58;
        *(_BYTE *)v60 = 1;
        v57 &= ~*(_QWORD *)(*(_QWORD *)(a1 + 264) + 72LL * v85 + 24);
        if ( --v50 && !v57 )
        {
LABEL_86:
          v62 = v78;
          if ( v78 >= (unsigned int)*(unsigned __int16 *)(a1 + 232) - 1 )
            goto LABEL_51;
          v56 = v11;
          ++v78;
          v57 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL * (v62 + 1) + 8);
        }
      }
      ++v51;
    }
    v63 = v11;
    v79 = 1;
    v64 = v11;
    v65 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL);
    while ( v51 < *(_DWORD *)(v12 + 36) )
    {
      if ( IsPci3MsiInterrupt(v12 + 32LL * v51 + 40) )
      {
        do
        {
          if ( !v65 )
            goto LABEL_98;
          while ( 1 )
          {
            v81 = 1LL << v63;
            if ( ((1LL << v63) & v65) != 0 )
              break;
            ++v63;
          }
          LOWORD(v84) = v64;
          BYTE2(v84) = v63;
          v66 = StorPortExtendedFunction(56LL, a1, &v84, &v85);
          LODWORD(v11) = 0;
          if ( v66 )
            goto LABEL_51;
          v67 = v85;
          v65 &= ~(1LL << v63++);
        }
        while ( *(_BYTE *)(*(_QWORD *)(a1 + 264) + 72LL * v85 + 4) != 1 );
        ++v76;
        v68 = 32LL * v51;
        *(_WORD *)(v68 + v12 + 44) |= 4u;
        *(_DWORD *)(v68 + v12 + 48) = -2;
        *(_DWORD *)(v68 + v12 + 52) = -2;
        *(_QWORD *)(v68 + v12 + 64) = v81;
        *(_WORD *)(v68 + v12 + 56) = 4;
        *(_WORD *)(v68 + v12 + 58) = v64;
        *(_DWORD *)(v68 + v12 + 60) = 3;
        *(_BYTE *)v67 = 1;
        v65 &= ~*(_QWORD *)(*(_QWORD *)(a1 + 264) + 72LL * v85 + 24);
        if ( !v65 )
        {
LABEL_98:
          if ( v64 >= (unsigned int)*(unsigned __int16 *)(a1 + 232) - 1 )
            break;
          ++v64;
          v63 = v11;
          v65 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL * v64 + 8);
        }
      }
      ++v51;
    }
    v69 = v11;
    v70 = v11;
    v71 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL);
    while ( 1 )
    {
      if ( v51 >= *(_DWORD *)(v12 + 36) )
        goto LABEL_51;
      if ( IsPci3MsiInterrupt(v12 + 32LL * v51 + 40) )
      {
        while ( 1 )
        {
          if ( !v71 )
            goto LABEL_115;
          while ( ((1LL << v69) & v71) == 0 )
            ++v69;
          LOWORD(v84) = v70;
          BYTE2(v84) = v69;
          v72 = StorPortExtendedFunction(56LL, a1, &v84, &v85);
          LODWORD(v11) = 0;
          if ( v72 )
            goto LABEL_51;
          v73 = v85;
          v71 &= ~(1LL << v69);
          if ( *(unsigned __int8 *)(*(_QWORD *)(a1 + 264) + 72LL * v85 + 4) == v79 && !*(_BYTE *)v85 )
            break;
          ++v69;
        }
        v74 = 32LL * v51;
        *(_WORD *)(v74 + v12 + 44) |= 4u;
        *(_DWORD *)(v74 + v12 + 48) = -2;
        *(_DWORD *)(v74 + v12 + 52) = -2;
        *(_WORD *)(v74 + v12 + 56) = 4;
        *(_WORD *)(v74 + v12 + 58) = v70;
        *(_DWORD *)(v74 + v12 + 60) = 3;
        *(_QWORD *)(v74 + v12 + 64) = 1LL << v69;
        *(_BYTE *)v73 = 1;
        if ( v79 == 1 )
          ++v76;
        else
          ++v77;
        ++v69;
        v71 &= ~*(_QWORD *)(*(_QWORD *)(a1 + 264) + 72LL * v85 + 24);
        if ( !v71 )
        {
LABEL_115:
          if ( v70 >= (unsigned int)*(unsigned __int16 *)(a1 + 232) - 1 )
          {
            if ( v51 >= *(_DWORD *)(v12 + 36) - 1 )
              goto LABEL_123;
            if ( v76 >= *(_DWORD *)(a1 + 312) )
            {
              if ( v77 >= *(_DWORD *)(a1 + 308) )
                goto LABEL_51;
              v79 = v11;
            }
            v70 = v11;
            v71 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL);
          }
          else
          {
            v71 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL * ++v70 + 8);
          }
          v69 = v11;
        }
      }
LABEL_123:
      ++v51;
    }
  }
  v75 = v18 - v6 + v13 + 1;
  for ( i = 0; i < *(_DWORD *)(v12 + 36); i = v21 + 1 )
  {
    v20 = IsPci3MsiInterrupt(v12 + 32LL * i + 40);
    v26 = 0;
    if ( !v20 )
      continue;
    if ( v23 )
    {
      while ( ((1LL << v24) & v23) == 0 )
        ++v24;
      v26 = 0;
    }
    if ( g_HeteroSystem )
    {
      if ( !v7 )
      {
        v8 = 4;
LABEL_32:
        v27 = 1LL << v24;
        v26 = v25;
        goto LABEL_27;
      }
      v8 = 0;
      v7 = 0;
    }
    else if ( v8 == 4 )
    {
      goto LABEL_32;
    }
    v27 = 0LL;
LABEL_27:
    v28 = 32 * v22;
    *(_WORD *)(v28 + v12 + 44) |= 4u;
    *(_QWORD *)(v28 + v12 + 64) = v27;
    *(_WORD *)(v28 + v12 + 58) = v26;
    *(_DWORD *)(v28 + v12 + 48) = -2;
    *(_DWORD *)(v28 + v12 + 52) = -2;
    *(_WORD *)(v28 + v12 + 56) = v8;
    *(_DWORD *)(v28 + v12 + 60) = 3;
    if ( (v23 & ~(1LL << v24)) == 0 && v25 == *(unsigned __int16 *)(a1 + 232) - 1 )
    {
      i = v21 + 1;
      break;
    }
  }
  v29 = *(_DWORD *)(v12 + 36);
  while ( 1 )
  {
    if ( i >= v29 )
    {
      LODWORD(v11) = 0;
      goto LABEL_43;
    }
    if ( IsPci3MsiInterrupt(v12 + 32LL * i + 40) )
      break;
    i = v30 + 1;
  }
  LODWORD(v11) = 0;
  if ( v33 )
  {
    while ( ((1LL << v32) & v33) == 0 )
      ++v32;
  }
  v34 = 32 * v31;
  *(_WORD *)(v34 + v12 + 44) |= 4u;
  *(_DWORD *)(v34 + v12 + 56) = 4;
  *(_QWORD *)(v34 + v12 + 64) = 1LL << v32;
  i = v30 + 1;
  *(_DWORD *)(v34 + v12 + 48) = -2;
  *(_DWORD *)(v34 + v12 + 52) = -2;
  *(_DWORD *)(v34 + v12 + 60) = 3;
LABEL_43:
  v35 = *(_DWORD *)(v12 + 36);
  while ( i < v35 )
  {
    if ( IsPci3MsiInterrupt(v12 + 32LL * i + 40) )
    {
      do
      {
        if ( !IsPci3MsiInterrupt(v12 + 32LL * v36 + 40) && v37 != v39 )
        {
          v41 = 32LL * v39;
          *(_OWORD *)(v41 + v12 + 40) = *v38;
          *(_OWORD *)(v41 + v12 + 56) = v38[1];
          v40 = *(_DWORD *)(v12 + 36);
        }
        v36 = v37 + 1;
      }
      while ( v36 < v40 );
      break;
    }
    i = v36 + 1;
  }
LABEL_51:
  v13 = v75;
  v4 = a2;
LABEL_52:
  if ( v80 > (unsigned int)v11 )
  {
    v42 = v11;
    for ( j = v11; j < *(_DWORD *)(v12 + 36); ++j )
    {
      v44 = 32LL * j;
      if ( *(_BYTE *)(v44 + v12 + 41) != 1 || (*(_BYTE *)(v44 + v12 + 44) & 1) == 0 )
      {
        if ( j != v42 )
        {
          v45 = 32LL * v42;
          *(_OWORD *)(v45 + v12 + 40) = *(_OWORD *)(v44 + v12 + 40);
          *(_OWORD *)(v45 + v12 + 56) = *(_OWORD *)(v44 + v12 + 56);
        }
        ++v42;
      }
    }
    v13 += v42 - j;
  }
  v46 = (const void *)(v12 + 32LL * *(unsigned int *)(v12 + 36) + 40);
  memmove(
    (void *)(v12 + 32LL * v13 + 40),
    v46,
    (unsigned int)*(_QWORD *)(v4 + 8) + **(_DWORD **)(v4 + 8) - (unsigned int)v46);
  v47 = *(unsigned int **)(v4 + 8);
  result = (void *)(*v47 - 32LL * (*(_DWORD *)(v12 + 36) - v13));
  v48 = (32 * (*(_DWORD *)(v12 + 36) - v13)) >> 2;
  if ( (_DWORD)v48 )
    result = memset((char *)v47 + (_QWORD)result, 0, 4 * v48);
  *(_DWORD *)(v12 + 36) = v13;
  return result;
}
