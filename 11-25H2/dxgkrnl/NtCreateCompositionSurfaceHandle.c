/*
 * XREFs of NtCreateCompositionSurfaceHandle @ 0x140047DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ObjectInit@CompositionSurfaceObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x140047C00 (-ObjectInit@CompositionSurfaceObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionO.c)
 *     RtlCopyToUser @ 0x14018AE14 (RtlCopyToUser.c)
 */

__int64 __fastcall NtCreateCompositionSurfaceHandle(__int64 a1, ACCESS_MASK a2, void *a3)
{
  __int64 v6; // r9
  __int64 v7; // rcx
  NTSTATUS LocallyUniqueId; // ebx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // eax
  PVOID v11; // rcx
  HANDLE Src[2]; // [rsp+58h] [rbp-10h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  Src[0] = (HANDLE)-1LL;
  KeEnterCriticalRegion();
  Object = 0LL;
  LOBYTE(v6) = 1;
  LOBYTE(v7) = 1;
  LocallyUniqueId = ObCreateObject(v7, g_pDxgkCompositionObjectType, a1, v6, 0LL, 176, 0, 0, &Object);
  if ( LocallyUniqueId >= 0 )
  {
    CurrentProcess = PsGetCurrentProcess();
    ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
    *((_DWORD *)Object + 2) = ProcessSessionId;
    LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)Object + 3);
    v11 = Object;
    if ( LocallyUniqueId < 0
      || (LocallyUniqueId = CompositionSurfaceObject::ObjectInit(
                              (struct DxgkCompositionObject *)Object,
                              0LL,
                              (struct IDxgkCompositionObject **)Object + 2),
          v11 = Object,
          LocallyUniqueId < 0) )
    {
      ObfDereferenceObject(v11);
    }
    else
    {
      LocallyUniqueId = ObInsertObject(Object, 0LL, a2, 0, 0LL, Src);
    }
  }
  if ( a3 )
    RtlCopyToUser(a3, Src, 8uLL);
  else
    LocallyUniqueId = -1073741811;
  if ( LocallyUniqueId < 0 && Src[0] != (HANDLE)-1LL )
    NtClose(Src[0]);
  KeLeaveCriticalRegion();
  return (unsigned int)LocallyUniqueId;
}
