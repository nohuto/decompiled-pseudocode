/*
 * XREFs of ?_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z @ 0x1806C852C
 * Callers:
 *     ?GetNthMostDominantColorFromHBITMAP@@YA_NPEAUHBITMAP__@@I_N1PEAK@Z @ 0x1806C84A8 (-GetNthMostDominantColorFromHBITMAP@@YA_NPEAUHBITMAP__@@I_N1PEAK@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800C9E90 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180301B18 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18032931C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??$SortEx@VCBucketComparator@@@?$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUBUCKET@@@@V?$CSimpleArrayStandardCompareHelper@PEAUBUCKET@@@@V?$CSimpleArrayStandardMergeHelper@PEAUBUCKET@@@@@@QEAAJAEBVCBucketComparator@@@Z @ 0x1806C7F38 (--$SortEx@VCBucketComparator@@@-$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUB.c)
 *     ??0BUCKET@@QEAA@XZ @ 0x1806C8190 (--0BUCKET@@QEAA@XZ.c)
 *     ??1BUCKET@@QEAA@XZ @ 0x1806C81E0 (--1BUCKET@@QEAA@XZ.c)
 *     DPA_Clone @ 0x1806C9A70 (DPA_Clone.c)
 *     DPA_InsertPtr @ 0x1806C9D00 (DPA_InsertPtr.c)
 */

char __fastcall _GetNthMostDominantColorFromBits(
        struct tagRGBQUAD *p,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        bool a6,
        bool a7,
        unsigned int *a8)
{
  unsigned int *v8; // r15
  __int64 v10; // rsi
  char v13; // r13
  void *v14; // r8
  int v15; // r12d
  __int64 v16; // r15
  __int64 v17; // rdi
  __int64 v18; // r14
  int v19; // r14d
  __int64 v20; // rdx
  HDPA *v21; // rbx
  __int64 v22; // rsi
  BUCKET *v23; // rax
  HDPA *v24; // rax
  HDPA *v25; // rdi
  void *v26; // r8
  unsigned __int64 v27; // rcx
  HDPA **v28; // rdx
  unsigned __int64 v29; // rcx
  _DWORD *v30; // r9
  int v31; // edi
  int v32; // ebx
  __int64 v33; // r8
  unsigned __int8 **v34; // rcx
  unsigned __int8 *v35; // rdx
  unsigned int v36; // edi
  __int64 v37; // rbx
  void *v38; // rsi
  __int64 v40; // [rsp+28h] [rbp-E0h] BYREF
  LPVOID pv; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v42; // [rsp+38h] [rbp-D0h]
  __int64 v43; // [rsp+40h] [rbp-C8h]
  __int64 v44; // [rsp+48h] [rbp-C0h]
  unsigned int *v45; // [rsp+50h] [rbp-B8h]
  HDPA hdpa[28]; // [rsp+58h] [rbp-B0h] BYREF

  v8 = a8;
  v10 = a2;
  v45 = a8;
  v13 = 0;
  `vector constructor iterator'((char *)hdpa, 8LL, 27LL, (void (__fastcall *)(char *))BUCKET::BUCKET);
  v15 = 0;
  if ( a3 > 0 )
  {
    v16 = (unsigned int)a3;
    v17 = 4LL * (a4 - (int)v10);
    do
    {
      if ( (int)v10 > 0 )
      {
        v18 = v10;
        do
        {
          if ( p->rgbReserved )
          {
            DPA_InsertPtr(hdpa[p->rgbBlue / 0x56u + 3 * (p->rgbGreen / 0x56u + 3 * (p->rgbRed / 0x56u))], 0x7FFFFFFF, p);
            ++v15;
          }
          ++p;
          --v18;
        }
        while ( v18 );
      }
      p = (struct tagRGBQUAD *)((char *)p + v17);
      --v16;
    }
    while ( v16 );
    v8 = v45;
  }
  v19 = 0;
  pv = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  if ( (int)CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
              (__int64)&pv,
              0x1BuLL,
              v14) < 0 )
    goto LABEL_36;
  v21 = hdpa;
  v22 = 27LL;
  do
  {
    v23 = (BUCKET *)operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v23 )
    {
      v24 = (HDPA *)BUCKET::BUCKET(v23);
      v25 = v24;
      if ( v24 )
      {
        DPA_Clone(*v21, *v24);
        v27 = v42;
        if ( v42 == v44 )
        {
          if ( (int)CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                      (__int64)&pv,
                      v42 + 1,
                      v26) < 0 )
            goto LABEL_19;
          v27 = v42;
        }
        v42 = v27 + 1;
        v28 = (HDPA **)((char *)pv + 8 * v27);
        if ( v28 )
          *v28 = v25;
      }
    }
LABEL_19:
    ++v21;
    --v22;
  }
  while ( v22 );
  LOBYTE(v40) = 0;
  if ( (int)CTSimpleArray<BUCKET *,4294967294,CTPolicyCoTaskMem<BUCKET *>,CSimpleArrayStandardCompareHelper<BUCKET *>,CSimpleArrayStandardMergeHelper<BUCKET *>>::SortEx<CBucketComparator>(
              (__int64)&pv,
              (__int64)&v40) < 0 )
    goto LABEL_30;
  v29 = v42;
  v20 = *((_QWORD *)pv + v42 - 1);
  if ( v20 )
  {
    v30 = *(_DWORD **)v20;
    v31 = 0;
    if ( *(_QWORD *)v20 )
      LODWORD(v30) = *v30;
    v32 = 0;
    v33 = (int)v30;
    if ( (int)v30 > 0 )
    {
      v19 = (int)v30;
      v34 = *(unsigned __int8 ***)(**((_QWORD **)pv + v42 - 1) + 8LL);
      do
      {
        v35 = *v34++;
        LODWORD(v22) = v35[2] + (_DWORD)v22;
        v32 += v35[1];
        v31 += *v35;
        --v33;
      }
      while ( v33 );
    }
    if ( MulDiv((int)v30, 100, v15) >= 7 && v15 >= 5 )
    {
      v13 = 1;
      v20 = (unsigned int)((int)v22 >> 31);
      LODWORD(v20) = (int)v22 % v19;
      *v8 = (unsigned __int8)((int)v22 / v19) | ((unsigned __int8)(v31 / v19) << 16) | ((unsigned __int8)(v32 / v19) << 8);
    }
LABEL_30:
    v29 = v42;
  }
  v36 = 0;
  if ( v29 )
  {
    v37 = 0LL;
    do
    {
      v38 = (void *)*((_QWORD *)pv + v37);
      if ( v38 )
      {
        BUCKET::~BUCKET(*((BUCKET **)pv + v37));
        operator delete(v38);
      }
      ++v36;
      *((_QWORD *)pv + v37) = 0LL;
      v37 = v36;
    }
    while ( v36 < v42 );
  }
LABEL_36:
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v42 = 0LL;
  v44 = 0LL;
  `vector destructor iterator'((char *)hdpa, v20, 27LL, (void (__fastcall *)(char *))BUCKET::~BUCKET);
  return v13;
}
