/*
 * XREFs of PsInsertSiloContext @ 0x1409E2FC0
 * Callers:
 *     PspAssignSiloSystemRootPath @ 0x140762B00 (PspAssignSiloSystemRootPath.c)
 *     ObCreateSiloRootDirectory @ 0x14081AE94 (ObCreateSiloRootDirectory.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x14094B860 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     PspIsSiloContext @ 0x1409E3538 (PspIsSiloContext.c)
 *     PspStorageInsertObject @ 0x1409E3650 (PspStorageInsertObject.c)
 */

__int64 __fastcall PsInsertSiloContext(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // r8
  _QWORD *v5; // r9
  __int64 v6; // r10
  __int64 v7; // r11

  if ( !(unsigned __int8)PspIsSiloContext(a3) )
    return PspStorageInsertObject(v7, a2, 0LL, v4);
  if ( (*(_BYTE *)(v4 - 48 + 26) & 0x40) != 0 )
    v5 = (_QWORD *)(*(_QWORD *)(v4 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v4 - 48 + 26) & 0x7F]) + 32LL);
  if ( *v5 == v6 )
    return PspStorageInsertObject(v7, a2, 0LL, v4);
  else
    return 3221225485LL;
}
