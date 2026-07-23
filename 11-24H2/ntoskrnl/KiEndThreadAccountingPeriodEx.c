/*
 * XREFs of KiEndThreadAccountingPeriodEx @ 0x14036A690
 * Callers:
 *     KiEndThreadAccountingPeriod @ 0x1405C0180 (KiEndThreadAccountingPeriod.c)
 * Callees:
 *     KiEndCounterAccumulation @ 0x14036AA0C (KiEndCounterAccumulation.c)
 *     KiUpdateThreadHgsFeedback @ 0x14036CDAC (KiUpdateThreadHgsFeedback.c)
 */

void __fastcall KiEndThreadAccountingPeriodEx(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int8 a4)
{
  char v4; // di
  int v5; // ebp
  __int64 v8; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // r10
  unsigned int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // edx
  unsigned int v18; // r9d
  unsigned __int16 *v19; // rcx
  __int64 v20; // r10
  _BOOL8 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  int v27; // ecx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rax
  unsigned int v31; // ecx
  __int64 v32; // rcx
  __int64 v33; // r8
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
    v14 = *(_QWORD *)(v8 + 1672);
    if ( v14 )
    {
      v15 = *(_QWORD *)(a1 + 35248);
      v16 = *(_QWORD *)(a1 + 35256);
      if ( v15 && v16 )
      {
        if ( *(_BYTE *)(v16 + 112) )
        {
          v17 = *(_DWORD *)(v16 + 132);
        }
        else
        {
          v17 = *(_DWORD *)(v16 + 80);
          if ( v17 >= *(_DWORD *)(v15 + 528) )
            v17 = *(_DWORD *)(v15 + 528);
        }
      }
      else
      {
        v17 = 100;
      }
      v18 = 0;
      v19 = (unsigned __int16 *)(a1 + 35434);
      do
      {
        if ( v17 <= *v19 )
          break;
        ++v18;
        ++v19;
      }
      while ( v18 < 3 );
      v20 = v18;
      v21 = *(_BYTE *)(a1 + 35336) != 0;
      v22 = v21 + 2 * v20;
      v23 = *(_QWORD *)(v14 + 8 * v22);
      a2 = v14 + 8 * v22;
      v24 = KiTimelineBitmapTime;
      *(_QWORD *)a2 = a3 + v23;
      v25 = *(_DWORD *)(v14 + 192);
      if ( v24 > v25 )
      {
        LODWORD(v34) = v24;
        a2 = v24 - v25;
        if ( (unsigned int)a2 >= 0x20 )
          HIDWORD(v34) = 1;
        else
          HIDWORD(v34) = (*(_DWORD *)(v14 + 196) << (v24 - v25)) | 1;
        *(_QWORD *)(v14 + 192) = v34;
      }
      else
      {
        v26 = v25 - v24;
        if ( v26 < 0x20 )
          *(_DWORD *)(v14 + 196) |= 1 << v26;
      }
      if ( !KiEfficiencyClassSystem )
      {
        v27 = *(unsigned __int8 *)(v8 + 516);
        if ( ((v27 - 2) & 0xFFFFFFFB) == 0 || (_BYTE)v27 == 5 )
        {
          a2 = 2 * v20;
          *(_QWORD *)(v14 + 16 * v20 + 8) += a3;
        }
      }
      if ( *(_QWORD *)(v8 + 1616) )
      {
        a2 = v14 + 8 * (v21 + 16 + 2 * v20);
        *(_QWORD *)a2 += a3;
        _InterlockedAdd64(
          (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v8 + 1616) + 1672LL) + 8 * (v21 + 2 * v20) + 64),
          a3);
      }
    }
    v4 &= ~0x20u;
  }
  if ( (v4 & 0x40) != 0 )
  {
    v30 = *(_QWORD *)(v8 + 968);
    if ( v30 )
      *(_BYTE *)(v30 + 64) = 0;
  }
  if ( KiHgsPlusEnabled )
    KiUpdateThreadHgsFeedback(a1, v8, a3, a4);
  if ( *(_QWORD *)(a1 + 34480) )
  {
    if ( *(_UNKNOWN **)(v8 + 544) != &KiInitialProcess )
    {
      a2 = *(unsigned __int8 *)(v8 + 516);
      if ( *(unsigned __int8 *)(v8 + 516) < 7u )
      {
        v31 = *(_DWORD *)(v8 + 80);
        if ( v31 <= *(_DWORD *)(v8 + 84) )
          v31 = *(_DWORD *)(v8 + 84);
        LOBYTE(v5) = v31 >= KiDynamicHeteroCpuPolicyExpectedCycles;
        v32 = (unsigned int)*(unsigned __int8 *)(v8 + 517) + KiHgsPlusConfiguration * (v5 + 2 * (_DWORD)a2);
        *(_QWORD *)(*(_QWORD *)(a1 + 34480) + 8 * v32) += a3;
      }
    }
  }
  if ( (v4 & 0xBE) != 0 )
  {
    v28 = *(_QWORD *)(v8 + 104);
    if ( v28 )
    {
      v29 = (_QWORD *)(v28 + *(unsigned int *)(a1 + 216));
      do
      {
        *v29 += a3;
        v29 = (_QWORD *)v29[52];
      }
      while ( v29 );
    }
    if ( (*(_BYTE *)(v8 + 2) & 8) != 0 && *(_UNKNOWN **)(v8 + 544) != &KiInitialProcess )
    {
      v33 = *(_QWORD *)(a1 + 192);
      a2 = *(_QWORD *)(*(_QWORD *)(v8 + 576) + 8LL * *(unsigned __int16 *)(v33 + 136) + 8);
      if ( (a2 & *(_QWORD *)(v33 + 128)) != *(_QWORD *)(v33 + 128) )
        *(_QWORD *)(a1 + 34472) += a3;
    }
    if ( *(_QWORD *)(v8 + 360) )
      KiEndCounterAccumulation(v8, a2);
  }
}
