/*
 * XREFs of NtTokenManagerThread @ 0x14004EB80
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x14000B2D0 (DxgkGetSessionTokenManager.c)
 *     DxgkGetWin32kImportTable @ 0x14000CC5C (DxgkGetWin32kImportTable.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     RtlCopyFromUser @ 0x140065368 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall NtTokenManagerThread(void *Src)
{
  _BYTE *v2; // rdi
  __int64 v3; // rsi
  __int64 Win32kImportTable; // rax
  int v5; // eax
  signed int SessionTokenManager; // ebx
  unsigned int v7; // r14d
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  __int64 v11; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v12; // [rsp+38h] [rbp-E0h]
  _BYTE *v13; // [rsp+40h] [rbp-D8h]
  void *Srca[2]; // [rsp+48h] [rbp-D0h]
  __int64 v15; // [rsp+58h] [rbp-C0h]
  __int128 v16; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+70h] [rbp-A8h]
  _BYTE v18[128]; // [rsp+80h] [rbp-98h] BYREF

  *(_OWORD *)Srca = 0LL;
  v15 = 0LL;
  memset(v18, 0, 0x78uLL);
  v2 = v18;
  v13 = v18;
  v3 = 0LL;
  v11 = 0LL;
  Win32kImportTable = DxgkGetWin32kImportTable();
  v5 = (*(__int64 (**)(void))(Win32kImportTable + 608))();
  SessionTokenManager = v5 == 0 ? 0xC0000022 : 0;
  if ( v5 && Src )
  {
    v16 = 0LL;
    v17 = 0LL;
    RtlCopyFromUser(&v16, Src, 0x18uLL);
    *(_OWORD *)Srca = v16;
    v15 = v17;
  }
  else
  {
    SessionTokenManager = -1073741811;
  }
  if ( SessionTokenManager >= 0 && !(_DWORD)v15 )
    SessionTokenManager = -1073741811;
  KeEnterCriticalRegion();
  v7 = EtwpDisableStackWalkApc();
  v12 = v7;
  if ( SessionTokenManager >= 0 )
  {
    SessionTokenManager = DxgkGetSessionTokenManager(&v11);
    v3 = v11;
    if ( SessionTokenManager >= 0 )
    {
      if ( (unsigned int)v15 > 5 )
      {
        v9 = 24LL * (unsigned int)v15;
        if ( !is_mul_ok((unsigned int)v15, 0x18uLL) )
          v9 = -1LL;
        v2 = (_BYTE *)operator new[](v9, 0x62634D54u, 256LL, v8);
        v13 = v2;
      }
      if ( v2 )
        RtlCopyFromUser(v2, Srca[1], 24LL * (unsigned int)v15);
      else
        SessionTokenManager = -1073741801;
      if ( SessionTokenManager >= 0 )
        SessionTokenManager = (*(__int64 (__fastcall **)(__int64, void *, _BYTE *, _QWORD))(*(_QWORD *)v3 + 72LL))(
                                v3,
                                Srca[0],
                                v2,
                                (unsigned int)v15);
    }
  }
  if ( v2 && v2 != v18 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  EtwpReenableStackWalkApc(v7);
  KeLeaveCriticalRegion();
  return (unsigned int)SessionTokenManager;
}
