/*
 * XREFs of LdrpHandleUnprotectedDelayLoad @ 0x1800DE380
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x18001CEA0 (LdrResolveDelayLoadedAPI.c)
 * Callees:
 *     LdrpGetDelayloadExportDll @ 0x180009D20 (LdrpGetDelayloadExportDll.c)
 *     LdrpDereferenceModule @ 0x18001B350 (LdrpDereferenceModule.c)
 *     LdrpResolveDelayloadAddress @ 0x1800DE4C0 (LdrpResolveDelayloadAddress.c)
 *     LdrpRedirectDelayloadFailure @ 0x1800DE6C0 (LdrpRedirectDelayloadFailure.c)
 */

__int64 __fastcall LdrpHandleUnprotectedDelayLoad(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 *a5, int a6)
{
  int v8; // ebp
  int v9; // r14d
  __int64 v10; // rdi
  int v11; // ebx
  __int64 v12; // r8
  int DelayloadExportDll; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+48h] [rbp-20h] BYREF

  v15 = 0LL;
  v8 = a2;
  v9 = a1;
  v10 = 0LL;
  DelayloadExportDll = LdrpGetDelayloadExportDll(a1, a2, &v15, a6, (__int64)a5);
  v11 = DelayloadExportDll;
  if ( DelayloadExportDll >= 0 )
  {
    if ( g_ShimsEnabled )
      v12 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_GetProcAddressForCaller, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
    else
      v12 = 0LL;
    v10 = LdrpResolveDelayloadAddress(v9, v15, v8, (_DWORD)a5, v12, (__int64)&DelayloadExportDll);
    LdrpDereferenceModule(v15);
    v11 = DelayloadExportDll;
  }
  if ( v11 >= 0
    || (v10 = LdrpRedirectDelayloadFailure(v9, v15, v8, a3, a4, (__int64)a5, v11)) != 0
    && ((unsigned int)(v11 + 1073741512) <= 1 || v11 == -1073740671) )
  {
    *a5 = v10;
  }
  return v10;
}
