/*
 * XREFs of MmShutdownSystem @ 0x140B52490
 * Callers:
 *     PopGracefulShutdown @ 0x140B4BB18 (PopGracefulShutdown.c)
 *     PoBroadcastSystemState @ 0x140B54B5C (PoBroadcastSystemState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     MiTrimAllSystemPagableMemory @ 0x14066D43C (MiTrimAllSystemPagableMemory.c)
 *     MiShutdownSystem @ 0x140B52044 (MiShutdownSystem.c)
 */

char __fastcall MmShutdownSystem(int a1)
{
  char *v2; // rbx
  __int64 v3; // rdi

  if ( !a1 )
    return MiShutdownSystem();
  if ( a1 == 1 )
  {
    if ( (unsigned int)dword_140E2FE04 < 2 )
    {
      dword_140E2FE04 = 2;
      if ( (PopShutdownCleanly & 2) != 0 )
      {
        MiTrimAllSystemPagableMemory(1);
        if ( Count )
        {
          v2 = (char *)&unk_140E3D220;
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
  else if ( (unsigned int)dword_140E2FE04 < 3 )
  {
    dword_140E2FE04 = 3;
  }
  return 1;
}
