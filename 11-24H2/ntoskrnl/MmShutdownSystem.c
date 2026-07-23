/*
 * XREFs of MmShutdownSystem @ 0x140B64690
 * Callers:
 *     PopGracefulShutdown @ 0x140B5DAF8 (PopGracefulShutdown.c)
 *     PoBroadcastSystemState @ 0x140B66DA4 (PoBroadcastSystemState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     MiTrimAllSystemPagableMemory @ 0x140679F28 (MiTrimAllSystemPagableMemory.c)
 *     MiShutdownSystem @ 0x140B64244 (MiShutdownSystem.c)
 */

char __fastcall MmShutdownSystem(int a1)
{
  char *v2; // rbx
  __int64 v3; // rdi

  if ( !a1 )
    return MiShutdownSystem();
  if ( a1 == 1 )
  {
    if ( (unsigned int)dword_140E30184 < 2 )
    {
      dword_140E30184 = 2;
      if ( (PopShutdownCleanly & 2) != 0 )
      {
        MiTrimAllSystemPagableMemory(1);
        if ( Count )
        {
          v2 = (char *)&unk_140E3D5A0;
          v3 = Count;
          do
          {
            if ( (*(_WORD *)(*(_QWORD *)v2 + 172LL) & 0x840) == 0 )
              ObfDereferenceObjectWithTag(*(PVOID *)(*(_QWORD *)v2 + 24LL), 0x66506D4Du);
            v2 += 8;
            --v3;
          }
          while ( v3 );
        }
      }
    }
  }
  else if ( (unsigned int)dword_140E30184 < 3 )
  {
    dword_140E30184 = 3;
  }
  return 1;
}
