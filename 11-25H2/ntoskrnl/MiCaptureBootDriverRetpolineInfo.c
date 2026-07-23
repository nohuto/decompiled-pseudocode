/*
 * XREFs of MiCaptureBootDriverRetpolineInfo @ 0x1407E084C
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140C49F8C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140420FB0 (RtlImageNtHeaderEx.c)
 *     MiFreeImageRetpolineContext @ 0x140943580 (MiFreeImageRetpolineContext.c)
 *     LdrCaptureDynamicRelocationTableHeader @ 0x1409442DC (LdrCaptureDynamicRelocationTableHeader.c)
 *     MiCaptureRetpolineRelocationTables @ 0x140944F04 (MiCaptureRetpolineRelocationTables.c)
 *     MiCreateRetpolineRelocationInformation @ 0x140A5A728 (MiCreateRetpolineRelocationInformation.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140A63300 (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall MiCaptureBootDriverRetpolineInfo(PVOID BaseOfImage, ULONG64 Size, __int64 a3)
{
  __int64 v5; // r14
  NTSTATUS RetpolineRelocationInformation; // ebx
  __int64 Config; // rax
  unsigned __int64 v8; // rcx
  unsigned int v9; // esi
  PIMAGE_NT_HEADERS v10; // r15
  char v12; // [rsp+28h] [rbp-48h]
  __int64 v13; // [rsp+40h] [rbp-30h] BYREF
  _OWORD v14[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+38h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+B8h] [rbp+48h] BYREF

  LODWORD(v15) = 0;
  OutHeaders = 0LL;
  v13 = 0LL;
  v5 = (unsigned int)Size;
  memset(v14, 0, sizeof(v14));
  RetpolineRelocationInformation = RtlImageNtHeaderEx(0, BaseOfImage, (unsigned int)Size, &OutHeaders);
  if ( RetpolineRelocationInformation >= 0 )
  {
    Config = LdrImageDirectoryEntryToLoadConfig(BaseOfImage);
    if ( Config && *(int *)Config >= 228 )
    {
      v8 = *(_QWORD *)(Config + 120);
      v9 = 0;
      if ( v8 && v8 >= (unsigned __int64)BaseOfImage && v8 < (unsigned __int64)BaseOfImage + v5 - 8 )
        v9 = v8 - (_DWORD)BaseOfImage;
      v10 = OutHeaders;
      RetpolineRelocationInformation = LdrCaptureDynamicRelocationTableHeader(
                                         BaseOfImage,
                                         (unsigned int)v5,
                                         0LL,
                                         OutHeaders->OptionalHeader.Magic,
                                         (__int64)&v15,
                                         (__int64)&v13);
      if ( RetpolineRelocationInformation >= 0 )
      {
        RetpolineRelocationInformation = MiCaptureRetpolineRelocationTables(
                                           (_DWORD)BaseOfImage,
                                           v5,
                                           v10->OptionalHeader.SizeOfHeaders,
                                           v15,
                                           (__int64)&v13,
                                           v12,
                                           (__int64)v14);
        if ( RetpolineRelocationInformation >= 0 )
        {
          RetpolineRelocationInformation = MiCreateRetpolineRelocationInformation(v14, v9, (unsigned int)v5, a3);
          MiFreeImageRetpolineContext(v14);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)RetpolineRelocationInformation;
}
