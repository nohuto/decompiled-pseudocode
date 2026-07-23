/*
 * XREFs of HvpGenerateLogEntry @ 0x140967718
 * Callers:
 *     HvStoreModifiedData @ 0x140966BFC (HvStoreModifiedData.c)
 * Callees:
 *     HvpGenerateLogEntryMetadata @ 0x140377360 (HvpGenerateLogEntryMetadata.c)
 *     HvpGenerateLogEntryDirtyData @ 0x1403773D0 (HvpGenerateLogEntryDirtyData.c)
 *     RtlNumberOfSetBits @ 0x140377880 (RtlNumberOfSetBits.c)
 *     HvpGenerateLogEntryHeader @ 0x1404722CC (HvpGenerateLogEntryHeader.c)
 *     HvpAllocateLogBuffers @ 0x140482DB4 (HvpAllocateLogBuffers.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpLogDirtyVectorUse @ 0x140887384 (CmpLogDirtyVectorUse.c)
 *     HvpCountSetRangesInVector @ 0x140967A9C (HvpCountSetRangesInVector.c)
 *     HvpGenerateLogEntryChecksums @ 0x140967AFC (HvpGenerateLogEntryChecksums.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HvpGenerateLogEntry(__int64 a1, __int64 *a2, _DWORD *a3, unsigned int *a4)
{
  int v4; // edi
  char v6; // r13
  ULONG v7; // eax
  ULONG_PTR v8; // rdx
  unsigned int v9; // edi
  void *Pool2; // r12
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r14
  unsigned int v14; // esi
  int v15; // esi
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8
  unsigned int v20; // eax
  PVOID *v21; // rdi
  PVOID *v23; // rbx
  int v24; // [rsp+28h] [rbp-40h]
  unsigned int v25; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v26; // [rsp+44h] [rbp-24h] BYREF
  int v27; // [rsp+48h] [rbp-20h]
  PVOID *v28; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v29; // [rsp+B0h] [rbp+48h] BYREF
  __int64 *v30; // [rsp+B8h] [rbp+50h]
  _DWORD *v31; // [rsp+C0h] [rbp+58h]
  unsigned int *v32; // [rsp+C8h] [rbp+60h]

  v32 = a4;
  v31 = a3;
  v30 = a2;
  v4 = *(_DWORD *)(a1 + 180);
  v28 = 0LL;
  v25 = 0;
  v6 = v4 == 0;
  v26 = 0;
  v29 = 0;
  v27 = HvpCountSetRangesInVector((PRTL_BITMAP)(a1 + 88));
  v7 = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 88));
  CmpLogDirtyVectorUse(a1, 1, v27, v7);
  v8 = (unsigned int)(8 * v27);
  v9 = (v8 + (v4 != 0 ? 4135 : 4647) + (*(_DWORD *)(a1 + 104) << 9)) & 0xFFFFF000;
  Pool2 = (void *)ExAllocatePool2(0x108uLL, v8, 0x6F494D43u);
  if ( Pool2 )
  {
    v11 = HvpAllocateLogBuffers((__int64 *)&v28, &v26, v9);
    v13 = v26;
    v14 = v11;
    if ( v11 < 0 )
    {
      v21 = v28;
    }
    else
    {
      v15 = v27;
      v16 = (__int64)v28;
      HvpGenerateLogEntryHeader(a1, (__int64)v28, v12, &v29, &v25, v9, v27, v6);
      HvpGenerateLogEntryMetadata(a1, v16, v17, (__int64)&v29, (__int64)&v25, (__int64)Pool2, v15);
      HvpGenerateLogEntryDirtyData(a1, v16, v18, (__int64)&v29, (__int64)&v25, v24);
      v20 = *(_DWORD *)(v16 + 24LL * v29 + 16);
      if ( v25 < v20 )
        memset_0((void *)(*(_QWORD *)(v16 + 24LL * v29 + 8) + v25), 0, v20 - v25);
      LOBYTE(v19) = v6;
      HvpGenerateLogEntryChecksums(v16, (unsigned int)v13, v19);
      *v30 = v16;
      *v31 = v13;
      *v32 = v9;
      v21 = 0LL;
      v14 = 0;
    }
    ExFreePoolWithTag(Pool2, 0);
    if ( v21 )
    {
      if ( (_DWORD)v13 )
      {
        v23 = v21 + 1;
        do
        {
          if ( *v23 )
          {
            ExFreePoolWithTag(*v23, 0);
            *v23 = 0LL;
          }
          v23 += 3;
          --v13;
        }
        while ( v13 );
      }
      ExFreePoolWithTag(v21, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v14;
}
