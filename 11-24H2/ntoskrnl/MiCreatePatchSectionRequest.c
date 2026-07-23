/*
 * XREFs of MiCreatePatchSectionRequest @ 0x140AE969C
 * Callers:
 *     NtManageHotPatch @ 0x140AE9BD0 (NtManageHotPatch.c)
 * Callees:
 *     MiSetVadFlags @ 0x14036049C (MiSetVadFlags.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     MiGetVadForHotPatchInProgress @ 0x1407F3124 (MiGetVadForHotPatchInProgress.c)
 *     MiLogHotPatchOperationStatus @ 0x1407F4298 (MiLogHotPatchOperationStatus.c)
 *     MmCreateSectionForHotpatch @ 0x1407F6770 (MmCreateSectionForHotpatch.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A26708 (MiFindProcessImageHotPatchRecord.c)
 *     MiOpenHotPatchFile @ 0x140A9B20C (MiOpenHotPatchFile.c)
 */

__int64 __fastcall MiCreatePatchSectionRequest(__int64 a1, char a2)
{
  signed int VadForHotPatchInProgress; // ebx
  unsigned __int64 v6; // rcx
  __int64 v7; // r9
  PVOID v8; // rbx
  __int64 v9; // r8
  int v10; // esi
  int v11; // edi
  int ProcessImageHotPatchRecord; // eax
  HANDLE v13; // rax
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  PVOID P; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v17; // [rsp+90h] [rbp+30h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+40h]
  HANDLE v19; // [rsp+A8h] [rbp+48h] BYREF

  v18 = 0LL;
  v17 = 0;
  P = 0LL;
  Handle = 0LL;
  v19 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( *(_DWORD *)a1 != 1
    || *(_DWORD *)(a1 + 4)
    || (v6 = *(_QWORD *)(a1 + 24)) == 0
    || (*(_DWORD *)(a1 + 16) & 0x1000000) == 0
    || (*(_DWORD *)(a1 + 12) & 0xF0) == 0 )
  {
    VadForHotPatchInProgress = -1073741811;
    goto LABEL_3;
  }
  VadForHotPatchInProgress = MiGetVadForHotPatchInProgress(v6, 0, (__int64 *)&P, (int *)&v17);
  if ( VadForHotPatchInProgress < 0 )
    goto LABEL_3;
  v8 = P;
  v9 = *(_QWORD *)(***((_QWORD ***)P + 9) + 56LL);
  v11 = *(_DWORD *)(v9 + 72);
  LODWORD(v18) = *(_DWORD *)(v9 + 60);
  v10 = v18;
  HIDWORD(v18) = v11;
  MiSetVadFlags((__int64)P, 4LL, v17, v7);
  MiUnlockAndDereferenceVad(v8);
  ProcessImageHotPatchRecord = MiFindProcessImageHotPatchRecord(
                                 (__int64)KeGetCurrentThread()->ApcState.Process,
                                 v10,
                                 v11,
                                 0,
                                 &DestinationString);
  VadForHotPatchInProgress = ProcessImageHotPatchRecord;
  if ( ProcessImageHotPatchRecord < 0 )
  {
    if ( ProcessImageHotPatchRecord == -1073741275 )
      VadForHotPatchInProgress = -1073740588;
    goto LABEL_3;
  }
  VadForHotPatchInProgress = MiOpenHotPatchFile(&DestinationString, 0, 0, &Handle, 0LL, 0LL, 0LL, 0LL);
  if ( VadForHotPatchInProgress < 0
    || (VadForHotPatchInProgress = MmCreateSectionForHotpatch(
                                     (__int64)Handle,
                                     *(_DWORD *)(a1 + 8),
                                     *(_DWORD *)(a1 + 12),
                                     *(_DWORD *)(a1 + 16),
                                     a2,
                                     (int)&v19),
        VadForHotPatchInProgress < 0) )
  {
LABEL_3:
    MiLogHotPatchOperationStatus(v18, HIDWORD(v18), &DestinationString, VadForHotPatchInProgress, 7);
    goto LABEL_4;
  }
  v13 = v19;
  v19 = 0LL;
  VadForHotPatchInProgress = 0;
  *(_QWORD *)(a1 + 32) = v13;
LABEL_4:
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( v19 )
    ObCloseHandle(v19, a2);
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)VadForHotPatchInProgress;
}
