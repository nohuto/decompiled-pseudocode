/*
 * XREFs of SdbOpenDatabaseEx @ 0x180092550
 * Callers:
 *     SdbInitDatabaseEx @ 0x180094584 (SdbInitDatabaseEx.c)
 *     SdbpOpenLocalDatabaseEx @ 0x180094AA4 (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     SdbGetMergeRedirectPath @ 0x180092114 (SdbGetMergeRedirectPath.c)
 *     SdbpReadMappedData @ 0x180093DD4 (SdbpReadMappedData.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x18009408C (SdbpValidateAndApplyCompatFlags.c)
 *     SdbpOpenCompressedDatabase @ 0x18009BDB4 (SdbpOpenCompressedDatabase.c)
 *     AslFree @ 0x18009D6FC (AslFree.c)
 *     AslFileMappingCreate @ 0x18009EB18 (AslFileMappingCreate.c)
 *     AslFileMappingDelete @ 0x18009ED88 (AslFileMappingDelete.c)
 *     AslFileMappingEnsureMappedAs @ 0x18009EED0 (AslFileMappingEnsureMappedAs.c)
 *     AslFileMappingGetViewBase @ 0x18009F3A0 (AslFileMappingGetViewBase.c)
 *     AslPathGetFileNamePart @ 0x1800A4024 (AslPathGetFileNamePart.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 */

_QWORD *SdbOpenDatabaseEx(__int64 a1, __int64 a2, unsigned int a3, ...)
{
  _QWORD *Heap; // rax
  _QWORD *v6; // rbx
  int MergeRedirectPath; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v15; // [rsp+30h] [rbp-10h] BYREF
  int v16; // [rsp+38h] [rbp-8h]
  _QWORD *v17; // [rsp+80h] [rbp+40h] BYREF
  int v18; // [rsp+88h] [rbp+48h] BYREF
  __int64 v19; // [rsp+98h] [rbp+58h] BYREF
  va_list va; // [rsp+98h] [rbp+58h]
  va_list va1; // [rsp+A0h] [rbp+60h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v19 = va_arg(va1, _QWORD);
  v18 = 0;
  v15 = 0LL;
  v16 = 0;
  AslLogCallPrintf(3LL);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xA80uLL);
  v17 = Heap;
  v6 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0xA80uLL);
    v19 = 0LL;
    if ( (a3 & 0x10) != 0 )
    {
LABEL_21:
      if ( (int)AslFileMappingCreate(v6, a1) < 0 )
      {
LABEL_35:
        AslLogCallPrintf(1LL);
LABEL_36:
        if ( v6 )
        {
          AslFileMappingDelete(*v6);
          AslFree(NtCurrentPeb()->ProcessHeap, v17);
        }
        return 0LL;
      }
LABEL_23:
      v12 = *(_QWORD *)(*v6 + 24LL);
      if ( (unsigned __int64)(v12 - 42) > 0xFFFFFD5 )
        goto LABEL_35;
      if ( (int)AslFileMappingEnsureMappedAs(*v6, v8, v9) < 0 )
        goto LABEL_35;
      *((_DWORD *)v6 + 4) = 0;
      *((_DWORD *)v6 + 5) = v12;
      v6[1] = AslFileMappingGetViewBase(*v6);
      if ( !(unsigned int)SdbpReadMappedData(v6, 0LL, &v15, 12LL) )
        goto LABEL_35;
      if ( v16 != 1717724275 )
      {
        if ( v16 == 1717724282 )
        {
          if ( !(unsigned int)SdbpOpenCompressedDatabase(&v17, v13, a3) )
          {
            AslLogCallPrintf(1LL);
            v6 = v17;
            goto LABEL_36;
          }
          return v17;
        }
        if ( (a3 & 2) == 0 )
          goto LABEL_35;
      }
      if ( !(unsigned int)SdbpValidateAndApplyCompatFlags(v6, &v15, a3) )
        goto LABEL_36;
      return v6;
    }
    MergeRedirectPath = SdbGetMergeRedirectPath((__int64 *)va, &v18, (a3 & 0x20) == 0, a1);
    v10 = MergeRedirectPath;
    if ( MergeRedirectPath < 0 )
    {
      if ( MergeRedirectPath == -1073741772 )
        goto LABEL_17;
      v11 = 3LL;
    }
    else
    {
      if ( !v19 )
      {
        v10 = -1073741772;
        goto LABEL_17;
      }
      if ( (a3 & 0x20) != 0 )
      {
        if ( !v18 )
          *((_DWORD *)v6 + 6) |= 0x20u;
      }
      else if ( v18 )
      {
        AslPathGetFileNamePart(a1);
        AslLogCallPrintf(1LL);
      }
      v10 = AslFileMappingCreate(v6, v19);
      if ( v10 >= 0 )
      {
LABEL_17:
        if ( v19 )
        {
          AslFree(NtCurrentPeb()->ProcessHeap, v19);
          v6 = v17;
        }
        if ( v10 >= 0 && *v6 )
          goto LABEL_23;
        goto LABEL_21;
      }
      v11 = 1LL;
    }
    AslLogCallPrintf(v11);
    goto LABEL_17;
  }
  AslLogCallPrintf(1LL);
  return 0LL;
}
