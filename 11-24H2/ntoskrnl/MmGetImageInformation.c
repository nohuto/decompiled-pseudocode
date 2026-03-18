/*
 * XREFs of MmGetImageInformation @ 0x140837878
 * Callers:
 *     RtlpLookupUserFunctionTable @ 0x140280BA0 (RtlpLookupUserFunctionTable.c)
 *     RtlGetImageBaseAndLoadConfig @ 0x140463C24 (RtlGetImageBaseAndLoadConfig.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1407AB8A4 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x1408375D4 (EtwpLocateDbgIdForRegEntry.c)
 *     KiCheckUserAddressCetCompat @ 0x140837728 (KiCheckUserAddressCetCompat.c)
 * Callees:
 *     MiUnlockAndDereferenceVadShared @ 0x1402BB330 (MiUnlockAndDereferenceVadShared.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 */

__int64 __fastcall MmGetImageInformation(unsigned __int64 a1, _QWORD *a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  unsigned int v10; // ebx
  int v12; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  v7 = MiObtainReferencedVadEx(a1, 6LL, &v12);
  v10 = 0;
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 48) & 0x70) == 0x20 )
    {
      *a2 = (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32)) << 12;
      *a3 = ((*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32))
           - (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32))
           + 1) << 12;
      v8 = *(_DWORD *)(*(_QWORD *)(***(_QWORD ***)(v7 + 72) + 56LL) + 76LL) & 1;
      *a4 = v8;
    }
    else
    {
      v10 = -1073741751;
    }
    MiUnlockAndDereferenceVadShared(v7, v8, v7, v9);
  }
  else
  {
    return (unsigned int)-1073741800;
  }
  return v10;
}
