/*
 * XREFs of HvlpGetRegister128 @ 0x14058B790
 * Callers:
 *     HvlGetSystemPasidCapabilities @ 0x1405871E0 (HvlGetSystemPasidCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x14058B9FC (HvlpDetermineEnlightenments.c)
 * Callees:
 *     RtlRaiseException @ 0x1405E88F0 (RtlRaiseException.c)
 */

__int64 __fastcall HvlpGetRegister128(int a1, _DWORD *a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 result; // rax

  v3 = a1 - 256;
  if ( v3 )
  {
    v4 = v3 - 256;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( v8 )
            {
              if ( v8 != 1 )
                return RtlRaiseException((ULONG_PTR)&qword_140E0A840);
              _RAX = 1073741832LL;
            }
            else
            {
              _RAX = 1073741831LL;
            }
          }
          else
          {
            _RAX = 1073741830LL;
          }
        }
        else
        {
          _RAX = 1073741829LL;
        }
      }
      else
      {
        _RAX = 1073741828LL;
      }
    }
    else
    {
      _RAX = 1073741827LL;
    }
  }
  else
  {
    _RAX = 1073741826LL;
  }
  __asm { cpuid }
  *a2 = result;
  a2[1] = _RBX;
  a2[2] = _RCX;
  a2[3] = _RDX;
  return result;
}
