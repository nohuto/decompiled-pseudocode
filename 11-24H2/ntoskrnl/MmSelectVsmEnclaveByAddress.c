/*
 * XREFs of MmSelectVsmEnclaveByAddress @ 0x140A4B09C
 * Callers:
 *     PsCallEnclave @ 0x140AD1D10 (PsCallEnclave.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 */

__int64 __fastcall MmSelectVsmEnclaveByAddress(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  v10 = HIDWORD(a1);
  *a3 = 0LL;
  v9 = 0;
  v4 = MiObtainReferencedVadEx(a2, 0LL, (int *)&v9);
  v5 = v4;
  if ( !v4 )
    return v9;
  v6 = *(_DWORD *)(v4 + 48);
  v7 = -1073741800;
  if ( (v6 & 0x200000) != 0 && (v6 & 0x4000000) == 0 && (v6 & 0x8000000) != 0 && (*(_DWORD *)(v5 + 64) & 1) == 0 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v5 + 72) + 16LL)) <= 1 )
      __fastfail(0xEu);
    v7 = 0;
    *a3 = *(_QWORD *)(v5 + 72);
  }
  MiUnlockAndDereferenceVad((PVOID)v5);
  return v7;
}
