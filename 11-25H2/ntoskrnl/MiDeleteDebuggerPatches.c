/*
 * XREFs of MiDeleteDebuggerPatches @ 0x1404AC24C
 * Callers:
 *     MiCheckControlArea @ 0x14022F1E0 (MiCheckControlArea.c)
 *     MiDestroySection @ 0x140419264 (MiDestroySection.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiCompactDebuggerPatchTable @ 0x140672748 (MiCompactDebuggerPatchTable.c)
 *     MiFindFirstDebuggerPatch @ 0x140674210 (MiFindFirstDebuggerPatch.c)
 *     memmove @ 0x1406B4940 (memmove.c)
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
      KiRaiseIrqlProcessIrqlFlags(a1);
    }
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E358A8);
    MiCompactDebuggerPatchTable(1LL);
    if ( (unsigned int)MiFindFirstDebuggerPatch(v2, 0LL, 0LL, &v16) )
    {
      v4 = v16;
      v5 = v16;
      if ( v16 < dword_140E358B0 )
      {
        v6 = v16;
        v7 = v16;
        do
        {
          if ( **((_QWORD **)&MiState + v6 + 4117) != v2 )
            break;
          v6 = ++v7;
          v5 = v7;
        }
        while ( v7 < dword_140E358B0 );
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
          v11 = *((_QWORD *)&MiState + v10 + 4117);
          v12 = *(_DWORD *)(v11 + 8) | 1;
          *(_DWORD *)(v11 + 8) = v12;
          *(_DWORD *)(v11 + 8) = (4 * dword_140E358AC) | v12 & 3;
          v13 = (__int64)((unsigned __int128)((v11 - (__int64)&unk_140E318A8) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 2;
          dword_140E358AC = (v13 >> 63) + v13;
        }
        while ( v8 < v5 );
      }
      if ( v8 == dword_140E358B0 )
      {
        dword_140E358B0 = v4;
      }
      else
      {
        memmove(&MiState + 2 * v4 + 8234, &MiState + 2 * v8 + 8234, 8LL * (dword_140E358B0 - v8));
        dword_140E358B0 += v4 - v8;
      }
    }
    _InterlockedAnd((volatile signed __int32 *)(v2 + 96), 0xFFFFFFFE);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E358A8);
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
