/*
 * XREFs of GetMonitorRectForDpi @ 0x1400458A8
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x140042F90 (xxxEnumDisplayMonitors.c)
 *     GetMonitorRect @ 0x140045308 (GetMonitorRect.c)
 *     PhysicalToLogicalDPIRect @ 0x1400453C0 (PhysicalToLogicalDPIRect.c)
 *     LogicalToPhysicalDPIPoint @ 0x1400456B0 (LogicalToPhysicalDPIPoint.c)
 *     CreateMonitorRegionForDpi @ 0x140045D90 (CreateMonitorRegionForDpi.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall GetMonitorRectForDpi(unsigned __int64 *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rax
  __int64 v5; // r15
  unsigned int v6; // edx
  unsigned __int64 v7; // r13
  __int128 v8; // xmm0
  unsigned __int64 v9; // r9
  int v10; // ecx
  signed int v11; // ebx
  int v12; // r8d
  unsigned __int64 v13; // rax
  int v14; // edi
  unsigned __int64 v15; // r14
  signed int v16; // esi
  int v17; // ecx
  unsigned __int64 v18; // rax
  int v19; // ebx
  int v20; // eax
  int v21; // ecx
  signed int v22; // r9d
  unsigned __int64 v23; // rax
  int v24; // ecx
  signed int v25; // r9d
  unsigned __int64 v26; // rax
  int v27; // ecx
  signed int v28; // ebx
  unsigned __int64 v29; // rax
  int v30; // r9d
  int v31; // ecx
  int v32; // edx
  signed int v33; // r9d
  unsigned __int64 v34; // rax

  v3 = *(_QWORD *)(a2 + 40);
  v5 = a3;
  v6 = *(unsigned __int16 *)(v3 + 62);
  v7 = *(unsigned __int16 *)(v3 + 60);
  v8 = *(_OWORD *)(v3 + 28);
  *(_OWORD *)a1 = v8;
  if ( a3 )
  {
    v9 = *a1;
    v10 = -*(_DWORD *)a1;
    v11 = ((int)v9 >> 31) & 0xFFFFFFFE;
    v12 = 0x80000000;
    if ( (v9 & 0x80000000) == 0LL )
      v10 = v9;
    if ( v6
      && (v13 = (__int64)(((unsigned __int64)v6 >> 1) + v10 * (unsigned __int64)(unsigned int)v5) / (int)v6,
          v14 = v13,
          v13 <= 0x7FFFFFFF) )
    {
      if ( v11 <= -1 )
        v14 = -(int)v13;
    }
    else
    {
      v14 = 0x80000000;
      if ( v11 > -1 )
        v14 = 0x7FFFFFFF;
    }
    v15 = HIDWORD(v9);
    v16 = (SHIDWORD(v9) >> 31) & 0xFFFFFFFE;
    v17 = -HIDWORD(v9);
    if ( SHIDWORD(v9) > 0 )
      v17 = HIDWORD(v9);
    if ( v6 && (v18 = (__int64)(((unsigned __int64)v6 >> 1) + v17 * v5) / v6, v19 = v18, v18 <= 0x7FFFFFFF) )
    {
      if ( v16 <= -1 )
        v19 = -(int)v18;
    }
    else
    {
      v19 = 0x80000000;
      if ( v16 > -1 )
        v19 = 0x7FFFFFFF;
    }
    v20 = v8 - v9;
    v21 = v9 - v8;
    v22 = (((int)v8 - (int)v9) >> 31) & 0xFFFFFFFE;
    if ( v20 >= 0 )
      v21 = v20;
    if ( (_DWORD)v7 && (v23 = (__int64)((v7 >> 1) + v21 * v5) / (int)v7, v23 <= 0x7FFFFFFF) )
    {
      if ( v22 <= -1 )
        LODWORD(v23) = -(int)v23;
    }
    else
    {
      LODWORD(v23) = 0x80000000;
      if ( v22 > -1 )
        LODWORD(v23) = 0x7FFFFFFF;
    }
    *(_DWORD *)a1 = v14 + v23;
    v24 = v15 - DWORD1(v8);
    v25 = ((DWORD1(v8) - (int)v15) >> 31) & 0xFFFFFFFE;
    if ( DWORD1(v8) - (int)v15 >= 0 )
      v24 = DWORD1(v8) - v15;
    if ( (_DWORD)v7 && (v26 = (__int64)((v7 >> 1) + v24 * v5) / (int)v7, v26 <= 0x7FFFFFFF) )
    {
      if ( v25 <= -1 )
        LODWORD(v26) = -(int)v26;
    }
    else
    {
      LODWORD(v26) = 0x80000000;
      if ( v25 > -1 )
        LODWORD(v26) = 0x7FFFFFFF;
    }
    *((_DWORD *)a1 + 1) = v26 + v19;
    v27 = v8 - DWORD2(v8);
    v28 = ((DWORD2(v8) - (int)v8) >> 31) & 0xFFFFFFFE;
    if ( DWORD2(v8) - (int)v8 >= 0 )
      v27 = DWORD2(v8) - v8;
    if ( (_DWORD)v7 && (v29 = (__int64)((v7 >> 1) + v27 * v5) / (int)v7, v30 = v29, v29 <= 0x7FFFFFFF) )
    {
      if ( v28 <= -1 )
        v30 = -(int)v29;
    }
    else
    {
      v30 = 0x80000000;
      if ( v28 > -1 )
        v30 = 0x7FFFFFFF;
    }
    v31 = DWORD1(v8) - HIDWORD(v8);
    v32 = v30 + *(_DWORD *)a1;
    v33 = ((HIDWORD(v8) - DWORD1(v8)) >> 31) & 0xFFFFFFFE;
    *((_DWORD *)a1 + 2) = v32;
    if ( HIDWORD(v8) - DWORD1(v8) >= 0 )
      v31 = HIDWORD(v8) - DWORD1(v8);
    if ( (_DWORD)v7 && (v34 = (__int64)((v7 >> 1) + v31 * v5) / (__int64)v7, v34 <= 0x7FFFFFFF) )
    {
      v12 = (__int64)((v7 >> 1) + v31 * v5) / (__int64)v7;
      if ( v33 <= -1 )
        v12 = -(int)v34;
    }
    else if ( v33 > -1 )
    {
      v12 = 0x7FFFFFFF;
    }
    *((_DWORD *)a1 + 3) = v12 + *((_DWORD *)a1 + 1);
  }
  return a1;
}
