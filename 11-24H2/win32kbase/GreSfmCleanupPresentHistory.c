/*
 * XREFs of GreSfmCleanupPresentHistory @ 0x140092D50
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x140092B70 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     PALLOCMEM @ 0x14008F85C (PALLOCMEM.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void GreSfmCleanupPresentHistory()
{
  _BYTE *v0; // rdi
  __int64 DxgkWin32kInterface; // rax
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  unsigned int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  _DWORD v11[2]; // [rsp+38h] [rbp-49h] BYREF
  _BYTE *v12; // [rsp+40h] [rbp-41h]
  _DWORD v13[4]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE Buffer[112]; // [rsp+58h] [rbp-29h] BYREF

  v11[1] = 0;
  memset(Buffer, 0, 0x64uLL);
  v11[0] = 0;
  v0 = Buffer;
  v12 = 0LL;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
  LOBYTE(v2) = 1;
  if ( (*(int (__fastcall **)(_DWORD *, _QWORD, __int64, _QWORD))(DxgkWin32kInterface + 72))(v11, 0LL, v2, 0LL) >= 0 )
  {
    v3 = v11[0];
    if ( v11[0] )
    {
      if ( v11[0] <= 5u || (v0 = (_BYTE *)PALLOCMEM((unsigned int)(20 * v11[0]), 0x706D7447u)) != 0LL )
      {
        memset(v0, 0, 20 * v3);
        v12 = v0;
        v4 = DxDdGetDxgkWin32kInterface();
        LOBYTE(v5) = 1;
        if ( (*(int (__fastcall **)(_DWORD *, _QWORD, __int64, _QWORD))(v4 + 72))(v11, 0LL, v5, 0LL) >= 0
          && v11[0]
          && v11[0] <= (unsigned int)v3 )
        {
          v6 = 0LL;
          do
          {
            v7 = *(_DWORD *)&v12[20 * v6];
            v8 = DxDdGetDxgkWin32kInterface();
            if ( (*(int (__fastcall **)(_QWORD))(v8 + 136))(v7) >= 0 )
            {
              v9 = DxDdGetDxgkWin32kInterface();
              (*(void (__fastcall **)(_QWORD))(v9 + 112))(v7);
            }
            v13[0] = *(_DWORD *)&v12[20 * v6];
            v10 = DxDdGetDxgkWin32kInterface();
            (*(void (__fastcall **)(_DWORD *, _QWORD))(v10 + 88))(v13, 0LL);
            v6 = (unsigned int)(v6 + 1);
          }
          while ( (unsigned int)v6 < v11[0] );
        }
        if ( v0 != Buffer )
          GreDeleteFastMutex(v0);
      }
    }
  }
}
