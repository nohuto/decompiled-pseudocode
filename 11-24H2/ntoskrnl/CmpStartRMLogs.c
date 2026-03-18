/*
 * XREFs of CmpStartRMLogs @ 0x140A04324
 * Callers:
 *     CmpTransInitializeTransaction @ 0x140A04118 (CmpTransInitializeTransaction.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     CmpLockRegistryFreezeAware @ 0x14097DFD8 (CmpLockRegistryFreezeAware.c)
 *     CmpUuidCreate @ 0x140AA1208 (CmpUuidCreate.c)
 *     CmpStartRMLog @ 0x140AE5884 (CmpStartRMLog.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpStartRMLogs(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  bool v5; // bp
  __int64 v6; // rsi
  int started; // eax
  __int64 v8; // rcx
  UUID Uuid; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_DWORD *)(a1 + 104);
  v2 = 0;
  Uuid = 0LL;
  if ( (v1 & 8) != 0 )
  {
    return (unsigned int)-1073741431;
  }
  else if ( (v1 & 1) == 0 )
  {
    v5 = (int)CmpUuidCreate(&Uuid) >= 0;
    v6 = (*(_DWORD *)(a1 + 104) & 2) != 0 ? 4 : 0;
    CmpLockRegistryFreezeAware(0);
    started = CmpStartRMLog(a1, 0LL);
    v2 = started;
    if ( started < 0 && started != -1073741697 && started != -1073741757 && started != -1073741670 && v5 )
    {
      *(_DWORD *)(a1 + 104) &= ~2u;
      v2 = CmpStartRMLog(a1, &Uuid);
    }
    CmpUnlockRegistry(v8);
    *(_DWORD *)(v6 + a1 + 108) = v2;
  }
  return v2;
}
