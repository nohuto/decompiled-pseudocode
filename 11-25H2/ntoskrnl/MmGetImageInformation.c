/*
 * XREFs of MmGetImageInformation @ 0x140898318
 * Callers:
 *     RtlpLookupUserFunctionTable @ 0x14025AB80 (RtlpLookupUserFunctionTable.c)
 *     RtlGetImageBaseAndLoadConfig @ 0x140464600 (RtlGetImageBaseAndLoadConfig.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x14079C4D4 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x140898054 (EtwpLocateDbgIdForRegEntry.c)
 *     KiCheckUserAddressCetCompat @ 0x1408981A8 (KiCheckUserAddressCetCompat.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140320840 (MiUnlockAndDereferenceVadShared.c)
 */

__int64 __fastcall MmGetImageInformation(unsigned __int64 a1, _QWORD *a2, _QWORD *a3, int *a4)
{
  __int64 v7; // rax
  unsigned int v8; // ebx
  int v10; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  v7 = MiObtainReferencedVadEx(a1, 6, &v10);
  v8 = 0;
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 48) & 0x70) == 0x20 )
    {
      *a2 = (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32)) << 12;
      *a3 = ((*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32))
           - (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32))
           + 1) << 12;
      *a4 = *(_DWORD *)(*(_QWORD *)(***(_QWORD ***)(v7 + 72) + 56LL) + 76LL) & 1;
    }
    else
    {
      v8 = -1073741751;
    }
    MiUnlockAndDereferenceVadShared((PVOID)v7);
  }
  else
  {
    return (unsigned int)-1073741800;
  }
  return v8;
}
