/*
 * XREFs of HalpInterruptRestoreController @ 0x14049CA1C
 * Callers:
 *     HalpInterruptInitializeLocalUnit @ 0x1405565EC (HalpInterruptInitializeLocalUnit.c)
 *     HalpInterruptPowerChange @ 0x140557250 (HalpInterruptPowerChange.c)
 *     HalpInterruptRestoreAllControllerState @ 0x140B4C140 (HalpInterruptRestoreAllControllerState.c)
 * Callees:
 *     HalpInterruptSetLineStateInternal @ 0x1403B9D44 (HalpInterruptSetLineStateInternal.c)
 */

__int64 __fastcall HalpInterruptRestoreController(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  __int64 result; // rax
  _QWORD *v8; // r12
  _QWORD *v9; // rdi
  _QWORD *v10; // rbx
  int v11; // esi
  __int64 v12; // r14
  __int64 v13; // r15
  int v14; // eax
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = 0LL;
  v5 = *(_DWORD *)(a1 + 248);
  if ( (v5 & 2) != 0 )
    return 3221225473LL;
  if ( (v5 & 1) == 0 )
    return 3221225860LL;
  v8 = (_QWORD *)(a1 + 264);
  v9 = *(_QWORD **)(a1 + 264);
  while ( v9 != v8 )
  {
    v10 = v9;
    v9 = (_QWORD *)*v9;
    if ( v10[5] )
    {
      if ( !a2 || (v14 = *((_DWORD *)v10 + 8), v14 == 3) || v14 == 5 )
      {
        v11 = 0;
        v12 = 0LL;
        v13 = 0LL;
        while ( v11 < *((_DWORD *)v10 + 6) - *((_DWORD *)v10 + 5) )
        {
          if ( (*(_DWORD *)(v10[5] + v13 + 12) & 0x10) != 0 || *(_BYTE *)(v12 + v10[6]) )
          {
            LODWORD(v15) = *(_DWORD *)(a1 + 256);
            HIDWORD(v15) = v11 + *((_DWORD *)v10 + 5);
            result = HalpInterruptSetLineStateInternal(a1, (__int64)&v15, v10[5] + 56LL * v11, a4);
            if ( (int)result < 0 )
              return result;
          }
          ++v11;
          v13 += 56LL;
          v12 += 16LL;
        }
      }
    }
  }
  return 0LL;
}
