/*
 * XREFs of PsInsertSiloContext @ 0x1409E1C10
 * Callers:
 *     PspAssignSiloSystemRootPath @ 0x1407724C0 (PspAssignSiloSystemRootPath.c)
 *     ObCreateSiloRootDirectory @ 0x14082ABD4 (ObCreateSiloRootDirectory.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1409FE37C (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     PspIsSiloContext @ 0x1409E2188 (PspIsSiloContext.c)
 *     PspStorageInsertObject @ 0x1409E22A0 (PspStorageInsertObject.c)
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
