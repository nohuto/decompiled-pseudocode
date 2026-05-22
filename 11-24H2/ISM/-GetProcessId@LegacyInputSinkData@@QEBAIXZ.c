/*
 * XREFs of ?GetProcessId@LegacyInputSinkData@@QEBAIXZ @ 0x1800523D4
 * Callers:
 *     ?SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z @ 0x180051F60 (-SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z.c)
 * Callees:
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x180052450 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

__int64 __fastcall LegacyInputSinkData::GetProcessId(LegacyInputSinkData *this)
{
  __int64 v1; // rax
  int v3; // edx
  unsigned int *i; // rbx
  _DWORD *CompositionInputQueue; // rax
  _DWORD v7[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0LL;
  v3 = 1;
  do
    v7[v1++] = v3++;
  while ( v1 < 4 );
  for ( i = v7; ; ++i )
  {
    if ( i == (unsigned int *)&v8 )
      return 0LL;
    CompositionInputQueue = (_DWORD *)LegacyInputSinkData::GetCompositionInputQueue(this, *i);
    if ( *CompositionInputQueue == 3 )
      break;
  }
  return (unsigned int)CompositionInputQueue[4];
}
