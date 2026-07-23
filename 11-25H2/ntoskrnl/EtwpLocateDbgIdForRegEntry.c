/*
 * XREFs of EtwpLocateDbgIdForRegEntry @ 0x140898054
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x140899014 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlPcToFileHeader @ 0x14025DBF0 (RtlPcToFileHeader.c)
 *     RtlImageNtHeaderEx @ 0x140420FB0 (RtlImageNtHeaderEx.c)
 *     VslGetEtwDebugId @ 0x1405899A4 (VslGetEtwDebugId.c)
 *     MmGetImageInformation @ 0x140898318 (MmGetImageInformation.c)
 *     EtwpFindDebugId @ 0x140898408 (EtwpFindDebugId.c)
 *     EtwpGetImageSize @ 0x14089869C (EtwpGetImageSize.c)
 */

NTSTATUS __fastcall EtwpLocateDbgIdForRegEntry(char a1, __int64 a2, struct _MDL **a3, unsigned int *a4)
{
  void *v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS result; // eax
  ULONG64 Size; // [rsp+28h] [rbp-20h] BYREF
  PVOID BaseOfImage; // [rsp+30h] [rbp-18h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+38h] [rbp-10h] BYREF
  int v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0;
  OutHeaders = 0LL;
  BaseOfImage = 0LL;
  Size = 0LL;
  v5 = *(void **)(a2 + 88);
  if ( !v5 )
    return -1073741503;
  if ( !a1 )
  {
    RtlPcToFileHeader(v5, &BaseOfImage);
    if ( !BaseOfImage )
      return -1073741275;
LABEL_5:
    result = RtlImageNtHeaderEx(1u, (PVOID)((unsigned __int64)BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL), Size, &OutHeaders);
    if ( result >= 0 )
    {
      if ( !Size )
        result = EtwpGetImageSize(OutHeaders, &Size);
      if ( result >= 0 )
        return EtwpFindDebugId(BaseOfImage);
    }
    return result;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->ApcState.Process->SecureState.SecureHandle & 1) != 0 )
    return VslGetEtwDebugId((__int64)CurrentThread->ApcState.Process, *(_QWORD *)(a2 + 88), a3, a4);
  result = MmGetImageInformation(v5, &BaseOfImage, &Size, &v11);
  if ( result >= 0 )
    goto LABEL_5;
  return result;
}
