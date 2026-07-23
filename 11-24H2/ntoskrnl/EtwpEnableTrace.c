/*
 * XREFs of EtwpEnableTrace @ 0x140A3E5DC
 * Callers:
 *     EtwEnableTrace @ 0x140A3E540 (EtwEnableTrace.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140A741F0 (EtwpEnableAutoLoggerProvider.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     EtwpEnableGuid @ 0x140A3EA20 (EtwpEnableGuid.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpEnableTrace(
        __int64 a1,
        __int128 *a2,
        _OWORD *a3,
        __int16 a4,
        int a5,
        char a6,
        __int64 a7,
        __int64 a8,
        int a9,
        const void **a10,
        const void **a11,
        void *Src,
        size_t Size,
        void *a14,
        size_t a15,
        void *a16,
        size_t a17,
        __int64 a18)
{
  const void **v18; // r15
  int v22; // r11d
  unsigned int v23; // ebx
  const void **v24; // r12
  unsigned int v25; // ecx
  int v26; // eax
  unsigned int v27; // r8d
  int v28; // edx
  unsigned int v29; // eax
  int v30; // ecx
  unsigned int v31; // ebx
  int v32; // esi
  unsigned int v33; // esi
  __int64 Pool2; // rax
  _BYTE *v35; // r14
  unsigned int v36; // ebx
  __int128 v38; // xmm0
  unsigned int i; // r10d
  unsigned int j; // ecx
  __int64 v41; // rdi
  unsigned int v42; // ebp
  char *v43; // rsi
  unsigned int k; // r13d
  int v45; // ecx
  unsigned __int16 *v46; // rax
  unsigned int v47; // eax
  __int64 v48; // rbx
  size_t v49; // r8
  __int64 v50; // rax
  unsigned int m; // r15d
  __int64 v52; // rbx
  int v53; // ecx
  unsigned int v54; // ecx
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rbx
  __int64 v58; // rbx
  __int64 v59; // rcx

  v18 = a10;
  v22 = 120;
  v23 = 0;
  if ( a10 )
  {
    for ( i = 0; i < 4; ++i )
    {
      v45 = LOWORD(a10[2 * i]);
      if ( (_WORD)v45 && a10[2 * i + 1] )
      {
        if ( (unsigned __int16)v45 > 0x400u )
          return (unsigned int)-1073741811;
        ++v23;
        v22 += v45 + 2;
      }
    }
  }
  v24 = a11;
  if ( a11 )
  {
    for ( j = 0; j < 2; ++j )
    {
      v46 = (unsigned __int16 *)a11[j];
      if ( v46 )
      {
        v47 = v46[1];
        if ( (_WORD)v47 )
        {
          if ( v47 > 0x40 )
            return (unsigned int)-1073741811;
          ++v23;
          v22 += 2 * v47 + 4;
        }
      }
    }
  }
  v25 = v23 + 1;
  if ( !(_DWORD)Size )
    v25 = v23;
  v26 = v22 + Size;
  if ( !(_DWORD)Size )
    v26 = v22;
  v27 = v25 + 1;
  if ( !(_DWORD)a15 )
    v27 = v25;
  v28 = v26 + a15;
  if ( !(_DWORD)a15 )
    v28 = v26;
  v29 = v27 + 1;
  if ( !(_DWORD)a17 )
    v29 = v27;
  v30 = v28 + a17;
  if ( !(_DWORD)a17 )
    v30 = v28;
  v31 = v29 + 1;
  if ( !a18 )
    v31 = v29;
  v32 = v30 + 24;
  if ( !a18 )
    v32 = v30;
  v33 = 16 * v31 + v32;
  Pool2 = ExAllocatePool2(0x100uLL, v33, 0x74777445u);
  v35 = (_BYTE *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 3;
    *(_DWORD *)(Pool2 + 4) = v33;
    if ( a3 )
      *(_OWORD *)(Pool2 + 56) = *a3;
    v38 = *a2;
    *(_WORD *)(Pool2 + 78) = a4;
    *(_DWORD *)(Pool2 + 116) = v31;
    *(_OWORD *)(Pool2 + 40) = v38;
    *(_DWORD *)(Pool2 + 72) = a5;
    *(_BYTE *)(Pool2 + 76) = a6;
    *(_QWORD *)(Pool2 + 96) = a8;
    *(_QWORD *)(Pool2 + 88) = a7;
    *(_DWORD *)(Pool2 + 80) = a9;
    if ( v31 )
    {
      v41 = Pool2 + 120;
      v42 = 0;
      v43 = (char *)(Pool2 + 120 + 16LL * v31);
      for ( k = 0; k < 4; ++k )
      {
        if ( *(_WORD *)v18 && v18[1] )
        {
          if ( k )
          {
            if ( k == 1 )
            {
              *(_DWORD *)(v41 + 16LL * v42 + 12) = -2147483632;
            }
            else if ( k == 2 )
            {
              *(_DWORD *)(v41 + 16LL * v42 + 12) = -2147483616;
            }
            else
            {
              *(_DWORD *)(v41 + 16LL * v42 + 12) = -2147450880;
            }
          }
          else
          {
            *(_DWORD *)(v41 + 16LL * v42 + 12) = -2147483640;
          }
          v48 = 2LL * v42;
          v49 = (unsigned int)*(unsigned __int16 *)v18 + 2;
          *(_DWORD *)(v41 + 8 * v48 + 8) = v49;
          *(_QWORD *)(v41 + 8 * v48) = v43 - v35;
          memmove(v43, v18[1], v49);
          v50 = *(unsigned int *)(v41 + 16LL * v42++ + 8);
          v43 += v50;
        }
        v18 += 2;
      }
      for ( m = 0; m < 2; ++m )
      {
        if ( *v24 && *((_WORD *)*v24 + 1) )
        {
          if ( m )
            *(_DWORD *)(v41 + 16LL * v42 + 12) = -2147479552;
          else
            *(_DWORD *)(v41 + 16LL * v42 + 12) = -2147483136;
          v52 = 2LL * v42;
          v53 = *((unsigned __int16 *)*v24 + 1);
          *(_QWORD *)(v41 + 8 * v52) = v43 - v35;
          v54 = 2 * v53 + 4;
          *(_DWORD *)(v41 + 8 * v52 + 8) = v54;
          memmove(v43, *v24, v54);
          v55 = *(unsigned int *)(v41 + 16LL * v42++ + 8);
          v43 += v55;
        }
        ++v24;
      }
      if ( (_DWORD)Size )
      {
        v56 = 2LL * v42;
        *(_DWORD *)(v41 + 8 * v56 + 8) = Size;
        *(_DWORD *)(v41 + 8 * v56 + 12) = -2147482624;
        *(_QWORD *)(v41 + 8 * v56) = v43 - v35;
        memmove(v43, Src, (unsigned int)Size);
        v43 += *(unsigned int *)(v41 + 16LL * v42++ + 8);
      }
      if ( (_DWORD)a15 )
      {
        v57 = 2LL * v42;
        *(_DWORD *)(v41 + 8 * v57 + 8) = a15;
        *(_DWORD *)(v41 + 8 * v57 + 12) = -2147475456;
        *(_QWORD *)(v41 + 8 * v57) = v43 - v35;
        memmove(v43, a14, (unsigned int)a15);
        v43 += *(unsigned int *)(v41 + 16LL * v42++ + 8);
      }
      if ( (_DWORD)a17 )
      {
        v58 = 2LL * v42;
        *(_DWORD *)(v41 + 8 * v58 + 8) = a17;
        *(_DWORD *)(v41 + 8 * v58 + 12) = 0x80000000;
        *(_QWORD *)(v41 + 8 * v58) = v43 - v35;
        memmove(v43, a16, (unsigned int)a17);
        v43 += *(unsigned int *)(v41 + 16LL * v42++ + 8);
      }
      if ( a18 )
      {
        v59 = 2LL * v42;
        *(_DWORD *)(v41 + 8 * v59 + 12) = -2147467264;
        *(_DWORD *)(v41 + 8 * v59 + 8) = 24;
        *(_QWORD *)(v41 + 8 * v59) = v43 - v35;
        *(_OWORD *)v43 = *(_OWORD *)a18;
        *((_QWORD *)v43 + 2) = *(_QWORD *)(a18 + 16);
      }
    }
    v36 = EtwpEnableGuid(a1, v35, 0LL);
    ExFreePoolWithTag(v35, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v36;
}
