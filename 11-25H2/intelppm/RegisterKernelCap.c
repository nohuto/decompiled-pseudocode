/*
 * XREFs of RegisterKernelCap @ 0x140045220
 * Callers:
 *     PccCapWorker @ 0x14000F620 (PccCapWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     PepTranslateLimitReason @ 0x1400298B4 (PepTranslateLimitReason.c)
 *     CalculatePercentageCap @ 0x14004531C (CalculatePercentageCap.c)
 */

__int64 __fastcall RegisterKernelCap(__int64 a1)
{
  __int64 v1; // r11
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rcx
  unsigned int v5; // edx
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
    v5 = *(_DWORD *)(v1 + 740);
  }
  else
  {
    v4 = *(_QWORD *)(v1 + 224);
    if ( !v4 )
      return 0LL;
    v5 = CalculatePercentageCap(*(_QWORD *)(v4 + 56), *(unsigned int *)(v1 + 464), *(unsigned int *)(v1 + 512));
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
  if ( v5 < 0x64 )
    v8 = v2;
  v10[2] = v5;
  LODWORD(v11) = v8;
  ((void (__fastcall *)(_DWORD *))qword_1400194B0)(v10);
  return 0LL;
}
