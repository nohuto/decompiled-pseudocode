/*
 * XREFs of MmShutdownSystem @ 0x140B625C0
 * Callers:
 *     PopGracefulShutdown @ 0x140B5BA88 (PopGracefulShutdown.c)
 *     PoBroadcastSystemState @ 0x140B64C6C (PoBroadcastSystemState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     MiTrimAllSystemPagableMemory @ 0x140678D48 (MiTrimAllSystemPagableMemory.c)
 *     MiShutdownSystem @ 0x140B62174 (MiShutdownSystem.c)
 */

char __fastcall MmShutdownSystem(int a1)
{
  char *v2; // rbx
  __int64 v3; // rdi

  if ( !a1 )
    return MiShutdownSystem();
  if ( a1 == 1 )
  {
    if ( (unsigned int)dword_140E30044 < 2 )
    {
      dword_140E30044 = 2;
      if ( (PopShutdownCleanly & 2) != 0 )
      {
        MiTrimAllSystemPagableMemory(1);
        if ( Count )
        {
          v2 = (char *)&unk_140E3D460;
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
  else if ( (unsigned int)dword_140E30044 < 3 )
  {
    dword_140E30044 = 3;
  }
  return 1;
}
