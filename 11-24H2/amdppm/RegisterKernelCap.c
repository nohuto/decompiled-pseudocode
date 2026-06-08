/*
 * XREFs of RegisterKernelCap @ 0x140041450
 * Callers:
 *     PccCapWorker @ 0x14000D9E0 (PccCapWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E310 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 *     CalculatePercentageCap @ 0x140032C98 (CalculatePercentageCap.c)
 *     PepTranslateLimitReason @ 0x14003C678 (PepTranslateLimitReason.c)
 */

__int64 __fastcall RegisterKernelCap(__int64 a1)
{
  __int64 v1; // r11
  int v2; // ebx
  __int64 v3; // rcx
  unsigned int v4; // edx
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  _DWORD v10[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v1 = a1;
  v2 = 2;
  v3 = *(_QWORD *)(a1 + 1192);
  if ( v3 )
  {
    v2 = PepTranslateLimitReason(*(_DWORD *)(v3 + 56));
  }
  else if ( *(_QWORD *)(v1 + 240) || *(_QWORD *)(v1 + 248) )
  {
    v4 = *(_DWORD *)(v1 + 740);
  }
  else
  {
    v5 = *(_QWORD *)(v1 + 224);
    if ( !v5 )
      return 0LL;
    v4 = CalculatePercentageCap(*(_QWORD *)(v5 + 56), *(_DWORD *)(v1 + 464), *(_DWORD *)(v1 + 512));
  }
  v11 = 0LL;
  v6 = *(_DWORD *)(v1 + 80);
  v10[0] = 82;
  if ( v6 )
  {
    HIDWORD(v11) = v6;
    v7 = *(_DWORD *)(v1 + 84);
  }
  else
  {
    v7 = *(_DWORD *)(v1 + 56);
  }
  v10[1] = v7;
  v10[3] = *(_DWORD *)(v1 + 736);
  v8 = v11;
  if ( v4 < 0x64 )
    v8 = v2;
  v10[2] = v4;
  LODWORD(v11) = v8;
  ((void (__fastcall *)(_DWORD *))qword_140015900)(v10);
  return 0LL;
}
