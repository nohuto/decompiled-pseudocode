/*
 * XREFs of DifGetPluginPerDriverData @ 0x140615FA0
 * Callers:
 *     <none>
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140BA9E7C (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall DifGetPluginPerDriverData(int a1, __int64 a2)
{
  _DWORD *v3; // r8
  __int64 VerifierData; // rax
  _QWORD *v5; // rcx
  _QWORD *i; // rax

  v3 = (_DWORD *)DifPluginSettings[a1];
  if ( v3 )
  {
    if ( *v3 )
    {
      VerifierData = VfTargetDriversGetVerifierData(a2);
      if ( VerifierData )
      {
        v5 = (_QWORD *)(VerifierData + 96);
        for ( i = *(_QWORD **)(VerifierData + 96); i != v5; i = (_QWORD *)*i )
        {
          if ( *((_DWORD *)i - 4) == a1 )
            return *(i - 1);
        }
      }
    }
  }
  return 0LL;
}
