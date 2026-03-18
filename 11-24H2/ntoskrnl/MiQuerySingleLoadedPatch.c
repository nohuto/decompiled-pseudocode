/*
 * XREFs of MiQuerySingleLoadedPatch @ 0x140A32534
 * Callers:
 *     NtManageHotPatch @ 0x140AE7000 (NtManageHotPatch.c)
 * Callees:
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     RtlCopyUnicodeString @ 0x1403FFE80 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     MiVadDeleted @ 0x140428540 (MiVadDeleted.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A326F0 (MiFindProcessImageHotPatchRecord.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
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
  __int64 v11; // rax
  void *v12; // r9
  _QWORD ***v13; // rcx
  __int64 v14; // r8
  int v15; // edi
  int v16; // ebx
  unsigned int ProcessImageHotPatchRecord; // ebx
  unsigned __int16 Length; // si
  unsigned __int64 v19; // rdi
  __int64 Pool; // rax
  __int64 v21; // rbx
  unsigned int v23; // [rsp+30h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF

  DestinationString = 0LL;
  v23 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v11 = MiObtainReferencedVadEx(a3, 0LL, (int *)&v23);
  v12 = (void *)v11;
  if ( v11 )
  {
    if ( (*(_DWORD *)(v11 + 48) & 0x70) != 0x20 || (unsigned int)MiVadDeleted(v11) )
    {
      ProcessImageHotPatchRecord = -1073741800;
      MiUnlockAndDereferenceVad(v12);
    }
    else
    {
      v14 = *(_QWORD *)(**v13[9] + 56LL);
      v15 = *(_DWORD *)(v14 + 60);
      v16 = *(_DWORD *)(v14 + 72);
      MiUnlockAndDereferenceVad(v13);
      ProcessImageHotPatchRecord = MiFindProcessImageHotPatchRecord((int)Process, v15, v16, 0, &DestinationString);
      if ( (int)(ProcessImageHotPatchRecord + 0x80000000) < 0 || ProcessImageHotPatchRecord == -1073741275 )
      {
        Length = DestinationString.Length;
        v19 = DestinationString.Length + 48LL;
        if ( a6 < v19 )
        {
          *a1 = 0LL;
        }
        else
        {
          Pool = MiAllocatePool(0x100uLL, (unsigned int)v19, 1900571981);
          v21 = Pool;
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
            *(_QWORD *)(v21 + 40) += a5 - v21;
          }
          *a1 = v21;
        }
        *a2 = v19;
        ProcessImageHotPatchRecord = 0;
      }
    }
  }
  else
  {
    ProcessImageHotPatchRecord = v23;
  }
LABEL_11:
  if ( DestinationString.Buffer )
    ExFreePool(DestinationString.Buffer);
  return ProcessImageHotPatchRecord;
}
