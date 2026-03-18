/*
 * XREFs of KiEndThreadAccountingPeriodEx @ 0x14028E2F0
 * Callers:
 *     KiEndThreadAccountingPeriod @ 0x1405BEAD0 (KiEndThreadAccountingPeriod.c)
 * Callees:
 *     KiUpdateThreadHgsFeedback @ 0x14028C900 (KiUpdateThreadHgsFeedback.c)
 *     KiEndCounterAccumulation @ 0x14028E688 (KiEndCounterAccumulation.c)
 */

void __fastcall KiEndThreadAccountingPeriodEx(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  char v4; // di
  int v5; // ebp
  __int64 v8; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // r10
  unsigned int v13; // ecx
  _QWORD *v14; // r8
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // edx
  unsigned int v19; // r9d
  unsigned __int16 *v20; // rcx
  __int64 v21; // r10
  _BOOL8 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  int v28; // ecx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rax
  unsigned int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // [rsp+58h] [rbp+10h]

  v4 = *(_BYTE *)(a2 + 2);
  v5 = 0;
  v8 = a2;
  if ( v4 < 0 )
  {
    v10 = *(_QWORD *)(a2 + 544);
    v11 = *(_QWORD *)(a1 + 35760);
    v12 = *(unsigned int *)(v10 + 400);
    LODWORD(v10) = (*(_DWORD *)(v10 + 400) >> 13) & 0x3FFFF;
    _BitScanReverse(&v13, v10);
    a2 = *(_QWORD *)(*(_QWORD *)(v11 + 8LL * (v13 - 2)) + 8LL * ((unsigned int)v10 ^ (1 << v13)) + 8);
    *(_QWORD *)(a2 + 8 * ((v12 >> 4) & 0x1FF)) += a3;
    v4 &= ~0x80u;
  }
  if ( (v4 & 0x10) != 0 )
  {
    a2 = a1 + 8LL * *(unsigned __int8 *)(v8 + 124);
    *(_QWORD *)(a2 + 34440) += a3;
    v4 &= ~0x10u;
  }
  if ( (v4 & 0x20) != 0 )
  {
    v15 = *(_QWORD *)(v8 + 1672);
    if ( v15 )
    {
      v16 = *(_QWORD *)(a1 + 35248);
      v17 = *(_QWORD *)(a1 + 35256);
      if ( v16 && v17 )
      {
        if ( *(_BYTE *)(v17 + 112) )
        {
          v18 = *(_DWORD *)(v17 + 132);
        }
        else
        {
          v18 = *(_DWORD *)(v17 + 80);
          if ( v18 >= *(_DWORD *)(v16 + 528) )
            v18 = *(_DWORD *)(v16 + 528);
        }
      }
      else
      {
        v18 = 100;
      }
      v19 = 0;
      v20 = (unsigned __int16 *)(a1 + 35434);
      do
      {
        if ( v18 <= *v20 )
          break;
        ++v19;
        ++v20;
      }
      while ( v19 < 3 );
      v21 = v19;
      v22 = *(_BYTE *)(a1 + 35336) != 0;
      v23 = v22 + 2 * v21;
      v24 = *(_QWORD *)(v15 + 8 * v23);
      a2 = v15 + 8 * v23;
      v25 = KiTimelineBitmapTime;
      *(_QWORD *)a2 = a3 + v24;
      v26 = *(_DWORD *)(v15 + 192);
      if ( v25 > v26 )
      {
        LODWORD(v34) = v25;
        a2 = v25 - v26;
        if ( (unsigned int)a2 >= 0x20 )
          HIDWORD(v34) = 1;
        else
          HIDWORD(v34) = (*(_DWORD *)(v15 + 196) << (v25 - v26)) | 1;
        *(_QWORD *)(v15 + 192) = v34;
      }
      else
      {
        v27 = v26 - v25;
        if ( v27 < 0x20 )
          *(_DWORD *)(v15 + 196) |= 1 << v27;
      }
      if ( !KiEfficiencyClassSystem )
      {
        v28 = *(unsigned __int8 *)(v8 + 516);
        if ( ((v28 - 2) & 0xFFFFFFFB) == 0 || (_BYTE)v28 == 5 )
        {
          a2 = 2 * v21;
          *(_QWORD *)(v15 + 16 * v21 + 8) += a3;
        }
      }
      if ( *(_QWORD *)(v8 + 1616) )
      {
        a2 = v15 + 8 * (v22 + 16 + 2 * v21);
        *(_QWORD *)a2 += a3;
        _InterlockedAdd64(
          (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v8 + 1616) + 1672LL) + 8 * (v22 + 2 * v21) + 64),
          a3);
      }
    }
    v4 &= ~0x20u;
  }
  if ( (v4 & 0x40) != 0 )
  {
    v31 = *(_QWORD *)(v8 + 968);
    if ( v31 )
      *(_BYTE *)(v31 + 64) = 0;
  }
  if ( KiHgsPlusEnabled )
    KiUpdateThreadHgsFeedback(a1, v8, a3, a4);
  v14 = &KiInitialProcess;
  if ( *(_QWORD *)(a1 + 34480) )
  {
    if ( *(_UNKNOWN **)(v8 + 544) != &KiInitialProcess )
    {
      a2 = *(unsigned __int8 *)(v8 + 516);
      if ( *(unsigned __int8 *)(v8 + 516) < 7u )
      {
        v32 = *(_DWORD *)(v8 + 80);
        if ( v32 <= *(_DWORD *)(v8 + 84) )
          v32 = *(_DWORD *)(v8 + 84);
        LOBYTE(v5) = v32 >= KiDynamicHeteroCpuPolicyExpectedCycles;
        v33 = (unsigned int)*(unsigned __int8 *)(v8 + 517) + KiHgsPlusConfiguration * (v5 + 2 * (_DWORD)a2);
        *(_QWORD *)(*(_QWORD *)(a1 + 34480) + 8 * v33) += a3;
      }
    }
  }
  if ( (v4 & 0xBE) != 0 )
  {
    v29 = *(_QWORD *)(v8 + 104);
    if ( v29 )
    {
      v30 = (_QWORD *)(v29 + *(unsigned int *)(a1 + 216));
      do
      {
        *v30 += a3;
        v30 = (_QWORD *)v30[52];
      }
      while ( v30 );
    }
    if ( (*(_BYTE *)(v8 + 2) & 8) != 0 && *(_UNKNOWN **)(v8 + 544) != &KiInitialProcess )
    {
      v14 = *(_QWORD **)(a1 + 192);
      a2 = *(_QWORD *)(*(_QWORD *)(v8 + 576) + 8LL * *((unsigned __int16 *)v14 + 68) + 8);
      if ( (a2 & v14[16]) != v14[16] )
        *(_QWORD *)(a1 + 34472) += a3;
    }
    if ( *(_QWORD *)(v8 + 360) )
      KiEndCounterAccumulation(v8, a2, v14);
  }
}
