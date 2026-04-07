/*
 * XREFs of ?GetPVLTarget@CInputView_SizeChangeOnly@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800DA140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputView_SizeChangeOnly::GetPVLTarget(__int64 a1, __int16 a2)
{
  unsigned int v2; // r9d
  int v3; // ecx
  int v4; // edx
  const char *i; // r8

  v2 = -1;
  v3 = 0;
  v4 = a2 & 0xFFF;
  for ( i = "+"; (*(_DWORD *)i & 0xFFF) != v4; i += 8 )
  {
    if ( (unsigned int)++v3 >= 3 )
      return v2;
  }
  return *(unsigned int *)&`CInputView_SizeChangeOnly::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable[8 * v3 + 4];
}
