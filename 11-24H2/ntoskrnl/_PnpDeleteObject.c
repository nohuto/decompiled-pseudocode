/*
 * XREFs of _PnpDeleteObject @ 0x14081B314
 * Callers:
 *     PiCMDeleteObject @ 0x140ABBA14 (PiCMDeleteObject.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     _PnpDeleteObjectDispatch @ 0x14081B438 (_PnpDeleteObjectDispatch.c)
 */

__int64 __fastcall PnpDeleteObject(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdi
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  int v14; // [rsp+20h] [rbp-78h]
  _DWORD *v15; // [rsp+28h] [rbp-70h]
  _DWORD v16[20]; // [rsp+40h] [rbp-58h] BYREF

  v3 = *(_QWORD *)&PiPnpRtlCtx;
  memset_0(v16, 0, sizeof(v16));
  v6 = *(_QWORD *)(v3 + 488);
  if ( v6 )
  {
    v15 = v16;
    v14 = 1;
    v7 = guard_dispatch_icall_no_overrides(v3, a2);
    if ( v7 == -1073741822 )
    {
      v6 = 0LL;
    }
    else
    {
      if ( v7 == -1073741536 )
        return v16[0];
      if ( v7 )
        return (unsigned int)-1073741595;
    }
  }
  v8 = PnpDeleteObjectDispatch(v3, a2, a3, v16[4], v14, v15);
  v9 = v8;
  if ( !v6 )
    return v9;
  v16[0] = v8;
  v10 = guard_dispatch_icall_no_overrides(v3, a2);
  v11 = v10;
  if ( v10 == -1073741822 )
    return v9;
  if ( v10 == -1073741536 )
    return v16[0];
  v12 = v9;
  if ( v11 )
    return (unsigned int)-1073741595;
  return v12;
}
