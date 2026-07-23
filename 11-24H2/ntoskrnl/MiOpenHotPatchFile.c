/*
 * XREFs of MiOpenHotPatchFile @ 0x140A9B20C
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x1407F1EEC (MiApplyImageHotPatchRequest.c)
 *     MiLoadHotPatchForUserSid @ 0x140A9AA90 (MiLoadHotPatchForUserSid.c)
 *     MiLoadHotPatch @ 0x140A9ADA4 (MiLoadHotPatch.c)
 *     MiCreatePatchSectionRequest @ 0x140AE969C (MiCreatePatchSectionRequest.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     RtlImageNtHeaderEx @ 0x140414520 (RtlImageNtHeaderEx.c)
 *     MiCreateSystemSection @ 0x140443248 (MiCreateSystemSection.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x14047F700 (PdcCreateWatchdogAroundClientCall.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlFindHotPatchBase @ 0x14082F854 (RtlFindHotPatchBase.c)
 *     RtlFindHotPatchInformation @ 0x14082F8F4 (RtlFindHotPatchInformation.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     MiMapImageInSystemSpace @ 0x14093E220 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x14093E4B4 (MiUnmapImageInSystemSpace.c)
 *     IoCreateFileEx @ 0x140955520 (IoCreateFileEx.c)
 */

__int64 __fastcall MiOpenHotPatchFile(
        UNICODE_STRING *a1,
        int a2,
        char a3,
        HANDLE *a4,
        PVOID *a5,
        _OWORD *a6,
        _DWORD *a7,
        int *a8)
{
  int v10; // r12d
  __int64 v11; // rdx
  int SystemSection; // ebx
  __int64 v13; // r9
  int v14; // ebx
  int v15; // esi
  int v16; // eax
  int SessionId; // ecx
  __int64 *v18; // rax
  ULONG64 v19; // rsi
  PIMAGE_NT_HEADERS v20; // rbx
  unsigned __int16 Machine; // ax
  unsigned int *HotPatchInformation; // rax
  char *HotPatchBase; // rax
  __int64 v24; // r10
  ULONG CreateOptions; // [rsp+40h] [rbp-168h]
  int EaBuffer; // [rsp+48h] [rbp-160h]
  PVOID Object; // [rsp+88h] [rbp-120h] BYREF
  HANDLE FileHandle; // [rsp+90h] [rbp-118h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+98h] [rbp-110h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-108h] BYREF
  int *v33; // [rsp+D0h] [rbp-D8h]
  HANDLE *v34; // [rsp+D8h] [rbp-D0h]
  PVOID *v35; // [rsp+E0h] [rbp-C8h]
  struct _IO_DRIVER_CREATE_CONTEXT DriverContext; // [rsp+E8h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+108h] [rbp-A0h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+110h] [rbp-98h] BYREF
  PVOID BaseOfImage[2]; // [rsp+120h] [rbp-88h] BYREF
  __int128 v40; // [rsp+130h] [rbp-78h]
  __int128 v41; // [rsp+140h] [rbp-68h]
  __int128 v42; // [rsp+150h] [rbp-58h]
  __int128 v43; // [rsp+160h] [rbp-48h]

  v34 = a4;
  v35 = a5;
  v33 = a8;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  IoStatusBlock = 0LL;
  memset_0(BaseOfImage, 0, 0x50uLL);
  OutHeaders = 0LL;
  Object = 0LL;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  memset(&DriverContext, 0, sizeof(DriverContext));
  DriverContext.Size = 40;
  v37 = PdcCreateWatchdogAroundClientCall();
  v10 = 1;
  SystemSection = IoCreateFileEx(
                    &FileHandle,
                    0x20u,
                    &ObjectAttributes,
                    &IoStatusBlock,
                    0LL,
                    0x80u,
                    5u,
                    1u,
                    0x60u,
                    0LL,
                    0,
                    CreateFileTypeNone,
                    0LL,
                    0,
                    &DriverContext);
  if ( SystemSection >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( a2 )
    {
      v14 = 2;
      v15 = 285212672;
      v16 = 0;
      SessionId = -1;
    }
    else
    {
      v14 = 16;
      v15 = 0x1000000;
      SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v16 = 1;
    }
    LOBYTE(v11) = a3;
    SystemSection = MiCreateSystemSection(
                      (__int64 *)&Object,
                      v11,
                      (int)&ObjectAttributes,
                      v13,
                      v14,
                      v15,
                      0,
                      (__int64)FileHandle,
                      CreateOptions,
                      EaBuffer,
                      SessionId,
                      v16,
                      a3);
    if ( SystemSection >= 0 )
    {
      v18 = (__int64 *)MiSectionControlArea((__int64)Object);
      SystemSection = MiMapImageInSystemSpace(v18, 1, (__int64)BaseOfImage);
      if ( SystemSection >= 0 )
      {
        v19 = (unsigned __int64)(unsigned int)v40 << 12;
        SystemSection = RtlImageNtHeaderEx(0, BaseOfImage[0], v19, &OutHeaders);
        if ( SystemSection >= 0 )
        {
          v20 = OutHeaders;
          if ( &OutHeaders->OptionalHeader < (_IMAGE_OPTIONAL_HEADER64 *)OutHeaders
            || &OutHeaders->OptionalHeader > (_IMAGE_OPTIONAL_HEADER64 *)((char *)BaseOfImage[0] + v19) )
          {
            SystemSection = -1073741701;
          }
          else
          {
            if ( v19 >= 0xFFFFFFFF )
            {
              SystemSection = -1073739516;
              goto LABEL_30;
            }
            Machine = OutHeaders->FileHeader.Machine;
            if ( Machine != 0x8664 && Machine != 332 && Machine != 0xAA64 )
              v10 = 0;
            if ( !v10 )
            {
              SystemSection = -1073741701;
              goto LABEL_30;
            }
            HotPatchInformation = (unsigned int *)RtlFindHotPatchInformation((char *)BaseOfImage[0], v33);
            if ( !HotPatchInformation )
            {
              SystemSection = -1073741701;
              goto LABEL_30;
            }
            if ( a7 )
            {
              HotPatchBase = RtlFindHotPatchBase(HotPatchInformation, 0);
              if ( !HotPatchBase )
              {
                SystemSection = -1073741701;
                goto LABEL_30;
              }
              *a7 = *((_DWORD *)HotPatchBase + 3);
              a7[1] = *((_DWORD *)HotPatchBase + 2);
              a7[3] = v20->OptionalHeader.CheckSum;
              a7[4] = v20->FileHeader.TimeDateStamp;
              a7[6] = *(_DWORD *)(v24 + 8);
            }
            *v34 = FileHandle;
            FileHandle = 0LL;
            if ( v35 )
            {
              *v35 = Object;
              Object = 0LL;
            }
            if ( a6 )
            {
              *a6 = *(_OWORD *)BaseOfImage;
              a6[1] = v40;
              a6[2] = v41;
              a6[3] = v42;
              a6[4] = v43;
              BaseOfImage[0] = 0LL;
            }
            SystemSection = 0;
          }
        }
      }
    }
  }
LABEL_30:
  if ( BaseOfImage[0] )
    MiUnmapImageInSystemSpace((unsigned __int64 *)BaseOfImage);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x70486D4Du);
  if ( FileHandle )
    ObCloseHandle(FileHandle, 0);
  return (unsigned int)SystemSection;
}
