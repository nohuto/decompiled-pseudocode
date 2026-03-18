/*
 * XREFs of ?GreGetUFIPathname@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAKPEAGK1KPEAH1PEAX31@Z @ 0x14032641C
 * Callers:
 *     NtGdiGetUFIPathname @ 0x140337D70 (NtGdiGetUFIPathname.c)
 * Callees:
 *     ?UmfdIsUmfdTrueTypePff@@YA_NPEBVPFF@@@Z @ 0x1400FF884 (-UmfdIsUmfdTrueTypePff@@YA_NPEBVPFF@@@Z.c)
 *     ?ppfeGetPFEFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1401C4AD0 (-ppfeGetPFEFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x1401E09CC (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall GreGetUFIPathname(
        struct _UNIVERSAL_FONT_ID *a1,
        unsigned int *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        unsigned int *a5,
        char a6,
        int *a7,
        unsigned int *a8,
        void *Address,
        int *a10,
        unsigned int *a11)
{
  struct PFE *PFEFromUFI; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  struct PFE *v17; // rsi
  __int64 v18; // r14
  __int64 v19; // r12
  SIZE_T v20; // rdi
  PVOID v21; // r14
  const struct PFF *v22; // r13
  unsigned int v23; // ecx
  PVOID MappedBase; // [rsp+28h] [rbp-60h] BYREF
  ULONG_PTR ViewSize[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v27[5]; // [rsp+40h] [rbp-48h] BYREF
  int v28; // [rsp+68h] [rbp-20h]

  PFEFromUFI = ppfeGetPFEFromUFI(a1, a6 & 5, 1);
  v17 = PFEFromUFI;
  ViewSize[1] = (ULONG_PTR)PFEFromUFI;
  if ( !PFEFromUFI )
    return 0LL;
  v18 = *(_QWORD *)PFEFromUFI;
  if ( a5 )
    *a5 = *(_DWORD *)(v18 + 36);
  if ( a2 )
    *a2 = *(_DWORD *)(v18 + 32);
  if ( a3 )
  {
    v19 = *(unsigned int *)(v18 + 32);
    if ( (unsigned int)v19 > a4 )
      return 0LL;
    memmove(a3, *(const void **)(v18 + 24), 2 * v19);
    memset(&a3[v19], 0, 2LL * (a4 - (unsigned int)v19));
  }
  if ( a7 )
    *a7 = *((_DWORD *)v17 + 3) & 0x40;
  if ( (*((_DWORD *)v17 + 3) & 0x40) == 0 )
    goto LABEL_17;
  ViewSize[0] = 0LL;
  v20 = *(unsigned int *)(**(_QWORD **)(v18 + 208) + 24LL);
  if ( a8 )
    *a8 = v20;
  if ( !Address )
    goto LABEL_17;
  MappedBase = 0LL;
  if ( MmMapViewInSessionSpace(*(PVOID *)(**(_QWORD **)(v18 + 208) + 32LL), &MappedBase, ViewSize) < 0 )
    return 0LL;
  ProbeForWrite(Address, v20, 1u);
  v21 = MappedBase;
  memmove(Address, (char *)MappedBase + 16, v20);
  v27[0] = 0LL;
  v27[1] = 0LL;
  v27[2] = v21;
  v27[3] = 0LL;
  v27[4] = 0LL;
  v28 = 3;
  Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)v27);
LABEL_17:
  if ( a10 )
  {
    if ( a11 )
    {
      *a10 = 0;
      *a11 = 0;
      v22 = *(const struct PFF **)v17;
      if ( UmfdIsUmfdTrueTypePff(*(const struct PFF **)v17, v15, v16) )
      {
        v23 = *((_DWORD *)v22 + 54);
        if ( v23 >= 4 && (v23 & 1) == 0 )
        {
          *a11 = (unsigned int)(*((_DWORD *)v17 + 22) - 1) >> 1;
          *a10 = 1;
        }
      }
    }
  }
  return 1LL;
}
