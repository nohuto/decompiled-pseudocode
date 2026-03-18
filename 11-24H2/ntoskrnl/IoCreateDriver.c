/*
 * XREFs of IoCreateDriver @ 0x140AB1C90
 * Callers:
 *     HaliInitPnpDriver @ 0x1406FE880 (HaliInitPnpDriver.c)
 *     CmpBuildMachineHiveCache @ 0x1407D8C94 (CmpBuildMachineHiveCache.c)
 *     ViIrpLogExposeWmiCallback @ 0x140B9BC50 (ViIrpLogExposeWmiCallback.c)
 *     VfFilterAttach @ 0x140B9CD90 (VfFilterAttach.c)
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 *     PiSwInit @ 0x140C2545C (PiSwInit.c)
 *     WMIInitialize @ 0x140C3C798 (WMIInitialize.c)
 *     CmInitSystem2 @ 0x140C5F4F8 (CmInitSystem2.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     RtlPcToFileHeader @ 0x140452CF0 (RtlPcToFileHeader.c)
 *     RtlStringCchPrintfW @ 0x140476998 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwMakeTemporaryObject @ 0x1406A8730 (ZwMakeTemporaryObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14089C4F0 (ObCreateObjectEx.c)
 *     ObMakeTemporaryObject @ 0x140A68350 (ObMakeTemporaryObject.c)
 *     EtwTiLogDriverObjectLoad @ 0x140A817A4 (EtwTiLogDriverObjectLoad.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall IoCreateDriver(_OWORD *a1, unsigned __int64 a2)
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
  __int64 v15; // r8
  __int64 v16; // r9
  PVOID *Object; // [rsp+20h] [rbp-E0h]
  void *Src[2]; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v20; // [rsp+68h] [rbp-98h] BYREF
  PVOID v21; // [rsp+70h] [rbp-90h] BYREF
  __int128 v22; // [rsp+78h] [rbp-88h]
  _DWORD v23[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v24; // [rsp+90h] [rbp-70h]
  void **v25; // [rsp+98h] [rbp-68h]
  int v26; // [rsp+A0h] [rbp-60h]
  int v27; // [rsp+A4h] [rbp-5Ch]
  __int128 v28; // [rsp+A8h] [rbp-58h]
  wchar_t pszDest[64]; // [rsp+C0h] [rbp-40h] BYREF

  v23[1] = 0;
  v27 = 0;
  v21 = 0LL;
  Handle = 0LL;
  v20 = 0LL;
  *(_OWORD *)Src = 0LL;
  v22 = 0LL;
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
    v25 = Src;
    v23[0] = 48;
    v24 = 0LL;
    v26 = 592;
    v28 = 0LL;
    result = ObCreateObjectEx(0, IoDriverObjectType, (int)v23, 0, (__int64)Object, 424, 0, 0, &v21, 0LL);
    if ( (int)result < 0 )
      return result;
    v7 = (struct _FILE_OBJECT *)v21;
    memset_0(v21, 0, 0x1A8uLL);
    v7->PrivateCacheMap = &v7[1].LastLock;
    v7[1].LastLock = v7;
    *(_DWORD *)&v7->Type = 22020100;
    LODWORD(v7->Vpb) = 4;
    memset64(&v7->Waiters, (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
    *(_QWORD *)&v7->FileName.Length = a2;
    RtlPcToFileHeader(a2, &v20);
    v7->FsContext = v20;
    Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
    *((_QWORD *)&v22 + 1) = Pool2;
    v9 = Pool2;
    if ( Pool2 )
    {
      LOWORD(v22) = Src[0];
      v10 = LOWORD(Src[0]);
      WORD1(v22) = LOWORD(Src[0]) + 2;
      memmove(Pool2, Src[1], LOWORD(Src[0]));
      v11 = v22;
      v9[v10 >> 1] = 0;
      *(_OWORD *)((char *)v7->PrivateCacheMap + 24) = v11;
      inserted = ObInsertObjectEx(v7, 0LL, 1, 0, 0, 0LL, (__int64)&Handle);
      if ( inserted < 0 )
        return (unsigned int)inserted;
      v20 = 0LL;
      v13 = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v20, 0LL);
      v7 = (struct _FILE_OBJECT *)v20;
      inserted = v13;
      if ( v13 < 0 )
      {
        ZwMakeTemporaryObject(Handle);
        ZwClose(Handle);
        return (unsigned int)inserted;
      }
      ZwClose(Handle);
      v14 = ExAllocatePool2(0x40uLL);
      v7->RelatedFileObject = (struct _FILE_OBJECT *)v14;
      if ( v14 )
      {
        v7->FinalStatus = (NTSTATUS)Src[0];
        memmove(v7->RelatedFileObject, Src[1], WORD1(Src[0]));
      }
      inserted = guard_dispatch_icall_no_overrides(v7, 0LL, v15, v16);
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
