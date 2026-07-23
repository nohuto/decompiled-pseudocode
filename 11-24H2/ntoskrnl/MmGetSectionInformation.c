/*
 * XREFs of MmGetSectionInformation @ 0x1409E9C60
 * Callers:
 *     PspLocateSystemDll @ 0x140772090 (PspLocateSystemDll.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 *     DbgkpSendErrorMessage @ 0x1409E93F0 (DbgkpSendErrorMessage.c)
 *     AlpcpMapLegacyPortView @ 0x1409E98D0 (AlpcpMapLegacyPortView.c)
 *     NtQuerySection @ 0x1409E9AC0 (NtQuerySection.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     MiAweControlArea @ 0x140437570 (MiAweControlArea.c)
 *     MiGetControlAreaLoadConfig @ 0x14045AB84 (MiGetControlAreaLoadConfig.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiRelocateAmount @ 0x140A7A814 (MiRelocateAmount.c)
 */

__int64 __fastcall MmGetSectionInformation(__int64 a1, int a2, __int64 a3)
{
  int v6; // r14d
  unsigned __int64 v7; // rax
  unsigned int v8; // r9d
  _DWORD *v9; // r10
  int v10; // r11d
  __int128 *v11; // r8
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int128 v15; // xmm3
  int *ControlAreaLoadConfig; // rdx
  __int64 v17; // r8
  int v18; // r11d
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // edx
  int v22; // edx
  __int64 v23; // rdx
  _DWORD *v24; // r10
  int v26; // r8d
  int v27; // edx
  int v28; // ecx
  int v29; // edx
  __int16 v30; // r8
  int v31; // ecx
  __int128 v32[4]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v33; // [rsp+70h] [rbp-18h]

  memset_0(v32, 0, 0x48uLL);
  v6 = *(_DWORD *)(a1 + 56);
  v7 = MiSectionControlArea(a1);
  if ( !(unsigned int)MiAweControlArea(v7) )
  {
    if ( !a2 )
    {
      v26 = ((v6 & 0x1000) << 14) | 0x8000000;
      if ( (v6 & 0x2000) == 0 )
        v26 = (v6 & 0x1000) << 14;
      if ( (v6 & 0x20) != 0 )
        v26 = 0x1000000;
      v27 = v26 | 0x200000;
      if ( (v6 & 0x40) == 0 )
        v27 = v26;
      v28 = v27 | 0x800000;
      if ( (v6 & 0x80u) == 0 )
        v28 = v27;
      v29 = v28 | 0x80000;
      if ( v6 >= 0 )
        v29 = v28;
      v30 = *(_WORD *)(*(_QWORD *)v9 + 12LL);
      v31 = v29 | 0x10000000;
      if ( (v30 & 0x2000) == 0 )
        v31 = v29;
      v10 = v31 | 0x40000000;
      if ( (v30 & 0x1000) == 0 )
        v10 = v31;
      if ( (v9[14] & 0x20020) == 0x20020 )
        v10 |= 0x20000000u;
    }
    if ( a2 )
    {
      if ( a2 == 1 || a2 == 4 )
      {
        if ( (v6 & 0x20) != 0 )
        {
          v11 = *(__int128 **)(*(_QWORD *)v9 + 56LL);
          v12 = *v11;
          v32[0] = *v11;
          v13 = v11[1];
          v14 = v11[2];
          v15 = v11[3];
          if ( (v9[14] & 0x20000000) != 0 )
          {
            *(_QWORD *)&v32[0] = qword_140E2DB80 | LOWORD(v32[0]);
            v12 = v32[0];
          }
          if ( a2 == 4 )
          {
            ControlAreaLoadConfig = (int *)MiGetControlAreaLoadConfig((__int64)v9);
            v19 = v8;
            LODWORD(v33) = v8;
            v20 = v8;
            if ( ControlAreaLoadConfig )
            {
              v21 = *ControlAreaLoadConfig;
              if ( (v21 & 0x10) != 0 )
              {
                v19 = v18;
                LODWORD(v33) = v18;
                v20 = v18;
              }
              if ( (v21 & 8) != 0 )
              {
                v19 = v20 | 0x100;
                LODWORD(v33) = v20 | 0x100;
                v20 |= 0x100u;
              }
              if ( ((unsigned __int8)v21 & (unsigned __int8)v18) != 0 )
              {
                v19 = v20 | 0x200;
                LODWORD(v33) = v20 | 0x200;
                v20 |= 0x200u;
              }
            }
            v22 = *(_DWORD *)(v17 + 76);
            if ( ((unsigned __int8)v22 & (unsigned __int8)v18) != 0 )
            {
              v19 = v20 | 2;
              LODWORD(v33) = v20 | 2;
            }
            if ( (v22 & 2) != 0 )
            {
              v19 |= 8u;
              LODWORD(v33) = v19;
            }
            if ( (v22 & 4) != 0 )
            {
              v19 |= 0x10u;
              LODWORD(v33) = v19;
            }
            if ( (v22 & 8) != 0 )
            {
              v19 |= 0x20u;
              LODWORD(v33) = v19;
            }
            if ( (v22 & 0x10) != 0 )
            {
              v19 |= 0x40u;
              LODWORD(v33) = v19;
            }
            if ( (v22 & 0x20) != 0 )
              LODWORD(v33) = v19 | 0x80;
            *(_OWORD *)a3 = v12;
            *(_OWORD *)(a3 + 16) = v13;
            *(_OWORD *)(a3 + 32) = v14;
            *(_OWORD *)(a3 + 48) = v15;
            *(_QWORD *)(a3 + 64) = v33;
          }
          else
          {
            *(_OWORD *)a3 = v12;
            *(_OWORD *)(a3 + 16) = v13;
            *(_OWORD *)(a3 + 32) = v14;
            *(_OWORD *)(a3 + 48) = v15;
          }
          return v8;
        }
      }
      else if ( (v6 & 0x20) != 0 )
      {
        v23 = MiRelocateAmount(v9);
        if ( a2 == 2 )
        {
          if ( (v24[14] & 0x20000000) != 0 )
            v23 += qword_140E2DB80 - *(_QWORD *)(*(_QWORD *)v24 + 32LL);
          *(_QWORD *)a3 = v23;
        }
        else
        {
          *(_QWORD *)a3 = *(_QWORD *)(*(_QWORD *)v24 + 32LL) - v23;
        }
        return v8;
      }
      return (unsigned int)-1073741751;
    }
    else
    {
      *(_QWORD *)a3 = *(_QWORD *)(a1 + 24) << 12;
      *(_QWORD *)(a3 + 16) = *(_QWORD *)(a1 + 48);
      *(_DWORD *)(a3 + 8) = v10;
    }
    return v8;
  }
  return 3221225485LL;
}
