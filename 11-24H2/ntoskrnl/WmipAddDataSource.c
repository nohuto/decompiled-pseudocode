/*
 * XREFs of WmipAddDataSource @ 0x1409B01A8
 * Callers:
 *     WmipProcessWmiRegInfo @ 0x1409B008C (WmipProcessWmiRegInfo.c)
 *     WmipInitializeDataStructs @ 0x140C3ED3C (WmipInitializeDataStructs.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     WmipAddMofResource @ 0x1407A59E8 (WmipAddMofResource.c)
 *     WmipGenerateBinaryMofNotification @ 0x1407A5BA8 (WmipGenerateBinaryMofNotification.c)
 *     WmipAllocEntry @ 0x1409B04E8 (WmipAllocEntry.c)
 *     WmipBuildInstanceSet @ 0x1409B053C (WmipBuildInstanceSet.c)
 *     WmipLinkDataSourceToList @ 0x1409B19AC (WmipLinkDataSourceToList.c)
 *     WmipGenerateRegistrationNotification @ 0x1409B1AE4 (WmipGenerateRegistrationNotification.c)
 *     WmipUnreferenceEntry @ 0x1409B31A8 (WmipUnreferenceEntry.c)
 *     WmipCountedToSz @ 0x1409B5550 (WmipCountedToSz.c)
 *     WmipGenerateMofResourceNotification @ 0x140AAB0F4 (WmipGenerateMofResourceNotification.c)
 *     WmipProcessSynchronousEtw @ 0x140AB07F0 (WmipProcessSynchronousEtw.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipAddDataSource(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
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
  __int64 v23; // rdx
  _WORD *v24; // rsi
  _WORD *v25; // rdi
  __int64 v27; // rax
  _QWORD *v28; // rax
  char v29[8]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v30; // [rsp+38h] [rbp-30h] BYREF
  _OWORD v31[2]; // [rsp+48h] [rbp-20h] BYREF
  char v32; // [rsp+B0h] [rbp+48h]

  v5 = *(_QWORD *)(a1 + 32);
  v6 = 0LL;
  v29[0] = 0;
  v32 = 0;
  v7 = a2;
  v30 = 0LL;
  v31[0] = 0LL;
  if ( !v5 )
  {
    v27 = WmipAllocEntry(&WmipDSChunkInfo);
    v5 = v27;
    if ( !v27 )
      return (unsigned int)-1073741670;
    v28 = (_QWORD *)(v27 + 40);
    v32 = 1;
    v28[1] = v28;
    *v28 = v28;
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
        v22 = v32;
LABEL_32:
        if ( v5 && v22 )
        {
          *(_DWORD *)(v5 + 16) |= 1u;
          WmipUnreferenceEntry(&WmipDSChunkInfo, v5);
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
    *((_QWORD *)&v30 + 1) = &v30;
    *(_QWORD *)&v30 = &v30;
    *((_QWORD *)&v31[0] + 1) = v31;
    *(_QWORD *)&v31[0] = v31;
  }
  v21 = (unsigned __int64)&v30 & -(__int64)(v20 != 0);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v22 = v32;
  LOBYTE(v23) = v32;
  v14 = WmipLinkDataSourceToList(v5, v23, v21);
  KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
  if ( v21 )
    WmipProcessSynchronousEtw(v21);
  if ( v14 < 0 )
    goto LABEL_32;
  *(_QWORD *)(a1 + 32) = v5;
  if ( v6 )
    WmipGenerateBinaryMofNotification(v6, &GUID_MOF_RESOURCE_ADDED_NOTIFICATION);
  if ( a4 )
    v24 = (_WORD *)WmipCountedToSz(a4);
  else
    v24 = 0LL;
  if ( a5 )
    v25 = (_WORD *)WmipCountedToSz(a5);
  else
    v25 = 0LL;
  if ( v24 )
  {
    if ( *v24 && v25 && *v25 && (int)WmipAddMofResource(v5, v24, 0, v25, v29) >= 0 && v29[0] )
      WmipGenerateMofResourceNotification(v24, v25);
    ExFreePoolWithTag(v24, 0);
  }
  if ( v25 )
    ExFreePoolWithTag(v25, 0);
  WmipGenerateRegistrationNotification(v5, 1LL);
  return 0;
}
