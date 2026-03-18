/*
 * XREFs of ?CreatePathPersistentMonitorsIfNeeded@@YAJIPEBUD3DKMT_GETPATHSMODALITY@@PEAG@Z @ 0x140155220
 * Callers:
 *     DrvSetDisplayConfig @ 0x140137640 (DrvSetDisplayConfig.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CreatePathPersistentMonitorsIfNeeded(
        __int64 a1,
        const struct D3DKMT_GETPATHSMODALITY *a2,
        unsigned __int16 *a3)
{
  int v5; // ebp
  unsigned int i; // r14d
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 DxgkWin32kInterface; // rax
  __int64 v13; // [rsp+20h] [rbp-28h]

  v5 = 0;
  if ( a3 )
    *a3 = 0;
  for ( i = 0; i < *((unsigned __int16 *)a2 + 10); ++i )
  {
    v7 = 296LL * i;
    v8 = *(_QWORD *)((char *)a2 + v7 + 56);
    if ( (v8 & 0x1100000000000000LL) != 0x100000000000000LL )
    {
      if ( (v8 & 0x200000000000000LL) != 0 )
      {
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v8);
        v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64))(DxgkWin32kInterface + 224))(
               *(_QWORD *)((char *)a2 + v7 + 72),
               *(unsigned int *)((char *)a2 + v7 + 84),
               0LL,
               2LL,
               v13);
        if ( v5 < 0 )
        {
          WdLogSingleEntry4(4LL, *(int *)((char *)a2 + v7 + 76), *(unsigned int *)((char *)a2 + v7 + 72));
          WdLogGlobalForLineNumber = 14393;
          return (unsigned int)v5;
        }
        if ( (*(_QWORD *)((_BYTE *)a2 + v7 + 56) & 0x1000000000000000LL) != 0 )
        {
          WdLogSingleEntry3(
            5LL,
            *(int *)((char *)a2 + v7 + 76),
            *(unsigned int *)((char *)a2 + v7 + 72),
            *(unsigned int *)((char *)a2 + v7 + 84));
          WdLogGlobalForLineNumber = 14403;
        }
        else if ( a3 )
        {
          ++*a3;
        }
      }
      else
      {
        v9 = *(int *)((char *)a2 + v7 + 76);
        v10 = *(unsigned int *)((char *)a2 + v7 + 84);
        if ( (v8 & 0x1000000000000000LL) == 0 )
        {
          WdLogSingleEntry3(4LL, v10, v9, *(unsigned int *)((char *)a2 + v7 + 72));
          WdLogGlobalForLineNumber = 14374;
          return (unsigned int)-1073741811;
        }
        v13 = 1LL;
        WdLogSingleEntry4(4LL, v10, v9);
        WdLogGlobalForLineNumber = 14366;
      }
    }
  }
  return (unsigned int)v5;
}
