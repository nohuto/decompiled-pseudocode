/*
 * XREFs of MiUpdateDriverLoadInProgress @ 0x1402EFC50
 * Callers:
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x140A116B4 (MiObtainSectionForDriver.c)
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 *     MiInitializeLoadedModuleList @ 0x140C5D4A8 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     RtlInsertInvertedFunctionTable @ 0x1402EE3CC (RtlInsertInvertedFunctionTable.c)
 *     MmLockLoadedModuleListExclusive @ 0x1402EE530 (MmLockLoadedModuleListExclusive.c)
 *     MmUnlockLoadedModuleListExclusive @ 0x1402EE574 (MmUnlockLoadedModuleListExclusive.c)
 *     MmGetLoadedModuleImageAdditionalTablesAddress @ 0x1403D7CB0 (MmGetLoadedModuleImageAdditionalTablesAddress.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall MiUpdateDriverLoadInProgress(__int64 a1, _QWORD *a2, int a3, int a4)
{
  _QWORD *v8; // rdi
  unsigned __int8 v9; // si
  __int64 *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // r9
  _QWORD *v14; // r8
  unsigned __int8 v15; // dl
  __int64 *v16; // rax
  bool v17; // r8
  _QWORD *v18; // rdx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 LoadedModuleImageAdditionalTablesAddress; // rax
  int v23; // edx
  int v24; // [rsp+68h] [rbp+20h] BYREF

  v8 = (_QWORD *)a1;
  if ( a4 != 2 || (v8 = a2, (a3 & 0x10000000) == 0) )
  {
    v9 = MmLockLoadedModuleListExclusive();
    switch ( a4 )
    {
      case 0:
        v10 = (__int64 *)qword_140E2D9D0;
        if ( *(__int64 **)qword_140E2D9D0 != &qword_140E2D9C8 )
          break;
        *(_QWORD *)a1 = &qword_140E2D9C8;
        *(_QWORD *)(a1 + 8) = v10;
        *v10 = a1;
        qword_140E2D9D0 = a1;
        goto LABEL_7;
      case 3:
        v11 = *v8;
        if ( *(_QWORD **)(*v8 + 8LL) == v8 )
        {
          v12 = (_QWORD *)v8[1];
          if ( (_QWORD *)*v12 == v8 )
          {
            *v12 = v11;
            *(_QWORD *)(v11 + 8) = v12;
LABEL_7:
            MmUnlockLoadedModuleListExclusive(v9);
            return;
          }
        }
        break;
      case 1:
        *(_QWORD *)(a1 + 48) = a2;
        *(_DWORD *)(a1 + 64) = a3;
        goto LABEL_7;
      case 2:
        v13 = (_QWORD *)*v8;
        if ( *(_QWORD **)(*v8 + 8LL) == v8 )
        {
          v14 = (_QWORD *)v8[1];
          if ( (_QWORD *)*v14 == v8 )
          {
            v15 = v9;
            *v14 = v13;
            v13[1] = v14;
            if ( v14 != v13 )
              v15 = v9;
            v9 = v15;
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
  v16 = (__int64 *)*(&PsLoadedModuleList + 1);
  if ( *(PVOID **)*(&PsLoadedModuleList + 1) != &PsLoadedModuleList )
    goto LABEL_21;
  *(_QWORD *)a1 = &PsLoadedModuleList;
  v17 = 0;
  *(_QWORD *)(a1 + 8) = v16;
  *v16 = a1;
  v18 = (_QWORD *)qword_140E2D9C0;
  *(&PsLoadedModuleList + 1) = (PVOID)a1;
  v19 = *(_QWORD *)(a1 + 48);
  if ( qword_140E2D9C0 )
  {
    while ( 1 )
    {
      v20 = *(v18 - 20);
      if ( v19 <= v20 + (unsigned int)(*((_DWORD *)v18 - 36) - 1) )
      {
        if ( v19 >= v20 )
          KeBugCheckEx(0x1Au, 0x1016uLL, *(_QWORD *)(a1 + 48), (ULONG_PTR)v18, 0LL);
        v21 = (_QWORD *)*v18;
        if ( !*v18 )
        {
          v17 = 0;
          break;
        }
      }
      else
      {
        v21 = (_QWORD *)v18[1];
        if ( !v21 )
        {
          v17 = 1;
          break;
        }
      }
      v18 = v21;
    }
  }
  RtlAvlInsertNodeEx(&qword_140E2D9C0, (unsigned __int64)v18, v17, (_QWORD *)(a1 + 208));
  *(_DWORD *)(a1 + 184) |= 0x400u;
  MmUnlockLoadedModuleListExclusive(v9);
  if ( (MiFlags & 0x40000) == 0 )
  {
    v24 = 0;
    LoadedModuleImageAdditionalTablesAddress = MmGetLoadedModuleImageAdditionalTablesAddress(a1, &v24);
    if ( LoadedModuleImageAdditionalTablesAddress )
      v23 = LoadedModuleImageAdditionalTablesAddress + v24 - *(_DWORD *)(a1 + 48);
    else
      v23 = *(_DWORD *)(a1 + 64);
    RtlInsertInvertedFunctionTable(*(void **)(a1 + 48), v23);
  }
}
