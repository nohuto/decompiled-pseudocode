/*
 * XREFs of MiMapImageInSystemSpace @ 0x14093E220
 * Callers:
 *     MiSetPagesModified @ 0x1403DA5EC (MiSetPagesModified.c)
 *     MiValidateSectionCreate @ 0x14093C5D8 (MiValidateSectionCreate.c)
 *     MiParseComAndCetHeaders @ 0x14093DDBC (MiParseComAndCetHeaders.c)
 *     MiGetSystemAddressForImage @ 0x140A5536C (MiGetSystemAddressForImage.c)
 *     MiOpenHotPatchFile @ 0x140A9B20C (MiOpenHotPatchFile.c)
 *     MiRelocateImage @ 0x140AEA57C (MiRelocateImage.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     MiReferenceActiveSubsection @ 0x1403374A0 (MiReferenceActiveSubsection.c)
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     MiInsertInSystemSpace @ 0x140393BFC (MiInsertInSystemSpace.c)
 *     MiControlAreaRequiresCharge @ 0x140394370 (MiControlAreaRequiresCharge.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1404071F0 (MiCheckPurgeAndUpMapCount.c)
 *     MiReferenceControlAreaFile @ 0x14041CAA0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14041F2B0 (MiDereferenceControlAreaFile.c)
 *     MiDereferenceControlArea @ 0x14042777C (MiDereferenceControlArea.c)
 *     MiGetControlAreaPartition @ 0x14042A350 (MiGetControlAreaPartition.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1404C4F4C (MiReturnCrossPartitionControlAreaCharges.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiMapImageInSystemProcess @ 0x1407EDE38 (MiMapImageInSystemProcess.c)
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
  unsigned __int64 v15; // rcx
  int v16; // ebx
  char *AnyMultiplexedVm; // rax
  __int64 result; // rax
  struct _KPROCESS *v19; // r13
  __int64 v20; // r8
  __int64 v21; // r9
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
  MiCheckPurgeAndUpMapCount(v14);
  if ( v8 << 12 )
  {
    v15 = (unsigned __int16)v27 + (unsigned __int64)(v8 << 12);
    if ( v15 < (unsigned __int16)v27 || (LODWORD(v27) = v27 & 0xFFFF0000, v15 > v24 - v27) )
    {
      v16 = -1073741793;
      goto LABEL_20;
    }
  }
  else
  {
    LODWORD(v27) = v27 & 0xFFFF0000;
    v15 = v24 - v27;
  }
  v16 = MiInsertInSystemSpace(v15, (__int64)v22, &v27, 1, v13, (ULONG_PTR *)&v29);
  if ( v16 < 0 )
  {
LABEL_20:
    MiDereferenceControlArea(v14);
    goto LABEL_13;
  }
  v16 = 0;
  v28 = v29;
LABEL_13:
  MiDereferenceControlAreaFile((__int64)a1, v10);
  if ( v16 >= 0 )
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
    v19 = *(struct _KPROCESS **)(*(_QWORD *)(MiGetControlAreaPartition((__int64)a1) + 184) + 120LL);
    KeStackAttachProcess(v19, (PRKAPC_STATE)(a3 + 32));
    v16 = MiMapImageInSystemProcess(a1, v13, &v28, &v29);
    if ( v16 >= 0 )
    {
      AnyMultiplexedVm = (char *)&v19[2].ReadyListHead.Blink;
      goto LABEL_15;
    }
    KiUnstackDetachProcess(a3 + 32, 0, v20, v21);
  }
  if ( *(_QWORD *)(a3 + 8) )
    MiReturnCrossPartitionControlAreaCharges((__int64)a1);
  return (unsigned int)v16;
}
