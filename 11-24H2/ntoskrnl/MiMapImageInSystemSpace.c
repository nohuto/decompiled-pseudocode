/*
 * XREFs of MiMapImageInSystemSpace @ 0x1408F5378
 * Callers:
 *     MiSetPagesModified @ 0x140492C90 (MiSetPagesModified.c)
 *     MiParseComAndCetHeaders @ 0x1408F4F14 (MiParseComAndCetHeaders.c)
 *     MiRelocateImage @ 0x1408F5784 (MiRelocateImage.c)
 *     MiValidateSectionCreate @ 0x140957B50 (MiValidateSectionCreate.c)
 *     MiGetSystemAddressForImage @ 0x140A5E524 (MiGetSystemAddressForImage.c)
 *     MiOpenHotPatchFile @ 0x140A9FE3C (MiOpenHotPatchFile.c)
 * Callees:
 *     MiReferenceActiveSubsection @ 0x14020E140 (MiReferenceActiveSubsection.c)
 *     MiReferenceControlAreaFile @ 0x1402464D0 (MiReferenceControlAreaFile.c)
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 *     PsGetSessionIdEx @ 0x1403025D0 (PsGetSessionIdEx.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     MiDereferenceControlArea @ 0x14036F494 (MiDereferenceControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14040EFF0 (MiCheckPurgeAndUpMapCount.c)
 *     MiInsertInSystemSpace @ 0x140415F30 (MiInsertInSystemSpace.c)
 *     MiControlAreaRequiresCharge @ 0x1404166A4 (MiControlAreaRequiresCharge.c)
 *     MiDereferenceControlAreaFile @ 0x14042C500 (MiDereferenceControlAreaFile.c)
 *     MiGetControlAreaPartition @ 0x1404378D0 (MiGetControlAreaPartition.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1404CBAD0 (MiReturnCrossPartitionControlAreaCharges.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiMapImageInSystemProcess @ 0x1407ED868 (MiMapImageInSystemProcess.c)
 */

__int64 __fastcall MiMapImageInSystemSpace(__int64 *a1, int a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 *v7; // rax
  unsigned int v8; // r14d
  ULONG_PTR v9; // rax
  signed __int64 v10; // r13
  unsigned int v11; // ebx
  int SessionId; // eax
  unsigned int v13; // r15d
  unsigned __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned __int64 v17; // rcx
  int v18; // ebx
  char *AnyMultiplexedVm; // rax
  __int64 result; // rax
  struct _KPROCESS *v21; // r13
  _BYTE v22[40]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v23; // [rsp+58h] [rbp-18h]
  unsigned __int64 v24; // [rsp+60h] [rbp-10h]
  int v25; // [rsp+68h] [rbp-8h]
  int v26; // [rsp+6Ch] [rbp-4h]
  unsigned __int64 v27; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v28; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v29; // [rsp+C8h] [rbp+58h] BYREF

  v28 = 0LL;
  memset_0(v22, 0, 0x40uLL);
  *(_QWORD *)a3 = 0LL;
  v6 = *(_DWORD *)(*(_QWORD *)(*a1 + 56) + 64LL);
  if ( !v6 )
    return 3221225595LL;
  if ( (unsigned int)MiControlAreaRequiresCharge((__int64)a1, 3u) == 1 )
  {
    v7 = 0LL;
  }
  else
  {
    result = MiReferenceActiveSubsection(a1 + 16, 392, 0x11u);
    if ( (int)result < 0 )
      return result;
    v7 = a1;
  }
  *(_QWORD *)(a3 + 8) = v7;
  if ( (a2 & 1) != 0 )
    v8 = *(_DWORD *)(*a1 + 8);
  else
    v8 = (v6 >> 12) + ((v6 & 0xFFF) != 0);
  v24 = (unsigned __int64)v8 << 12;
  v9 = MiReferenceControlAreaFile((__int64)a1);
  v10 = v9;
  if ( (*(_DWORD *)(*(_QWORD *)(v9 + 8) + 52LL) & 0x10) != 0 )
    v23 = v9 | 1;
  else
    v23 = (__int64)a1;
  v11 = v26 & 0xFFFFF000 | 2;
  SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  v25 |= 0x20u;
  v13 = a2 | 8;
  v27 = 0LL;
  v29 = 0LL;
  v26 = v11 ^ (v11 ^ (SessionId << 12)) & 0x7FFFF000;
  v14 = MiSectionControlArea((__int64)v22);
  MiCheckPurgeAndUpMapCount(v14, v15, v16);
  if ( v8 << 12 )
  {
    v17 = (unsigned __int16)v27 + (unsigned __int64)(v8 << 12);
    if ( v17 < (unsigned __int16)v27 || (LODWORD(v27) = v27 & 0xFFFF0000, v17 > v24 - v27) )
    {
      v18 = -1073741793;
      goto LABEL_20;
    }
  }
  else
  {
    LODWORD(v27) = v27 & 0xFFFF0000;
    v17 = v24 - v27;
  }
  v18 = MiInsertInSystemSpace(v17, (__int64)v22, &v27, 1, v13, (ULONG_PTR *)&v29);
  if ( v18 < 0 )
  {
LABEL_20:
    MiDereferenceControlArea(v14);
    goto LABEL_13;
  }
  v18 = 0;
  v28 = v29;
LABEL_13:
  MiDereferenceControlAreaFile((__int64)a1, v10);
  if ( v18 >= 0 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
LABEL_15:
    *(_QWORD *)(a3 + 24) = AnyMultiplexedVm;
    *(_QWORD *)a3 = v28;
    result = 0LL;
    *(_DWORD *)(a3 + 16) = v8;
    return result;
  }
  if ( (v13 & 2) != 0 )
  {
    v29 = 0LL;
    v21 = *(struct _KPROCESS **)(*(_QWORD *)(MiGetControlAreaPartition((__int64)a1) + 184) + 120LL);
    KeStackAttachProcess(v21, (PRKAPC_STATE)(a3 + 32));
    v18 = MiMapImageInSystemProcess(a1, v13, &v28, &v29);
    if ( v18 >= 0 )
    {
      AnyMultiplexedVm = (char *)&v21[2].ReadyListHead.Blink;
      goto LABEL_15;
    }
    KiUnstackDetachProcess(a3 + 32, 0);
  }
  if ( *(_QWORD *)(a3 + 8) )
    MiReturnCrossPartitionControlAreaCharges((__int64)a1);
  return (unsigned int)v18;
}
