/*
 * XREFs of MiOpenHotPatchFile @ 0x140A9FE3C
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x1407F191C (MiApplyImageHotPatchRequest.c)
 *     MiLoadHotPatchForUserSid @ 0x140A9F6C0 (MiLoadHotPatchForUserSid.c)
 *     MiLoadHotPatch @ 0x140A9F9D4 (MiLoadHotPatch.c)
 *     MiCreatePatchSectionRequest @ 0x140AAB9A8 (MiCreatePatchSectionRequest.c)
 * Callees:
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 *     PsGetSessionIdEx @ 0x1403025D0 (PsGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     RtlImageNtHeaderEx @ 0x14041E7E0 (RtlImageNtHeaderEx.c)
 *     MiCreateSystemSection @ 0x14044C348 (MiCreateSystemSection.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140484160 (PdcCreateWatchdogAroundClientCall.c)
 *     Feature_ContainerHotpatching__private_IsEnabledDeviceUsageNoInline @ 0x14067CDEC (Feature_ContainerHotpatching__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x1406A6A70 (ZwOpenFile.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     RtlFindHotPatchBase @ 0x14082F024 (RtlFindHotPatchBase.c)
 *     RtlFindHotPatchInformation @ 0x14082F0C4 (RtlFindHotPatchInformation.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     MiMapImageInSystemSpace @ 0x1408F5378 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1408F560C (MiUnmapImageInSystemSpace.c)
 *     IoCreateFileEx @ 0x14096CAC0 (IoCreateFileEx.c)
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
  BOOL v10; // r14d
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r9
  int SystemSection; // ebx
  int v15; // ebx
  int v16; // esi
  int v17; // eax
  int SessionId; // ecx
  __int64 *v19; // rax
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rbx
  __int16 v22; // ax
  unsigned int *HotPatchInformation; // rax
  char *HotPatchBase; // rax
  __int64 v25; // r10
  ULONG CreateOptions; // [rsp+40h] [rbp-168h]
  int EaBuffer; // [rsp+48h] [rbp-160h]
  HANDLE FileHandle; // [rsp+88h] [rbp-120h] BYREF
  PVOID Object; // [rsp+90h] [rbp-118h] BYREF
  unsigned __int64 v32; // [rsp+98h] [rbp-110h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-108h] BYREF
  int *v34; // [rsp+D0h] [rbp-D8h]
  HANDLE *v35; // [rsp+D8h] [rbp-D0h]
  PVOID *v36; // [rsp+E0h] [rbp-C8h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+E8h] [rbp-C0h] BYREF
  struct _IO_DRIVER_CREATE_CONTEXT DriverContext; // [rsp+F8h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+118h] [rbp-90h]
  __int128 v40; // [rsp+120h] [rbp-88h] BYREF
  __int128 v41; // [rsp+130h] [rbp-78h]
  __int128 v42; // [rsp+140h] [rbp-68h]
  __int128 v43; // [rsp+150h] [rbp-58h]
  __int128 v44; // [rsp+160h] [rbp-48h]

  v35 = a4;
  v36 = a5;
  v34 = a8;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  IoStatusBlock = 0LL;
  memset_0(&v40, 0, 0x50uLL);
  v32 = 0LL;
  Object = 0LL;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( (unsigned int)Feature_ContainerHotpatching__private_IsEnabledDeviceUsageNoInline() )
  {
    memset(&DriverContext, 0, sizeof(DriverContext));
    DriverContext.Size = 40;
    v39 = PdcCreateWatchdogAroundClientCall();
    v10 = 1;
    v11 = IoCreateFileEx(
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
  }
  else
  {
    v11 = ZwOpenFile(&FileHandle, 0x20u, &ObjectAttributes, &IoStatusBlock, 5u, 0);
    v10 = 1;
  }
  SystemSection = v11;
  if ( v11 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( a2 )
    {
      v15 = 2;
      v16 = 285212672;
      v17 = 0;
      SessionId = -1;
    }
    else
    {
      v15 = 16;
      v16 = 0x1000000;
      SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v17 = 1;
    }
    LOBYTE(v12) = a3;
    SystemSection = MiCreateSystemSection(
                      (__int64 *)&Object,
                      v12,
                      (int)&ObjectAttributes,
                      v13,
                      v15,
                      v16,
                      0,
                      (__int64)FileHandle,
                      CreateOptions,
                      EaBuffer,
                      SessionId,
                      v17,
                      a3);
    if ( SystemSection >= 0 )
    {
      v19 = (__int64 *)MiSectionControlArea((__int64)Object);
      SystemSection = MiMapImageInSystemSpace(v19, 1, (__int64)&v40);
      if ( SystemSection >= 0 )
      {
        v20 = (unsigned __int64)(unsigned int)v41 << 12;
        SystemSection = RtlImageNtHeaderEx(0, v40, v20, &v32);
        if ( SystemSection >= 0 )
        {
          v21 = v32;
          if ( v32 + 24 < v32 || v32 + 24 > v20 + (unsigned __int64)v40 )
          {
            SystemSection = -1073741701;
          }
          else
          {
            if ( v20 >= 0xFFFFFFFF )
            {
              SystemSection = -1073739516;
              goto LABEL_30;
            }
            v22 = *(_WORD *)(v32 + 4);
            if ( v22 != -31132 && v22 != 332 )
              v10 = v22 == -21916;
            if ( !v10 )
            {
              SystemSection = -1073741701;
              goto LABEL_30;
            }
            HotPatchInformation = (unsigned int *)RtlFindHotPatchInformation(v40, v34);
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
              a7[3] = *(_DWORD *)(v21 + 88);
              a7[4] = *(_DWORD *)(v21 + 8);
              a7[6] = *(_DWORD *)(v25 + 8);
            }
            *v35 = FileHandle;
            FileHandle = 0LL;
            *v36 = Object;
            Object = 0LL;
            if ( a6 )
            {
              *a6 = v40;
              a6[1] = v41;
              a6[2] = v42;
              a6[3] = v43;
              a6[4] = v44;
              *(_QWORD *)&v40 = 0LL;
            }
            SystemSection = 0;
          }
        }
      }
    }
  }
LABEL_30:
  if ( (_QWORD)v40 )
    MiUnmapImageInSystemSpace((unsigned __int64 *)&v40);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x70486D4Du);
  if ( FileHandle )
    ObCloseHandle(FileHandle, 0);
  return (unsigned int)SystemSection;
}
