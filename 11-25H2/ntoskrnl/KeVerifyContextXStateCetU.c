/*
 * XREFs of KeVerifyContextXStateCetU @ 0x140261FF0
 * Callers:
 *     KyRaiseException @ 0x140263BB0 (KyRaiseException.c)
 *     PspGetSetContextInternal @ 0x1409A5700 (PspGetSetContextInternal.c)
 * Callees:
 *     KiVerifyContextXStateCetUEnabled @ 0x1402622DC (KiVerifyContextXStateCetUEnabled.c)
 */

__int64 __fastcall KeVerifyContextXStateCetU(__int64 a1, _DWORD *a2, unsigned __int64 *a3)
{
  _DWORD *v6; // r10
  __int64 v7; // r9
  char *v8; // r9
  __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // r8
  char *v12; // r8
  __int64 result; // rax
  __int64 v14; // r10
  unsigned __int64 v15; // rax
  __int64 v16; // rdx

  if ( (a2[12] & 0x100040) != 0x100040 )
    return 0LL;
  v6 = a2 + 308;
  if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0x800) == 0 )
    return 0LL;
  if ( (MEMORY[0xFFFFF780000003EC] & 0xFFFFFFF8) != 0 )
    return 0LL;
  v7 = (int)a2[312];
  if ( *v6 > (int)v7 )
    return 0LL;
  if ( a2[309] + a2[308] < (int)v7 + a2[313] )
    return 0LL;
  v8 = (char *)v6 + v7;
  if ( !v8 )
    return 0LL;
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
  {
    v9 = *((_QWORD *)v8 + 1);
    if ( (v9 & 0x800) == 0 )
      return 0LL;
    v10 = 576;
    if ( (v9 & 4) != 0 )
      v10 = MEMORY[0xFFFFF7800000060C] + 576;
    if ( (v9 & 8) != 0 )
    {
      if ( (MEMORY[0xFFFFF780000005F8] & 8) != 0 )
        v10 = (v10 + 63) & 0xFFFFFFC0;
      v10 += MEMORY[0xFFFFF78000000610];
    }
    if ( (v9 & 0x10) != 0 )
    {
      if ( (MEMORY[0xFFFFF780000005F8] & 0x10) != 0 )
        v10 = (v10 + 63) & 0xFFFFFFC0;
      v10 += MEMORY[0xFFFFF78000000614];
    }
    if ( (v9 & 0x20) != 0 )
    {
      if ( (MEMORY[0xFFFFF780000005F8] & 0x20) != 0 )
        v10 = (v10 + 63) & 0xFFFFFFC0;
      v10 += MEMORY[0xFFFFF78000000618];
    }
    if ( (v9 & 0x40) != 0 )
    {
      if ( (MEMORY[0xFFFFF780000005F8] & 0x40) != 0 )
        v10 = (v10 + 63) & 0xFFFFFFC0;
      v10 += MEMORY[0xFFFFF7800000061C];
    }
    if ( (v9 & 0x80u) != 0LL )
    {
      if ( MEMORY[0xFFFFF780000005F8] < 0 )
        v10 = (v10 + 63) & 0xFFFFFFC0;
      v10 += MEMORY[0xFFFFF78000000620];
    }
    if ( (v9 & 0x100) != 0 )
    {
      if ( (MEMORY[0xFFFFF780000005F8] & 0x100) != 0 )
        v10 = (v10 + 63) & 0xFFFFFFC0;
      v10 += MEMORY[0xFFFFF78000000624];
    }
    if ( (v9 & 0x200) != 0 )
    {
      if ( (MEMORY[0xFFFFF780000005F8] & 0x200) != 0 )
        v10 = (v10 + 63) & 0xFFFFFFC0;
      v10 += MEMORY[0xFFFFF78000000628];
    }
    if ( (v9 & 0x400) != 0 )
    {
      if ( (MEMORY[0xFFFFF780000005F8] & 0x400) != 0 )
        v10 = (v10 + 63) & 0xFFFFFFC0;
      v10 += MEMORY[0xFFFFF7800000062C];
    }
    if ( (MEMORY[0xFFFFF780000005F8] & 0x800) != 0 )
      v10 = (v10 + 63) & 0xFFFFFFC0;
    v11 = v10;
  }
  else
  {
    v11 = MEMORY[0xFFFFF78000000448];
  }
  v12 = &v8[v11 - 512];
  if ( !v12 )
    return 0LL;
  v14 = (int)a2[312];
  v15 = __readmsr(0x6A7u);
  *a3 = v15;
  v16 = *(_QWORD *)((_BYTE *)a2 + v14 + 1232) & 0x800LL;
  if ( (*(_DWORD *)(a1 + 116) & 0x100000) != 0 )
  {
    if ( !v16 )
    {
      *(_QWORD *)((char *)a2 + v14 + 1232) |= 0x800uLL;
      *(_QWORD *)v12 = 1LL;
      *((_QWORD *)v12 + 1) = v15;
      return 0LL;
    }
    result = KiVerifyContextXStateCetUEnabled(v12, v15);
    if ( (int)result < 0 )
      return result;
    return 0LL;
  }
  if ( !v16 )
    return 0LL;
  if ( *(_QWORD *)v12 )
    return 3221227018LL;
  else
    return *((_QWORD *)v12 + 1) != 0LL ? 0xC000060A : 0;
}
