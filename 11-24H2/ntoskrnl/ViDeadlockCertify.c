/*
 * XREFs of ViDeadlockCertify @ 0x140B9AE48
 * Callers:
 *     ViDeadlockAnalyze @ 0x140B9ABE4 (ViDeadlockAnalyze.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViDeadlockCertify(unsigned __int64 a1, __int64 a2)
{
  _DWORD *v2; // r11
  int *v3; // r8
  int v4; // edx
  int v5; // r8d
  unsigned int i; // r8d
  __int64 v7; // r11
  unsigned int v8; // r8d
  _QWORD *j; // r9
  unsigned int v10; // r11d
  _QWORD *k; // r10

  if ( VfWin32kDllBase
    && VfWin32kDllBase <= a1
    && VfWin32kDllBase + (unsigned __int64)(unsigned int)VfWin32kSizeOfImage > a1
    && *(_BYTE *)(*(_QWORD *)(a2 + 64) + 48LL) )
  {
    return 0LL;
  }
  if ( *((_DWORD *)ViDeadlockGlobals + 8216) >= 3u )
  {
    if ( (v2 = *(_DWORD **)(*((_QWORD *)ViDeadlockGlobals + 4109) + 56LL),
          v3 = *(int **)(*((_QWORD *)ViDeadlockGlobals + 4110) + 56LL),
          *v2 == 5)
      && (v4 = *v3, *v3 == 6)
      || (v4 = *v3, v5 = v4, v4 == 5) && *v2 == 6 )
    {
      if ( VfTcpIpDllBase
        && VfTcpIpDllBase <= a1
        && VfTcpIpDllBase + (unsigned __int64)(unsigned int)VfTcpIpSizeOfImage > a1 )
      {
        return 0LL;
      }
      if ( VfTdxDllBase && VfTdxDllBase <= a1 && VfTdxDllBase + (unsigned __int64)(unsigned int)VfTdxSizeOfImage > a1 )
        return 0LL;
      v5 = v4;
      if ( VfMrxsmbDllBase )
      {
        if ( VfMrxsmbDllBase <= a1 && VfMrxsmbDllBase + (unsigned __int64)(unsigned int)VfMrxsmbSizeOfImage > a1 )
          return 0LL;
      }
    }
    if ( *v2 == 1
      && v5 == 1
      && (VfTmDllBase && VfTmDllBase <= a1 && VfTmDllBase + (unsigned __int64)(unsigned int)VfTmSizeOfImage > a1
       || VfKsDllBase && VfKsDllBase <= a1 && VfKsDllBase + (unsigned __int64)(unsigned int)VfKsSizeOfImage > a1) )
    {
      return 0LL;
    }
  }
  for ( i = 1; i < *((_DWORD *)ViDeadlockGlobals + 8216); ++i )
  {
    v7 = *((_QWORD *)ViDeadlockGlobals + i + 4108);
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)ViDeadlockGlobals + i + 4109) + 56LL) + 8LL) == *(_QWORD *)(*(_QWORD *)(v7 + 56) + 8LL)
      && (*(_DWORD *)(v7 + 72) & 2) != 0 )
    {
      return 0LL;
    }
  }
  v8 = *((_DWORD *)ViDeadlockGlobals + 8216);
  while ( v8 > 1 )
  {
    for ( j = (_QWORD *)**((_QWORD **)ViDeadlockGlobals + --v8 + 4109); j; j = (_QWORD *)*j )
    {
      v10 = v8 - 1;
      while ( v10 )
      {
        for ( k = (_QWORD *)**((_QWORD **)ViDeadlockGlobals + --v10 + 4109); k; k = (_QWORD *)*k )
        {
          if ( *(_QWORD *)(k[7] + 8LL) == *(_QWORD *)(j[7] + 8LL) )
          {
            ++*((_DWORD *)ViDeadlockGlobals + 8207);
            return 0LL;
          }
        }
      }
    }
  }
  return 1LL;
}
