/*
 * XREFs of ?BoostFrameRate@CLegacyRenderTarget@@UEAA_N_N@Z @ 0x1802237D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CLegacyRenderTarget::BoostFrameRate(CLegacyRenderTarget *this, char a2)
{
  __int64 v2; // r9
  char v4; // al
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 5);
  if ( !v2 )
    return 0;
  if ( a2 )
  {
    v6 = 0;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)(v2 + 24) + 248LL))(v2 + 24, &v6)
      || v6 <= 1 )
    {
      return 0;
    }
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 264LL))(
           *((_QWORD *)this + 5) + 24LL,
           v6,
           0LL);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v2 + 24) + 264LL))(v2 + 24, 0LL, 0LL);
  }
  if ( v4 )
  {
    *((_BYTE *)this + 33736) = 1;
    return 1;
  }
  return 0;
}
