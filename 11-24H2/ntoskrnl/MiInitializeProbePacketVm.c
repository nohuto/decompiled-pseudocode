/*
 * XREFs of MiInitializeProbePacketVm @ 0x14020AD30
 * Callers:
 *     MiProbeAndLockPrepare @ 0x1402379F0 (MiProbeAndLockPrepare.c)
 * Callees:
 *     MiLockProbePacketWorkingSet @ 0x14020AFF0 (MiLockProbePacketWorkingSet.c)
 */

__int64 __fastcall MiInitializeProbePacketVm(__int64 a1)
{
  unsigned __int64 v1; // rdi
  __int64 v2; // rsi
  int v4; // ecx
  unsigned int v5; // eax
  __int64 v6; // rax
  unsigned int v7; // ecx
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // eax

  v1 = *(_QWORD *)(a1 + 8);
  v2 = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( v1 < 0xFFFF800000000000uLL )
  {
    if ( v1 > 0x7FFFFFFEFFFFLL )
    {
LABEL_11:
      v9 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF5;
      *(_QWORD *)(a1 + 104) = &unk_140E38240;
      *(_DWORD *)(a1 + 72) = v9 | 5;
      goto LABEL_8;
    }
    v6 = *(_QWORD *)(a1 + 88);
    v7 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF0 | 1;
    *(_QWORD *)(a1 + 104) = v6 + 1024;
    *(_DWORD *)(a1 + 72) = v7;
LABEL_8:
    MiLockProbePacketWorkingSet(a1);
    return 0LL;
  }
  v4 = byte_140E38AE8[((v1 >> 39) & 0x1FF) - 256];
  switch ( v4 )
  {
    case 5:
      v10 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF3;
      *(_QWORD *)(a1 + 104) = &unk_140E38100;
      *(_DWORD *)(a1 + 72) = v10 | 3;
      goto LABEL_8;
    case 7:
      v12 = *(_DWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 104) = &unk_140E3D6C0;
      *(_DWORD *)(a1 + 72) = v12 & 0xFFFFFFF0 | 2;
      MiLockProbePacketWorkingSet(a1);
      v13 = 48 * ((*(_QWORD *)(((v1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v14 = *(_QWORD *)v13 >> 1;
      LODWORD(v14) = v14 & 0x7FFFFFFF;
      v15 = v14 | ((unsigned __int64)(*(_DWORD *)(v13 + 36) & 0x3FF0000) << 15);
      if ( v15 )
      {
        if ( v15 - 0x10000000000LL <= 1 )
        {
          v2 = v14 | ((unsigned __int64)(*(_DWORD *)(v13 + 36) & 0x3FF0000) << 15);
          if ( v15 == 0x10000000001LL && PsInitialSystemProcess )
            v2 = (__int64)PsInitialSystemProcess;
        }
        else
        {
          v2 = qword_140E38BF8 + 16 * (v15 - 1);
        }
        if ( v2 )
          v2 += 40 * ((v1 >> 18) & 7);
      }
      v16 = *(_QWORD *)(v2 + 24) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (*(_QWORD *)(v2 + 24) & 1) == 0 )
        v16 = *(_QWORD *)(v2 + 24);
      *(_QWORD *)(a1 + 104) = *((_QWORD *)qword_140E300C8 + (*(_WORD *)(*(_QWORD *)v16 + 60LL) & 0x3FF)) + 18816LL;
      return 0LL;
    case 4:
    case 14:
      v5 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF4;
      *(_QWORD *)(a1 + 104) = &unk_140E384C0;
      *(_DWORD *)(a1 + 72) = v5 | 4;
      goto LABEL_8;
    case 17:
      v17 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF7;
      *(_QWORD *)(a1 + 104) = &unk_140E37FC0;
      *(_DWORD *)(a1 + 72) = v17 | 7;
      goto LABEL_8;
    case 11:
      v18 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF6;
      *(_QWORD *)(a1 + 104) = &unk_140E37E80;
      *(_DWORD *)(a1 + 72) = v18 | 6;
      goto LABEL_8;
    case 13:
      v11 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF8;
      *(_QWORD *)(a1 + 104) = &unk_140E38380;
      *(_DWORD *)(a1 + 72) = v11 | 8;
      goto LABEL_8;
  }
  if ( v4 != 18 && v4 != 15 )
    goto LABEL_11;
  return 3221225477LL;
}
