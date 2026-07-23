/*
 * XREFs of MiCompactDebuggerPatchTable @ 0x14067F160
 * Callers:
 *     MiDeleteDebuggerPatches @ 0x1404A8408 (MiDeleteDebuggerPatches.c)
 *     MiApplyDebuggerPatches @ 0x1404F4300 (MiApplyDebuggerPatches.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x140680F28 (MmDbgMarkPfnModifiedWorker.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall MiCompactDebuggerPatchTable(int a1)
{
  __int64 result; // rax
  KIRQL v3; // r15
  unsigned int v4; // ebx
  unsigned __int64 v5; // r10
  unsigned int v6; // edx
  ULONG v7; // r8d
  __int64 i; // rdi
  __int64 v9; // rcx
  __int64 v10; // r9
  ULONG v11; // eax
  int v12; // eax
  unsigned int v13; // edx
  ULONG *v14; // rcx
  __int64 v15; // rdi
  unsigned int v16; // eax
  int v17; // ecx
  ULONG *v18; // rbp
  unsigned int v19; // ecx
  unsigned int v20; // eax
  signed __int32 v21[8]; // [rsp+0h] [rbp-48h] BYREF

  result = (unsigned int)dword_140E31C2C;
  if ( dword_140E31C28 == dword_140E31C2C )
    return result;
  if ( a1 )
    v3 = 17;
  else
    v3 = ExAcquireSpinLockExclusive(&dword_140E35C30);
  v4 = dword_140E31C2C;
LABEL_6:
  result = (unsigned int)dword_140E31C28;
  if ( v4 != dword_140E31C28 )
  {
    *(&MiState + 6 * v4 + 3628) |= 1u;
    _InterlockedOr(v21, 0);
    v5 = *((_QWORD *)&MiState + 3 * v4 + 1813);
    v6 = dword_140E35C38;
    v7 = *(&MiState + 6 * v4 + 3628) >> 2;
    for ( i = 0LL; ; v6 = ((unsigned int)i + v6) >> 1 )
    {
      while ( 1 )
      {
        if ( (unsigned int)i >= v6 )
        {
          if ( *(&MiState + 6 * v4 + 3629) != *(&MiState + 6 * v4 + 3630) )
          {
            if ( dword_140E35C34 == 512 )
              KeBugCheckEx(0x1Au, 0x2320AuLL, 0LL, 0LL, 0LL);
            v18 = &MiState + 4 * dword_140E35C34 + 2 * (unsigned int)dword_140E35C34 + 5164;
            dword_140E35C34 = v18[2] >> 2;
            *(_OWORD *)v18 = *(_OWORD *)(&MiState + 6 * v4 + 3626);
            *((_QWORD *)v18 + 2) = *((_QWORD *)&MiState + 3 * v4 + 1815);
            v18[2] &= ~1u;
            if ( (unsigned int)i < dword_140E35C38 )
              memmove(
                &MiState + 2 * (unsigned int)(i + 1) + 8236,
                &MiState + 2 * (unsigned int)i + 8236,
                8LL * (unsigned int)(dword_140E35C38 - i));
            *((_QWORD *)&MiState + i + 4118) = v18;
            ++dword_140E35C38;
          }
LABEL_25:
          *((_QWORD *)&MiState + 3 * v4 + 1813) = 0LL;
          v19 = v4 + 1;
          v20 = v4;
          v4 = 0;
          if ( v20 != 255 )
            v4 = v19;
          dword_140E31C2C = v4;
          goto LABEL_6;
        }
        v9 = ((unsigned int)i + v6) >> 1;
        v10 = *((_QWORD *)&MiState + v9 + 4118);
        if ( *(_QWORD *)v10 >= v5 )
          break;
LABEL_12:
        i = (unsigned int)(v9 + 1);
      }
      if ( *(_QWORD *)v10 <= v5 )
      {
        v11 = *(_DWORD *)(v10 + 8) >> 2;
        if ( v11 < v7 )
          goto LABEL_12;
        if ( v11 <= v7 )
        {
          v12 = *(&MiState + 6 * v4 + 3630);
          v13 = ((unsigned int)i + v6) >> 1;
          v14 = &MiState + 2 * (unsigned int)v9 + 8236;
          v15 = *(_QWORD *)v14;
          if ( *(_DWORD *)(*(_QWORD *)v14 + 12LL) == v12 )
          {
            v16 = dword_140E35C38 - 1;
            dword_140E35C38 = v16;
            if ( v13 < v16 )
              memmove(v14, &MiState + 2 * v13 + 8238, 8LL * (v16 - v13));
            v17 = *(_DWORD *)(v15 + 8) | 1;
            *(_DWORD *)(v15 + 8) = v17;
            *(_DWORD *)(v15 + 8) = (4 * dword_140E35C34) | v17 & 3;
            dword_140E35C34 = (v15 - (__int64)&unk_140E31C30) / 24;
          }
          else
          {
            *(_DWORD *)(v15 + 16) = v12;
          }
          goto LABEL_25;
        }
      }
    }
  }
  if ( !a1 )
    return MiReleaseSpinLockExclusive(&dword_140E35C30, v3);
  return result;
}
