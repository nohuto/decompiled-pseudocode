/*
 * XREFs of SdbpGetRegistryMatchingAttributes @ 0x14080519C
 * Callers:
 *     SdbpCheckMatchingRegistry @ 0x140803760 (SdbpCheckMatchingRegistry.c)
 *     SdbpCheckMatchingWildcardRegistry @ 0x140804550 (SdbpCheckMatchingWildcardRegistry.c)
 * Callees:
 *     SdbGetBinaryTagData @ 0x14080623C (SdbGetBinaryTagData.c)
 *     SdbReadQWORDTag @ 0x14080631C (SdbReadQWORDTag.c)
 *     SdbReadDWORDTag @ 0x140946BB8 (SdbReadDWORDTag.c)
 *     SdbGetStringTagPtr @ 0x140947558 (SdbGetStringTagPtr.c)
 *     SdbGetTagDataSize @ 0x1409479E0 (SdbGetTagDataSize.c)
 *     SdbFindFirstTag @ 0x140947AFC (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetRegistryMatchingAttributes(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4,
        _DWORD *a5,
        __int64 *a6,
        _DWORD *a7,
        __int64 *a8,
        __int64 *a9,
        _QWORD *a10)
{
  int v10; // ebx
  unsigned int v11; // esi
  int v13; // ebp
  __int64 v14; // r13
  __int64 BinaryTagData; // r12
  unsigned int v16; // r14d
  unsigned int FirstTag; // eax
  const char *v18; // r9
  int v19; // r8d
  _WORD *StringTagPtr; // rax
  _WORD *v21; // r15
  unsigned int v22; // eax
  unsigned int v23; // eax
  int DWORDTag; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  unsigned int v30; // eax
  __int64 TagDataSize; // rax
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // esi
  unsigned int v35; // eax
  __int64 v37; // [rsp+28h] [rbp-50h]
  __int64 QWORDTag; // [rsp+30h] [rbp-48h]

  v10 = 0;
  *a3 = 0LL;
  v11 = a2;
  v37 = 0LL;
  QWORDTag = 0LL;
  *a5 = 0;
  v13 = 0;
  v14 = 0LL;
  BinaryTagData = 0LL;
  *a4 = 0LL;
  v16 = 0;
  *a6 = 0LL;
  *a7 = 0;
  *a8 = 0LL;
  *a9 = 0LL;
  *a10 = 0LL;
  FirstTag = SdbFindFirstTag(a1, a2, 24577LL);
  if ( !FirstTag )
  {
    v18 = "Failed to get key path tag";
    v19 = 1029;
LABEL_35:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetRegistryMatchingAttributes", v19, (_DWORD)v18);
    return v16;
  }
  StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, FirstTag);
  v21 = StringTagPtr;
  if ( !StringTagPtr || !*StringTagPtr )
  {
    v18 = "Failed to read key path";
    v19 = 1035;
    goto LABEL_35;
  }
  v22 = SdbFindFirstTag(a1, v11, 24624LL);
  if ( v22 )
    v37 = SdbGetStringTagPtr(a1, v22);
  v23 = SdbFindFirstTag(a1, v11, 16465LL);
  if ( !v23 )
    goto LABEL_20;
  DWORDTag = SdbReadDWORDTag(a1, v23, 0LL);
  v13 = DWORDTag;
  if ( !DWORDTag )
  {
    v18 = "Failed to read value type";
    v19 = 1054;
    goto LABEL_35;
  }
  v25 = DWORDTag - 1;
  if ( !v25 )
    goto LABEL_30;
  v26 = v25 - 1;
  if ( !v26 )
    goto LABEL_30;
  v27 = v26 - 1;
  if ( v27 )
  {
    v28 = v27 - 1;
    if ( v28 )
    {
      v29 = v28 - 3;
      if ( v29 )
      {
        if ( v29 != 4 )
        {
          v18 = "Unknown registry value type";
          v19 = 1114;
          goto LABEL_35;
        }
        v30 = SdbFindFirstTag(a1, v11, 20507LL);
        if ( !v30 )
        {
          v18 = "Failed to get TAG_REG_VALUE_DATA_QWORD";
          v19 = 1091;
          goto LABEL_35;
        }
        QWORDTag = SdbReadQWORDTag(a1, v30, 0LL);
        goto LABEL_20;
      }
LABEL_30:
      v35 = SdbFindFirstTag(a1, v11, 24625LL);
      if ( !v35 )
      {
        v18 = "Failed to get TAG_REG_VALUE_DATA_SZ";
        v19 = 1067;
        goto LABEL_35;
      }
      v14 = SdbGetStringTagPtr(a1, v35);
      if ( !v14 )
      {
        v18 = "Failed to read value data";
        v19 = 1073;
        goto LABEL_35;
      }
LABEL_20:
      TagDataSize = 0LL;
      goto LABEL_21;
    }
    v32 = SdbFindFirstTag(a1, v11, 16466LL);
    if ( !v32 )
    {
      v18 = "Failed to get TAG_REG_VALUE_DATA_DWORD";
      v19 = 1081;
      goto LABEL_35;
    }
    v10 = SdbReadDWORDTag(a1, v32, 0LL);
    TagDataSize = 0LL;
  }
  else
  {
    v33 = SdbFindFirstTag(a1, v11, 36882LL);
    v34 = v33;
    if ( !v33 )
    {
      v18 = "Failed to get TAG_REG_VALUE_DATA_BINARY";
      v19 = 1101;
      goto LABEL_35;
    }
    BinaryTagData = SdbGetBinaryTagData(a1, v33);
    if ( !BinaryTagData )
    {
      v18 = "Failed to read value data";
      v19 = 1107;
      goto LABEL_35;
    }
    TagDataSize = (unsigned int)SdbGetTagDataSize(a1, v34);
  }
LABEL_21:
  v16 = 1;
  *a3 = v21;
  *a4 = v37;
  *a5 = v13;
  *a6 = v14;
  *a7 = v10;
  *a8 = QWORDTag;
  *a9 = BinaryTagData;
  *a10 = TagDataSize;
  return v16;
}
