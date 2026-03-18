/*
 * XREFs of xxxODI_ColorInit @ 0x14009F170
 * Callers:
 *     InitUserScreen @ 0x140162CD0 (InitUserScreen.c)
 * Callees:
 *     ?CI_GetClrVal@@YAKPEAGK@Z @ 0x14009F3FC (-CI_GetClrVal@@YAKPEAGK@Z.c)
 *     FastGetProfileStringFromIDW @ 0x14009F910 (FastGetProfileStringFromIDW.c)
 *     GetProcessLuid @ 0x1400A05A0 (GetProcessLuid.c)
 *     xxxSetSysColors @ 0x1400A0834 (xxxSetSysColors.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxODI_ColorInit(PCUNICODE_STRING Source)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 v10; // rbx
  unsigned int ClrVal; // eax
  unsigned __int64 v13; // [rsp+28h] [rbp-D8h]
  struct _LUID AuthenticationId; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v15[32]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v16[32]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int16 v17[28]; // [rsp+150h] [rbp+50h] BYREF

  v2 = *(_QWORD *)(W32GetUserSessionState(Source) + 19928);
  *(_OWORD *)(v2 + 4568) = *(_OWORD *)&gargbInitial;
  *(_OWORD *)(v2 + 4584) = xmmword_14025CCC0;
  *(_OWORD *)(v2 + 4600) = xmmword_14025CCD0;
  *(_OWORD *)(v2 + 4616) = xmmword_14025CCE0;
  *(_OWORD *)(v2 + 4632) = xmmword_14025CCF0;
  *(_OWORD *)(v2 + 4648) = xmmword_14025CD00;
  *(_OWORD *)(v2 + 4664) = xmmword_14025CD10;
  *(_QWORD *)(v2 + 4680) = 0xFF993300F2E4D7LL;
  *(_DWORD *)(v2 + 4688) = 15790320;
  v4 = *(_QWORD *)(W32GetUserSessionState(v3) + 19928);
  v6 = 0;
  v7 = *(_QWORD *)(W32GetUserSessionState(v5) + 19928);
  *(_OWORD *)(v7 + 4444) = *(_OWORD *)(v4 + 4568);
  *(_OWORD *)(v7 + 4460) = *(_OWORD *)(v4 + 4584);
  *(_OWORD *)(v7 + 4476) = *(_OWORD *)(v4 + 4600);
  *(_OWORD *)(v7 + 4492) = *(_OWORD *)(v4 + 4616);
  *(_OWORD *)(v7 + 4508) = *(_OWORD *)(v4 + 4632);
  *(_OWORD *)(v7 + 4524) = *(_OWORD *)(v4 + 4648);
  *(_OWORD *)(v7 + 4540) = *(_OWORD *)(v4 + 4664);
  *(_QWORD *)(v7 + 4556) = *(_QWORD *)(v4 + 4680);
  *(_DWORD *)(v7 + 4564) = *(_DWORD *)(v4 + 4688);
  while ( v6 < 0x1F )
  {
    AuthenticationId = 0LL;
    v17[0] = 0;
    if ( v6 != 1
      || (GetProcessLuid(0LL, &AuthenticationId), AuthenticationId.LowPart != 999)
      || AuthenticationId.HighPart
      || (LODWORD(v13) = 25, FastGetProfileStringFromIDW(Source, v17, v13, 0), !v17[0]) )
    {
      LODWORD(v13) = 25;
      FastGetProfileStringFromIDW(Source, v17, v13, 0);
    }
    UserSessionState = W32GetUserSessionState(v8);
    v10 = v6;
    ClrVal = CI_GetClrVal(v17, *(_DWORD *)(*(_QWORD *)(UserSessionState + 19928) + 4LL * v6 + 4568));
    v16[v6] = v6;
    ++v6;
    v15[v10] = ClrVal;
  }
  return xxxSetSysColors(v7, v6, (unsigned int)v16, (unsigned int)v15, 6);
}
