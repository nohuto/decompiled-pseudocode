/*
 * XREFs of HalpInterruptFindBestRouting @ 0x14044478C
 * Callers:
 *     HalpInterruptSetLineState @ 0x140443F50 (HalpInterruptSetLineState.c)
 *     HalpInterruptSetDestinationInternal @ 0x140446EB8 (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptRemap @ 0x14053E694 (HalpInterruptRemap.c)
 * Callees:
 *     HalpInterruptSetProblemEx @ 0x1404443B8 (HalpInterruptSetProblemEx.c)
 *     HalpInterruptLookupController @ 0x140445B74 (HalpInterruptLookupController.c)
 */

__int64 __fastcall HalpInterruptFindBestRouting(unsigned int *a1, __int64 a2)
{
  __int64 v2; // rax
  _DWORD *v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ecx
  __int64 v6; // rbx
  __int64 v7; // rdx
  int v8; // r11d
  __int64 *v9; // r10
  __int64 *i; // rax
  int v12; // [rsp+4Ch] [rbp+14h]

  v12 = HIDWORD(a2);
  v2 = HalpInterruptLookupController(*a1);
  v5 = 0;
  v6 = v2;
  if ( v2 )
  {
    v7 = v2 + 280;
    v8 = 0;
    v9 = *(__int64 **)(v2 + 280);
    for ( i = v9; i != (__int64 *)v7; i = (__int64 *)*i )
    {
      ++v8;
      if ( *((_DWORD *)i + 4) == (_DWORD)v4 && *((_DWORD *)i + 5) <= v12 && *((_DWORD *)i + 6) > v12 )
        break;
    }
    if ( i == (__int64 *)v7 )
    {
      if ( v8 == 1 )
      {
        *v3 = *((_DWORD *)v9 + 4);
        v3[1] = *((_DWORD *)v9 + 5);
      }
      else
      {
        HalpInterruptSetProblemEx(v6, 23, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 0xDF5u);
        return (unsigned int)-1073741823;
      }
    }
    else
    {
      *(_QWORD *)v3 = v4;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
