/*
 * XREFs of HvHiveStartFileBacked @ 0x1409F8934
 * Callers:
 *     CmpCreateHive @ 0x14090EE00 (CmpCreateHive.c)
 * Callees:
 *     SetFailureLocation @ 0x140465824 (SetFailureLocation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmpTraceHiveMountStop @ 0x1409F8B4C (CmpTraceHiveMountStop.c)
 *     CmpTraceHiveMountStart @ 0x1409F8BDC (CmpTraceHiveMountStart.c)
 *     HvLoadHive @ 0x1409F8C4C (HvLoadHive.c)
 *     HvpFillFileName @ 0x1409F9B54 (HvpFillFileName.c)
 *     HvMarkBaseBlockDirty @ 0x140A4B658 (HvMarkBaseBlockDirty.c)
 *     HvpHeaderCheckSum @ 0x140BA9850 (HvpHeaderCheckSum.c)
 */

__int64 __fastcall HvHiveStartFileBacked(
        ULONG_PTR BugCheckParameter2,
        char a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        _OWORD *a10,
        _OWORD *a11,
        _BYTE *a12,
        _DWORD *a13,
        __int64 a14)
{
  unsigned int v15; // ebp
  int v16; // eax
  __int64 v17; // rbx
  __int64 Hive; // rbx
  char *v20; // rax
  char *v21; // rsi
  int v22; // ebp
  int v23; // eax

  if ( *(_DWORD *)BugCheckParameter2 != -1092567328 || (a3 & 0xF5617CEC) != 0 || a4 > 2 || (unsigned int)(a6 - 1) > 7 )
    __fastfail(5u);
  v15 = a3 & 0xFFFDFFFF;
  if ( !a2 )
    v15 = a3;
  *(_DWORD *)(BugCheckParameter2 + 160) = v15;
  if ( a5 )
  {
    *(_QWORD *)(BugCheckParameter2 + 24) = *a5;
    *(_QWORD *)(BugCheckParameter2 + 32) = a5[1];
    *(_QWORD *)(BugCheckParameter2 + 40) = a5[3];
    *(_QWORD *)(BugCheckParameter2 + 48) = a5[4];
  }
  if ( a4 )
  {
    v16 = 4;
    if ( a4 == 1 )
      v16 = 1;
    *(_DWORD *)(BugCheckParameter2 + 168) = v16;
  }
  else
  {
    *(_DWORD *)(BugCheckParameter2 + 168) = 0;
  }
  *(_DWORD *)(BugCheckParameter2 + 132) = 4096;
  *(_QWORD *)(BugCheckParameter2 + 8) = HvpGetCellPaged;
  *(_DWORD *)(BugCheckParameter2 + 136) = a6;
  *(_QWORD *)(BugCheckParameter2 + 16) = HvpReleaseCellPaged;
  *(_DWORD *)(BugCheckParameter2 + 216) = 2;
  v17 = MEMORY[0xFFFFF78000000014];
  if ( a2 )
  {
    v20 = (char *)guard_dispatch_icall_no_overrides(*(unsigned int *)(BugCheckParameter2 + 132));
    v21 = v20;
    if ( !v20 )
    {
      LODWORD(Hive) = -1073741670;
      SetFailureLocation(a14, 0, 24, -1073741670, 16);
      return (unsigned int)Hive;
    }
    memset_0(v20, 0, *(unsigned int *)(BugCheckParameter2 + 132));
    *((_DWORD *)v21 + 7) = 0;
    *((_DWORD *)v21 + 9) = -1;
    *((_DWORD *)v21 + 10) = 0;
    *(_DWORD *)v21 = 1718052210;
    *((_DWORD *)v21 + 1) = 1;
    *((_DWORD *)v21 + 2) = 1;
    *((_DWORD *)v21 + 8) = 1;
    *((_DWORD *)v21 + 11) = 1;
    HvpFillFileName(v21, a8);
    *((_DWORD *)v21 + 36) = 0;
    v22 = v15 & 0x80000;
    if ( v22 )
      *((_DWORD *)v21 + 36) = 2;
    *((_DWORD *)v21 + 5) = 1;
    v23 = v22 != 0 ? 6 : 3;
    *((_DWORD *)v21 + 6) = v23;
    *(_DWORD *)(BugCheckParameter2 + 220) = v23;
    *((_DWORD *)v21 + 41) = 1836346738;
    *(_QWORD *)(v21 + 12) = v17;
    if ( a10 )
    {
      *((_OWORD *)v21 + 7) = *a10;
      *((_OWORD *)v21 + 8) = *a10;
    }
    if ( a11 )
      *(_OWORD *)(v21 + 148) = *a11;
    *((_DWORD *)v21 + 127) = HvpHeaderCheckSum(v21);
    *(_QWORD *)(BugCheckParameter2 + 64) = v21;
    *(_DWORD *)(BugCheckParameter2 + 184) = 1;
    *(_DWORD *)(BugCheckParameter2 + 172) = 1;
    *(_DWORD *)(BugCheckParameter2 + 176) = 1;
    *(_BYTE *)(BugCheckParameter2 + 194) = 1;
    if ( a13 )
      *a13 = 825314627;
  }
  else
  {
    CmpTraceHiveMountStart();
    Hive = (unsigned int)HvLoadHive(BugCheckParameter2);
    CmpTraceHiveMountStop(Hive);
    if ( (int)Hive < 0 )
    {
      SetFailureLocation(a14, 0, 24, Hive, 64);
      return (unsigned int)Hive;
    }
    if ( (_DWORD)Hive == 1073741833 && a12 )
      *a12 = 1;
    if ( a13 )
      *a13 = 825445699;
    if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) & 1) != 0 )
    {
      HvMarkBaseBlockDirty(BugCheckParameter2);
      if ( a12 )
        *a12 = 1;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) &= ~1u;
    }
    HvpFillFileName(*(_QWORD *)(BugCheckParameter2 + 64), a8);
  }
  LODWORD(Hive) = 0;
  return (unsigned int)Hive;
}
