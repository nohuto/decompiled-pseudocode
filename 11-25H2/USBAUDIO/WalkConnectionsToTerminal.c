/*
 * XREFs of WalkConnectionsToTerminal @ 0x140033E58
 * Callers:
 *     PropertySetCopyProtection @ 0x14003370C (PropertySetCopyProtection.c)
 *     WalkConnectionsToTerminal @ 0x140033E58 (WalkConnectionsToTerminal.c)
 * Callees:
 *     SetCopyProtectionOnTerminal @ 0x140033D0C (SetCopyProtectionOnTerminal.c)
 *     WalkConnectionsToTerminal @ 0x140033E58 (WalkConnectionsToTerminal.c)
 */

__int64 __fastcall WalkConnectionsToTerminal(IRP *a1, __int64 a2, unsigned int *a3)
{
  PKSFILTER FilterFromIrp; // rax
  __int64 v7; // r9
  const KSFILTER_DESCRIPTOR *Descriptor; // rax
  ULONG v9; // ebx
  ULONG ConnectionsCount; // ebp
  const KSTOPOLOGY_CONNECTION *Connections; // r15
  const KSTOPOLOGY_CONNECTION *v12; // rdi
  int v13; // eax

  FilterFromIrp = KsGetFilterFromIrp(a1);
  v7 = 0LL;
  if ( *(_DWORD *)(a2 + 8) == -1 )
  {
    LODWORD(v7) = SetCopyProtectionOnTerminal(a1, *(_DWORD *)(a2 + 12), a3);
  }
  else if ( FilterFromIrp )
  {
    Descriptor = FilterFromIrp->Descriptor;
    v9 = 0;
    ConnectionsCount = Descriptor->ConnectionsCount;
    Connections = Descriptor->Connections;
    if ( ConnectionsCount )
    {
      v12 = Descriptor->Connections;
      do
      {
        if ( v12->FromNode == *(_DWORD *)(a2 + 8) )
        {
          v13 = WalkConnectionsToTerminal(a1, &Connections[v9], a3, v7);
          v7 = (unsigned int)v13;
          if ( v13 < 0 )
            break;
        }
        ++v9;
        ++v12;
      }
      while ( v9 < ConnectionsCount );
    }
  }
  return (unsigned int)v7;
}
