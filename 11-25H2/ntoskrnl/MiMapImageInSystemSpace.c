/*
 * XREFs of MiMapImageInSystemSpace @ 0x140943ED0
 * Callers:
 *     MiSetPagesModified @ 0x140493EB0 (MiSetPagesModified.c)
 *     MiRelocateImage @ 0x140941BE8 (MiRelocateImage.c)
 *     MiParseComAndCetHeaders @ 0x140943A6C (MiParseComAndCetHeaders.c)
 *     MiValidateSectionCreate @ 0x140945124 (MiValidateSectionCreate.c)
 *     MiGetSystemAddressForImage @ 0x140A5B2CC (MiGetSystemAddressForImage.c)
 *     MiOpenHotPatchFile @ 0x140A992CC (MiOpenHotPatchFile.c)
 * Callees:
 *     MiReferenceActiveSubsection @ 0x1402140B0 (MiReferenceActiveSubsection.c)
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     MiInsertInSystemSpace @ 0x1402A4B54 (MiInsertInSystemSpace.c)
 *     MiControlAreaRequiresCharge @ 0x1402A673C (MiControlAreaRequiresCharge.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1403A4900 (MiCheckPurgeAndUpMapCount.c)
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x14042F960 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140432C40 (MiDereferenceControlAreaFile.c)
 *     MiGetControlAreaPartition @ 0x14043B7F0 (MiGetControlAreaPartition.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     MiDereferenceControlArea @ 0x14046FD68 (MiDereferenceControlArea.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1404CBB78 (MiReturnCrossPartitionControlAreaCharges.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiMapImageInSystemProcess @ 0x1407DD9C8 (MiMapImageInSystemProcess.c)
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
  _BYTE v20[40]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v21; // [rsp+58h] [rbp-18h]
  unsigned __int64 v22; // [rsp+60h] [rbp-10h]
  int v23; // [rsp+68h] [rbp-8h]
  int v24; // [rsp+6Ch] [rbp-4h]
  __int64 v25; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v26; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v27; // [rsp+C8h] [rbp+58h] BYREF

  v26 = 0LL;
  memset_0(v20, 0, 0x40uLL);
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
  v22 = (unsigned __int64)v8 << 12;
  v9 = MiReferenceControlAreaFile((__int64)a1);
  v10 = v9;
  if ( (*(_DWORD *)(*(_QWORD *)(v9 + 8) + 52LL) & 0x10) != 0 )
    v21 = v9 | 1;
  else
    v21 = (__int64)a1;
  v11 = v24 & 0xFFFFF000 | 2;
  SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  v23 |= 0x20u;
  v13 = a2 | 8;
  v25 = 0LL;
  v27 = 0LL;
  v24 = v11 ^ (v11 ^ (SessionId << 12)) & 0x7FFFF000;
  v14 = MiSectionControlArea((__int64)v20);
  MiCheckPurgeAndUpMapCount(v14);
  if ( v8 << 12 )
  {
    v15 = (unsigned __int16)v25 + (unsigned __int64)(v8 << 12);
    if ( v15 < (unsigned __int16)v25 || (LODWORD(v25) = v25 & 0xFFFF0000, v15 > v22 - v25) )
    {
      v16 = -1073741793;
      goto LABEL_20;
    }
  }
  else
  {
    LODWORD(v25) = v25 & 0xFFFF0000;
    v15 = v22 - v25;
  }
  v16 = MiInsertInSystemSpace(v15, (__int64)v20, &v25, 1, v13, (ULONG_PTR *)&v27);
  if ( v16 < 0 )
  {
LABEL_20:
    MiDereferenceControlArea(v14);
    goto LABEL_13;
  }
  v16 = 0;
  v26 = v27;
LABEL_13:
  MiDereferenceControlAreaFile((__int64)a1, v10);
  if ( v16 >= 0 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
LABEL_15:
    *(_QWORD *)(a3 + 24) = AnyMultiplexedVm;
    *(_QWORD *)a3 = v26;
    result = 0LL;
    *(_DWORD *)(a3 + 16) = v8;
    return result;
  }
  if ( (v13 & 2) != 0 )
  {
    v27 = 0LL;
    v19 = *(struct _KPROCESS **)(*(_QWORD *)(MiGetControlAreaPartition((__int64)a1) + 184) + 120LL);
    KeStackAttachProcess(v19, (PRKAPC_STATE)(a3 + 32));
    v16 = MiMapImageInSystemProcess(a1, v13, &v26, &v27);
    if ( v16 >= 0 )
    {
      AnyMultiplexedVm = (char *)&v19[2].ReadyListHead.Blink;
      goto LABEL_15;
    }
    KiUnstackDetachProcess(a3 + 32, 0LL);
  }
  if ( *(_QWORD *)(a3 + 8) )
    MiReturnCrossPartitionControlAreaCharges((__int64)a1);
  return (unsigned int)v16;
}
