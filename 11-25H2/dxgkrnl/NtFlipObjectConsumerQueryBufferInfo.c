/*
 * XREFs of NtFlipObjectConsumerQueryBufferInfo @ 0x14005C800
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14000AC94 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x14005C250 (-ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x140065368 (RtlCopyFromUser.c)
 *     RtlCopyToUser @ 0x14018AE14 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x14018AE78 (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall NtFlipObjectConsumerQueryBufferInfo(void *a1, void *a2, void *a3, __int64 a4)
{
  unsigned __int64 v7; // r12
  __int64 v8; // r8
  int v9; // ebx
  struct FlipManagerObject *v10; // rdi
  struct FlipManagerObject *v12; // [rsp+20h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-40h]
  struct _LUID Src[7]; // [rsp+40h] [rbp-38h] BYREF

  if ( a1 && a2 && a3 && a4 )
  {
    v12 = 0LL;
    Src[0] = 0LL;
    Handle = 0LL;
    v15 = 0LL;
    v14 = 0LL;
    RtlCopyFromUser(&v14, a2, 8uLL);
    v7 = v14;
    v15 = v14;
    KeEnterCriticalRegion();
    v9 = FlipManagerObject::ResolveHandle(a1, 1u, v8, &v12);
    v10 = v12;
    if ( v9 >= 0 )
    {
      v9 = FlipManagerObject::ConsumerQueryBufferInfo(v12, v7, Src, &Handle);
      if ( v9 >= 0 )
      {
        RtlCopyToUser(a3, Src, 8uLL);
        RtlWriteULong64ToUser(a4, Handle);
        Handle = 0LL;
      }
    }
    if ( v10 )
      ObfDereferenceObject(v10);
    if ( Handle )
      ObCloseHandle(Handle, 1);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
