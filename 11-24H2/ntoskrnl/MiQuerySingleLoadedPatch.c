/*
 * XREFs of MiQuerySingleLoadedPatch @ 0x140A2654C
 * Callers:
 *     NtManageHotPatch @ 0x140AE9BD0 (NtManageHotPatch.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     MiVadDeleted @ 0x14041C6D0 (MiVadDeleted.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A26708 (MiFindProcessImageHotPatchRecord.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

__int64 __fastcall MiQuerySingleLoadedPatch(
        __int64 *a1,
        _DWORD *a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5,
        unsigned int a6)
{
  _KPROCESS *Process; // rsi
  __int64 v11; // r9
  __int64 v12; // rax
  void *v13; // r9
  _QWORD ***v14; // rcx
  __int64 v15; // r8
  int v16; // edi
  int v17; // ebx
  unsigned int ProcessImageHotPatchRecord; // ebx
  unsigned __int16 Length; // si
  unsigned __int64 v20; // rdi
  __int64 Pool; // rax
  __int64 v22; // rbx
  unsigned int v24; // [rsp+30h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF

  DestinationString = 0LL;
  v24 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v12 = MiObtainReferencedVadEx(a3, 0LL, (int *)&v24, v11);
  v13 = (void *)v12;
  if ( v12 )
  {
    if ( (*(_DWORD *)(v12 + 48) & 0x70) != 0x20 || (unsigned int)MiVadDeleted(v12) )
    {
      ProcessImageHotPatchRecord = -1073741800;
      MiUnlockAndDereferenceVad(v13);
    }
    else
    {
      v15 = *(_QWORD *)(**v14[9] + 56LL);
      v16 = *(_DWORD *)(v15 + 60);
      v17 = *(_DWORD *)(v15 + 72);
      MiUnlockAndDereferenceVad(v14);
      ProcessImageHotPatchRecord = MiFindProcessImageHotPatchRecord((int)Process, v16, v17, 0, &DestinationString);
      if ( (int)(ProcessImageHotPatchRecord + 0x80000000) < 0 || ProcessImageHotPatchRecord == -1073741275 )
      {
        Length = DestinationString.Length;
        v20 = DestinationString.Length + 48LL;
        if ( a6 < v20 )
        {
          *a1 = 0LL;
        }
        else
        {
          Pool = MiAllocatePool(0x100uLL, (unsigned int)v20, 1900571981);
          v22 = Pool;
          if ( !Pool )
          {
            ProcessImageHotPatchRecord = -1073741670;
            goto LABEL_11;
          }
          *(_QWORD *)(Pool + 8) = -1LL;
          *(_DWORD *)Pool = 1;
          *(_DWORD *)(Pool + 24) = a4;
          *(_QWORD *)(Pool + 16) = a3;
          if ( Length )
          {
            *(_WORD *)(Pool + 34) = Length;
            *(_WORD *)(Pool + 32) = Length;
            *(_QWORD *)(Pool + 40) = Pool + 48;
            RtlCopyUnicodeString((PUNICODE_STRING)(Pool + 32), &DestinationString);
            *(_QWORD *)(v22 + 40) += a5 - v22;
          }
          *a1 = v22;
        }
        *a2 = v20;
        ProcessImageHotPatchRecord = 0;
      }
    }
  }
  else
  {
    ProcessImageHotPatchRecord = v24;
  }
LABEL_11:
  if ( DestinationString.Buffer )
    ExFreePool(DestinationString.Buffer);
  return ProcessImageHotPatchRecord;
}
