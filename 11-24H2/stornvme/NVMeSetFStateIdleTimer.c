/*
 * XREFs of NVMeSetFStateIdleTimer @ 0x14000BF50
 * Callers:
 *     NVMeHwAdapterControl @ 0x14000DBA0 (NVMeHwAdapterControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeSetFStateIdleTimer(__int64 a1)
{
  __int64 v1; // rax

  if ( *(_DWORD *)(a1 + 1612) == 1 )
  {
    v1 = *(unsigned int *)(a1 + 88);
  }
  else
  {
    v1 = *(unsigned int *)(a1 + 84);
    if ( (_DWORD)v1 == -1 )
    {
      if ( *(_BYTE *)(a1 + 1610) )
      {
        if ( *(_BYTE *)(a1 + 1609) <= 2u )
          return 0LL;
        v1 = *(unsigned int *)(a1 + 1636);
      }
      else
      {
        v1 = *(unsigned int *)(a1 + 1628);
      }
    }
  }
  if ( v1 )
  {
    *(_DWORD *)(a1 + 1600) |= 0x20u;
    return StorPortExtendedFunction(33LL, a1, *(_QWORD *)(a1 + 1640), NVMeFStateIdleTimerCallback);
  }
  return 0LL;
}
