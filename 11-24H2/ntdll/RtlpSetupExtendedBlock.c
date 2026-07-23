/*
 * XREFs of RtlpSetupExtendedBlock @ 0x1800DA200
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x18005AF10 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlpAnalyzeHeapFailure @ 0x18000F2D0 (RtlpAnalyzeHeapFailure.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall RtlpSetupExtendedBlock(
        unsigned __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 a5,
        int a6)
{
  unsigned __int64 v6; // r12
  char v8; // r14
  __int64 v10; // rbx
  char v11; // r8
  __int64 v12; // r8
  unsigned int v14; // ecx
  __int64 v15; // rax
  int v16; // r8d
  __int16 v17; // cx

  v6 = a3 - 16;
  v8 = 0;
  v10 = a3 + a5;
  v11 = *(_BYTE *)(a3 - 1);
  if ( v11 != 4 )
  {
    if ( v11 == 5 )
    {
      LOWORD(v12) = *(_WORD *)(a3 - 4) ^ *(_WORD *)(a1 + 140);
    }
    else if ( (v11 & 0x40) != 0 )
    {
      LOWORD(v12) = *(_WORD *)(a3 + 16LL * (v11 & 0x3F) - 4);
    }
    else if ( (v11 & 0x3F) == 0x3F )
    {
      if ( v11 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          LODWORD(v15) = *(_DWORD *)(a3 - 8);
          if ( ((unsigned int)v15 & *(_DWORD *)(a1 + 124)) != 0 )
          {
            v12 = *(_QWORD *)(a3 + 16LL * (unsigned __int16)(*(_WORD *)(a1 + 136) ^ v15) - 16);
            goto LABEL_6;
          }
        }
        else
        {
          LOWORD(v15) = *(_WORD *)(a3 - 8);
        }
      }
      else
      {
        v14 = RtlpLFHKey ^ a1 ^ *(_DWORD *)(a3 - 8) ^ (v6 >> 4);
        if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(a3 - 8) ^ (v6 >> 4)) )
          v15 = 0LL;
        else
          v15 = *(_QWORD *)(v6 - ((unsigned __int64)v14 >> 12));
        LOWORD(v15) = *(_WORD *)(v15 + 36);
      }
      v12 = *(_QWORD *)(a3 + 16LL * (unsigned __int16)v15 - 16);
    }
    else
    {
      LOWORD(v12) = v11 & 0x3F;
    }
LABEL_6:
    *(_BYTE *)(v10 - 2) = a5 >> 4;
    *(_BYTE *)(a3 - 1) &= 0xC0u;
    *(_BYTE *)(a3 - 1) |= (unsigned __int8)(a5 >> 4) | 0x40;
    *(_BYTE *)(v10 - 1) = 5;
    *(_WORD *)(v10 - 4) = v12 + a5;
    *(_DWORD *)(v10 - 8) = a6;
    return v10;
  }
  if ( ((*(_BYTE *)(a1 + 116) | a2) & 1) == 0 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
    v8 = 1;
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    v16 = *(_DWORD *)(a3 - 8) ^ *(_DWORD *)(a1 + 136);
    *(_DWORD *)(a3 - 8) = v16;
    if ( HIBYTE(v16) != ((unsigned __int8)v16 ^ (unsigned __int8)(BYTE1(v16) ^ BYTE2(v16))) )
      RtlpAnalyzeHeapFailure(a1, v6);
  }
  v17 = *(_WORD *)(a3 - 8) + a5;
  *(_WORD *)(a3 - 8) = v17;
  *(_BYTE *)(a3 - 2) = a5 >> 4;
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a3 - 5) = HIBYTE(v17) ^ *(_BYTE *)(a3 - 6) ^ v17;
    *(_DWORD *)(a3 - 8) ^= *(_DWORD *)(a1 + 136);
  }
  *(_BYTE *)(v10 - 2) = a5 >> 4;
  *(_BYTE *)(v10 - 1) = 5;
  *(_WORD *)(v10 - 4) = a5 + v17;
  *(_DWORD *)(v10 - 8) = a6;
  if ( v8 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  return v10;
}
