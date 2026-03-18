/*
 * XREFs of MiCopyToCfgBitMap @ 0x1408FA0F0
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x1408F9C78 (MiMarkSharedImageCfgBits.c)
 *     MiPopulateCfgBitMap @ 0x1408F9F54 (MiPopulateCfgBitMap.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140261AD0 (RtlClearBitsEx.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     RtlSetBitsEx @ 0x1403A4600 (RtlSetBitsEx.c)
 *     MiCopyToUserVa @ 0x1403E2DBC (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x1404051C4 (MiSplitPrivatePage.c)
 *     MiReadVadFlags2 @ 0x14044BF3C (MiReadVadFlags2.c)
 *     RtlClearAllBitsEx @ 0x14046C570 (RtlClearAllBitsEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     MiEliminateZeroPages @ 0x1408F8080 (MiEliminateZeroPages.c)
 *     MiImageCfgEnumRvaListFirst @ 0x1408F8478 (MiImageCfgEnumRvaListFirst.c)
 *     MiImageCfgEnumRvaListNext @ 0x1408FA6A0 (MiImageCfgEnumRvaListNext.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCopyToCfgBitMap(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        int a4,
        char *Src,
        __int64 a6,
        unsigned int a7,
        unsigned int *a8,
        size_t Size,
        __int64 a10)
{
  ULONG_PTR v10; // r15
  unsigned __int64 v11; // r14
  ULONG_PTR v12; // r11
  unsigned int v13; // edx
  ULONG_PTR v14; // r10
  char *Pool; // rdi
  char *v16; // rbx
  size_t v17; // r9
  __int64 v18; // r12
  int v19; // esi
  __int64 v20; // rcx
  unsigned int v21; // esi
  size_t v22; // r12
  __int64 v24; // r9
  unsigned int v25; // esi
  unsigned int v26; // r8d
  ULONG_PTR v27; // r12
  __int64 v28; // r15
  unsigned int v29; // edx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  unsigned int v37; // eax
  ULONG_PTR i; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rdx
  __int64 v43; // rcx
  void *v44; // rsp
  char v45; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v46; // [rsp+100h] [rbp+0h]
  int v47; // [rsp+104h] [rbp+4h]
  ULONG_PTR v48; // [rsp+108h] [rbp+8h]
  __int64 v49; // [rsp+110h] [rbp+10h]
  int v50; // [rsp+118h] [rbp+18h]
  int v51; // [rsp+11Ch] [rbp+1Ch]
  __int64 v52; // [rsp+120h] [rbp+20h]
  char *v53; // [rsp+128h] [rbp+28h]
  unsigned int v54; // [rsp+130h] [rbp+30h]
  __int64 v55; // [rsp+138h] [rbp+38h]
  char *v56; // [rsp+140h] [rbp+40h]
  __int64 v57; // [rsp+148h] [rbp+48h]
  ULONG_PTR BugCheckParameter2; // [rsp+150h] [rbp+50h]
  __int128 v59; // [rsp+158h] [rbp+58h] BYREF
  __int64 v60; // [rsp+168h] [rbp+68h]
  __int64 v61; // [rsp+170h] [rbp+70h]
  unsigned __int64 v62; // [rsp+178h] [rbp+78h]
  size_t v63; // [rsp+180h] [rbp+80h]

  v51 = a4;
  v10 = a2;
  v55 = a2;
  v61 = a1;
  v11 = (unsigned __int64)Src;
  v62 = (unsigned __int64)Src;
  v59 = 0LL;
  if ( a2 > 1 && !a4 )
  {
    if ( *a8 == -1 )
      v10 = 1LL;
    v55 = v10;
  }
  BugCheckParameter2 = v10;
  v12 = v10;
  v48 = v10;
  v13 = 0;
  v46 = 0;
  v52 = a7;
  v47 = 0;
  v14 = 4096LL;
  v49 = 4096LL;
  v50 = 0;
  if ( a10 && (MiReadVadFlags2(a10) & 0x20) != 0 )
    v50 = *(_DWORD *)(***(_QWORD ***)(v43 + 72) + 8LL) << 12;
  if ( v10 > 1 )
  {
    Pool = (char *)MiAllocatePool(0x40uLL, v14, 1700030797);
    v53 = Pool;
    v12 = v10;
    if ( Pool )
    {
      v47 = 1;
      v13 = 0;
      v14 = v49;
      goto LABEL_7;
    }
    v14 = 256LL;
    v49 = 256LL;
    v44 = alloca(256LL);
    Pool = &v45;
    v13 = 0;
  }
  else
  {
    Pool = (char *)qword_140E37360;
    if ( !v10 )
      Pool = (char *)qword_140E37398;
  }
  v53 = Pool;
LABEL_7:
  v16 = Src;
  v17 = Size;
  v18 = ((unsigned __int16)Src & 0xFFF) + (unsigned int)(Size & 0xFFF) + 4095;
  v57 = v18;
  v60 = v18;
  v63 = Size;
  v19 = 0;
  while ( 1 )
  {
    v56 = v16;
    if ( !v17 )
      break;
    v20 = ((_DWORD)v14 - 1) & (unsigned int)v16;
    v21 = v14 - v20;
    if ( v14 - v20 >= v17 )
      v21 = v17;
    v54 = v21;
    v22 = v21;
    if ( v10 > 1 )
    {
      if ( v51 == 1 )
      {
        if ( v13 < *(_DWORD *)v12 )
        {
          v34 = (*(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL * v13) - v52) & ~(v14 - 1);
          v35 = (2 * (v34 >> 4)) >> 3;
          if ( v35 >= v14 )
          {
            v52 += v34;
            v16 += v35;
            v56 = v16;
            v17 -= v35;
            Size = v17;
          }
        }
        v36 = ((_DWORD)v14 - 1) & (unsigned int)v16;
        v22 = (unsigned int)(v14 - v36);
        if ( v14 - v36 >= v17 )
          v22 = (unsigned int)v17;
        memmove(Pool, v16, (unsigned int)v22);
        *((_QWORD *)&v59 + 1) = Pool;
        *(_QWORD *)&v59 = (unsigned int)(8 * v22);
        v37 = v46;
        for ( i = v48; v37 < *(_DWORD *)v48; i = v48 )
        {
          v39 = 2LL * v37;
          v40 = *(_QWORD *)(i + 8);
          v41 = (unsigned int)(*(_DWORD *)(v40 + 16LL * v37) - v52);
          if ( (unsigned int)v41 >= (unsigned int)v22 >> 1 << 7 )
            break;
          v42 = 2 * (v41 >> 4);
          if ( (*(_BYTE *)(v40 + 8 * v39 + 8) & 5) != 0 )
          {
            _bittestandreset64((signed __int64 *)Pool, v42 + 1);
            _bittestandset64((signed __int64 *)Pool, v42);
          }
          else
          {
            RtlClearBitsEx((__int64)&v59, v42, 2uLL);
          }
          v37 = v46 + 1;
          v46 = v37;
        }
        v52 += (unsigned int)v22 >> 1 << 7;
      }
      else
      {
        v22 = v21;
        if ( !v51 )
        {
          *((_QWORD *)&v59 + 1) = Pool;
          *(_QWORD *)&v59 = 8 * v21;
          RtlClearAllBitsEx((__int64)&v59);
          v25 = a7 + (v21 >> 1 << 7);
          v26 = *a8;
          v27 = BugCheckParameter2;
          if ( !*a8 )
          {
            v26 = MiImageCfgEnumRvaListFirst(BugCheckParameter2, a8, v50, v24);
            if ( !v26 )
              goto LABEL_37;
          }
          v28 = v61;
          do
          {
            if ( v26 >= a7 )
            {
              if ( v26 >= v25 )
                break;
              v29 = a8[1];
              if ( (v29 & 1) != 0 )
              {
                v30 = 2 * ((unsigned __int64)(v26 - a7) >> 4);
                if ( (v26 & 0xF) == *(_DWORD *)(v28 + 24) )
                {
                  v31 = v30 + 1;
                  if ( (v29 & 4) != 0 )
                  {
                    _bittestandreset64((signed __int64 *)Pool, v30);
                    _bittestandset64((signed __int64 *)Pool, v31);
                  }
                  else
                  {
                    _bittestandset64((signed __int64 *)Pool, v30);
                    _bittestandreset64((signed __int64 *)Pool, v31);
                  }
                }
                else
                {
                  RtlSetBitsEx((__int64)&v59, v30, 2uLL);
                }
              }
            }
            v26 = MiImageCfgEnumRvaListNext(v27);
          }
          while ( v26 );
          v11 = (unsigned __int64)Src;
          v10 = v55;
          if ( !v26 )
LABEL_37:
            *a8 = -1;
          a7 = v25;
          v22 = v54;
        }
      }
    }
    v19 = MiSplitPrivatePage((ULONG_PTR)v16, a6);
    if ( v19 < 0 || (v19 = MiCopyToUserVa((ULONG_PTR)v16, a6, Pool, v22), v19 < 0) )
    {
      v18 = v57;
      break;
    }
    v13 = v46;
    if ( v46 )
    {
      v12 = v48;
      **(_DWORD **)(v48 + 16) = v46;
      goto LABEL_17;
    }
    if ( v10 <= 1 )
      goto LABEL_16;
    if ( v51 )
    {
      v14 = v49;
    }
    else
    {
      if ( *a8 != -1 )
      {
LABEL_16:
        v12 = v48;
LABEL_17:
        v14 = v49;
        goto LABEL_18;
      }
      if ( v47 )
      {
        ExFreePoolWithTag(Pool, 0);
        v47 = 0;
        v13 = v46;
      }
      v10 = 1LL;
      v55 = 1LL;
      v14 = 4096LL;
      v49 = 4096LL;
      Pool = (char *)qword_140E37360;
      v53 = (char *)qword_140E37360;
    }
    v12 = v48;
LABEL_18:
    v16 += v22;
    v17 = Size - v22;
    Size -= v22;
    v18 = v57;
  }
  if ( v47 )
    ExFreePoolWithTag(Pool, 0);
  if ( BugCheckParameter2 )
  {
    if ( v19 < 0 )
    {
      if ( v16 == (char *)v11 || v19 == -1073741818 )
        return (unsigned int)v19;
      v32 = v11 & 0xFFFFFFFFFFFFF000uLL;
      v33 = (unsigned __int64)&v16[-v32] & 0xFFFFFFFFFFFFF000uLL;
    }
    else
    {
      v32 = v62 & 0xFFFFFFFFFFFFF000uLL;
      v33 = (v18 & 0xFFFFFFFFFFFFF000uLL) + (v63 & 0xFFFFFFFFFFFFF000uLL);
    }
    MiEliminateZeroPages((__int64)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink, v32, v33);
  }
  return (unsigned int)v19;
}
