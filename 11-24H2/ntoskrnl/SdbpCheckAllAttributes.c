/*
 * XREFs of SdbpCheckAllAttributes @ 0x140807A9C
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x1408034C0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140804270 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     SdbReadQWORDTag @ 0x14080631C (SdbReadQWORDTag.c)
 *     SdbpCheckAttribute @ 0x140807D34 (SdbpCheckAttribute.c)
 *     AslFileAllocAndGetAttributes @ 0x14080CB9C (AslFileAllocAndGetAttributes.c)
 *     AslFileFreeAttributes @ 0x14080D0D8 (AslFileFreeAttributes.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     AslAlloc @ 0x140944EA4 (AslAlloc.c)
 *     SdbReadDWORDTag @ 0x140946BB8 (SdbReadDWORDTag.c)
 *     SdbReadWORDTag @ 0x140947048 (SdbReadWORDTag.c)
 *     SdbGetStringTagPtr @ 0x140947558 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x140947AFC (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCheckAllAttributes(int *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int16 *p_WORDTag; // r12
  unsigned int v7; // r15d
  __int64 v8; // rbx
  int v9; // edi
  int Attributes; // ebx
  _DWORD *v12; // rsi
  int v13; // eax
  int *i; // r13
  unsigned int FirstTag; // eax
  __int64 v16; // r9
  int v17; // ecx
  int v18; // r15d
  __int64 StringTagPtr; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int16 WORDTag; // [rsp+30h] [rbp-28h] BYREF
  int DWORDTag; // [rsp+34h] [rbp-24h] BYREF
  int v24; // [rsp+38h] [rbp-20h] BYREF
  int v25; // [rsp+3Ch] [rbp-1Ch]
  _QWORD v26[3]; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int16 v31; // [rsp+C0h] [rbp+68h]

  p_WORDTag = 0LL;
  DWORDTag = 0;
  v7 = a4;
  v26[0] = 0LL;
  v8 = a3;
  *a1 = 0;
  WORDTag = 0;
  v9 = 1;
  v24 = 1;
  if ( !a5 )
    return 0;
  if ( *(_DWORD *)(a5 + 80) )
  {
    if ( !*(_QWORD *)(a5 + 32) )
      return 0;
  }
  else if ( !*(_QWORD *)(a5 + 8) )
  {
    return 0;
  }
  v12 = (_DWORD *)AslAlloc(a1, 1152LL);
  if ( v12 )
  {
    v13 = 0;
    for ( i = (int *)&unk_140E0ED94; ; i += 2 )
    {
      v25 = v13;
      v26[1] = v13;
      if ( (unsigned __int64)v13 >= 0x29 )
        break;
      v31 = *((_WORD *)i - 2);
      FirstTag = SdbFindFirstTag(v8, v7, v31);
      if ( FirstTag )
      {
        v17 = v31 & 0xF000;
        v18 = 0;
        switch ( v17 )
        {
          case 12288:
            WORDTag = SdbReadWORDTag(v8, FirstTag, 0LL);
            p_WORDTag = &WORDTag;
            v18 = 2;
            break;
          case 16384:
            DWORDTag = SdbReadDWORDTag(v8, FirstTag, 0LL);
            p_WORDTag = (__int16 *)&DWORDTag;
            v18 = 4;
            break;
          case 20480:
            v26[0] = SdbReadQWORDTag(v8, FirstTag, 0LL, v16);
            p_WORDTag = (__int16 *)v26;
            v18 = 8;
            break;
          case 24576:
            StringTagPtr = SdbGetStringTagPtr(v8, FirstTag);
            p_WORDTag = (__int16 *)StringTagPtr;
            v20 = -1LL;
            do
              ++v20;
            while ( *(_WORD *)(StringTagPtr + 2 * v20) );
            v18 = 2 * v20 + 2;
            break;
        }
        Attributes = AslFileAllocAndGetAttributes(v12, a5, 1LL << *i);
        if ( Attributes < 0 )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbpCheckAllAttributes",
            499,
            (unsigned int)"Failed to get attribute %d [%x]");
          goto LABEL_34;
        }
        if ( (v12[8 * *i + 6] & 1) == 0 )
        {
          Attributes = 0;
          goto LABEL_34;
        }
        if ( !(unsigned int)SdbpCheckAttribute((unsigned int)&v24, v31, (_DWORD)p_WORDTag, v18, (__int64)&v12[8 * *i]) )
        {
          Attributes = -1073741595;
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbpCheckAllAttributes",
            522,
            (unsigned int)"SdbpCheckAttribute failed [%x]");
          goto LABEL_34;
        }
        v9 = v24;
        if ( *(_QWORD *)(a2 + 1752) )
          guard_dispatch_icall_no_overrides(v31, p_WORDTag);
        p_WORDTag = 0LL;
        if ( !v9 )
          break;
        v8 = a3;
        v7 = a4;
      }
      v13 = v25 + 1;
    }
    Attributes = 0;
    *a1 = v9;
LABEL_34:
    AslFileFreeAttributes(v12);
    AslFree(v21);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)Attributes;
}
