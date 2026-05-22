/*
 * XREFs of ?IsTargetForRoutingInfoAndHwnd@InputRedirectionTarget@@QEAA_NUtagMsgRoutingInfo@@_K@Z @ 0x1801B019C
 * Callers:
 *     ?DisableInputRedirection@InputRedirectionProcessor@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z @ 0x1801AF8A0 (-DisableInputRedirection@InputRedirectionProcessor@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall InputRedirectionTarget::IsTargetForRoutingInfoAndHwnd(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  _OWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  v4 = a1[4];
  memset(v10, 0, sizeof(v10));
  v7 = a1[5];
  v11 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)v4 + 136LL))(v4, v7, v10) < 0
    || *(_QWORD *)a2 != *(_QWORD *)&v10[0]
    || *(_OWORD *)(a2 + 8) != *(_OWORD *)((char *)v10 + 8) )
  {
    return 0;
  }
  v8 = *(_QWORD *)(a2 + 24) - *((_QWORD *)&v10[1] + 1);
  if ( !v8 )
    v8 = *(_QWORD *)(a2 + 32) - v11;
  return !v8 && a1[7] == a3;
}
