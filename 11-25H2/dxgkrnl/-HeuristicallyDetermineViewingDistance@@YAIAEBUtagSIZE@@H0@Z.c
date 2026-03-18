/*
 * XREFs of ?HeuristicallyDetermineViewingDistance@@YAIAEBUtagSIZE@@H0@Z @ 0x14005DD34
 * Callers:
 *     ?DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z @ 0x140384244 (-DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z.c)
 * Callees:
 *     Feature_FixDpiDivideByZero__private_IsEnabledDeviceUsageNoInline @ 0x14006EECC (Feature_FixDpiDivideByZero__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall HeuristicallyDetermineViewingDistance(
        const struct tagSIZE *a1,
        unsigned int a2,
        const struct tagSIZE *a3)
{
  __int64 v4; // r8
  unsigned __int64 v5; // rcx
  unsigned __int128 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 result; // rax
  int v9; // eax
  LONG cy; // ecx

  v4 = a2;
  v5 = 10000LL * (a1->cx * a1->cx + a1->cy * a1->cy);
  v6 = v5 * (unsigned __int128)0x40C2050C1C40915uLL;
  v7 = v5 / 0xFC04;
  if ( !(_DWORD)v7 )
    return 280LL;
  if ( (unsigned int)v7 < 0x1FA4 )
    return 180LL;
  if ( (unsigned int)v7 < 0x4204 )
  {
    if ( *a3 != 0x25800000400LL )
      return 200LL;
    return 245LL;
  }
  if ( (unsigned int)v7 < 0x57E4 )
    return 245LL;
  if ( (unsigned int)v7 < 0x7E90 )
  {
    v9 = (_DWORD)v4 != 0 ? 0xFFFFFFDD : 0;
    return (unsigned int)(v9 + 280);
  }
  if ( (unsigned int)v7 <= 0x19000 )
    return 280LL;
  if ( !(unsigned int)Feature_FixDpiDivideByZero__private_IsEnabledDeviceUsageNoInline(v7, *((_QWORD *)&v6 + 1), v4) )
  {
    v9 = (unsigned int)(100 * a3->cx / a3->cy) < 0xC8 ? 0xFEE7 : 0;
    return (unsigned int)(v9 + 280);
  }
  cy = a3->cy;
  if ( cy <= 0 )
    return 280LL;
  result = 0xFFFFLL;
  if ( (unsigned int)(100 * a3->cx / cy) >= 0xC8 )
    return 280LL;
  return result;
}
