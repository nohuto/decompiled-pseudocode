/*
 * XREFs of MdlInvariantPreProcessing1 @ 0x14061029C
 * Callers:
 *     IovpCallDriver1 @ 0x140B8ECB4 (IovpCallDriver1.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     MmMdlPageContentsState @ 0x140442DC0 (MmMdlPageContentsState.c)
 *     RtlpComputeCrcInternal @ 0x140449440 (RtlpComputeCrcInternal.c)
 *     MdlInvariantFindMdlInfo @ 0x14060FFBC (MdlInvariantFindMdlInfo.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 */

unsigned __int64 __fastcall MdlInvariantPreProcessing1(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v4; // r15
  __int64 v8; // rcx
  __int64 v9; // rcx
  ULONG_PTR v10; // rdi
  _QWORD *MdlInfo; // rbx
  __int64 v12; // r11
  char v13; // al
  ULONG_PTR v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int i; // edx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rcx
  ULONG_PTR v22; // r8
  unsigned __int64 v23; // rdx
  ULONG_PTR v24; // rdx
  ULONG_PTR v25; // r8
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __int128 v28; // [rsp+40h] [rbp-38h]
  __int128 v29; // [rsp+50h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v4 = *(_QWORD *)(a1 + 168);
  *(_WORD *)((char *)&v29 + 13) = 0;
  HIBYTE(v29) = 0;
  v8 = *(_QWORD *)(v4 + 8);
  if ( *(_QWORD *)v8 )
    return result;
  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result < 2u && *(_DWORD *)(v8 + 40) == -1 )
    return result;
  result = MmMdlPageContentsState(v8, 2u);
  if ( (_DWORD)result != 1 )
    return result;
  result = *(_QWORD *)(a1 + 168);
  v9 = *(_QWORD *)(result + 8);
  if ( (*(_BYTE *)(v9 + 10) & 5) != 0 )
  {
    v10 = *(_QWORD *)(v9 + 24);
  }
  else
  {
    result = (unsigned __int64)MmMapLockedPagesSpecifyCache((PMDL)v9, 0, MmCached, 0LL, 0, 0x40000020u);
    v10 = result;
  }
  if ( !v10 )
    return result;
  MdlInfo = MdlInvariantFindMdlInfo(a2, *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL));
  if ( MdlInfo )
  {
    v13 = *(_BYTE *)(v12 + 67);
    if ( v13 == *(_BYTE *)(v12 + 66) || *((_BYTE *)MdlInfo + 28) == v13 )
    {
      *(_OWORD *)MdlInfo = 0LL;
      *((_OWORD *)MdlInfo + 1) = 0LL;
      MdlInfo = 0LL;
      *(_QWORD *)(*(_QWORD *)(a2 + 224) + 16LL) = 0LL;
    }
  }
  v14 = *(_QWORD *)(a1 + 168);
  v15 = *(_QWORD *)(v14 + 8);
  if ( MdlInfo )
  {
    v21 = *((unsigned int *)MdlInfo + 6);
    result = *(unsigned int *)(v15 + 40);
    if ( (_DWORD)v21 == (_DWORD)result )
    {
      v23 = result;
    }
    else
    {
      v22 = MdlInfo[2];
      if ( v10 < v22 || (v23 = (unsigned int)result, result += v10, result > v22 + v21) )
      {
        v24 = 4112LL;
        v25 = *(_QWORD *)(a3 + 40);
        v26 = *(_QWORD *)(*(_QWORD *)(v25 + 8) + 24LL);
        if ( *(_BYTE *)a3 != 4 )
        {
LABEL_35:
          v24 = 4113LL;
          return CarReportRuleViolationFromNt(0xC4u, v24, v25, v14, v10, 14, v26);
        }
        return CarReportRuleViolationFromNt(0xC4u, v24, v25, v14, v10, 14, v26);
      }
    }
    if ( (MmVerifierData & 0x4000) == 0 )
      return result;
    result = RtlpComputeCrcInternal(v10, v23, 0LL, (__int64)&Crc64Ctrl);
    v27 = result;
    if ( MdlInfo[1] == result )
      return result;
    if ( *(_BYTE *)a3 != 4 )
    {
      result = *(unsigned int *)(a3 + 8);
      if ( *(_DWORD *)(*(_QWORD *)(v4 + 184) + 8LL) != (_DWORD)result )
      {
        MdlInfo[1] = v27;
        return result;
      }
      v25 = *(_QWORD *)(a3 + 40);
      v14 = *(_QWORD *)(a1 + 168);
      v26 = *(_QWORD *)(*(_QWORD *)(v25 + 8) + 24LL);
      goto LABEL_35;
    }
    v25 = *(_QWORD *)(a3 + 40);
    v24 = 4112LL;
    v14 = *(_QWORD *)(a1 + 168);
    v26 = *(_QWORD *)(*(_QWORD *)(v25 + 8) + 24LL);
    return CarReportRuleViolationFromNt(0xC4u, v24, v25, v14, v10, 14, v26);
  }
  v16 = RtlpComputeCrcInternal(v10, *(unsigned int *)(v15 + 40), 0LL, (__int64)&Crc64Ctrl);
  v17 = *(_QWORD *)(a1 + 168);
  *((_QWORD *)&v28 + 1) = v16;
  *(_QWORD *)&v29 = v10;
  *(_QWORD *)&v28 = *(_QWORD *)(v17 + 8);
  DWORD2(v29) = *(_DWORD *)(v28 + 40);
  BYTE12(v29) = *(_BYTE *)(v17 + 67);
  result = *(_QWORD *)(a2 + 224);
  if ( !result )
  {
    result = ExAllocatePool2(0x40uLL, 0x58uLL, 0x6D646C56u);
    if ( !result )
      return result;
    *(_DWORD *)result = 2;
    *(_QWORD *)(result + 8) = result + 24;
    *(_QWORD *)(a2 + 224) = result;
  }
  for ( i = 0; i < *(_DWORD *)result; ++i )
  {
    v19 = *(_QWORD *)(result + 8);
    v20 = 32LL * i;
    if ( !*(_QWORD *)(v20 + v19) )
    {
      *(_OWORD *)(v20 + v19) = v28;
      *(_OWORD *)(v20 + v19 + 16) = v29;
      return result;
    }
  }
  return result;
}
