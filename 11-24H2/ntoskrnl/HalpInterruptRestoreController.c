/*
 * XREFs of HalpInterruptRestoreController @ 0x1404976C4
 * Callers:
 *     HalpInterruptInitializeLocalUnit @ 0x140553F2C (HalpInterruptInitializeLocalUnit.c)
 *     HalpInterruptPowerChange @ 0x140554B90 (HalpInterruptPowerChange.c)
 *     HalpInterruptRestoreAllControllerState @ 0x140B4E180 (HalpInterruptRestoreAllControllerState.c)
 * Callees:
 *     HalpInterruptSetLineStateInternal @ 0x140372714 (HalpInterruptSetLineStateInternal.c)
 */

__int64 __fastcall HalpInterruptRestoreController(__int64 a1, char a2)
{
  int v3; // eax
  __int64 result; // rax
  _QWORD *v6; // r12
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx
  int v9; // esi
  __int64 v10; // r14
  __int64 v11; // r15
  int v12; // eax
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  v3 = *(_DWORD *)(a1 + 248);
  if ( (v3 & 2) != 0 )
    return 3221225473LL;
  if ( (v3 & 1) == 0 )
    return 3221225860LL;
  v6 = (_QWORD *)(a1 + 264);
  v7 = *(_QWORD **)(a1 + 264);
  while ( v7 != v6 )
  {
    v8 = v7;
    v7 = (_QWORD *)*v7;
    if ( v8[5] )
    {
      if ( !a2 || (v12 = *((_DWORD *)v8 + 8), v12 == 3) || v12 == 5 )
      {
        v9 = 0;
        v10 = 0LL;
        v11 = 0LL;
        while ( v9 < *((_DWORD *)v8 + 6) - *((_DWORD *)v8 + 5) )
        {
          if ( (*(_DWORD *)(v8[5] + v11 + 12) & 0x10) != 0 || *(_BYTE *)(v10 + v8[6]) )
          {
            LODWORD(v13) = *(_DWORD *)(a1 + 256);
            HIDWORD(v13) = v9 + *((_DWORD *)v8 + 5);
            result = HalpInterruptSetLineStateInternal(a1, (__int64)&v13, v8[5] + 56LL * v9);
            if ( (int)result < 0 )
              return result;
          }
          ++v9;
          v11 += 56LL;
          v10 += 16LL;
        }
      }
    }
  }
  return 0LL;
}
