/*
 * XREFs of MiFreeVirtualMemory @ 0x1408F6ADC
 * Callers:
 *     MmCommitDecommitSecuredMemory @ 0x1407DDDD4 (MmCommitDecommitSecuredMemory.c)
 *     MmFreeVirtualMemory @ 0x1408F6740 (MmFreeVirtualMemory.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1402A3CEC (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiFreeVadRange @ 0x1402A45F8 (MiFreeVadRange.c)
 *     MiLocateLockedVadEvent @ 0x1402A57D4 (MiLocateLockedVadEvent.c)
 *     MiUnlockAndDereferenceVad @ 0x1403205C0 (MiUnlockAndDereferenceVad.c)
 *     MiDeleteEmptyPageTables @ 0x1403D7BA0 (MiDeleteEmptyPageTables.c)
 *     MiGetVadPageSize @ 0x14042F920 (MiGetVadPageSize.c)
 *     MiDecommitRegion @ 0x1408F7010 (MiDecommitRegion.c)
 *     MiDecommitEnclavePages @ 0x1408F7408 (MiDecommitEnclavePages.c)
 *     PerfInfoLogVirtualFree @ 0x1408F7478 (PerfInfoLogVirtualFree.c)
 *     MiCheckSecuredVad @ 0x1408F8A18 (MiCheckSecuredVad.c)
 */

