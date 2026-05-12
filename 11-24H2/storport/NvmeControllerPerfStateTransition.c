/*
 * XREFs of NvmeControllerPerfStateTransition @ 0x140132360
 * Callers:
 *     NvmeControllerMaxOperationalPower @ 0x1401322A4 (NvmeControllerMaxOperationalPower.c)
 *     NvmeControllerPowerActive @ 0x1401323E8 (NvmeControllerPowerActive.c)
 * Callees:
 *     <none>
 */

char __fastcall NvmeControllerPerfStateTransition(__int64 a1)
{
  __int64 v1; // rax
  char v2; // r8
  __int64 v3; // rdx
  __int64 *v4; // rcx
  __int64 v5; // r10
  _DWORD *v6; // r9
  __int64 v7; // rcx

  v1 = *(_QWORD *)(a1 + 128);
  v2 = 0;
  v3 = *(_QWORD *)(v1 + 160);
  if ( v3 )
  {
    v4 = *(__int64 **)(v3 + 8);
    if ( v4 )
    {
      if ( *(_DWORD *)(v1 + 84) == 1 && (*(_DWORD *)(v3 + 176) & 4) != 0 )
      {
        v5 = *(unsigned __int8 *)(v3 + 183);
        if ( *(_BYTE *)(v3 + 182) != (_BYTE)v5 && !_interlockedbittestandset((volatile signed __int32 *)(v3 + 212), 0) )
        {
          v6 = v4 + 12;
          *((_DWORD *)v4 + 26) = v5;
          v7 = *v4;
          *v6 = 0;
          PoFxIssueComponentPerfStateChange(v7, 0LL, 0LL, v6, v5);
          return 1;
        }
      }
    }
  }
  return v2;
}
