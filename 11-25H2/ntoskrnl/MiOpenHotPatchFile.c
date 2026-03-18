/*
 * XREFs of MiOpenHotPatchFile @ 0x140A992CC
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x1407E1A7C (MiApplyImageHotPatchRequest.c)
 *     MiLoadHotPatchForUserSid @ 0x140A98B50 (MiLoadHotPatchForUserSid.c)
 *     MiLoadHotPatch @ 0x140A98E64 (MiLoadHotPatch.c)
 *     MiCreatePatchSectionRequest @ 0x140AA63E8 (MiCreatePatchSectionRequest.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     RtlImageNtHeaderEx @ 0x140420FB0 (RtlImageNtHeaderEx.c)
 *     MiCreateSystemSection @ 0x14049DE3C (MiCreateSystemSection.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x14069B7A0 (ZwOpenFile.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlFindHotPatchBase @ 0x14081F2E4 (RtlFindHotPatchBase.c)
 *     RtlFindHotPatchInformation @ 0x14081F384 (RtlFindHotPatchInformation.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     MiMapImageInSystemSpace @ 0x140943ED0 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x140944164 (MiUnmapImageInSystemSpace.c)
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
  __int64 v10; // rdx
  int SystemSection; // ebx
  __int64 v12; // r9
  int v13; // r14d
  int v14; // ebx
  int v15; // esi
  int v16; // eax
  int SessionId; // ecx
  __int64 *v18; // rax
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rbx
  __int16 v21; // ax
  unsigned int *HotPatchInformation; // rax
  char *HotPatchBase; // rax
  __int64 v24; // r10
  int v26; // [rsp+40h] [rbp-138h]
  int v27; // [rsp+48h] [rbp-130h]
  PVOID Object; // [rsp+78h] [rbp-100h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp-F8h] BYREF
  unsigned __int64 v31; // [rsp+90h] [rbp-E8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-E0h] BYREF
  int *v33; // [rsp+C8h] [rbp-B0h]
  HANDLE *v34; // [rsp+D0h] [rbp-A8h]
  PVOID *v35; // [rsp+D8h] [rbp-A0h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+E0h] [rbp-98h] BYREF
  __int128 v37; // [rsp+F0h] [rbp-88h] BYREF
  __int128 v38; // [rsp+100h] [rbp-78h]
  __int128 v39; // [rsp+110h] [rbp-68h]
  __int128 v40; // [rsp+120h] [rbp-58h]
  __int128 v41; // [rsp+130h] [rbp-48h]

  v34 = a4;
  v35 = a5;
  v33 = a8;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  IoStatusBlock = 0LL;
  memset_0(&v37, 0, 0x50uLL);
  v31 = 0LL;
  Object = 0LL;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  SystemSection = ZwOpenFile(&FileHandle, 0x20u, &ObjectAttributes, &IoStatusBlock, 5u, 0);
  if ( SystemSection >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v13 = 1;
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
    LOBYTE(v10) = a3;
    SystemSection = MiCreateSystemSection(
                      (__int64 *)&Object,
                      v10,
                      (int)&ObjectAttributes,
                      v12,
                      v14,
                      v15,
                      0,
                      (__int64)FileHandle,
                      v26,
                      v27,
                      SessionId,
                      v16,
                      a3);
    if ( SystemSection >= 0 )
    {
      v18 = (__int64 *)MiSectionControlArea((__int64)Object);
      SystemSection = MiMapImageInSystemSpace(v18, 1, (__int64)&v37);
      if ( SystemSection >= 0 )
      {
        v19 = (unsigned __int64)(unsigned int)v38 << 12;
        SystemSection = RtlImageNtHeaderEx(0, v37, v19, &v31);
        if ( SystemSection >= 0 )
        {
          v20 = v31;
          if ( v31 + 24 < v31 || v31 + 24 > v19 + (unsigned __int64)v37 )
          {
            SystemSection = -1073741701;
          }
          else
          {
            if ( v19 >= 0xFFFFFFFF )
            {
              SystemSection = -1073739516;
              goto LABEL_28;
            }
            v21 = *(_WORD *)(v31 + 4);
            if ( v21 != -31132 && v21 != 332 && v21 != -21916 )
              v13 = 0;
            if ( !v13 )
            {
              SystemSection = -1073741701;
              goto LABEL_28;
            }
            HotPatchInformation = (unsigned int *)RtlFindHotPatchInformation(v37, v33);
            if ( !HotPatchInformation )
            {
              SystemSection = -1073741701;
              goto LABEL_28;
            }
            if ( a7 )
            {
              HotPatchBase = RtlFindHotPatchBase(HotPatchInformation, 0);
              if ( !HotPatchBase )
              {
                SystemSection = -1073741701;
                goto LABEL_28;
              }
              *a7 = *((_DWORD *)HotPatchBase + 3);
              a7[1] = *((_DWORD *)HotPatchBase + 2);
              a7[3] = *(_DWORD *)(v20 + 88);
              a7[4] = *(_DWORD *)(v20 + 8);
              a7[6] = *(_DWORD *)(v24 + 8);
            }
            *v34 = FileHandle;
            FileHandle = 0LL;
            *v35 = Object;
            Object = 0LL;
            if ( a6 )
            {
              *a6 = v37;
              a6[1] = v38;
              a6[2] = v39;
              a6[3] = v40;
              a6[4] = v41;
              *(_QWORD *)&v37 = 0LL;
            }
            SystemSection = 0;
          }
        }
      }
    }
  }
LABEL_28:
  if ( (_QWORD)v37 )
    MiUnmapImageInSystemSpace((unsigned __int64 *)&v37);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x70486D4Du);
  if ( FileHandle )
    ObCloseHandle(FileHandle, 0);
  return (unsigned int)SystemSection;
}
