/*
 * XREFs of MiCaptureBootDriverRetpolineInfo @ 0x1407F06EC
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140C5B318 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14041E7E0 (RtlImageNtHeaderEx.c)
 *     MiCreateRetpolineRelocationInformation @ 0x1408F3248 (MiCreateRetpolineRelocationInformation.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1408F3470 (MiCaptureRetpolineRelocationTables.c)
 *     LdrCaptureDynamicRelocationTableHeader @ 0x1408F40C4 (LdrCaptureDynamicRelocationTableHeader.c)
 *     MiFreeImageRetpolineContext @ 0x1408F4A28 (MiFreeImageRetpolineContext.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140A659D8 (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall MiCaptureBootDriverRetpolineInfo(unsigned __int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // r14
  int RetpolineRelocationInformation; // ebx
  __int64 Config; // rax
  unsigned __int64 v8; // rcx
  unsigned int v9; // esi
  __int64 v10; // r15
  char v12; // [rsp+28h] [rbp-48h]
  __int64 v13; // [rsp+40h] [rbp-30h] BYREF
  _OWORD v14[2]; // [rsp+48h] [rbp-28h] BYREF
  int v15; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v16; // [rsp+B8h] [rbp+48h] BYREF

  v15 = 0;
  v16 = 0LL;
  v13 = 0LL;
  v5 = a2;
  memset(v14, 0, sizeof(v14));
  RetpolineRelocationInformation = RtlImageNtHeaderEx(0, a1, a2, &v16);
  if ( RetpolineRelocationInformation >= 0 )
  {
    Config = LdrImageDirectoryEntryToLoadConfig(a1);
    if ( Config && *(int *)Config >= 228 )
    {
      v8 = *(_QWORD *)(Config + 120);
      v9 = 0;
      if ( v8 && v8 >= a1 && v8 < v5 + a1 - 8 )
        v9 = v8 - a1;
      v10 = v16;
      RetpolineRelocationInformation = LdrCaptureDynamicRelocationTableHeader(
                                         a1,
                                         v5,
                                         Config,
                                         *(_DWORD *)Config,
                                         0LL,
                                         *(_WORD *)(v16 + 24),
                                         (__int64)&v15,
                                         (__int64)&v13);
      if ( RetpolineRelocationInformation >= 0 )
      {
        RetpolineRelocationInformation = MiCaptureRetpolineRelocationTables(
                                           a1,
                                           v5,
                                           *(_DWORD *)(v10 + 84),
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
