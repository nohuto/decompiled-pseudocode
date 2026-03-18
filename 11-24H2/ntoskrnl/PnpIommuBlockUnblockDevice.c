/*
 * XREFs of PnpIommuBlockUnblockDevice @ 0x1407361B8
 * Callers:
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 * Callees:
 *     PiIommuBlockDevice @ 0x140735F28 (PiIommuBlockDevice.c)
 *     PpDevNodeLockTree @ 0x140A08C10 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A145FC (PpDevNodeUnlockTree.c)
 *     PiIommuUnblockDevice @ 0x140A956B4 (PiIommuUnblockDevice.c)
 */

__int64 __fastcall PnpIommuBlockUnblockDevice(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rcx

  v2 = 0;
  if ( KeGetCurrentThread()->PreviousMode )
    return 3221225659LL;
  if ( a2 != 16 )
    return 3221225476LL;
  PpDevNodeLockTree(1LL);
  v8 = *(_QWORD *)(a1 + 8);
  if ( v8 )
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL);
  else
    v9 = 0LL;
  if ( *(_DWORD *)a1 == 1 )
  {
    if ( *(_QWORD *)(v9 + 720) )
    {
      LOBYTE(v5) = *(_DWORD *)a1;
      v10 = PiIommuUnblockDevice(v9, v5);
LABEL_14:
      v2 = v10;
    }
  }
  else
  {
    if ( *(_DWORD *)a1 )
    {
      v2 = -1073741637;
      goto LABEL_16;
    }
    v11 = *(_QWORD *)(v9 + 720);
    if ( v11 )
    {
      v10 = PiIommuBlockDevice(v11, v5, v6, v7);
      goto LABEL_14;
    }
  }
LABEL_16:
  PpDevNodeUnlockTree(1LL);
  return v2;
}
