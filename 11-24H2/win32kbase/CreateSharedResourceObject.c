/*
 * XREFs of CreateSharedResourceObject @ 0x14007390C
 * Callers:
 *     CreateSharedSystemVisualObject @ 0x140072F50 (CreateSharedSystemVisualObject.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x14009C810 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     NtDCompositionCreateSharedResourceHandle @ 0x140194530 (NtDCompositionCreateSharedResourceHandle.c)
 *     CreateSharedSystemVisualBitmapObject @ 0x1402228B0 (CreateSharedSystemVisualBitmapObject.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x140017D80 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x140073A80 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x140074A68 (-ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionO.c)
 */

__int64 __fastcall CreateSharedResourceObject(void *a1, struct DirectComposition::ResourceObject **a2)
{
  unsigned int v3; // esi
  int inserted; // ebx
  char *v5; // rdi
  NTSTATUS LocallyUniqueId; // eax
  PVOID v7; // rcx
  int v8; // eax
  _QWORD v10[6]; // [rsp+50h] [rbp-30h] BYREF
  PVOID Object; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+48h] BYREF

  v3 = (unsigned int)a1;
  Object = 0LL;
  inserted = UserAllocDefaultCompositionSecurityDescriptor(0x80000000, (struct _ACL **)&Object);
  if ( inserted >= 0 )
  {
    v5 = (char *)Object;
    v10[0] = 48LL;
    v10[3] = 512LL;
    Handle = 0LL;
    v10[1] = 0LL;
    v10[2] = 0LL;
    v10[4] = Object;
    v10[5] = 0LL;
    Object = 0LL;
    inserted = ObCreateObject(0LL, ExCompositionObjectType, v10);
    if ( inserted >= 0 )
    {
      *(_DWORD *)Object = W32GetCurrentWin32kSessionId();
      LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)Object + 2);
      v7 = Object;
      inserted = LocallyUniqueId;
      if ( LocallyUniqueId < 0
        || (v8 = DirectComposition::ResourceObject::ObjectInit(
                   (struct CompositionObject *)Object,
                   (void *)v3,
                   (struct ICompositionObject **)Object + 1),
            v7 = Object,
            inserted = v8,
            v8 < 0) )
      {
        ObfDereferenceObject(v7);
LABEL_8:
        GreDeleteFastMutex(v5);
        return (unsigned int)inserted;
      }
      inserted = ObInsertObject(Object, 0LL, 3u, 0, 0LL, &Handle);
    }
    if ( inserted >= 0 )
    {
      inserted = DirectComposition::ResourceObject::ResolveHandle(Handle, 3u, 0, a2);
      ObCloseHandle(Handle, 0);
    }
    goto LABEL_8;
  }
  return (unsigned int)inserted;
}
