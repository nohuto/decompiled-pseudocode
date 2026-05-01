/*
 * XREFs of ?GetWindowList@CClassicWindowManager@@UEAAJPEAPEAU_CLASSIC_WINDOWS@@@Z @ 0x1802F2C10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CClassicWindowManager::GetWindowList(CClassicWindowManager *this, struct _CLASSIC_WINDOWS **a2)
{
  unsigned int v3; // ebx
  RTL_SRWLOCK *v4; // rcx
  struct _CLASSIC_WINDOWS **v5; // r13
  unsigned __int64 v6; // r14
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  char *v9; // r15
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbp
  _QWORD *v12; // r13
  __int64 v13; // r12

  v3 = 0;
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  v5 = a2;
  *a2 = 0LL;
  AcquireSRWLockShared(v4);
  v6 = *((_QWORD *)this + 14);
  v7 = CoTaskMemAlloc(16 * (v6 + 1));
  v8 = v7;
  if ( v7 )
  {
    v9 = (char *)(v7 + 2);
    v10 = 0LL;
    v11 = 0LL;
    if ( !v6 )
      goto LABEL_9;
    v12 = v7 + 2;
    do
    {
      v13 = *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v11);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v13 + 136LL))(v13) )
      {
        *v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13);
        (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v13 + 64LL))(v13, v12 + 1);
        ++v10;
        v12 += 2;
      }
      ++v11;
    }
    while ( v11 < v6 );
    v5 = a2;
    v9 = (char *)(v8 + 2);
    if ( v10 > 0xFFFFFFFF )
    {
      *(_DWORD *)v8 = -1;
      v3 = -2147024362;
    }
    else
    {
LABEL_9:
      *(_DWORD *)v8 = v10;
      v8[1] = v9;
      *v5 = (struct _CLASSIC_WINDOWS *)v8;
      v8 = 0LL;
    }
    CoTaskMemFree(v8);
  }
  else
  {
    v3 = -2147024882;
  }
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return v3;
}
