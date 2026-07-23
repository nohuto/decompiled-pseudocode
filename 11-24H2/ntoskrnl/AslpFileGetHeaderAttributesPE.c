/*
 * XREFs of AslpFileGetHeaderAttributesPE @ 0x14080E2D8
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x14080CB9C (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslFileMappingEnsure @ 0x14080989C (AslFileMappingEnsure.c)
 *     AslpFileGetNtHeaderAttributes @ 0x14080E994 (AslpFileGetNtHeaderAttributes.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetHeaderAttributesPE(__int64 a1, __int64 a2)
{
  int v4; // edi
  int v5; // edi
  int NtHeaderAttributes; // eax
  int v7; // r9d
  int v8; // r10d
  int v9; // r11d
  int v10; // esi
  int v11; // r14d
  int v12; // r15d
  int v13; // ecx
  int v14; // r10d
  int v15; // r11d
  int v16; // esi
  int v17; // r14d
  int v18; // r15d
  __int64 v19; // rax
  _WORD v21[2]; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int16 v22; // [rsp+54h] [rbp-1Ch] BYREF
  unsigned int v23; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v24; // [rsp+5Ch] [rbp-14h] BYREF
  unsigned int v25; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v26; // [rsp+64h] [rbp-Ch] BYREF
  unsigned __int16 v27; // [rsp+C0h] [rbp+50h] BYREF
  unsigned __int16 v28; // [rsp+C8h] [rbp+58h] BYREF

  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v21[0] = 0;
  v22 = 0;
  v4 = AslFileMappingEnsure(a2);
  if ( v4 >= 0 )
  {
    v5 = 2;
    if ( *(_DWORD *)(a2 + 64) == 6 )
    {
      *(_DWORD *)(a1 + 664) |= 2u;
      *(_DWORD *)(a1 + 696) |= 2u;
      NtHeaderAttributes = AslpFileGetNtHeaderAttributes(
                             (unsigned int)&v23,
                             (unsigned int)&v24,
                             (unsigned int)&v25,
                             (unsigned int)&v26,
                             (__int64)&v27,
                             (__int64)&v28,
                             (__int64)v21,
                             (__int64)&v22,
                             a2);
      v7 = *(_DWORD *)(a1 + 600);
      v8 = *(_DWORD *)(a1 + 632);
      v9 = *(_DWORD *)(a1 + 728);
      v10 = *(_DWORD *)(a1 + 56);
      v11 = *(_DWORD *)(a1 + 952);
      v12 = *(_DWORD *)(a1 + 984);
      if ( NtHeaderAttributes < 0 )
      {
        v14 = v8 | 2;
        v15 = v9 | 2;
        *(_DWORD *)(a1 + 600) = v7 | 2;
        v16 = v10 | 2;
        v17 = v11 | 2;
        v18 = v12 | 2;
        v13 = 2;
      }
      else
      {
        *(_QWORD *)(a1 + 592) = v23;
        *(_QWORD *)(a1 + 624) = v24;
        v13 = 1;
        *(_QWORD *)(a1 + 720) = v25;
        v14 = v8 | 1;
        *(_QWORD *)(a1 + 48) = v26;
        v15 = v9 | 1;
        v16 = v10 | 1;
        *(_QWORD *)(a1 + 944) = v27;
        v17 = v11 | 1;
        v18 = v12 | 1;
        *(_QWORD *)(a1 + 976) = v28;
        *(_QWORD *)(a1 + 1008) = v21[0];
        v19 = v22;
        *(_DWORD *)(a1 + 576) = 2;
        *(_DWORD *)(a1 + 608) = 2;
        *(_DWORD *)(a1 + 704) = 2;
        *(_DWORD *)(a1 + 32) = 2;
        *(_QWORD *)(a1 + 936) = 2LL;
        *(_QWORD *)(a1 + 968) = 2LL;
        *(_QWORD *)(a1 + 1000) = 2LL;
        *(_QWORD *)(a1 + 1064) = 2LL;
        v5 = 1;
        *(_QWORD *)(a1 + 1072) = v19;
        *(_QWORD *)(a1 + 584) = 4LL;
        *(_DWORD *)(a1 + 600) = v7 | 1;
        *(_QWORD *)(a1 + 616) = 4LL;
        *(_QWORD *)(a1 + 712) = 4LL;
        *(_QWORD *)(a1 + 40) = 4LL;
        *(_DWORD *)(a1 + 928) = 1;
        *(_DWORD *)(a1 + 960) = 1;
        *(_DWORD *)(a1 + 992) = 1;
        *(_DWORD *)(a1 + 1056) = 1;
      }
      *(_DWORD *)(a1 + 632) = v14;
      *(_DWORD *)(a1 + 984) = v18;
      *(_DWORD *)(a1 + 952) = v17;
      *(_DWORD *)(a1 + 56) = v16;
      *(_DWORD *)(a1 + 728) = v15;
      *(_DWORD *)(a1 + 1016) |= v5;
      *(_DWORD *)(a1 + 1080) |= v13;
    }
    else
    {
      *(_DWORD *)(a1 + 600) |= 2u;
      *(_DWORD *)(a1 + 632) |= 2u;
      *(_DWORD *)(a1 + 728) |= 2u;
      *(_DWORD *)(a1 + 56) |= 2u;
      *(_DWORD *)(a1 + 1016) |= 2u;
      *(_DWORD *)(a1 + 952) |= 2u;
      *(_DWORD *)(a1 + 984) |= 2u;
      *(_DWORD *)(a1 + 1080) |= 2u;
    }
    return 0;
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpFileGetHeaderAttributesPE",
      3417,
      (unsigned int)"AslFileMappingEnsure failed [%x]");
  }
  return (unsigned int)v4;
}
