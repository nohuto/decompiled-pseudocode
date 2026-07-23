/*
 * XREFs of MiCopyToCfgBitMap @ 0x14090603C
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x140905BC4 (MiMarkSharedImageCfgBits.c)
 *     MiPopulateCfgBitMap @ 0x140905EA0 (MiPopulateCfgBitMap.c)
 * Callees:
 *     RtlClearBitsEx @ 0x1402A9FB0 (RtlClearBitsEx.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     RtlSetBitsEx @ 0x14038E280 (RtlSetBitsEx.c)
 *     MiCopyToUserVa @ 0x1403DDE48 (MiCopyToUserVa.c)
 *     MiReadVadFlags2 @ 0x140455FA8 (MiReadVadFlags2.c)
 *     MiSplitPrivatePage @ 0x1404672C0 (MiSplitPrivatePage.c)
 *     RtlClearAllBitsEx @ 0x14046DD90 (RtlClearAllBitsEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     MiImageCfgEnumRvaListNext @ 0x140906600 (MiImageCfgEnumRvaListNext.c)
 *     MiImageCfgEnumRvaListFirst @ 0x14099A318 (MiImageCfgEnumRvaListFirst.c)
 *     MiEliminateZeroPages @ 0x1409CF9E0 (MiEliminateZeroPages.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  unsigned int v24; // esi
  unsigned int v25; // r8d
  ULONG_PTR v26; // r12
  __int64 v27; // r15
  unsigned int v28; // edx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r14
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  unsigned int v36; // eax
  ULONG_PTR i; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // rcx
  void *v43; // rsp
  char v44; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v45; // [rsp+100h] [rbp+0h]
  int v46; // [rsp+104h] [rbp+4h]
  ULONG_PTR v47; // [rsp+108h] [rbp+8h]
  __int64 v48; // [rsp+110h] [rbp+10h]
  unsigned int v49; // [rsp+118h] [rbp+18h]
  int v50; // [rsp+11Ch] [rbp+1Ch]
  __int64 v51; // [rsp+120h] [rbp+20h]
  char *v52; // [rsp+128h] [rbp+28h]
  unsigned int v53; // [rsp+130h] [rbp+30h]
  __int64 v54; // [rsp+138h] [rbp+38h]
  char *v55; // [rsp+140h] [rbp+40h]
  __int64 v56; // [rsp+148h] [rbp+48h]
  ULONG_PTR BugCheckParameter2; // [rsp+150h] [rbp+50h]
  _RTL_BITMAP_EX BitMapHeader; // [rsp+158h] [rbp+58h] BYREF
  __int64 v59; // [rsp+168h] [rbp+68h]
  __int64 v60; // [rsp+170h] [rbp+70h]
  unsigned __int64 v61; // [rsp+178h] [rbp+78h]
  size_t v62; // [rsp+180h] [rbp+80h]

  v50 = a4;
  v10 = a2;
  v54 = a2;
  v60 = a1;
  v11 = (unsigned __int64)Src;
  v61 = (unsigned __int64)Src;
  BitMapHeader = 0LL;
  if ( a2 > 1 && !a4 )
  {
    if ( *a8 == -1 )
      v10 = 1LL;
    v54 = v10;
  }
  BugCheckParameter2 = v10;
  v12 = v10;
  v47 = v10;
  v13 = 0;
  v45 = 0;
  v51 = a7;
  v46 = 0;
  v14 = 4096LL;
  v48 = 4096LL;
  v49 = 0;
  if ( a10 && (MiReadVadFlags2(a10) & 0x20) != 0 )
    v49 = *(_DWORD *)(***(_QWORD ***)(v42 + 72) + 8LL) << 12;
  if ( v10 > 1 )
  {
    Pool = (char *)MiAllocatePool(0x40uLL, v14, 1700030797);
    v52 = Pool;
    v12 = v10;
    if ( Pool )
    {
      v46 = 1;
      v13 = 0;
      v14 = v48;
      goto LABEL_7;
    }
    v14 = 256LL;
    v48 = 256LL;
    v43 = alloca(256LL);
    Pool = &v44;
    v13 = 0;
  }
  else
  {
    Pool = (char *)qword_140E37120;
    if ( !v10 )
      Pool = (char *)qword_140E37158;
  }
  v52 = Pool;
LABEL_7:
  v16 = Src;
  v17 = Size;
  v18 = ((unsigned __int16)Src & 0xFFF) + (unsigned int)(Size & 0xFFF) + 4095;
  v56 = v18;
  v59 = v18;
  v62 = Size;
  v19 = 0;
  while ( 1 )
  {
    v55 = v16;
    if ( !v17 )
      break;
    v20 = ((_DWORD)v14 - 1) & (unsigned int)v16;
    v21 = v14 - v20;
    if ( v14 - v20 >= v17 )
      v21 = v17;
    v53 = v21;
    v22 = v21;
    if ( v10 > 1 )
    {
      if ( v50 == 1 )
      {
        if ( v13 < *(_DWORD *)v12 )
        {
          v33 = (*(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL * v13) - v51) & ~(v14 - 1);
          v34 = (2 * (v33 >> 4)) >> 3;
          if ( v34 >= v14 )
          {
            v51 += v33;
            v16 += v34;
            v55 = v16;
            v17 -= v34;
            Size = v17;
          }
        }
        v35 = ((_DWORD)v14 - 1) & (unsigned int)v16;
        v22 = (unsigned int)(v14 - v35);
        if ( v14 - v35 >= v17 )
          v22 = (unsigned int)v17;
        memmove(Pool, v16, (unsigned int)v22);
        BitMapHeader.Buffer = (unsigned __int64 *)Pool;
        BitMapHeader.SizeOfBitMap = (unsigned int)(8 * v22);
        v36 = v45;
        for ( i = v47; v36 < *(_DWORD *)v47; i = v47 )
        {
          v38 = 2LL * v36;
          v39 = *(_QWORD *)(i + 8);
          v40 = (unsigned int)(*(_DWORD *)(v39 + 16LL * v36) - v51);
          if ( (unsigned int)v40 >= (unsigned int)v22 >> 1 << 7 )
            break;
          v41 = 2 * (v40 >> 4);
          if ( (*(_BYTE *)(v39 + 8 * v38 + 8) & 5) != 0 )
          {
            _bittestandreset64((signed __int64 *)Pool, v41 + 1);
            _bittestandset64((signed __int64 *)Pool, v41);
          }
          else
          {
            RtlClearBitsEx((__int64)&BitMapHeader, v41, 2uLL);
          }
          v36 = v45 + 1;
          v45 = v36;
        }
        v51 += (unsigned int)v22 >> 1 << 7;
      }
      else
      {
        v22 = v21;
        if ( !v50 )
        {
          BitMapHeader.Buffer = (unsigned __int64 *)Pool;
          BitMapHeader.SizeOfBitMap = 8 * v21;
          RtlClearAllBitsEx(&BitMapHeader);
          v24 = a7 + (v21 >> 1 << 7);
          v25 = *a8;
          v26 = BugCheckParameter2;
          if ( !*a8 )
          {
            v25 = MiImageCfgEnumRvaListFirst(BugCheckParameter2, a8, v49);
            if ( !v25 )
              goto LABEL_36;
          }
          v27 = v60;
          do
          {
            if ( v25 >= a7 )
            {
              if ( v25 >= v24 )
                break;
              v28 = a8[1];
              if ( (v28 & 1) != 0 )
              {
                v29 = 2 * ((unsigned __int64)(v25 - a7) >> 4);
                if ( (v25 & 0xF) == *(_DWORD *)(v27 + 24) )
                {
                  v30 = v29 + 1;
                  if ( (v28 & 4) != 0 )
                  {
                    _bittestandreset64((signed __int64 *)Pool, v29);
                    _bittestandset64((signed __int64 *)Pool, v30);
                  }
                  else
                  {
                    _bittestandset64((signed __int64 *)Pool, v29);
                    _bittestandreset64((signed __int64 *)Pool, v30);
                  }
                }
                else
                {
                  RtlSetBitsEx((__int64)&BitMapHeader, v29, 2uLL);
                }
              }
            }
            v25 = MiImageCfgEnumRvaListNext(v26);
          }
          while ( v25 );
          v11 = (unsigned __int64)Src;
          v10 = v54;
          if ( !v25 )
LABEL_36:
            *a8 = -1;
          a7 = v24;
          v22 = v53;
        }
      }
    }
    v19 = MiSplitPrivatePage((ULONG_PTR)v16, a6);
    if ( v19 < 0 || (v19 = MiCopyToUserVa((ULONG_PTR)v16, a6, Pool, v22), v19 < 0) )
    {
      v18 = v56;
      break;
    }
    v13 = v45;
    if ( v45 )
    {
      v12 = v47;
      **(_DWORD **)(v47 + 16) = v45;
      goto LABEL_17;
    }
    if ( v10 <= 1 )
      goto LABEL_16;
    if ( v50 )
    {
      v14 = v48;
    }
    else
    {
      if ( *a8 != -1 )
      {
LABEL_16:
        v12 = v47;
LABEL_17:
        v14 = v48;
        goto LABEL_18;
      }
      if ( v46 )
      {
        ExFreePoolWithTag(Pool, 0);
        v46 = 0;
        v13 = v45;
      }
      v10 = 1LL;
      v54 = 1LL;
      v14 = 4096LL;
      v48 = 4096LL;
      Pool = (char *)qword_140E37120;
      v52 = (char *)qword_140E37120;
    }
    v12 = v47;
LABEL_18:
    v16 += v22;
    v17 = Size - v22;
    Size -= v22;
    v18 = v56;
  }
  if ( v46 )
    ExFreePoolWithTag(Pool, 0);
  if ( BugCheckParameter2 )
  {
    if ( v19 < 0 )
    {
      if ( v16 == (char *)v11 || v19 == -1073741818 )
        return (unsigned int)v19;
      v31 = v11 & 0xFFFFFFFFFFFFF000uLL;
      v32 = (unsigned __int64)&v16[-v31] & 0xFFFFFFFFFFFFF000uLL;
    }
    else
    {
      v31 = v61 & 0xFFFFFFFFFFFFF000uLL;
      v32 = (v18 & 0xFFFFFFFFFFFFF000uLL) + (v62 & 0xFFFFFFFFFFFFF000uLL);
    }
    MiEliminateZeroPages(&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink, v31, v32);
  }
  return (unsigned int)v19;
}
