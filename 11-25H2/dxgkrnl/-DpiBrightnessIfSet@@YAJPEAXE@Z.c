/*
 * XREFs of ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1402BE070
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402BA080 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402BD038 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiCallDrvSetBrightness @ 0x1402BE200 (DpiCallDrvSetBrightness.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14037580C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall DpiBrightnessIfSet(_QWORD *a1, unsigned __int8 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  int v4; // esi
  __int16 v6; // ax
  __int64 v7; // rdx
  __int64 v8; // rdx
  int v9; // edi
  bool v10; // zf
  _DWORD v12[2]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v13; // [rsp+38h] [rbp-11h]
  __int128 v14; // [rsp+40h] [rbp-9h]
  __int64 v15; // [rsp+50h] [rbp+7h]
  int v16; // [rsp+58h] [rbp+Fh]
  int v17; // [rsp+5Ch] [rbp+13h]
  int v18; // [rsp+60h] [rbp+17h]
  int v19; // [rsp+64h] [rbp+1Bh]
  int v20; // [rsp+68h] [rbp+1Fh]
  int v21; // [rsp+6Ch] [rbp+23h]
  __int64 v22; // [rsp+70h] [rbp+27h]

  v2 = a1[8];
  v3 = 0LL;
  v4 = a2;
  v6 = *(_WORD *)(v2 + 4810);
  if ( v6 == 2 )
    v3 = v2 + 4808;
  v7 = 0LL;
  if ( v6 == 1 )
    v7 = v2 + 4808;
  if ( (!v3 || !*(_QWORD *)(v3 + 40)) && (!v7 || !*(_QWORD *)(v7 + 40)) )
    return 3221225659LL;
  KeWaitForSingleObject((PVOID)(v2 + 4536), Executive, 0, 0, 0LL);
  v9 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 0);
  if ( v9 >= 0 )
  {
    v10 = *(_BYTE *)(v2 + 4532) == 0;
    *(_BYTE *)(v2 + 4534) = v4;
    if ( v10 )
    {
      LOBYTE(v8) = v4;
      v9 = DpiCallDrvSetBrightness(a1, v8);
      if ( v9 >= 0 )
        *(_DWORD *)(v2 + 4528) = v4;
      if ( *(_BYTE *)(v2 + 4533) )
      {
        v17 = 0;
        v16 = 0;
        v21 = 0;
        v15 = 0LL;
        v13 = 0LL;
        v22 = *(_QWORD *)(v2 + 2696);
        v12[0] = 30;
        v12[1] = 72;
        v14 = 0LL;
        v18 = 67;
        v19 = v4;
        v20 = v9;
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v12, 0x200000000uLL);
      }
    }
    else
    {
      v9 = 0;
    }
    DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
  }
  KeReleaseMutex((PRKMUTEX)(v2 + 4536), 0);
  return (unsigned int)v9;
}
