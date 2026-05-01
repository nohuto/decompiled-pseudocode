/*
 * XREFs of ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x1806799F8
 * Callers:
 *     ?GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z @ 0x180679980 (-GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z.c)
 * Callees:
 *     ?OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAX@Z @ 0x18018FF88 (-OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAX@Z.c)
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1801B59F8 (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ?GetPackageSidFromProcessToken@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x180679A5C (-GetPackageSidFromProcessToken@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CallerIdentity::GetPackageSidFromProcessHandle(CallerIdentity *this, _QWORD *a2, void **a3)
{
  signed int v4; // eax
  void **v5; // r8
  signed int PackageSidFromProcessToken; // ebx
  void *TokenHandle; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  TokenHandle = 0LL;
  v4 = ARI::ProcessToken::SysAppId::OpenTokenForProcess(this, &TokenHandle, a3);
  PackageSidFromProcessToken = v4;
  if ( v4 > 0 )
    PackageSidFromProcessToken = (unsigned __int16)v4 | 0x80070000;
  if ( PackageSidFromProcessToken >= 0 )
    PackageSidFromProcessToken = CallerIdentity::GetPackageSidFromProcessToken(TokenHandle, a2, v5);
  CAutoHandle<void *>::~CAutoHandle<void *>(&TokenHandle);
  return (unsigned int)PackageSidFromProcessToken;
}
