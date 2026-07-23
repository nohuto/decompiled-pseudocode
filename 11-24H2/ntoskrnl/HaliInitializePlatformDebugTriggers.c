/*
 * XREFs of HaliInitializePlatformDebugTriggers @ 0x1405672D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     HalpAcquirePccInterface @ 0x1407019E4 (HalpAcquirePccInterface.c)
 */

void HaliInitializePlatformDebugTriggers()
{
  __int64 v0; // rdi
  unsigned int v1; // ebx
  unsigned int v2; // r8d
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned int v5; // eax
  __int64 v6; // rdx
  _BYTE *v7; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\DosDevices\\ACPI_ROOT_OBJECT");
  v0 = PdttTable;
  v1 = 0;
  if ( PdttTable )
  {
    v2 = 0;
    v3 = PdttTable + *(unsigned int *)(PdttTable + 40);
    if ( *(_BYTE *)(PdttTable + 36) )
    {
      do
      {
        v4 = v2++;
        *(_QWORD *)(136 * v4 + qword_140E11850) = v3;
        v3 += 2LL;
        v5 = *(unsigned __int8 *)(v0 + 36);
      }
      while ( v2 < v5 );
      if ( (_BYTE)v5 )
      {
        do
        {
          v6 = 136LL * v1;
          v7 = *(_BYTE **)(v6 + qword_140E11850);
          LOBYTE(v7) = *v7;
          HalpAcquirePccInterface(v7, &DestinationString, v6 + qword_140E11850 + 8);
          ++v1;
        }
        while ( v1 < *(unsigned __int8 *)(v0 + 36) );
      }
    }
  }
}
