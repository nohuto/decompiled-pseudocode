/*
 * XREFs of DrvCloseRemoteGraphicsDevices @ 0x140207E1C
 * Callers:
 *     xxxRemoteReconnect @ 0x14024FFF8 (xxxRemoteReconnect.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

struct Gre::Base::SESSION_GLOBALS *DrvCloseRemoteGraphicsDevices()
{
  Gre::Base *v0; // rcx
  struct Gre::Base::SESSION_GLOBALS *result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  struct Gre::Base::SESSION_GLOBALS *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 DxgkWin32kInterface; // rax

  if ( !(unsigned int)UserIsUserCritSecIn() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 437;
  }
  result = Gre::Base::Globals(v0);
  v6 = result;
  v7 = *((_QWORD *)result + 148);
  if ( v7 )
  {
    v8 = *((_QWORD *)result + 148);
    do
    {
      v9 = *(_QWORD *)(v7 + 128);
      if ( (*(_DWORD *)(v7 + 160) & 0x4000000) != 0 )
      {
        *(_QWORD *)(v8 + 128) = v9;
        v10 = v9;
        if ( v8 != v7 )
          v10 = v8;
        v8 = v10;
        if ( *((_QWORD *)v6 + 148) == v7 )
          *((_QWORD *)v6 + 148) = v9;
        if ( *((_QWORD *)v6 + 150) == v7 )
          *((_QWORD *)v6 + 150) = v10;
        --*((_DWORD *)v6 + 312);
        if ( *(_QWORD *)(v7 + 296) )
        {
          DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v3, v2, v4, v5);
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(DxgkWin32kInterface + 400))(
            *(_QWORD *)(v7 + 272),
            0LL,
            *(_QWORD *)(v7 + 280));
          *(_QWORD *)(v7 + 272) = 0LL;
          *(_QWORD *)(v7 + 288) = 0LL;
          *(_QWORD *)(v7 + 296) = 0LL;
        }
        result = (struct Gre::Base::SESSION_GLOBALS *)DrvCleanupOneGraphicsDevice(v7);
      }
      else
      {
        v8 = v7;
      }
      v7 = v9;
    }
    while ( v9 );
  }
  return result;
}
