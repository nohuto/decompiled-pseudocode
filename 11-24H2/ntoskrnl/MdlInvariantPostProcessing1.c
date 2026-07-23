/*
 * XREFs of MdlInvariantPostProcessing1 @ 0x140610090
 * Callers:
 *     IovpCompleteRequest2 @ 0x140BA8DE4 (IovpCompleteRequest2.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     MmMdlPageContentsState @ 0x140442DC0 (MmMdlPageContentsState.c)
 *     RtlpComputeCrcInternal @ 0x140449440 (RtlpComputeCrcInternal.c)
 *     MdlInvariantFindMdlInfo @ 0x14060FFBC (MdlInvariantFindMdlInfo.c)
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 */

void __fastcall MdlInvariantPostProcessing1(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  __int64 v5; // rcx
  char v7; // dl
  __int64 v8; // rcx
  _QWORD *MdlInfo; // rbx
  __int64 v10; // r11
  PVOID v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  ULONG_PTR v15; // rdx
  ULONG_PTR v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rbx

  v5 = *(_QWORD *)(a2 + 8);
  if ( !*(_QWORD *)v5 && (KeGetCurrentIrql() >= 2u || *(_DWORD *)(v5 + 40) != -1) )
  {
    v7 = *(_BYTE *)(a2 + 67);
    if ( ((MmVerifierData & 0x2000) == 0 || (MmVerifierData & 0x4000) != 0 || v7 == *(_BYTE *)(a2 + 66))
      && (unsigned int)MmMdlPageContentsState(v5, 2u) == 1 )
    {
      v8 = *(_QWORD *)(a1 + 224);
      if ( v8 )
        *(_QWORD *)(v8 + 16) = *(_QWORD *)(a2 + 8);
      MdlInfo = MdlInvariantFindMdlInfo(a1, *(_QWORD *)(a2 + 8));
      if ( MdlInfo || *(_BYTE *)a3 != 4 )
      {
        v11 = (*(_BYTE *)(v10 + 10) & 5) != 0
            ? *(PVOID *)(v10 + 24)
            : MmMapLockedPagesSpecifyCache((PMDL)v10, 0, MmCached, 0LL, 0, 0x40000020u);
        if ( v11 )
        {
          if ( !MdlInfo
            || (v12 = *((unsigned int *)MdlInfo + 6),
                v13 = *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
                (_DWORD)v12 == (_DWORD)v13) )
          {
            if ( *(_BYTE *)a3 == 4 )
            {
              if ( RtlpComputeCrcInternal(
                     (unsigned __int64)v11,
                     *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
                     0LL,
                     (__int64)&Crc64Ctrl) == MdlInfo[1] )
                return;
              v16 = *(_QWORD *)(a3 + 40);
              v15 = 4112LL;
              v17 = *(_QWORD *)(*(_QWORD *)(v16 + 8) + 24LL);
              goto LABEL_30;
            }
          }
          else
          {
            v14 = MdlInfo[2];
            if ( (unsigned __int64)v11 < v14 || (unsigned __int64)v11 + v13 > v14 + v12 )
            {
              v15 = 4112LL;
              v16 = *(_QWORD *)(a3 + 40);
              v17 = *(_QWORD *)(*(_QWORD *)(v16 + 8) + 24LL);
              if ( *(_BYTE *)a3 == 4 )
              {
LABEL_30:
                CarReportRuleViolationFromNt(0xC4u, v15, v16, a2, (ULONG_PTR)v11, 14, v17);
                return;
              }
LABEL_29:
              v15 = 4113LL;
              goto LABEL_30;
            }
          }
          if ( *(_BYTE *)a3 == 3 && KeGetCurrentIrql() < 2u )
          {
            v18 = RtlpComputeCrcInternal(
                    (unsigned __int64)v11,
                    *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
                    0LL,
                    (__int64)&Crc64Ctrl);
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&IovMdlInvariant10Milliseconds);
            if ( v18 != RtlpComputeCrcInternal(
                          (unsigned __int64)v11,
                          *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
                          0LL,
                          (__int64)&Crc64Ctrl) )
            {
              v16 = *(_QWORD *)(a3 + 40);
              v17 = *(_QWORD *)(*(_QWORD *)(v16 + 8) + 24LL);
              goto LABEL_29;
            }
          }
        }
      }
    }
  }
}
