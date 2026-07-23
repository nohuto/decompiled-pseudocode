/*
 * XREFs of MiGetPfnProtection @ 0x140306170
 * Callers:
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     MiRevokeExecutePte @ 0x14044DEC0 (MiRevokeExecutePte.c)
 * Callees:
 *     MiPteHasShadow @ 0x140307500 (MiPteHasShadow.c)
 *     MiLocateCloneAddress @ 0x1403C9CE8 (MiLocateCloneAddress.c)
 */

__int64 __fastcall MiGetPfnProtection(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r11
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdx
  unsigned int v9; // edx
  unsigned int v10; // r8d
  _KPROCESS *Process; // rcx
  __int64 HasShadow; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  char v16; // r9
  unsigned __int64 v17; // r10
  __int64 v18; // rax
  __int64 v19; // rax

  v3 = a3;
  v4 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = *(_QWORD *)v4;
  v6 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v4 < 0xFFFFF6FB7DBED000uLL || v4 > 0xFFFFF6FB7DBED7F8uLL )
  {
    v7 = *(_QWORD *)v4;
    v8 = v5 >> 60;
  }
  else
  {
    if ( (v5 & 1) != 0 )
    {
      LOBYTE(v6) = (v5 & 0x42) != 0;
      if ( ((unsigned __int8)v6 & ((v5 & 0x20) != 0)) == 0 )
      {
        HasShadow = MiPteHasShadow(v6, v5, a3, 0xFFFFF6FB7DBED000uLL);
        if ( HasShadow )
        {
          v6 = *(_QWORD *)(HasShadow + 1288);
          if ( v6 )
          {
            v14 = *(_QWORD *)(v6 + 8 * ((v4 >> 3) & 0x1FF));
            if ( (v14 & 0x20) != 0 )
              v5 |= 0x20uLL;
            v6 = v5 | 0x42;
            if ( (v14 & 0x42) == 0 )
              v6 = v5;
            v5 = v6;
          }
        }
      }
    }
    v7 = *(_QWORD *)v4;
    v8 = v5 >> 60;
    if ( (v7 & 1) != 0 )
    {
      LOBYTE(v6) = (v7 & 0x42) != 0;
      if ( ((unsigned __int8)v6 & ((v7 & 0x20) != 0)) == 0 )
      {
        v15 = MiPteHasShadow(v6, v8, v7, v7);
        if ( v15 )
        {
          v18 = *(_QWORD *)(v15 + 1288);
          if ( v18 )
          {
            v19 = *(_QWORD *)(v18 + 8 * ((v17 >> 3) & 0x1FF));
            if ( (v19 & 0x20) != 0 )
              v16 |= 0x20u;
            LOBYTE(v7) = v16 | 0x42;
            if ( (v19 & 0x42) == 0 )
              LOBYTE(v7) = v16;
          }
        }
      }
    }
  }
  v9 = v8 & 7;
  if ( v9 )
  {
    if ( (v7 & 0x18) == 8 )
    {
      v9 |= 0x18u;
    }
    else
    {
      if ( (v7 & 0x10) == 0 )
        return v9;
      v9 |= 8u;
    }
  }
  if ( v9 )
    return v9;
  v10 = (*(_DWORD *)(v3 + 16) >> 5) & 0x1F;
  if ( (*(_QWORD *)(v3 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v3 + 8) > 0 )
    return (unsigned int)MmMakeProtectNotWriteCopy[v10];
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process[1].IdealProcessorAssignmentBlock )
  {
    if ( MiLocateCloneAddress(Process, *(_QWORD *)(v3 + 8) | 0x8000000000000000uLL) )
      return (unsigned int)MmMakeProtectNotWriteCopy[v10];
  }
  return v10;
}
