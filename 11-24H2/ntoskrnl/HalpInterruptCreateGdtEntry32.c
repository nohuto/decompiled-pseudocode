/*
 * XREFs of HalpInterruptCreateGdtEntry32 @ 0x140556CA4
 * Callers:
 *     HalpInterruptBuildStartupStub @ 0x140556970 (HalpInterruptBuildStartupStub.c)
 * Callees:
 *     <none>
 */

int __fastcall HalpInterruptCreateGdtEntry32(__int64 a1, int a2, __int64 a3, unsigned int a4, __int16 a5, char a6)
{
  __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // ecx
  int result; // eax

  v6 = a1 + (a2 & 0xFFFFFFF0);
  *(_QWORD *)v6 = 0LL;
  if ( a4 > 0xFFFFF )
  {
    *(_DWORD *)(v6 + 4) |= 0x800000u;
    a4 >>= 12;
  }
  v7 = *(_DWORD *)(v6 + 4);
  *(_WORD *)v6 = a4;
  *(_DWORD *)(v6 + 4) = v7 ^ (a4 ^ v7) & 0xF0000;
  *(_BYTE *)(v6 + 4) = 0;
  *(_BYTE *)(v6 + 7) = 0;
  *(_DWORD *)(v6 + 4) |= 0x8000u;
  v8 = *(_DWORD *)(v6 + 4) & 0xFFFF9FFF;
  *(_WORD *)(v6 + 2) = 0;
  *(_DWORD *)(v6 + 4) = v8;
  if ( !a6 )
  {
    v8 |= 0x400000u;
    *(_DWORD *)(v6 + 4) = v8;
  }
  result = v8 ^ ((unsigned __int16)v8 ^ (unsigned __int16)(a5 << 8)) & 0x1F00;
  *(_DWORD *)(v6 + 4) = result;
  if ( a6 )
  {
    result |= 0x200000u;
    *(_DWORD *)(v6 + 4) = result;
  }
  return result;
}
