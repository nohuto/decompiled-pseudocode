/*
 * XREFs of CmpFreeAllMemory @ 0x1407D56E0
 * Callers:
 *     CmShutdownSystem2 @ 0x1406664E4 (CmShutdownSystem2.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     CmpDumpKeyBodyList @ 0x1407DB190 (CmpDumpKeyBodyList.c)
 *     CmpGetNextActiveHive @ 0x1408E280C (CmpGetNextActiveHive.c)
 *     CmpDestroyHive @ 0x14096495C (CmpDestroyHive.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 */

void CmpFreeAllMemory()
{
  unsigned int v0; // ebp
  __int64 NextActiveHive; // rbx
  int v2; // ecx
  int v3; // eax
  __int64 v4; // rsi
  __int64 *v5; // rsi
  __int64 v6; // r14
  __int64 i; // rdi
  int v8; // [rsp+30h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-40h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v0 = 0;
  NextActiveHive = CmpGetNextActiveHive(0LL);
  if ( NextActiveHive )
  {
    do
    {
      v2 = *(_DWORD *)(NextActiveHive + 1656);
      v3 = 0;
      v4 = *(_QWORD *)(NextActiveHive + 1648);
      v8 = 0;
      if ( v2 > 0 )
      {
        v5 = (__int64 *)(v4 + 16);
        v6 = (unsigned int)v2;
        do
        {
          for ( i = *v5; i; i = *(_QWORD *)(i + 8) )
            CmpDumpKeyBodyList(i - 16, &v8, 0LL);
          v5 += 3;
          --v6;
        }
        while ( v6 );
        v3 = v8;
      }
      v0 += v3;
      CmpAttachToRegistryProcess(&ApcState);
      CmpDestroyHive(NextActiveHive);
      CmpDetachFromRegistryProcess(&ApcState);
      NextActiveHive = CmpGetNextActiveHive(NextActiveHive);
    }
    while ( NextActiveHive );
    if ( v0 )
      KeBugCheckEx(0x51u, 0xFuLL, 1uLL, v0, 0LL);
  }
  ExFreePoolWithTag(CmpNameCacheTable, 0);
}
