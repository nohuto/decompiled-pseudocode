/*
 * XREFs of PktMonDetachProvider @ 0x1400EC5A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

__int64 PktMonDetachProvider()
{
  _QWORD *v0; // rbx
  void **v1; // rax
  _QWORD *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rdx
  int v5; // eax
  bool v6; // cl

  byte_1401278B0 = 0;
  ExWaitForRundownProtectionReleaseCacheAware(RunRefCacheAware);
  xmmword_1401278D0 = 0LL;
  KeWaitForSingleObject(&PktMonCompMutex, Executive, 0, 0, 0LL);
  while ( (__int64 *)PktMonCompList != &PktMonCompList )
  {
    v0 = qword_140127948;
    if ( *(__int64 **)qword_140127948 != &PktMonCompList
      || (v1 = (void **)*((_QWORD *)qword_140127948 + 1), *v1 != qword_140127948) )
    {
LABEL_18:
      __fastfail(3u);
    }
    --PktMonCompCount;
    qword_140127948 = v1;
    *v1 = &PktMonCompList;
    v2 = v0 + 2;
    while ( (_QWORD *)*v2 != v2 )
    {
      v3 = v0[3];
      if ( *(_QWORD **)v3 != v2 )
        goto LABEL_18;
      v4 = *(_QWORD **)(v3 + 8);
      if ( *v4 != v3 )
        goto LABEL_18;
      v0[3] = v4;
      *v4 = v2;
      *(_OWORD *)v3 = 0LL;
      *(_OWORD *)(v3 + 16) = 0LL;
      *(_QWORD *)(v3 + 32) = 0LL;
    }
    v5 = *((_DWORD *)v0 + 14);
    v6 = (v5 & 1) != 0 || (v5 & 2) != 0;
    *((_DWORD *)v0 + 14) = v5 & 0xFFFFFFFC;
    if ( v6 && qword_1401278C8 )
      qword_1401278C8(v0);
    memset(v0, 0, 0x40uLL);
  }
  KeReleaseMutex(&PktMonCompMutex, 0);
  if ( qword_1401278C0 )
    qword_1401278C0();
  return 0LL;
}
