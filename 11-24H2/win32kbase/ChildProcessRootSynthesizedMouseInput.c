/*
 * XREFs of ChildProcessRootSynthesizedMouseInput @ 0x140212350
 * Callers:
 *     _lambda_8c448fb33d037e95b4f6f526a46cb96d_::_lambda_invoker_cdecl_ @ 0x140215530 (_lambda_8c448fb33d037e95b4f6f526a46cb96d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140047544 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     SynthesizePTPMouseInput @ 0x1401899D0 (SynthesizePTPMouseInput.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall ChildProcessRootSynthesizedMouseInput(__int64 a1)
{
  char **v1; // r14
  char *v2; // rsi
  __int64 v3; // rax
  unsigned int v4; // r15d
  unsigned __int64 v5; // rcx
  __int64 v6; // r12
  unsigned __int64 i; // rbp
  __int64 v8; // rdi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // [rsp+30h] [rbp-58h] BYREF
  __int128 v12; // [rsp+38h] [rbp-50h]
  __int64 v13; // [rsp+48h] [rbp-40h]
  __int64 v14; // [rsp+50h] [rbp-38h]
  __int64 v15; // [rsp+58h] [rbp-30h]

  v1 = *(char ***)(W32GetUserSessionState(a1) + 19544);
  CPushLock::AcquireLockExclusive((CPushLock *)(v1 + 2));
  while ( 1 )
  {
    v2 = *v1;
    if ( *v1 == (char *)v1 )
      break;
    if ( *((char ***)v2 + 1) != v1 || (v3 = *(_QWORD *)v2, *(char **)(*(_QWORD *)v2 + 8LL) != v2) )
      __fastfail(3u);
    *v1 = (char *)v3;
    v4 = 0;
    *(_QWORD *)(v3 + 8) = v1;
    v5 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
    v6 = (v5 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    for ( i = gliQpcFreq.QuadPart * v6 / 0x3E8uLL; v4 < *((_DWORD *)v2 + 8); ++v4 )
    {
      v13 = 0LL;
      v15 = 0LL;
      v8 = 28LL * v4;
      v12 = 0LL;
      v14 = *((_QWORD *)v2 + 3);
      v9 = *(_QWORD *)(W32GetUserSessionState(v5) + 19240);
      v10 = *(_DWORD *)&v2[v8 + 60];
      v11 = v9;
      SynthesizePTPMouseInput(*((_QWORD *)v2 + 2), (__int64)&v2[v8 + 36], v6, i, v10, (struct PTPMouseInputData *)&v11);
    }
    GreDeleteFastMutex(v2);
  }
  CPushLock::ReleaseLock((CPushLock *)(v1 + 2));
}
