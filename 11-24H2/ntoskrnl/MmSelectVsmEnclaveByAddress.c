/*
 * XREFs of MmSelectVsmEnclaveByAddress @ 0x140A41D1C
 * Callers:
 *     PsCallEnclave @ 0x140AD0080 (PsCallEnclave.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 */

__int64 __fastcall MmSelectVsmEnclaveByAddress(__int64 a1, unsigned __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF
  int v11; // [rsp+34h] [rbp+Ch]

  v11 = HIDWORD(a1);
  *a3 = 0LL;
  v10 = 0;
  v5 = MiObtainReferencedVadEx(a2, 0LL, (int *)&v10, a4);
  v6 = v5;
  if ( !v5 )
    return v10;
  v7 = *(_DWORD *)(v5 + 48);
  v8 = -1073741800;
  if ( (v7 & 0x200000) != 0 && (v7 & 0x4000000) == 0 && (v7 & 0x8000000) != 0 && (*(_DWORD *)(v6 + 64) & 1) == 0 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v6 + 72) + 16LL)) <= 1 )
      __fastfail(0xEu);
    v8 = 0;
    *a3 = *(_QWORD *)(v6 + 72);
  }
  MiUnlockAndDereferenceVad((PVOID)v6);
  return v8;
}
