/*
 * XREFs of PopPepComponentGetLatencyIdleState @ 0x14044DB3C
 * Callers:
 *     PopPepRegisterDevice @ 0x140A934A0 (PopPepRegisterDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPepComponentGetLatencyIdleState(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r9d
  unsigned __int64 *v3; // rcx

  v2 = *(_DWORD *)(a1 + 188) - 1;
  if ( *(_DWORD *)(a1 + 188) != 1 )
  {
    v3 = (unsigned __int64 *)(*(_QWORD *)(a1 + 200) + 24LL * v2);
    do
    {
      if ( *v3 <= a2 )
        break;
      v3 -= 3;
      --v2;
    }
    while ( v2 );
  }
  return v2;
}
