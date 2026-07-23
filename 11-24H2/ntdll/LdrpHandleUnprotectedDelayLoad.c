/*
 * XREFs of LdrpHandleUnprotectedDelayLoad @ 0x1800D94F0
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x1800498A0 (LdrResolveDelayLoadedAPI.c)
 * Callees:
 *     LdrpGetDelayloadExportDll @ 0x180036720 (LdrpGetDelayloadExportDll.c)
 *     LdrpDereferenceModule @ 0x180047D50 (LdrpDereferenceModule.c)
 *     LdrpResolveDelayloadAddress @ 0x1800D9630 (LdrpResolveDelayloadAddress.c)
 *     LdrpRedirectDelayloadFailure @ 0x1800D9830 (LdrpRedirectDelayloadFailure.c)
 */

__int64 __fastcall LdrpHandleUnprotectedDelayLoad(_QWORD *a1, __int64 a2, int a3, __int64 a4, __int64 *a5, int a6)
{
  int v8; // ebp
  int v9; // r14d
  __int64 v10; // rdi
  NTSTATUS Status; // ebx
  __int64 v12; // r8
  int DelayloadExportDll; // [rsp+40h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-20h] BYREF

  BaseAddress = 0LL;
  v8 = a2;
  v9 = (int)a1;
  v10 = 0LL;
  DelayloadExportDll = LdrpGetDelayloadExportDll(a1, a2, &BaseAddress, a6, (__int64)a5);
  Status = DelayloadExportDll;
  if ( DelayloadExportDll >= 0 )
  {
    if ( g_ShimsEnabled )
      v12 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_GetProcAddressForCaller, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
    else
      v12 = 0LL;
    v10 = LdrpResolveDelayloadAddress(v9, (_DWORD)BaseAddress, v8, (_DWORD)a5, v12, (__int64)&DelayloadExportDll);
    LdrpDereferenceModule((char *)BaseAddress);
    Status = DelayloadExportDll;
  }
  if ( Status >= 0
    || (v10 = LdrpRedirectDelayloadFailure(v9, (int)BaseAddress, v8, a3, a4, (__int64)a5, Status)) != 0
    && ((unsigned int)(Status + 1073741512) <= 1 || Status == -1073740671) )
  {
    *a5 = v10;
  }
  return v10;
}
