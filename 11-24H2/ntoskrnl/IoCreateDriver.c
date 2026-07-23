/*
 * XREFs of IoCreateDriver @ 0x140AACC00
 * Callers:
 *     HaliInitPnpDriver @ 0x1406FC4C0 (HaliInitPnpDriver.c)
 *     CmpBuildMachineHiveCache @ 0x1407D91E4 (CmpBuildMachineHiveCache.c)
 *     ViIrpLogExposeWmiCallback @ 0x140B9DC50 (ViIrpLogExposeWmiCallback.c)
 *     VfFilterAttach @ 0x140B9ED90 (VfFilterAttach.c)
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 *     PiSwInit @ 0x140C274AC (PiSwInit.c)
 *     WMIInitialize @ 0x140C3E8F0 (WMIInitialize.c)
 *     CmInitSystem2 @ 0x140C61648 (CmInitSystem2.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     RtlPcToFileHeader @ 0x140447DA0 (RtlPcToFileHeader.c)
 *     RtlStringCchPrintfW @ 0x140472F38 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwMakeTemporaryObject @ 0x1406A96D0 (ZwMakeTemporaryObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     ObMakeTemporaryObject @ 0x1409B9330 (ObMakeTemporaryObject.c)
 *     EtwTiLogDriverObjectLoad @ 0x1409B93E8 (EtwTiLogDriverObjectLoad.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall IoCreateDriver(_OWORD *a1, void *a2)
{
  wchar_t *v3; // rax
  __int64 v4; // rdi
  __int64 result; // rax
  unsigned __int64 v6; // rdx
  struct _FILE_OBJECT *v7; // rbx
  _WORD *Pool2; // rax
  _WORD *v9; // r14
  unsigned __int64 v10; // rdi
  __int128 v11; // xmm0
  int inserted; // edi
  NTSTATUS v13; // eax
  __int64 v14; // rax
  PVOID *Object; // [rsp+20h] [rbp-E0h]
  void *Src[2]; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  PVOID BaseOfImage; // [rsp+68h] [rbp-98h] BYREF
  PVOID v19; // [rsp+70h] [rbp-90h] BYREF
  __int128 v20; // [rsp+78h] [rbp-88h]
  _DWORD v21[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v22; // [rsp+90h] [rbp-70h]
  void **v23; // [rsp+98h] [rbp-68h]
  int v24; // [rsp+A0h] [rbp-60h]
  int v25; // [rsp+A4h] [rbp-5Ch]
  __int128 v26; // [rsp+A8h] [rbp-58h]
  wchar_t pszDest[64]; // [rsp+C0h] [rbp-40h] BYREF

  v21[1] = 0;
  v25 = 0;
  v19 = 0LL;
  Handle = 0LL;
  BaseOfImage = 0LL;
  *(_OWORD *)Src = 0LL;
  v20 = 0LL;
  if ( a1 )
  {
    *(_OWORD *)Src = *a1;
    goto LABEL_10;
  }
  RtlStringCchPrintfW(
    pszDest,
    0x3CuLL,
    L"\\Driver\\%08u",
    (unsigned int)_InterlockedIncrement(&IopUniqueDriverObjectNumber));
  v3 = pszDest;
  v4 = 60LL;
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0xC000000D : 0;
  v6 = (60 - v4) & -(__int64)(v4 != 0);
  if ( v4 )
  {
    if ( v6 > 0xFFFF )
      return 2147483653LL;
    LOWORD(Src[0]) = 2 * v6;
    WORD1(Src[0]) = 2 * v6 + 2;
    Src[1] = pszDest;
LABEL_10:
    v23 = Src;
    v21[0] = 48;
    v22 = 0LL;
    v24 = 592;
    v26 = 0LL;
    result = ObCreateObjectEx(0, IoDriverObjectType, (int)v21, 0, (__int64)Object, 424, 0, 0, &v19, 0LL);
    if ( (int)result < 0 )
      return result;
    v7 = (struct _FILE_OBJECT *)v19;
    memset_0(v19, 0, 0x1A8uLL);
    v7->PrivateCacheMap = &v7[1].LastLock;
    v7[1].LastLock = v7;
    *(_DWORD *)&v7->Type = 22020100;
    LODWORD(v7->Vpb) = 4;
    memset64(&v7->Waiters, (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
    *(_QWORD *)&v7->FileName.Length = a2;
    RtlPcToFileHeader(a2, &BaseOfImage);
    v7->FsContext = BaseOfImage;
    Pool2 = (_WORD *)ExAllocatePool2(0x100uLL, LOWORD(Src[0]) + 2LL, 0x334E6F49u);
    *((_QWORD *)&v20 + 1) = Pool2;
    v9 = Pool2;
    if ( Pool2 )
    {
      LOWORD(v20) = Src[0];
      v10 = LOWORD(Src[0]);
      WORD1(v20) = LOWORD(Src[0]) + 2;
      memmove(Pool2, Src[1], LOWORD(Src[0]));
      v11 = v20;
      v9[v10 >> 1] = 0;
      *(_OWORD *)((char *)v7->PrivateCacheMap + 24) = v11;
      inserted = ObInsertObjectEx(v7, 0LL, 1, 0, 0, 0LL, (__int64)&Handle);
      if ( inserted < 0 )
        return (unsigned int)inserted;
      BaseOfImage = 0LL;
      v13 = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &BaseOfImage, 0LL);
      v7 = (struct _FILE_OBJECT *)BaseOfImage;
      inserted = v13;
      if ( v13 < 0 )
      {
        ZwMakeTemporaryObject(Handle);
        ZwClose(Handle);
        return (unsigned int)inserted;
      }
      ZwClose(Handle);
      v14 = ExAllocatePool2(0x40uLL, WORD1(Src[0]), 0x334E6F49u);
      v7->RelatedFileObject = (struct _FILE_OBJECT *)v14;
      if ( v14 )
      {
        v7->FinalStatus = (NTSTATUS)Src[0];
        memmove(v7->RelatedFileObject, Src[1], WORD1(Src[0]));
      }
      inserted = guard_dispatch_icall_no_overrides(v7, 0LL);
      if ( inserted >= 0 )
      {
        EtwTiLogDriverObjectLoad((unsigned __int16 *)Src);
        return (unsigned int)inserted;
      }
    }
    else
    {
      inserted = -1073741670;
    }
    ObMakeTemporaryObject(v7);
    ObfDereferenceObject(v7);
    return (unsigned int)inserted;
  }
  return result;
}
