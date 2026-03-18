/*
 * XREFs of WmipAddDataSource @ 0x1409CFD60
 * Callers:
 *     WmipProcessWmiRegInfo @ 0x1409D0800 (WmipProcessWmiRegInfo.c)
 *     WmipInitializeDataStructs @ 0x140C3CBEC (WmipInitializeDataStructs.c)
 * Callees:
 *     KeReleaseMutex @ 0x1403379B0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     WmipAddMofResource @ 0x1407A58A8 (WmipAddMofResource.c)
 *     WmipGenerateBinaryMofNotification @ 0x1407A5A68 (WmipGenerateBinaryMofNotification.c)
 *     WmipGenerateRegistrationNotification @ 0x1409CB3C4 (WmipGenerateRegistrationNotification.c)
 *     WmipUnreferenceEntry @ 0x1409CE1D4 (WmipUnreferenceEntry.c)
 *     WmipCountedToSz @ 0x1409CF68C (WmipCountedToSz.c)
 *     WmipLinkDataSourceToList @ 0x1409CF724 (WmipLinkDataSourceToList.c)
 *     WmipAllocEntry @ 0x1409D00A0 (WmipAllocEntry.c)
 *     WmipBuildInstanceSet @ 0x1409D00F4 (WmipBuildInstanceSet.c)
 *     WmipGenerateMofResourceNotification @ 0x140AB0184 (WmipGenerateMofResourceNotification.c)
 *     WmipProcessSynchronousEtw @ 0x140AB676C (WmipProcessSynchronousEtw.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipAddDataSource(__int64 a1, __int64 a2, int a3, unsigned __int16 *a4, unsigned __int16 *a5)
{
  ULONG_PTR v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v9; // rsi
  unsigned int i; // r12d
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // r14
  int v14; // edi
  __int64 v15; // rax
  bool v16; // zf
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // r14
  int v20; // eax
  unsigned __int64 v21; // rsi
  char v22; // r14
  _WORD *v23; // rsi
  _WORD *v24; // rdi
  __int64 v26; // rax
  _QWORD *v27; // rax
  char v28[8]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v29; // [rsp+38h] [rbp-30h] BYREF
  _OWORD v30[2]; // [rsp+48h] [rbp-20h] BYREF
  char v31; // [rsp+B0h] [rbp+48h]

  v5 = *(_QWORD *)(a1 + 32);
  v6 = 0LL;
  v28[0] = 0;
  v31 = 0;
  v7 = a2;
  v29 = 0LL;
  v30[0] = 0LL;
  if ( !v5 )
  {
    v26 = WmipAllocEntry(&WmipDSChunkInfo);
    v5 = v26;
    if ( !v26 )
      return (unsigned int)-1073741670;
    v27 = (_QWORD *)(v26 + 40);
    v31 = 1;
    v27[1] = v27;
    *v27 = v27;
    *(_QWORD *)(v5 + 72) = v5 + 80;
    *(_DWORD *)(v5 + 64) = 4;
    *(_OWORD *)(v5 + 80) = 0LL;
    *(_OWORD *)(v5 + 96) = 0LL;
    *(_DWORD *)(v5 + 56) = *(_DWORD *)(a1 + 56);
  }
  v9 = v7 + 24;
  for ( i = 0; i < *(_DWORD *)(v7 + 16); ++i )
  {
    v11 = *(_DWORD *)(v9 + 16);
    if ( (v11 & 0x10000) == 0 && (v11 & 0x81000) != 0x80000 )
    {
      v12 = WmipAllocEntry(&WmipISChunkInfo);
      v13 = v12;
      if ( !v12 )
      {
        v14 = -1073741670;
LABEL_31:
        v22 = v31;
LABEL_32:
        if ( v5 && v22 )
        {
          *(_DWORD *)(v5 + 16) |= 1u;
          WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, (volatile signed __int64 *)v5);
        }
        return (unsigned int)v14;
      }
      *(_DWORD *)(v12 + 16) |= 8u;
      *(_QWORD *)(v12 + 56) = v9;
      *(_QWORD *)(v12 + 64) = v5;
      v14 = WmipBuildInstanceSet(v9, v7, a3, v12, *(_DWORD *)(v5 + 56));
      v15 = *(_QWORD *)v9 - WmipBinaryMofGuid;
      if ( *(_QWORD *)v9 == WmipBinaryMofGuid )
        v15 = *(_QWORD *)(v9 + 8) - 0x102906C9A000F0B2LL;
      v16 = v15 == 0;
      v17 = (_QWORD *)(v5 + 40);
      v18 = *(_QWORD *)(v5 + 40);
      if ( v16 )
        v6 = v13;
      v19 = (_QWORD *)(v13 + 40);
      if ( *(_QWORD **)(v18 + 8) != v17 )
        __fastfail(3u);
      *v19 = v18;
      v19[1] = v17;
      *(_QWORD *)(v18 + 8) = v19;
      *v17 = v19;
      if ( v14 < 0 )
        goto LABEL_31;
      v7 = a2;
    }
    v9 += 32LL;
  }
  v20 = *(_DWORD *)(a1 + 48) & 0x40000000;
  if ( v20 )
  {
    *((_QWORD *)&v29 + 1) = &v29;
    *(_QWORD *)&v29 = &v29;
    *((_QWORD *)&v30[0] + 1) = v30;
    *(_QWORD *)&v30[0] = v30;
  }
  v21 = (unsigned __int64)&v29 & -(__int64)(v20 != 0);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v22 = v31;
  v14 = WmipLinkDataSourceToList(v5, v31, v21);
  KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
  if ( v21 )
    WmipProcessSynchronousEtw(v21);
  if ( v14 < 0 )
    goto LABEL_32;
  *(_QWORD *)(a1 + 32) = v5;
  if ( v6 )
    WmipGenerateBinaryMofNotification(v6, &GUID_MOF_RESOURCE_ADDED_NOTIFICATION);
  if ( a4 )
    v23 = WmipCountedToSz(a4);
  else
    v23 = 0LL;
  if ( a5 )
    v24 = WmipCountedToSz(a5);
  else
    v24 = 0LL;
  if ( v23 )
  {
    if ( *v23 && v24 && *v24 && (int)WmipAddMofResource(v5, v23, 0, v24, v28) >= 0 && v28[0] )
      WmipGenerateMofResourceNotification(v23, v24);
    ExFreePoolWithTag(v23, 0);
  }
  if ( v24 )
    ExFreePoolWithTag(v24, 0);
  WmipGenerateRegistrationNotification(v5, 1);
  return 0;
}
