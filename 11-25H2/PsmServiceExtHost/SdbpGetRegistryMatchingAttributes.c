/*
 * XREFs of SdbpGetRegistryMatchingAttributes @ 0x18009AFA4
 * Callers:
 *     SdbpCheckMatchingRegistry @ 0x180099960 (SdbpCheckMatchingRegistry.c)
 *     SdbpCheckMatchingWildcardRegistry @ 0x18009A820 (SdbpCheckMatchingWildcardRegistry.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     SdbFindFirstTag @ 0x180097A8C (SdbFindFirstTag.c)
 *     SdbGetBinaryTagData @ 0x180097D00 (SdbGetBinaryTagData.c)
 *     SdbGetStringTagPtr @ 0x180097D74 (SdbGetStringTagPtr.c)
 *     SdbGetTagDataSize @ 0x180097E24 (SdbGetTagDataSize.c)
 *     SdbReadDWORDTag @ 0x180098128 (SdbReadDWORDTag.c)
 *     SdbReadQWORDTag @ 0x1800981C4 (SdbReadQWORDTag.c)
 */

__int64 __fastcall SdbpGetRegistryMatchingAttributes(
        __int64 a1,
        unsigned int a2,
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
  int v13; // ebp
  __int64 v14; // r13
  __int64 BinaryTagData; // r12
  unsigned int v16; // r14d
  unsigned int FirstTag; // eax
  _WORD *StringTagPtr; // rax
  _WORD *v19; // r15
  unsigned int v20; // eax
  unsigned int v21; // eax
  int DWORDTag; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  unsigned int v28; // eax
  __int64 TagDataSize; // rax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // esi
  unsigned int v33; // eax
  __int64 v35; // [rsp+28h] [rbp-50h]
  __int64 QWORDTag; // [rsp+30h] [rbp-48h]

  v10 = 0;
  *a3 = 0LL;
  v35 = 0LL;
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
  FirstTag = SdbFindFirstTag(a1, a2, 24577);
  if ( !FirstTag )
    goto LABEL_25;
  StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, FirstTag);
  v19 = StringTagPtr;
  if ( !StringTagPtr || !*StringTagPtr )
    goto LABEL_25;
  v20 = SdbFindFirstTag(a1, a2, 24624);
  if ( v20 )
    v35 = SdbGetStringTagPtr(a1, v20);
  v21 = SdbFindFirstTag(a1, a2, 16465);
  if ( !v21 )
    goto LABEL_16;
  DWORDTag = SdbReadDWORDTag(a1, v21, 0);
  v13 = DWORDTag;
  if ( !DWORDTag )
    goto LABEL_25;
  v23 = DWORDTag - 1;
  if ( !v23 )
    goto LABEL_23;
  v24 = v23 - 1;
  if ( !v24 )
    goto LABEL_23;
  v25 = v24 - 1;
  if ( !v25 )
  {
    v31 = SdbFindFirstTag(a1, a2, 36882);
    v32 = v31;
    if ( v31 )
    {
      BinaryTagData = SdbGetBinaryTagData(a1, v31);
      if ( BinaryTagData )
      {
        TagDataSize = (unsigned int)SdbGetTagDataSize(a1, v32);
        goto LABEL_17;
      }
    }
    goto LABEL_25;
  }
  v26 = v25 - 1;
  if ( !v26 )
  {
    v30 = SdbFindFirstTag(a1, a2, 16466);
    if ( v30 )
    {
      v10 = SdbReadDWORDTag(a1, v30, 0);
      TagDataSize = 0LL;
      goto LABEL_17;
    }
    goto LABEL_25;
  }
  v27 = v26 - 3;
  if ( !v27 )
  {
LABEL_23:
    v33 = SdbFindFirstTag(a1, a2, 24625);
    if ( v33 )
    {
      v14 = SdbGetStringTagPtr(a1, v33);
      if ( v14 )
        goto LABEL_16;
    }
LABEL_25:
    AslLogCallPrintf(1LL);
    return v16;
  }
  if ( v27 != 4 )
    goto LABEL_25;
  v28 = SdbFindFirstTag(a1, a2, 20507);
  if ( !v28 )
    goto LABEL_25;
  QWORDTag = SdbReadQWORDTag(a1, v28, 0LL);
LABEL_16:
  TagDataSize = 0LL;
LABEL_17:
  v16 = 1;
  *a3 = v19;
  *a4 = v35;
  *a5 = v13;
  *a6 = v14;
  *a7 = v10;
  *a8 = QWORDTag;
  *a9 = BinaryTagData;
  *a10 = TagDataSize;
  return v16;
}
