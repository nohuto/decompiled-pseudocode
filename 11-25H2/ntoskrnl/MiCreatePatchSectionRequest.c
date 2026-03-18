/*
 * XREFs of MiCreatePatchSectionRequest @ 0x140AA63E8
 * Callers:
 *     NtManageHotPatch @ 0x140A1D5D0 (NtManageHotPatch.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     MiSetVadFlags @ 0x1402A3618 (MiSetVadFlags.c)
 *     MiUnlockAndDereferenceVad @ 0x1403205C0 (MiUnlockAndDereferenceVad.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     MiGetVadForHotPatchInProgress @ 0x1407E2CB4 (MiGetVadForHotPatchInProgress.c)
 *     MiLogHotPatchOperationStatus @ 0x1407E3E1C (MiLogHotPatchOperationStatus.c)
 *     MiCreateSectionCommon @ 0x1408C2964 (MiCreateSectionCommon.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A1DD10 (MiFindProcessImageHotPatchRecord.c)
 *     MiOpenHotPatchFile @ 0x140A992CC (MiOpenHotPatchFile.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 */

__int64 __fastcall MiCreatePatchSectionRequest(__int64 a1, KPROCESSOR_MODE a2)
{
  signed int VadForHotPatchInProgress; // ebx
  unsigned __int64 v6; // rcx
  char *v7; // rbx
  __int64 v8; // r8
  int v9; // esi
  int v10; // edi
  int ProcessImageHotPatchRecord; // eax
  int v12; // edx
  int v13; // eax
  int v14; // [rsp+28h] [rbp-71h]
  ULONGLONG ullMultiplicand; // [rsp+40h] [rbp-59h]
  HANDLE Handle; // [rsp+60h] [rbp-39h] BYREF
  PVOID P; // [rsp+68h] [rbp-31h] BYREF
  PVOID Object; // [rsp+70h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-21h] BYREF
  int v20[4]; // [rsp+88h] [rbp-11h] BYREF
  __int128 v21; // [rsp+98h] [rbp-1h]
  __int128 v22; // [rsp+A8h] [rbp+Fh]
  int v23; // [rsp+100h] [rbp+67h] BYREF
  __int64 v24; // [rsp+110h] [rbp+77h]
  HANDLE v25; // [rsp+118h] [rbp+7Fh] BYREF

  v23 = 0;
  v24 = 0LL;
  *(_QWORD *)&v22 = 0LL;
  DWORD2(v22) = 0;
  P = 0LL;
  DestinationString = 0LL;
  Object = 0LL;
  *(_OWORD *)v20 = 0LL;
  Handle = 0LL;
  v21 = 0LL;
  v25 = 0LL;
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
  VadForHotPatchInProgress = MiGetVadForHotPatchInProgress(v6, 0, (__int64 *)&P, &v23);
  if ( VadForHotPatchInProgress < 0 )
    goto LABEL_3;
  v7 = (char *)P;
  v8 = *(_QWORD *)(***((_QWORD ***)P + 9) + 56LL);
  v10 = *(_DWORD *)(v8 + 72);
  LODWORD(v24) = *(_DWORD *)(v8 + 60);
  v9 = v24;
  HIDWORD(v24) = v10;
  MiSetVadFlags((__int64)P, 4LL, v23);
  MiUnlockAndDereferenceVad(v7);
  ProcessImageHotPatchRecord = MiFindProcessImageHotPatchRecord(
                                 (__int64)KeGetCurrentThread()->ApcState.Process,
                                 v9,
                                 v10,
                                 0,
                                 &DestinationString);
  VadForHotPatchInProgress = ProcessImageHotPatchRecord;
  if ( ProcessImageHotPatchRecord < 0 )
  {
    if ( ProcessImageHotPatchRecord == -1073741275 )
      VadForHotPatchInProgress = -1073740588;
    goto LABEL_3;
  }
  VadForHotPatchInProgress = MiOpenHotPatchFile(&DestinationString, 0, 0, &Handle, &Object, 0LL, 0LL, 0LL);
  if ( VadForHotPatchInProgress < 0 )
    goto LABEL_3;
  v12 = *(_DWORD *)(a1 + 8);
  LODWORD(ullMultiplicand) = 0;
  v14 = *(_DWORD *)(a1 + 16);
  v13 = *(_DWORD *)(a1 + 12);
  DWORD2(v21) = a2 == 0 ? 0x200 : 0;
  v20[0] = 48;
  *(_QWORD *)&v20[2] = 0LL;
  *(_QWORD *)&v21 = 0LL;
  v22 = 0LL;
  VadForHotPatchInProgress = MiCreateSectionCommon(
                               (__int64 *)&v25,
                               v12,
                               (int)v20,
                               0LL,
                               v13,
                               v14,
                               (__int64)Handle,
                               0LL,
                               ullMultiplicand,
                               2,
                               0);
  if ( VadForHotPatchInProgress < 0 )
  {
LABEL_3:
    MiLogHotPatchOperationStatus(v24, HIDWORD(v24), &DestinationString, VadForHotPatchInProgress, 7);
    goto LABEL_4;
  }
  VadForHotPatchInProgress = 0;
  *(_QWORD *)(a1 + 32) = v25;
  v25 = 0LL;
LABEL_4:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x70486D4Du);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( v25 )
    ObCloseHandle(v25, a2);
  if ( DestinationString.Buffer )
    ExFreePool(DestinationString.Buffer);
  return (unsigned int)VadForHotPatchInProgress;
}
