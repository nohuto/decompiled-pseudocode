/*
 * XREFs of MiDeleteDebuggerPatches @ 0x1404A8408
 * Callers:
 *     MiDestroySection @ 0x140270330 (MiDestroySection.c)
 *     MiCheckControlArea @ 0x140338330 (MiCheckControlArea.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiCompactDebuggerPatchTable @ 0x14067F160 (MiCompactDebuggerPatchTable.c)
 *     MiFindFirstDebuggerPatch @ 0x140680C30 (MiFindFirstDebuggerPatch.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

_UNKNOWN **__fastcall MiDeleteDebuggerPatches(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 v4; // rbx
  unsigned int v5; // r8d
  __int64 v6; // rax
  unsigned int v7; // edx
  unsigned int v8; // esi
  unsigned int v9; // r9d
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // ecx
  unsigned __int64 v13; // rdx
  __int64 v14; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  unsigned int v16; // [rsp+30h] [rbp+8h] BYREF

  result = &retaddr;
  v16 = 0;
  v2 = a1;
  if ( (*(_BYTE *)(a1 + 96) & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E35C30);
    MiCompactDebuggerPatchTable(1LL);
    if ( (unsigned int)MiFindFirstDebuggerPatch(v2, 0LL, 0LL, &v16) )
    {
      v4 = v16;
      v5 = v16;
      if ( v16 < dword_140E35C38 )
      {
        v6 = v16;
        v7 = v16;
        do
        {
          if ( **((_QWORD **)&MiState + v6 + 4118) != v2 )
            break;
          v6 = ++v7;
          v5 = v7;
        }
        while ( v7 < dword_140E35C38 );
      }
      v8 = v16;
      if ( v16 < v5 )
      {
        v9 = v16;
        do
        {
          v10 = v8;
          v8 = v9 + 1;
          v9 = v8;
          v11 = *((_QWORD *)&MiState + v10 + 4118);
          v12 = *(_DWORD *)(v11 + 8) | 1;
          *(_DWORD *)(v11 + 8) = v12;
          *(_DWORD *)(v11 + 8) = (4 * dword_140E35C34) | v12 & 3;
          v13 = (__int64)((unsigned __int128)((v11 - (__int64)&unk_140E31C30) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 2;
          dword_140E35C34 = (v13 >> 63) + v13;
        }
        while ( v8 < v5 );
      }
      if ( v8 == dword_140E35C38 )
      {
        dword_140E35C38 = v4;
      }
      else
      {
        memmove(&MiState + 2 * v4 + 8236, &MiState + 2 * v8 + 8236, 8LL * (dword_140E35C38 - v8));
        dword_140E35C38 += v4 - v8;
      }
    }
    _InterlockedAnd((volatile signed __int32 *)(v2 + 96), 0xFFFFFFFE);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E35C30);
    if ( KiIrqlFlags )
    {
      LOBYTE(v14) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
    }
    result = (_UNKNOWN **)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
