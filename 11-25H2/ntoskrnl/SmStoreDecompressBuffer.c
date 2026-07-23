/*
 * XREFs of SmStoreDecompressBuffer @ 0x14020D068
 * Callers:
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14020BF74 (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1405FF9F0 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 * Callees:
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x1403A2DC4 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     RtlDecompressBufferEx @ 0x1403CCA50 (RtlDecompressBufferEx.c)
 *     RtlDecompressBufferLz4 @ 0x1403CCB10 (RtlDecompressBufferLz4.c)
 *     ?SmStoreDecompressBufferContextCleanup@@YAXPEAU_SM_STORE_DECOMPRESS_BUFFER_CONTEXT@@@Z @ 0x140478E10 (-SmStoreDecompressBufferContextCleanup@@YAXPEAU_SM_STORE_DECOMPRESS_BUFFER_CONTEXT@@@Z.c)
 *     SmHwAcceleratorPartitionMgrFreeDescriptor @ 0x1404CDE68 (SmHwAcceleratorPartitionMgrFreeDescriptor.c)
 *     SmHwAcceleratorIssueRequest @ 0x1406034F0 (SmHwAcceleratorIssueRequest.c)
 *     SmHwAcceleratorWaitForRequest @ 0x140603AAC (SmHwAcceleratorWaitForRequest.c)
 */

