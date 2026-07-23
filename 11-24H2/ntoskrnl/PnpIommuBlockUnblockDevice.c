/*
 * XREFs of PnpIommuBlockUnblockDevice @ 0x1407340E8
 * Callers:
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     PiIommuBlockDevice @ 0x140733E58 (PiIommuBlockDevice.c)
 *     PpDevNodeLockTree @ 0x140A05140 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A0D4DC (PpDevNodeUnlockTree.c)
 *     PiIommuUnblockDevice @ 0x140A91EE4 (PiIommuUnblockDevice.c)
 */

__int64 __fastcall PnpIommuBlockUnblockDevice(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rcx

  v2 = 0;
  if ( KeGetCurrentThread()->PreviousMode )
    return 3221225659LL;
  if ( a2 != 16 )
    return 3221225476LL;
  PpDevNodeLockTree(1LL);
  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 )
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
  else
    v7 = 0LL;
  if ( *(_DWORD *)a1 == 1 )
  {
    if ( *(_QWORD *)(v7 + 720) )
    {
      LOBYTE(v5) = *(_DWORD *)a1;
      v8 = PiIommuUnblockDevice(v7, v5);
LABEL_14:
      v2 = v8;
    }
  }
  else
  {
    if ( *(_DWORD *)a1 )
    {
      v2 = -1073741637;
      goto LABEL_16;
    }
    v9 = *(_QWORD *)(v7 + 720);
    if ( v9 )
    {
      v8 = PiIommuBlockDevice(v9, v5);
      goto LABEL_14;
    }
  }
LABEL_16:
  PpDevNodeUnlockTree(1LL);
  return v2;
}
