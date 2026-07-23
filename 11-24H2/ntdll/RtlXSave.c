/*
 * XREFs of RtlXSave @ 0x180144010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlXSave(_DWORD *_RCX, unsigned __int64 a2)
{
  _DWORD *v2; // r9
  unsigned __int64 result; // rax
  int v4; // r8d
  int v5; // ecx

  v2 = _RCX;
  if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
  {
    result = a2;
    __asm { xsavec  byte ptr [rcx] }
  }
  else
  {
    result = a2;
    if ( (a2 & 6) == 4 )
    {
      v4 = _RCX[6];
      v5 = _RCX[7];
      _xsave(v2, a2);
      v2[6] = v4;
      v2[7] = v5;
    }
    else
    {
      _xsave(_RCX, a2);
    }
  }
  return result;
}
