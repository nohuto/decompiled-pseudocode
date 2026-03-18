/*
 * XREFs of EngFntCacheLookUp @ 0x1401580E0
 * Callers:
 *     ?CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140157D90 (-CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

PVOID __stdcall EngFntCacheLookUp(ULONG FastCheckSum, ULONG *pulSize)
{
  void *v2; // rbx
  __int64 v5; // r8
  __int64 *v6; // rax
  __int64 v7; // r9
  unsigned int i; // ecx
  _DWORD *v9; // rcx
  ULONG v10; // eax

  v2 = 0LL;
  *pulSize = 0;
  if ( !FastCheckSum )
    return 0LL;
  v5 = *(_QWORD *)(W32GetSessionState(FastCheckSum, pulSize) + 96);
  if ( (*(_DWORD *)(v5 + 19592) & 1) != 0 )
  {
    v6 = *(__int64 **)(v5 + 19600);
    if ( v6 )
    {
      v7 = *v6;
      if ( *v6 )
      {
        for ( i = *(_DWORD *)(v7 + 4LL * (FastCheckSum % 0x3D) + 72); i != -1; i = v9[2] )
        {
          v9 = (_DWORD *)(v7 + 80 * (i + 4LL));
          if ( FastCheckSum == *v9 )
          {
            if ( (v9[6] & 1) == 0 )
            {
              v10 = v9[4];
              *pulSize = v10;
              if ( v10 )
                return (PVOID)(*(_QWORD *)(*(_QWORD *)(v5 + 19600) + 24LL) + (unsigned int)v9[5]);
            }
            return v2;
          }
        }
      }
    }
  }
  return v2;
}
