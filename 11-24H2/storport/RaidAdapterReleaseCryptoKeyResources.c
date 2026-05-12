/*
 * XREFs of RaidAdapterReleaseCryptoKeyResources @ 0x140055F58
 * Callers:
 *     RaidUnitCompleteRequest @ 0x14001F490 (RaidUnitCompleteRequest.c)
 *     RaUnitAsyncError @ 0x140029460 (RaUnitAsyncError.c)
 *     RaidUnitProcessBusyRequest @ 0x140031200 (RaidUnitProcessBusyRequest.c)
 *     RaidUnitCompleteResetRequest @ 0x14003C670 (RaidUnitCompleteResetRequest.c)
 *     RaUnitStartIo @ 0x14004E6F0 (RaUnitStartIo.c)
 *     RaUnitStartResetIo @ 0x14009942C (RaUnitStartResetIo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterReleaseCryptoKeyResources(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  volatile signed __int32 *v3; // roff
  __int64 v4; // rcx
  __int64 result; // rax

  v2 = *(_DWORD **)(a2 + 792);
  if ( *v2 != 1 || v2[1] != 24 )
    return 0LL;
  v3 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 5640) + ((unsigned __int64)(unsigned int)v2[2] << 6) + 40);
  _InterlockedDecrement(v3);
  v4 = *(_QWORD *)(a2 + 792);
  result = (*(int *)v3 >> 31) & 0xC0000001;
  *(_OWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 16) = 0LL;
  return result;
}
