/*
 * XREFs of MiDemotePfnListChain @ 0x14069341C
 * Callers:
 *     MiMapUserLargePages @ 0x14026A20C (MiMapUserLargePages.c)
 *     MiPopLargePfnList @ 0x14048BDB4 (MiPopLargePfnList.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x1404A6B00 (MiInitializeLargeMdlLeafPfns.c)
 *     MiMakeLargePageTable @ 0x1404F5A48 (MiMakeLargePageTable.c)
 *     MiFillUserPhysicalMdl @ 0x140683174 (MiFillUserPhysicalMdl.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x140219EE0 (MiUpdateLargePageBitMap.c)
 *     MiUpdateDemotedSubPage @ 0x1402EF390 (MiUpdateDemotedSubPage.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiDemotePfnListChain(__int64 a1, int a2)
{
  unsigned int v2; // eax
  unsigned int j; // edi
  __int64 result; // rax
  __int64 v6; // rcx
  _QWORD *v7; // r14
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // bp
  char v11; // r9
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // r12
  _QWORD *v16; // rsi
  __int64 v17; // r15
  volatile signed __int32 *v18; // rbx
  __int64 v19; // rax
  unsigned int i; // [rsp+20h] [rbp-68h]
  unsigned __int64 v21; // [rsp+28h] [rbp-60h]
  __int64 *v22; // [rsp+30h] [rbp-58h]
  int v23; // [rsp+90h] [rbp+8h]
  int v25; // [rsp+A0h] [rbp+18h]
  unsigned int v26; // [rsp+A8h] [rbp+20h] BYREF

  v2 = a2 - 1;
  for ( i = a2 - 1; ; v2 = i )
  {
    for ( j = v2; ; --j )
    {
      result = 3LL * j;
      v6 = a1 + 24LL * j;
      v7 = *(_QWORD **)v6;
      if ( *(_QWORD *)v6 != v6 )
        break;
      if ( !j )
        return result;
    }
    --*(_QWORD *)(v6 + 16);
    if ( v7[1] != v6 )
      goto LABEL_31;
    v8 = *v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 )
      goto LABEL_31;
    v9 = MiPageSizes[j];
    *(_QWORD *)v6 = v8;
    *(_QWORD *)(v8 + 8) = v6;
    CurrentIrql = KeGetCurrentIrql();
    if ( j == 1 )
    {
      v11 = 6;
      if ( CurrentIrql != 2 )
        v11 = 2;
      MiUpdateLargePageBitMap(
        *((_QWORD *)qword_140E300C8 + ((v7[5] >> 43) & 0x3FFLL)),
        0xAAAAAAAAAAAAAAABuLL * ((__int64)(v7 + 0x44000000000LL) >> 4),
        v9,
        v11);
    }
    v12 = MiPageSizes[j + 1];
    v13 = v9 / v12;
    v14 = v9 % v12;
    v15 = j + 1;
    v16 = &v7[6 * v9];
    v21 = v9 / v12;
    if ( CurrentIrql != 2 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v14) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v14);
        v13 = v9 / v12;
      }
    }
    v25 = 0;
    if ( v13 )
    {
      v17 = 48 * v12;
      v18 = (volatile signed __int32 *)(v16 + 3);
      v22 = (__int64 *)(a1 + 24 * v15);
      while ( 1 )
      {
        v16 = (_QWORD *)((char *)v16 - v17);
        v18 = (volatile signed __int32 *)((char *)v18 - v17);
        v26 = 0;
        while ( _interlockedbittestandset64(v18, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v26);
          while ( *(__int64 *)v18 < 0 );
        }
        MiUpdateDemotedSubPage((__int64)v7, (__int64)v16, j + 1);
        if ( v16 != v7 )
        {
          v23 = *((_DWORD *)v18 + 2);
          BYTE2(v23) = BYTE2(v23) & 0xF8 | 5;
          *((_DWORD *)v18 + 2) = v23;
          *((_QWORD *)v18 - 1) = v7[2];
        }
        _InterlockedAnd64((volatile signed __int64 *)v18, 0x7FFFFFFFFFFFFFFFuLL);
        v19 = *v22;
        if ( *(__int64 **)(*v22 + 8) != v22 )
          break;
        *v16 = v19;
        *((_QWORD *)v18 - 2) = v22;
        *(_QWORD *)(v19 + 8) = v16;
        *v22 = (__int64)v16;
        if ( (unsigned int)++v25 >= v21 )
          goto LABEL_25;
      }
LABEL_31:
      __fastfail(3u);
    }
LABEL_25:
    if ( CurrentIrql != 2 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    *(_QWORD *)(a1 + 24 * v15 + 16) += v21;
    result = j + 1;
    if ( (_DWORD)result == a2 )
      break;
  }
  return result;
}
