/*
 * XREFs of MiCompactDebuggerPatchTable @ 0x140672748
 * Callers:
 *     MiDeleteDebuggerPatches @ 0x1404AC24C (MiDeleteDebuggerPatches.c)
 *     MiApplyDebuggerPatches @ 0x1404F41FC (MiApplyDebuggerPatches.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x140674508 (MmDbgMarkPfnModifiedWorker.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     memmove @ 0x1406B4940 (memmove.c)
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

  result = (unsigned int)dword_140E318A4;
  if ( dword_140E318A0 == dword_140E318A4 )
    return result;
  if ( a1 )
    v3 = 17;
  else
    v3 = ExAcquireSpinLockExclusive(&dword_140E358A8);
  v4 = dword_140E318A4;
LABEL_6:
  result = (unsigned int)dword_140E318A0;
  if ( v4 != dword_140E318A0 )
  {
    *(&MiState + 6 * v4 + 3626) |= 1u;
    _InterlockedOr(v21, 0);
    v5 = *((_QWORD *)&MiState + 3 * v4 + 1812);
    v6 = dword_140E358B0;
    v7 = *(&MiState + 6 * v4 + 3626) >> 2;
    for ( i = 0LL; ; v6 = ((unsigned int)i + v6) >> 1 )
    {
      while ( 1 )
      {
        if ( (unsigned int)i >= v6 )
        {
          if ( *(&MiState + 6 * v4 + 3627) != *(&MiState + 6 * v4 + 3628) )
          {
            if ( dword_140E358AC == 512 )
              KeBugCheckEx(0x1Au, 0x2320AuLL, 0LL, 0LL, 0LL);
            v18 = &MiState + 4 * dword_140E358AC + 2 * (unsigned int)dword_140E358AC + 5162;
            dword_140E358AC = v18[2] >> 2;
            *(_OWORD *)v18 = *(_OWORD *)(&MiState + 6 * v4 + 3624);
            *((_QWORD *)v18 + 2) = *((_QWORD *)&MiState + 3 * v4 + 1814);
            v18[2] &= ~1u;
            if ( (unsigned int)i < dword_140E358B0 )
              memmove(
                &MiState + 2 * (unsigned int)(i + 1) + 8234,
                &MiState + 2 * (unsigned int)i + 8234,
                8LL * (unsigned int)(dword_140E358B0 - i));
            *((_QWORD *)&MiState + i + 4117) = v18;
            ++dword_140E358B0;
          }
LABEL_25:
          *((_QWORD *)&MiState + 3 * v4 + 1812) = 0LL;
          v19 = v4 + 1;
          v20 = v4;
          v4 = 0;
          if ( v20 != 255 )
            v4 = v19;
          dword_140E318A4 = v4;
          goto LABEL_6;
        }
        v9 = ((unsigned int)i + v6) >> 1;
        v10 = *((_QWORD *)&MiState + v9 + 4117);
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
          v12 = *(&MiState + 6 * v4 + 3628);
          v13 = ((unsigned int)i + v6) >> 1;
          v14 = &MiState + 2 * (unsigned int)v9 + 8234;
          v15 = *(_QWORD *)v14;
          if ( *(_DWORD *)(*(_QWORD *)v14 + 12LL) == v12 )
          {
            v16 = dword_140E358B0 - 1;
            dword_140E358B0 = v16;
            if ( v13 < v16 )
              memmove(v14, &MiState + 2 * v13 + 8236, 8LL * (v16 - v13));
            v17 = *(_DWORD *)(v15 + 8) | 1;
            *(_DWORD *)(v15 + 8) = v17;
            *(_DWORD *)(v15 + 8) = (4 * dword_140E358AC) | v17 & 3;
            dword_140E358AC = (v15 - (__int64)&unk_140E318A8) / 24;
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
    return MiReleaseSpinLockExclusive(&dword_140E358A8, v3);
  return result;
}
