/*
 * XREFs of _PnpGetObjectList @ 0x1408BB7D0
 * Callers:
 *     PiDmObjectManagerPopulate @ 0x140724CC8 (PiDmObjectManagerPopulate.c)
 *     PiCMGetObjectList @ 0x1408BB9D0 (PiCMGetObjectList.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     DrvDbDispatchDriverDatabase @ 0x1408BB400 (DrvDbDispatchDriverDatabase.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CC090 (PiPnpRtlObjectActionCallback.c)
 */

__int64 __fastcall PnpGetObjectList(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6, __int64 a7, int a8)
{
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rdi
  int v11; // ecx
  int v12; // eax
  __int64 (__fastcall *v13)(__int64, const wchar_t *, int, int, unsigned int *); // r10
  unsigned int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  unsigned int v18; // ecx
  _DWORD v19[4]; // [rsp+48h] [rbp-69h] BYREF
  __int64 v20; // [rsp+58h] [rbp-59h]
  __int64 v21; // [rsp+60h] [rbp-51h]
  __int64 v22; // [rsp+68h] [rbp-49h]
  int v23; // [rsp+70h] [rbp-41h]
  __int64 v24; // [rsp+78h] [rbp-39h]
  int v25; // [rsp+80h] [rbp-31h]
  _QWORD v26[3]; // [rsp+98h] [rbp-19h] BYREF
  int v27; // [rsp+B0h] [rbp-1h]
  int v28; // [rsp+B4h] [rbp+3h]
  __int64 v29; // [rsp+B8h] [rbp+7h]
  int v30; // [rsp+C0h] [rbp+Fh]
  __int64 v31; // [rsp+C4h] [rbp+13h]
  __int64 v32; // [rsp+CCh] [rbp+1Bh]
  int v33; // [rsp+D4h] [rbp+23h]

  v8 = *(_QWORD *)&PiPnpRtlCtx;
  v9 = a2;
  memset_0(v19, 0, 0x50uLL);
  v10 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))(v8 + 488);
  v11 = a8;
  v22 = a5;
  v23 = a6;
  v24 = a7;
  v25 = a8;
  if ( v10 )
  {
    if ( v10 == PiPnpRtlObjectActionCallback )
      v12 = PiPnpRtlObjectActionCallback(v8, 0LL, (unsigned int)v9, 5LL, 1, v19);
    else
      v12 = guard_dispatch_icall_no_overrides(v8, 0LL);
    if ( v12 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
        return v19[0];
      if ( v12 )
        return (unsigned int)-1073741595;
    }
    v11 = v25;
  }
  v28 = 0;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0;
  if ( (_WORD)v11 || (unsigned int)(v9 - 1) > 0xA )
  {
    v15 = -1073741811;
  }
  else
  {
    v13 = *(__int64 (__fastcall **)(__int64, const wchar_t *, int, int, unsigned int *))(v8 + 8 * v9 + 296);
    if ( v13 )
    {
      v26[0] = v20;
      v26[1] = v21;
      v26[2] = v22;
      v27 = v23;
      v29 = v24;
      v30 = v11;
      if ( v13 == DrvDbDispatchDriverDatabase )
        v14 = DrvDbDispatchDriverDatabase(v8, 0LL, v9, 5, (unsigned int *)v26);
      else
        v14 = guard_dispatch_icall_no_overrides(v8, 0LL);
      v15 = v14;
    }
    else
    {
      v15 = -1073741822;
    }
  }
  if ( v10 )
  {
    v19[0] = v15;
    v16 = v10 == PiPnpRtlObjectActionCallback
        ? PiPnpRtlObjectActionCallback(v8, 0LL, (unsigned int)v9, 5LL, 2, v19)
        : guard_dispatch_icall_no_overrides(v8, 0LL);
    if ( v16 != -1073741822 )
    {
      if ( v16 != -1073741536 )
      {
        v18 = v15;
        if ( v16 )
          return (unsigned int)-1073741595;
        return v18;
      }
      return v19[0];
    }
  }
  return v15;
}
