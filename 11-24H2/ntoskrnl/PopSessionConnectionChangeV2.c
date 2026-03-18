/*
 * XREFs of PopSessionConnectionChangeV2 @ 0x14075F904
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 * Callees:
 *     PopPrintEx @ 0x1402CB174 (PopPrintEx.c)
 *     PopSessionConnectedV2 @ 0x14075F844 (PopSessionConnectedV2.c)
 *     PopSessionDisconnected @ 0x1409BA5E8 (PopSessionDisconnected.c)
 *     PopReleaseAdaptiveLock @ 0x1409BB1EC (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x140A30168 (PopAcquireAdaptiveLock.c)
 */

__int64 __fastcall PopSessionConnectionChangeV2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  unsigned int v5; // esi
  int v6; // ebx
  const char *v10; // rax
  const char *v11; // r8

  v4 = *(_BYTE *)a2;
  v5 = a1;
  v6 = *(_DWORD *)(a2 + 4);
  LOBYTE(a1) = 1;
  PopAcquireAdaptiveLock(a1);
  v10 = "Connected";
  if ( !v4 )
    v10 = "Disconnected";
  v11 = "Console";
  if ( v6 )
    v11 = "Remote";
  PopPrintEx(3, (int)"PopAdaptive:>>>>>%s session %u is %s\n", v11, v5, v10);
  if ( v4 )
    PopSessionConnectedV2(v5, a2, a3, a4);
  else
    PopSessionDisconnected(v5, a4);
  return PopReleaseAdaptiveLock();
}
