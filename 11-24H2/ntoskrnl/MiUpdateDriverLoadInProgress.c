/*
 * XREFs of MiUpdateDriverLoadInProgress @ 0x14042C688
 * Callers:
 *     MmLoadSystemImageEx @ 0x1409C87D8 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x140A18544 (MiObtainSectionForDriver.c)
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
 *     MiInitializeLoadedModuleList @ 0x140C5B318 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x14025FDD0 (RtlAvlInsertNodeEx.c)
 *     MmGetLoadedModuleImageAdditionalTablesAddress @ 0x1403EA010 (MmGetLoadedModuleImageAdditionalTablesAddress.c)
 *     RtlInsertInvertedFunctionTable @ 0x14042C8CC (RtlInsertInvertedFunctionTable.c)
 *     MmLockLoadedModuleListExclusive @ 0x14042CA30 (MmLockLoadedModuleListExclusive.c)
 *     MmUnlockLoadedModuleListExclusive @ 0x14042CA74 (MmUnlockLoadedModuleListExclusive.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUpdateDriverLoadInProgress(__int64 a1, __int64 **a2, int a3, int a4)
{
  __int64 **v8; // rdi
  char v9; // si
  __int64 *v10; // rcx
  __int64 *v11; // rax
  __int64 result; // rax
  __int64 **v13; // rax
  __int64 *v14; // r9
  __int64 *v15; // r8
  char v16; // dl
  __int64 *v17; // rax
  bool v18; // r8
  _QWORD *v19; // rdx
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r8
  _QWORD *v22; // rax
  __int64 v23; // rcx
  unsigned __int64 LoadedModuleImageAdditionalTablesAddress; // rax
  __int64 v25; // rdx
  int v26; // [rsp+68h] [rbp+20h] BYREF

  v8 = (__int64 **)a1;
  if ( a4 != 2 || (v8 = a2, (a3 & 0x10000000) == 0) )
  {
    v9 = MmLockLoadedModuleListExclusive();
    switch ( a4 )
    {
      case 0:
        v11 = (__int64 *)qword_140E2D890;
        v10 = &qword_140E2D888;
        if ( *(__int64 **)qword_140E2D890 != &qword_140E2D888 )
          break;
        *(_QWORD *)a1 = &qword_140E2D888;
        *(_QWORD *)(a1 + 8) = v11;
        *v11 = a1;
        qword_140E2D890 = a1;
        goto LABEL_7;
      case 3:
        v10 = *v8;
        if ( (__int64 **)(*v8)[1] == v8 )
        {
          v13 = (__int64 **)v8[1];
          if ( *v13 == (__int64 *)v8 )
          {
            *v13 = v10;
            v10[1] = (__int64)v13;
LABEL_7:
            LOBYTE(v10) = v9;
            return MmUnlockLoadedModuleListExclusive(v10);
          }
        }
        break;
      case 1:
        *(_QWORD *)(a1 + 48) = a2;
        *(_DWORD *)(a1 + 64) = a3;
        goto LABEL_7;
      case 2:
        v14 = *v8;
        if ( (__int64 **)(*v8)[1] == v8 )
        {
          v15 = v8[1];
          if ( (__int64 **)*v15 == v8 )
          {
            v16 = v9;
            *v15 = (__int64)v14;
            v14[1] = (__int64)v15;
            if ( v15 != v14 )
              v16 = v9;
            v9 = v16;
            goto LABEL_20;
          }
        }
        break;
      default:
        goto LABEL_20;
    }
LABEL_21:
    __fastfail(3u);
  }
  v9 = MmLockLoadedModuleListExclusive();
LABEL_20:
  v17 = (__int64 *)*(&PsLoadedModuleList + 1);
  if ( *(PVOID **)*(&PsLoadedModuleList + 1) != &PsLoadedModuleList )
    goto LABEL_21;
  *(_QWORD *)a1 = &PsLoadedModuleList;
  v18 = 0;
  *(_QWORD *)(a1 + 8) = v17;
  *v17 = a1;
  v19 = (_QWORD *)qword_140E2D880;
  *(&PsLoadedModuleList + 1) = (PVOID)a1;
  v20 = *(_QWORD *)(a1 + 48);
  if ( qword_140E2D880 )
  {
    while ( 1 )
    {
      v21 = *(v19 - 20);
      if ( v20 <= v21 + (unsigned int)(*((_DWORD *)v19 - 36) - 1) )
      {
        if ( v20 >= v21 )
          KeBugCheckEx(0x1Au, 0x1016uLL, *(_QWORD *)(a1 + 48), (ULONG_PTR)v19, 0LL);
        v22 = (_QWORD *)*v19;
        if ( !*v19 )
        {
          v18 = 0;
          break;
        }
      }
      else
      {
        v22 = (_QWORD *)v19[1];
        if ( !v22 )
        {
          v18 = 1;
          break;
        }
      }
      v19 = v22;
    }
  }
  RtlAvlInsertNodeEx(&qword_140E2D880, (unsigned __int64)v19, v18, (_QWORD *)(a1 + 208));
  *(_DWORD *)(a1 + 184) |= 0x400u;
  LOBYTE(v23) = v9;
  result = MmUnlockLoadedModuleListExclusive(v23);
  if ( (MiFlags & 0x40000) == 0 )
  {
    v26 = 0;
    LoadedModuleImageAdditionalTablesAddress = MmGetLoadedModuleImageAdditionalTablesAddress(a1, &v26);
    if ( LoadedModuleImageAdditionalTablesAddress )
      v25 = (unsigned int)(LoadedModuleImageAdditionalTablesAddress + v26 - *(_DWORD *)(a1 + 48));
    else
      v25 = *(unsigned int *)(a1 + 64);
    return RtlInsertInvertedFunctionTable(*(_QWORD *)(a1 + 48), v25);
  }
  return result;
}
