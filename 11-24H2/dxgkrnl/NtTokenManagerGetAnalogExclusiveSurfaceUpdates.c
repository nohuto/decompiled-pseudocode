/*
 * XREFs of NtTokenManagerGetAnalogExclusiveSurfaceUpdates @ 0x140099AE0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x14001A800 (DxgkGetSessionTokenManager.c)
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x14018D054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtTokenManagerGetAnalogExclusiveSurfaceUpdates(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        void *a5)
{
  int SessionTokenManager; // edi
  __int64 Win32kImportTable; // rax
  unsigned int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // r8
  unsigned int v12; // ecx
  unsigned int v14; // [rsp+30h] [rbp-678h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-674h] BYREF
  int v16; // [rsp+38h] [rbp-670h] BYREF
  unsigned int v17; // [rsp+3Ch] [rbp-66Ch]
  __int64 v18; // [rsp+40h] [rbp-668h] BYREF
  unsigned int v19; // [rsp+48h] [rbp-660h]
  unsigned int v20; // [rsp+50h] [rbp-658h]
  __int64 v21; // [rsp+58h] [rbp-650h]
  __int64 v22; // [rsp+60h] [rbp-648h]
  void *v23; // [rsp+68h] [rbp-640h]
  void *v24; // [rsp+70h] [rbp-638h]
  _BYTE Src[1504]; // [rsp+80h] [rbp-628h] BYREF

  v21 = a2;
  v17 = a1;
  v19 = a1;
  v22 = a2;
  v20 = a3;
  v23 = a4;
  v24 = a5;
  v14 = 0;
  v16 = 0;
  v18 = 0LL;
  KeEnterCriticalRegion();
  SessionTokenManager = DxgkGetSessionTokenManager(&v18);
  if ( SessionTokenManager >= 0
    && (Win32kImportTable = DxgkGetWin32kImportTable(), (*(unsigned int (**)(void))(Win32kImportTable + 608))()) )
  {
    v16 = 1;
    v15 = 0;
    v9 = v14;
    v10 = v18;
    while ( a3 > v9 && v16 )
    {
      v11 = a3 - v9;
      if ( (unsigned int)v11 > 4 )
        v11 = 4LL;
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _BYTE *, unsigned int *))(*(_QWORD *)v10 + 128LL))(
              v10,
              v17,
              v11,
              Src,
              &v15);
      v12 = v15;
      if ( v15 )
      {
        RtlCopyToUser((void *)(v21 + 376LL * v14), Src, 376LL * v15);
        v12 = v15;
      }
      v9 = v12 + v14;
      v14 += v12;
    }
  }
  else
  {
    SessionTokenManager = -1073741790;
    v10 = v18;
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  KeLeaveCriticalRegion();
  RtlCopyToUser(a4, &v14, 4uLL);
  RtlCopyToUser(a5, &v16, 4uLL);
  return (unsigned int)SessionTokenManager;
}