__int64 __fastcall MiFreeVirtualMemory(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        __int64 a5,
        int a6,
        unsigned int a7,
        char a8,
        char a9,
        _QWORD *a10,
        __int64 a11)
{
  unsigned __int64 v11; // r15
  unsigned __int64 v13; // rsi
  ULONG_PTR v16; // r10
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rsi
  int v19; // edx
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // r14
  int v22; // eax
  int v23; // ecx
  bool v24; // zf
  unsigned int v25; // r9d
  __int64 v26; // rsi
  int v27; // eax
  int v28; // ebx
  int v29; // ecx
  int v31; // eax
  int v32; // eax
  __int64 v33; // r8
  unsigned __int64 v34; // rdx
  int v35; // r8d
  char v37; // [rsp+98h] [rbp+10h] BYREF
  int i; // [rsp+A0h] [rbp+18h]
  int v39; // [rsp+A8h] [rbp+20h]

  v11 = *a3;
  v13 = *a4;
  v39 = 0;
  v16 = a1;
  v17 = v11 >> 12;
  v18 = v13 >> 12;
  v19 = a6 & 0x8000;
  v37 = 0;
  for ( i = v19; ; v19 = i )
  {
    v20 = *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32);
    v21 = *(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32);
    if ( a5
      || (v18 = *(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32),
          *a4 = (v21 << 12) | 0xFFF,
          !v19) )
    {
      if ( v17 < v20 )
        goto LABEL_40;
    }
    else
    {
      if ( v17 != v20 )
        goto LABEL_46;
      *a3 = v20 << 12;
    }
    if ( v17 > v21 || v18 < v20 || v18 > v21 )
    {
LABEL_40:
      v28 = -1073741798;
      goto LABEL_43;
    }
    v22 = *(_DWORD *)(a2 + 48);
    v23 = v22 & 0x200000;
    if ( (a6 & 0x10000) == 0 )
    {
      if ( !v23 )
        goto LABEL_74;
      v24 = (v22 & 0x70) == 16;
LABEL_10:
      if ( v24 )
        goto LABEL_74;
      goto LABEL_11;
    }
    if ( v23 || (v22 & 0x70) != 0 )
    {
LABEL_74:
      v28 = -1073741797;
      goto LABEL_43;
    }
    if ( v17 == v20 )
    {
      v24 = v18 == v21;
      goto LABEL_10;
    }
LABEL_11:
    v25 = a7;
    if ( (a7 & 0x4000000) != 0 )
    {
      if ( !MiLocateLockedVadEvent(a2, 128)
        && (*(unsigned int *)(a2 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 32)) != v33
        || (*(unsigned int *)(a2 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 32)) == v33
        && v18 == v21
        && v17 == v20 )
      {
LABEL_42:
        v28 = -1073741800;
        goto LABEL_43;
      }
      v19 = i;
    }
    if ( (v25 & 0x40000000) != 0 )
    {
      v32 = *(_DWORD *)(a2 + 48);
      if ( (v32 & 0x200000) == 0 || (v32 & 0x14000000) != 0x10000000 )
        goto LABEL_42;
    }
    if ( (*(_DWORD *)(a2 + 48) & 8) != 0 && (v25 & 0x40000000) == 0 )
    {
      if ( v19 )
      {
        if ( (*(_DWORD *)(v16 + 500) & 0x20) != 0 )
          goto LABEL_32;
        LODWORD(v34) = (_DWORD)v20 << 12;
        v35 = *(_DWORD *)(a2 + 28) - *(_DWORD *)(a2 + 24);
      }
      else
      {
        v34 = *a3;
        v35 = v18 - v17;
      }
      v28 = MiCheckSecuredVad(a2, v34, (v35 + 1) << 12, 85, a9, a11);
      if ( v28 < 0 )
        goto LABEL_43;
      v16 = a1;
      v25 = a7;
      v19 = i;
    }
    if ( !v19 )
      break;
LABEL_32:
    if ( (a8 & 1) != 0 && (*(_DWORD *)(v16 + 1532) & 0x100) != 0 && (v18 != v21 || v17 != v20) )
    {
      v28 = -1073741558;
      goto LABEL_43;
    }
    v31 = MiFreeVadRange(a2, (int)&v37, v17, v18, v16, (v25 >> 26) & 1, a10);
    v28 = v31;
    if ( v31 >= 0 )
      return 0LL;
    if ( v31 != -1073741267 )
      goto LABEL_43;
    v16 = a1;
  }
  if ( (*(_DWORD *)(a2 + 48) & 0xC200000) != 0x8200000 )
    goto LABEL_20;
  if ( !a5 )
    goto LABEL_63;
  v26 = *a4 - *a3 + 1;
  v27 = MiDecommitEnclavePages(v16, a2, *a3, *(_DWORD *)a4 - *(_DWORD *)a3 + 1, v25);
  v28 = v27;
  if ( v27 == -1073741802 )
  {
LABEL_20:
    v29 = *(_DWORD *)(a2 + 48);
    if ( (*(_BYTE *)(a2 + 48) & 0x70) != 0x30
      && ((v29 & 0x200000) == 0
       || (v29 & 0x800000) == 0 && (v29 & 0x180000u) < 0x100000
       || (v29 & 0xA00000) == 0xA00000 && (!a5 || (((MiGetVadPageSize(a2) << 12) - 1) & (*a3 | (*a4 + 1))) == 0))
      && (*(unsigned int *)(a2 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 32)) != 0x7FFFFFFFDLL )
    {
      if ( !a5 )
      {
        if ( v17 != v20 )
        {
LABEL_46:
          v28 = -1073741665;
          goto LABEL_43;
        }
        *a4 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) | 0xFFF;
      }
      v26 = *a4 - *a3 + 1;
      v39 = MiDecommitRegion(a2, *a3, *a4);
LABEL_27:
      MiUnlockAndDereferenceVad((char *)a2);
      if ( v39 )
        MiDeleteEmptyPageTables(*a3, *a4, 0);
      if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 )
        PerfInfoLogVirtualFree(*a3, v26, a1);
      return 0LL;
    }
LABEL_63:
    v28 = -1073741664;
    goto LABEL_43;
  }
  if ( v27 >= 0 )
    goto LABEL_27;
LABEL_43:
  MiUnlockAndDereferenceVad((char *)a2);
  if ( v37 )
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)KeGetCurrentThread(), a1);
  return (unsigned int)v28;
}
