/*
 * XREFs of AddHmodDependency @ 0x1C003D49C
 * Callers:
 *     _RegisterUserApiHook @ 0x1C003AC64 (_RegisterUserApiHook.c)
 *     zzzSetWindowsHookEx @ 0x1C003DEE0 (zzzSetWindowsHookEx.c)
 *     _SetWinEventHook @ 0x1C003F2F4 (_SetWinEventHook.c)
 *     _RegisterDManipHook @ 0x1C0084750 (_RegisterDManipHook.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

void __fastcall AddHmodDependency(int a1)
{
  __int64 v1; // rsi
  unsigned int DLT; // eax
  char *v3; // rbx
  int v4; // edi
  tagDomLock *v5; // rcx
  tagDomLock *DomainLockRef; // [rsp+20h] [rbp-48h]
  char v7; // [rsp+28h] [rbp-40h] BYREF
  __int64 v8; // [rsp+30h] [rbp-38h]
  char v9; // [rsp+38h] [rbp-30h]
  __int64 v10; // [rsp+40h] [rbp-28h]
  char v11; // [rsp+48h] [rbp-20h]

  v1 = a1;
  DLT = DLT_CLIENTLIB::getDLT();
  v7 = 1;
  v3 = &v7;
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v8 = gDomainDummyLock;
  v10 = 0LL;
  v4 = 0;
  v11 = 0;
  v9 = 0;
  do
  {
    v5 = (tagDomLock *)*((_QWORD *)v3 - 1);
    if ( v5 )
    {
      if ( *v3 )
        tagDomLock::LockExclusive(v5);
      else
        tagDomLock::LockShared(v5);
    }
    ++v4;
    v3 += 16;
  }
  while ( !v4 );
  v11 = 1;
  if ( (int)v1 < catomSysTableEntries )
    ++*((_DWORD *)&acatomSysDepends + v1);
  if ( DomainLockRef )
  {
    if ( v7 )
      tagDomLock::UnLockExclusive(DomainLockRef);
    else
      tagDomLock::UnLockShared(DomainLockRef);
  }
}
