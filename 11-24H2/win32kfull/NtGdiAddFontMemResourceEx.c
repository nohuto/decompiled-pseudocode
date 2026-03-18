/*
 * XREFs of NtGdiAddFontMemResourceEx @ 0x140114FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x14005D9E4 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?GrepAddFontMemResource@@YAPEAXPEAXKPEAUtagDESIGNVECTOR@@KPEAK@Z @ 0x140115154 (-GrepAddFontMemResource@@YAPEAXPEAXKPEAUtagDESIGNVECTOR@@KPEAK@Z.c)
 *     ?GrepRemoveFontMemResource@@YAHPEAX@Z @ 0x140214100 (-GrepRemoveFontMemResource@@YAHPEAX@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void *__fastcall NtGdiAddFontMemResourceEx(void *a1, unsigned int a2, _BYTE *a3, unsigned int a4, ULONG64 a5)
{
  size_t v5; // r12
  _BYTE *v6; // r15
  unsigned int v7; // ebx
  int v9; // edi
  void *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _DWORD *v14; // rsi
  unsigned int v16; // [rsp+30h] [rbp-C8h] BYREF
  int v17; // [rsp+34h] [rbp-C4h]
  unsigned int v18; // [rsp+38h] [rbp-C0h]
  unsigned int v19; // [rsp+40h] [rbp-B8h]
  _BYTE *v20; // [rsp+48h] [rbp-B0h]
  void *v21; // [rsp+50h] [rbp-A8h]
  void *v22; // [rsp+58h] [rbp-A0h]
  _BYTE v23[4]; // [rsp+60h] [rbp-98h] BYREF
  unsigned int v24; // [rsp+64h] [rbp-94h]

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v16 = a2;
  v22 = a1;
  v18 = a2;
  v20 = a3;
  v19 = a4;
  v9 = 1;
  v17 = 1;
  v10 = 0LL;
  memset_0(v23, 0, 0x48uLL);
  if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization(v12, v11, v13) < 0 )
    return 0LL;
  if ( !v7 )
    return 0LL;
  if ( !a1 )
    return 0LL;
  v14 = (_DWORD *)a5;
  if ( !a5 )
    return 0LL;
  if ( (_DWORD)v5 )
  {
    if ( (unsigned int)v5 > 0x48 )
    {
      v9 = 0;
      v17 = 0;
    }
    else
    {
      if ( (unsigned __int64)v6 >= MmUserProbeAddress )
        v6 = (_BYTE *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v23, v6, v5);
      v6 = v23;
      v20 = v23;
      if ( v5 != 4LL * v24 + 8 )
      {
        v9 = 0;
        v17 = 0;
      }
      v7 = v16;
    }
  }
  else
  {
    v6 = 0LL;
    v20 = 0LL;
  }
  if ( v9 )
  {
    v16 = 0;
    v10 = GrepAddFontMemResource(a1, v7, (struct tagDESIGNVECTOR *)v6, v5, &v16);
    v21 = v10;
    if ( v10 )
    {
      if ( a5 >= MmUserProbeAddress )
        v14 = (_DWORD *)MmUserProbeAddress;
      *v14 = v16;
    }
  }
  return v10;
}
