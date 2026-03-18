/*
 * XREFs of PoSetThermalActiveCooling @ 0x14073FE20
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopPropogateCoolingChange @ 0x1404313FC (PopPropogateCoolingChange.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PoGetThermalRequestSupport @ 0x1406EF0A0 (PoGetThermalRequestSupport.c)
 *     PopDiagTraceThermalRequestActiveUpdate @ 0x14074C194 (PopDiagTraceThermalRequestActiveUpdate.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140A9CEA4 (PopThermalUpdateActiveTimeTracking.c)
 */

__int64 __fastcall PoSetThermalActiveCooling(__int64 a1, char a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  char v6; // bp
  __int64 v7; // rdx
  char v8; // al

  v4 = 0;
  if ( PoGetThermalRequestSupport(a1, 1) )
  {
    v5 = *(_QWORD *)(a1 + 32);
    v6 = a2 != 0;
    PopAcquireRwLockExclusive((unsigned __int64 *)(v5 + 32));
    if ( *(_BYTE *)(a1 + 18) )
    {
      v8 = *(_BYTE *)(a1 + 17);
      if ( v8 != v6 )
      {
        LOBYTE(v7) = v8 == 0;
        PopThermalUpdateActiveTimeTracking(a1 + 40, v7);
        *(_BYTE *)(a1 + 17) = v6;
        PopDiagTraceThermalRequestActiveUpdate(a1);
        PopPropogateCoolingChange(v5);
      }
    }
    else
    {
      v4 = -1073741431;
    }
    PopReleaseRwLock((signed __int64 *)(v5 + 32));
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v4;
}