__int64 __fastcall SmStoreDecompressBuffer(
        __int64 a1,
        UCHAR *a2,
        __int64 a3,
        __int64 a4,
        ULONG a5,
        PVOID a6,
        _QWORD *a7)
{
  __int64 v7; // r10
  UCHAR *v8; // r15
  ULONG v9; // r14d
  unsigned int v10; // ebx
  __int64 v11; // r13
  int v12; // edi
  unsigned int v14; // edi
  __int64 v15; // r8
  ULONG v16; // r12d
  PVOID WorkSpace; // r8
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  int v20; // edx
  NTSTATUS v21; // ecx
  UCHAR *v22; // r9
  ULONG v23; // r13d
  unsigned int v24; // r14d
  ULONG CompressedBufferSize; // eax
  int v26; // r8d
  int v27; // r13d
  int v28; // r8d
  ULONG v29; // [rsp+40h] [rbp-B8h] BYREF
  ULONG v30; // [rsp+44h] [rbp-B4h]
  int v31; // [rsp+48h] [rbp-B0h]
  ULONG v32; // [rsp+4Ch] [rbp-ACh]
  int v33; // [rsp+50h] [rbp-A8h]
  __int128 v34; // [rsp+58h] [rbp-A0h]
  __int128 v35; // [rsp+68h] [rbp-90h]
  __int128 v36; // [rsp+78h] [rbp-80h]
  unsigned int v37; // [rsp+88h] [rbp-70h]
  int v38; // [rsp+8Ch] [rbp-6Ch]
  __int64 v39; // [rsp+90h] [rbp-68h]
  UCHAR *v40; // [rsp+98h] [rbp-60h]
  PVOID v41; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v42; // [rsp+A8h] [rbp-50h]
  __int64 v43; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v44; // [rsp+B8h] [rbp-40h]
  ULONG FinalUncompressedSize; // [rsp+100h] [rbp+8h] BYREF
  int v46; // [rsp+110h] [rbp+18h] BYREF
  __int64 v47; // [rsp+118h] [rbp+20h]

  v47 = a4;
  v7 = a4;
  v8 = a2;
  v9 = a5;
  v10 = 0;
  v46 = 0;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 7576) + 2016LL);
  v39 = v11;
  *(_QWORD *)&v34 = v11;
  DWORD2(v36) = *(_DWORD *)(a1 + 4832);
  if ( !DWORD2(v36) )
  {
    v12 = RtlDecompressBufferLz4((_DWORD)a2, 4096, a4, a5, 0, (__int64)&v46);
    if ( v12 >= 0 && v46 != 4096 )
      v12 = -1073741566;
    goto LABEL_5;
  }
  if ( *a7 != 2LL )
  {
    v14 = 3;
    if ( *a7 != 1LL )
      v14 = 1;
    v15 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
    v11 = v34;
    v39 = v34;
    *((_QWORD *)&v34 + 1) = SmHwAcceleratorPartitionMgrGetDescriptor(v34, v14, v15);
    if ( !*((_QWORD *)&v34 + 1) && (v14 & 2) != 0 )
    {
      v12 = -1073741420;
      goto LABEL_5;
    }
    v7 = v47;
  }
  v16 = 4096;
  if ( DWORD2(v36) == 2 )
    v16 = 2048;
  LODWORD(v36) = v16;
  *(_QWORD *)&v35 = v8;
  WorkSpace = a6;
  v41 = a6;
  *((_QWORD *)&v35 + 1) = a6;
  if ( *((_QWORD *)&v34 + 1) )
  {
    v18 = v7 & 0xFFFFFFFFFFFFF000uLL;
    v42 = v7 & 0xFFFFFFFFFFFFF000uLL;
    v19 = (v7 & 0xFFFFFFFFFFFFF000uLL) + ((v9 + 4095 + (v7 & 0xFFF)) & 0xFFFFF000);
    v44 = v19;
    while ( v18 < v19 )
    {
      v18 = v42 + 4096;
      v42 += 4096LL;
      v19 = v44;
      v16 = v36;
      WorkSpace = (PVOID)*((_QWORD *)&v35 + 1);
      v41 = (PVOID)*((_QWORD *)&v35 + 1);
      v8 = (UCHAR *)v35;
      v39 = v34;
    }
  }
  v20 = 0;
  v21 = HIDWORD(v36);
  if ( DWORD2(v36) == 2 )
  {
    v22 = (UCHAR *)(v7 + 2);
    v40 = (UCHAR *)(v7 + 2);
    v23 = v9 - 2;
    v30 = v9 - 2;
    v31 = 0;
    v24 = 0;
    v37 = 0;
    while ( 1 )
    {
      if ( v24 >= 2 )
        goto LABEL_53;
      if ( v24 == 1 )
        CompressedBufferSize = v23;
      else
        CompressedBufferSize = *(unsigned __int16 *)(v7 + 2LL * v24);
      v29 = CompressedBufferSize;
      if ( !v23 || CompressedBufferSize > v23 )
      {
        v20 = -1073741566;
        v31 = -1073741566;
        goto LABEL_53;
      }
      FinalUncompressedSize = 0;
      if ( *((_QWORD *)&v34 + 1) )
        break;
      v21 = RtlDecompressBufferEx(
              *((_WORD *)qword_140011220 + SDWORD2(v36)),
              v8,
              v16,
              v22,
              CompressedBufferSize,
              &FinalUncompressedSize,
              WorkSpace);
      v26 = v21;
      HIDWORD(v36) = v21;
      if ( v21 >= 0 )
      {
        if ( FinalUncompressedSize == v16 )
          goto LABEL_33;
        v21 = -1073741566;
        HIDWORD(v36) = -1073741566;
        v26 = -1073741566;
      }
LABEL_34:
      v20 = v21;
      v31 = v21;
      if ( v26 < 0 )
        goto LABEL_53;
      v22 = &v40[v29];
      v40 = v22;
      v23 -= v29;
      v30 = v23;
      v37 = ++v24;
      v7 = v47;
      WorkSpace = v41;
    }
    v21 = SmHwAcceleratorIssueRequest(DWORD2(v34), v24, 1, (_DWORD)v8, v16, (__int64)v22, CompressedBufferSize);
    HIDWORD(v36) = v21;
    v26 = v21;
    if ( v21 < 0 )
      goto LABEL_34;
    ++DWORD1(v36);
LABEL_33:
    v8 += v16;
    *(_QWORD *)&v35 = v8;
    goto LABEL_34;
  }
  v43 = v7;
  v32 = v9;
  v33 = 0;
  v27 = 0;
  v38 = 0;
  while ( !v27 )
  {
    if ( !v9 )
    {
      v20 = -1073741566;
      v33 = -1073741566;
      break;
    }
    v29 = 0;
    if ( *((_QWORD *)&v34 + 1) )
    {
      v21 = SmHwAcceleratorIssueRequest(DWORD2(v34), 0, 1, (_DWORD)v8, v16, v7, v9);
      HIDWORD(v36) = v21;
      v28 = v21;
      if ( v21 < 0 )
        goto LABEL_47;
      ++DWORD1(v36);
LABEL_46:
      v8 += v16;
      *(_QWORD *)&v35 = v8;
      goto LABEL_47;
    }
    v21 = RtlDecompressBufferEx(*((_WORD *)qword_140011220 + SDWORD2(v36)), v8, v16, (PUCHAR)v7, v9, &v29, WorkSpace);
    v28 = v21;
    HIDWORD(v36) = v21;
    if ( v21 >= 0 )
    {
      if ( v29 == v16 )
        goto LABEL_46;
      v21 = -1073741566;
      HIDWORD(v36) = -1073741566;
      v28 = -1073741566;
    }
LABEL_47:
    v20 = v21;
    v33 = v21;
    if ( v28 < 0 )
      break;
    v7 = v9 + v47;
    v47 = v7;
    v43 = v7;
    v9 = 0;
    v32 = 0;
    v27 = 1;
    v38 = 1;
    WorkSpace = v41;
  }
LABEL_53:
  v12 = v20;
  v11 = v39;
  if ( v20 >= 0 )
  {
    v12 = v21;
    if ( v21 == 259 )
    {
      *a7 = *((_QWORD *)&v34 + 1);
      *((_QWORD *)&v34 + 1) = 0LL;
      DWORD1(v36) = 0;
    }
  }
LABEL_5:
  if ( *((_QWORD *)&v34 + 1) )
  {
    if ( DWORD1(v36) )
    {
      do
        SmHwAcceleratorWaitForRequest(DWORD2(v34), v10++, 0, (unsigned int)&v29, (__int64)&FinalUncompressedSize);
      while ( v10 < DWORD1(v36) );
    }
    SmHwAcceleratorPartitionMgrFreeDescriptor(v11, *((_QWORD *)&v34 + 1));
  }
  return (unsigned int)v12;
}
