/*
 * XREFs of MiFreeVirtualMemory @ 0x1408D9E68
 * Callers:
 *     MmCommitDecommitSecuredMemory @ 0x1407EE244 (MmCommitDecommitSecuredMemory.c)
 *     MmFreeVirtualMemory @ 0x1408D9AD0 (MmFreeVirtualMemory.c)
 * Callees:
 *     MiFreeVadRange @ 0x14026731C (MiFreeVadRange.c)
 *     MiLocateLockedVadEvent @ 0x14026757C (MiLocateLockedVadEvent.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     MiDeleteEmptyPageTables @ 0x1403C7ED4 (MiDeleteEmptyPageTables.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1403C8374 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiGetVadPageSize @ 0x14041B130 (MiGetVadPageSize.c)
 *     MiDecommitRegion @ 0x1408DA3B0 (MiDecommitRegion.c)
 *     MiDecommitEnclavePages @ 0x1408DA7A8 (MiDecommitEnclavePages.c)
 *     PerfInfoLogVirtualFree @ 0x1408DA818 (PerfInfoLogVirtualFree.c)
 *     MiCheckSecuredVad @ 0x1408DBE18 (MiCheckSecuredVad.c)
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
  int v26; // ecx
  __int64 v27; // rsi
  int v29; // eax
  int v30; // ebx
  int v31; // eax
  __int64 v32; // r8
  unsigned __int64 v33; // rdx
  int v34; // r8d
  char v36; // [rsp+98h] [rbp+10h] BYREF
  int i; // [rsp+A0h] [rbp+18h]
  int v38; // [rsp+A8h] [rbp+20h]

  v11 = *a3;
  v13 = *a4;
  v38 = 0;
  v16 = a1;
  v17 = v11 >> 12;
  v18 = v13 >> 12;
  v19 = a6 & 0x8000;
  v36 = 0;
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
        break;
    }
    else
    {
      if ( v17 != v20 )
        goto LABEL_48;
      *a3 = v20 << 12;
    }
    if ( v17 > v21 || v18 < v20 || v18 > v21 )
      break;
    v22 = *(_DWORD *)(a2 + 48);
    v23 = v22 & 0x200000;
    if ( (a6 & 0x10000) == 0 )
    {
      if ( !v23 )
        goto LABEL_78;
      v24 = (v22 & 0x70) == 16;
LABEL_10:
      if ( v24 )
        goto LABEL_78;
      goto LABEL_11;
    }
    if ( v23 || (v22 & 0x70) != 0 )
    {
LABEL_78:
      v30 = -1073741797;
      goto LABEL_39;
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
        && (*(unsigned int *)(a2 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 32)) != v32
        || (*(unsigned int *)(a2 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 32)) == v32
        && v18 == v21
        && v17 == v20 )
      {
LABEL_38:
        v30 = -1073741800;
        goto LABEL_39;
      }
      v19 = i;
    }
    if ( (v25 & 0x40000000) != 0
      && ((*(_DWORD *)(a2 + 48) & 0x4200000) != 0x200000 || (*(_DWORD *)(a2 + 48) & 0x10000000) == 0) )
    {
      goto LABEL_38;
    }
    if ( (*(_DWORD *)(a2 + 48) & 8) != 0 && (v25 & 0x40000000) == 0 )
    {
      if ( v19 )
      {
        if ( (*(_DWORD *)(v16 + 500) & 0x20) != 0 )
          goto LABEL_28;
        LODWORD(v33) = (_DWORD)v20 << 12;
        v34 = *(_DWORD *)(a2 + 28) - *(_DWORD *)(a2 + 24);
      }
      else
      {
        v33 = *a3;
        v34 = v18 - v17;
      }
      v30 = MiCheckSecuredVad(a2, v33, (v34 + 1) << 12, 85, a9, a11);
      if ( v30 < 0 )
        goto LABEL_39;
      v16 = a1;
      v25 = a7;
      v19 = i;
    }
    if ( !v19 )
    {
      if ( (*(_DWORD *)(a2 + 48) & 0xC200000) != 0x8200000 )
        goto LABEL_16;
      if ( a5 )
      {
        v27 = *a4 - *a3 + 1;
        v31 = MiDecommitEnclavePages(v16, a2, *a3, *(_DWORD *)a4 - *(_DWORD *)a3 + 1, v25);
        v30 = v31;
        if ( v31 != -1073741802 )
        {
          if ( v31 < 0 )
            goto LABEL_39;
LABEL_23:
          MiUnlockAndDereferenceVad((PVOID)a2);
          if ( v38 )
            MiDeleteEmptyPageTables(*a3, *a4, 0);
          if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 )
            PerfInfoLogVirtualFree(*a3, v27, a1);
          return 0LL;
        }
LABEL_16:
        v26 = *(_DWORD *)(a2 + 48);
        if ( (*(_BYTE *)(a2 + 48) & 0x70) != 0x30
          && ((v26 & 0x200000) == 0
           || (v26 & 0x800000) == 0 && (v26 & 0x180000u) < 0x100000
           || (v26 & 0xA00000) == 0xA00000 && (!a5 || (((MiGetVadPageSize(a2) << 12) - 1) & (*a3 | (*a4 + 1))) == 0))
          && (*(unsigned int *)(a2 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 32)) != 0x7FFFFFFFDLL )
        {
          if ( !a5 )
          {
            if ( v17 != v20 )
            {
LABEL_48:
              v30 = -1073741665;
              goto LABEL_39;
            }
            *a4 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) | 0xFFF;
          }
          v27 = *a4 - *a3 + 1;
          v38 = MiDecommitRegion(a2, *a3, *a4);
          goto LABEL_23;
        }
      }
      v30 = -1073741664;
      goto LABEL_39;
    }
LABEL_28:
    if ( (a8 & 1) != 0 && (*(_DWORD *)(v16 + 1532) & 0x100) != 0 && (v18 != v21 || v17 != v20) )
    {
      v30 = -1073741558;
      goto LABEL_39;
    }
    v29 = MiFreeVadRange((_DWORD *)a2, (int)&v36, v17, v18, v16, (v25 >> 26) & 1, a10);
    v30 = v29;
    if ( v29 >= 0 )
      return 0LL;
    if ( v29 != -1073741267 )
      goto LABEL_39;
    v16 = a1;
  }
  v30 = -1073741798;
LABEL_39:
  MiUnlockAndDereferenceVad((PVOID)a2);
  if ( v36 )
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)KeGetCurrentThread(), a1);
  return (unsigned int)v30;
}
