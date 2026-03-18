/*
 * XREFs of NtTokenManagerCreateFlipObjectReturnTokenHandle @ 0x14004A5A0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14000CC5C (DxgkGetWin32kImportTable.c)
 *     ?Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJPEAV1@PEAXPEAPEAVIDxgkCompositionObject@@@Z3PEAPEAX@Z @ 0x140035FE0 (-Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJP.c)
 *     ?FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAUFlipManagerTokenInitInfo@@@Z @ 0x14004A37C (-FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAUFlipManagerTokenInitInfo@@@Z.c)
 *     ??1FlipManagerTokenInitInfo@@QEAA@XZ @ 0x14004A4A4 (--1FlipManagerTokenInitInfo@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x140065368 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x14018AE14 (RtlCopyToUser.c)
 */

__int64 __fastcall NtTokenManagerCreateFlipObjectReturnTokenHandle(void *a1, void *Src, void *a3)
{
  int ConsumerTokenOperation; // edi
  unsigned __int64 v7; // rsi
  __int64 Win32kImportTable; // rax
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned int v11; // edx
  HANDLE Handle; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp-A0h] BYREF
  unsigned __int64 v15; // [rsp+60h] [rbp-98h]
  __int128 v16; // [rsp+68h] [rbp-90h] BYREF
  __int128 v17; // [rsp+78h] [rbp-80h]
  __int128 v18; // [rsp+88h] [rbp-70h]
  __int128 v19; // [rsp+98h] [rbp-60h] BYREF
  char v20; // [rsp+A8h] [rbp-50h]
  __int64 v21; // [rsp+B0h] [rbp-48h]
  __int64 v22; // [rsp+B8h] [rbp-40h]
  __int64 v23; // [rsp+C0h] [rbp-38h]
  __int64 v24; // [rsp+C8h] [rbp-30h]
  unsigned __int64 v25; // [rsp+118h] [rbp+20h] BYREF

  ConsumerTokenOperation = 0;
  Handle = 0LL;
  v7 = 0LL;
  v15 = 0LL;
  v25 = 0LL;
  v19 = 0LL;
  v20 = 0;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  KeEnterCriticalRegion();
  if ( a3 && Src )
  {
    v14 = 0LL;
    RtlCopyFromUser(&v14, Src, 8uLL);
    v7 = v14;
    v15 = v14;
  }
  else
  {
    ConsumerTokenOperation = -1073741811;
  }
  if ( ConsumerTokenOperation >= 0 )
  {
    Win32kImportTable = DxgkGetWin32kImportTable();
    ConsumerTokenOperation = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(Win32kImportTable + 504))(
                               0x80000000LL,
                               &v25);
    if ( ConsumerTokenOperation >= 0 )
    {
      ConsumerTokenOperation = FlipManagerCreateConsumerTokenOperation(a1, v7, (struct FlipManagerTokenInitInfo *)&v19);
      if ( ConsumerTokenOperation >= 0 )
      {
        LODWORD(v16) = 48;
        *((_QWORD *)&v16 + 1) = 0LL;
        DWORD2(v17) = 0;
        *(_QWORD *)&v17 = 0LL;
        v18 = v25;
        ConsumerTokenOperation = DxgkCompositionObject::Create(
                                   0LL,
                                   (__int64)&v16,
                                   3u,
                                   v9,
                                   5,
                                   160,
                                   (__int64 (__fastcall *)(PVOID, __int64, char *))FlipManagerTokenObject::ObjectInit,
                                   (__int64)&v19,
                                   &Handle);
        if ( ConsumerTokenOperation >= 0 )
        {
          RtlCopyToUser(a3, &Handle, 8uLL);
          Handle = 0LL;
        }
      }
    }
  }
  if ( v25 )
  {
    v10 = DxgkGetWin32kImportTable();
    (*(void (__fastcall **)(unsigned __int64))(v10 + 624))(v25);
  }
  if ( Handle )
    NtClose(Handle);
  KeLeaveCriticalRegion();
  FlipManagerTokenInitInfo::~FlipManagerTokenInitInfo((FlipManagerTokenInitInfo *)&v19, v11);
  return (unsigned int)ConsumerTokenOperation;
}
