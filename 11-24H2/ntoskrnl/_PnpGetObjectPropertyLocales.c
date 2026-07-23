/*
 * XREFs of _PnpGetObjectPropertyLocales @ 0x140980178
 * Callers:
 *     PiDqPnPGetObjectPropertyLocales @ 0x140980068 (PiDqPnPGetObjectPropertyLocales.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     _PnpGetObjectPropertyLocalesWorker @ 0x1409802E8 (_PnpGetObjectPropertyLocalesWorker.c)
 */

__int64 __fastcall PnpGetObjectPropertyLocales(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // rsi
  __int64 v12; // rdi
  int v13; // eax
  unsigned int ObjectPropertyLocalesWorker; // eax
  unsigned int v15; // ebx
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  _DWORD v20[4]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v21; // [rsp+68h] [rbp-21h]
  __int64 v22; // [rsp+70h] [rbp-19h]
  __int64 v23; // [rsp+78h] [rbp-11h]
  int v24; // [rsp+80h] [rbp-9h]
  __int64 v25; // [rsp+88h] [rbp-1h]
  int v26; // [rsp+90h] [rbp+7h]

  v8 = *(_QWORD *)&PiPnpRtlCtx;
  memset_0(v20, 0, 0x50uLL);
  v12 = *(_QWORD *)(v8 + 488);
  v26 = 0;
  v22 = a5;
  v23 = a6;
  v24 = a7;
  v25 = a8;
  v21 = a4;
  if ( v12 )
  {
    v13 = guard_dispatch_icall_no_overrides(v8, a2);
    if ( v13 == -1073741822 )
    {
      v12 = 0LL;
    }
    else
    {
      if ( v13 == -1073741536 )
        return v20[0];
      if ( v13 )
        return (unsigned int)-1073741595;
    }
  }
  ObjectPropertyLocalesWorker = PnpGetObjectPropertyLocalesWorker(v8, a2, a3, v21, v22, v23, v24, v25, v26);
  v15 = ObjectPropertyLocalesWorker;
  if ( !v12 )
    return v15;
  v20[0] = ObjectPropertyLocalesWorker;
  v17 = guard_dispatch_icall_no_overrides(v8, a2);
  v18 = v17;
  if ( v17 == -1073741822 )
    return v15;
  if ( v17 == -1073741536 )
    return v20[0];
  v19 = v15;
  if ( v18 )
    return (unsigned int)-1073741595;
  return v19;
}
