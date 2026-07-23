/*
 * XREFs of EtwpUpdateEnableMask @ 0x14083745C
 * Callers:
 *     NtTraceEvent @ 0x1402CE8A0 (NtTraceEvent.c)
 *     EtwpRegisterUMProvider @ 0x140838D50 (EtwpRegisterUMProvider.c)
 *     EtwpRegisterKMProvider @ 0x1409EA1C4 (EtwpRegisterKMProvider.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140405330 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpCheckLoggerControlAccess @ 0x1408375F4 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x140945104 (EtwpReleaseLoggerContext.c)
 */

char __fastcall EtwpUpdateEnableMask(__int64 a1, char a2, char a3, char a4, _WORD *a5)
{
  char result; // al
  _DWORD *v6; // rsi
  unsigned int i; // r14d
  __int64 v10; // rbx
  int v11; // ebp
  __int64 v12; // rdi
  __int64 v13; // r15
  unsigned int *v14; // rbx

  result = a3;
  v6 = (_DWORD *)(a1 + 136);
  for ( i = 0; i < 0x10; ++i )
  {
    if ( *(v6 - 2) )
    {
      if ( !result || (*v6 & 0x400) != 0 )
      {
        v10 = *((unsigned __int16 *)v6 - 1);
        v11 = 0;
        if ( !a2 || (_DWORD)v10 == *(unsigned __int16 *)(a1 + 88) )
        {
          v12 = *(_QWORD *)(a1 + 648);
          v13 = *((unsigned __int16 *)v6 - 1);
          if ( (unsigned int)v10 < *(_DWORD *)(v12 + 16)
            && (*(_QWORD *)(*(_QWORD *)(v12 + 712) + 8 * v10) & 1) == 0
            && ExAcquireRundownProtectionCacheAwareEx(
                 *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v12 + 704) + 8 * v10),
                 1u) )
          {
            if ( (unsigned int)v10 >= *(_DWORD *)(v12 + 16)
              || (_mm_lfence(),
                  v14 = *(unsigned int **)(*(_QWORD *)(v12 + 712) + 8 * v10),
                  ((unsigned __int8)v14 & 1) != 0) )
            {
              ExReleaseRundownProtectionCacheAwareEx(
                *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v12 + 704) + 8 * v13),
                1u);
            }
            else if ( v14[80] )
            {
              if ( v14 )
              {
                if ( !a4 || a2 )
                {
                  if ( (v14[3] & 0x1000000) != 0 )
                    v11 = -1073741790;
                }
                else if ( (v14[3] & 0x80u) != 0 )
                {
                  v11 = EtwpCheckLoggerControlAccess(0x200u);
                }
                ExReleaseRundownProtectionCacheAwareEx(
                  *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v14 + 170) + 704LL) + 8LL * *v14),
                  1u);
                if ( !v11 )
                  *a5 |= 1 << (i & 0xF);
              }
            }
            else
            {
              EtwpReleaseLoggerContext(v14, 0LL);
            }
          }
        }
      }
      result = a3;
    }
    v6 += 8;
  }
  return result;
}
