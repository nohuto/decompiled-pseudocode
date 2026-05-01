/*
 * XREFs of SdbpApphelpExeInfo @ 0x180095564
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x18003F648 (SdbShouldBlockPackageLaunch.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     SdbpReadApphelpDisplayCustom @ 0x180095C0C (SdbpReadApphelpDisplayCustom.c)
 *     SdbpReadApphelpDisplayResources @ 0x180095DD8 (SdbpReadApphelpDisplayResources.c)
 *     SdbFindFirstTag @ 0x180097EEC (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x1800981D4 (SdbGetStringTagPtr.c)
 *     SdbReadBinaryTag @ 0x1800984CC (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x180098588 (SdbReadDWORDTag.c)
 *     AslStringDuplicate @ 0x18009E508 (AslStringDuplicate.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 */

__int64 __fastcall SdbpApphelpExeInfo(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int FirstTag; // eax
  unsigned int v14; // ebp
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  __int64 StringTagPtr; // rax
  unsigned int v24; // eax

  v7 = 0;
  memset_0(a4, 0, 0x88uLL);
  v8 = *(_QWORD *)(a2 + 28) - *(_QWORD *)&GUID_SYSMAIN_SDB.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)(a2 + 36) - *(_QWORD *)GUID_SYSMAIN_SDB.Data4;
  if ( !v8 )
    goto LABEL_18;
  v9 = *(_QWORD *)(a2 + 28) - *(_QWORD *)&GUID_SYSMERGE_SDB.Data1;
  if ( !v9 )
    v9 = *(_QWORD *)(a2 + 36) - *(_QWORD *)GUID_SYSMERGE_SDB.Data4;
  if ( v9 )
  {
    v10 = *(_QWORD *)(a2 + 28) - *(_QWORD *)&GUID_DRVMAIN_SDB.Data1;
    if ( !v10 )
      v10 = *(_QWORD *)(a2 + 36) - *(_QWORD *)GUID_DRVMAIN_SDB.Data4;
    if ( v10 )
    {
      v11 = *(_QWORD *)(a2 + 28) - *(_QWORD *)&GUID_MSIMAIN_SDB.Data1;
      if ( !v11 )
        v11 = *(_QWORD *)(a2 + 36) - *(_QWORD *)GUID_MSIMAIN_SDB.Data4;
      if ( !v11 )
        goto LABEL_17;
      v12 = *(_QWORD *)(a2 + 28) - *(_QWORD *)&GUID_MSIMERGE_SDB.Data1;
      if ( !v12 )
        v12 = *(_QWORD *)(a2 + 36) - *(_QWORD *)GUID_MSIMERGE_SDB.Data4;
      if ( !v12 )
LABEL_17:
        a4[32] = -2147352576;
    }
    else
    {
      a4[32] = -2147221504;
    }
  }
  else
  {
LABEL_18:
    a4[32] = -2147287040;
  }
  AslStringDuplicate(a4 + 22, &word_1800C1FFC);
  a4[12] = a3;
  *(_OWORD *)a4 = *(_OWORD *)(a2 + 28);
  FirstTag = SdbFindFirstTag(a2, a3, 28685LL);
  v14 = FirstTag;
  if ( FirstTag )
  {
    v15 = SdbFindFirstTag(a2, FirstTag, 16407LL);
    if ( v15 )
      a4[13] = SdbReadDWORDTag(a2, v15, 0LL);
    if ( (a4[32] & 0x40000) != 0 )
    {
      a4[14] = 1;
    }
    else
    {
      v16 = SdbFindFirstTag(a2, v14, 16400LL);
      if ( v16 )
        a4[14] = SdbReadDWORDTag(a2, v16, 0LL);
    }
    v17 = SdbFindFirstTag(a2, a3, 36868LL);
    if ( !v17
      || !(unsigned int)SdbReadBinaryTag(a2, v17, a4 + 4, 16LL)
      || (v18 = SdbFindFirstTag(a2, a3, 36881LL)) != 0 && !(unsigned int)SdbReadBinaryTag(a2, v18, a4 + 8, 16LL) )
    {
      AslLogCallPrintf(1LL);
      return v7;
    }
    v19 = SdbFindFirstTag(a2, v14, 16405LL);
    if ( v19 )
      a4[15] = SdbReadDWORDTag(a2, v19, 0LL);
    v20 = SdbFindFirstTag(a2, v14, 16470LL);
    if ( v20 )
      a4[28] = SdbReadDWORDTag(a2, v20, 0LL);
    v21 = SdbFindFirstTag(a2, v14, 16471LL);
    if ( v21 )
      a4[29] = SdbReadDWORDTag(a2, v21, 0LL);
    v22 = SdbFindFirstTag(a2, v14, 24627LL);
    if ( v22 )
    {
      StringTagPtr = SdbGetStringTagPtr(a2, v22);
      AslStringDuplicate(a4 + 30, StringTagPtr);
    }
    if ( (int)a4[32] < 0 )
    {
      if ( !(unsigned int)SdbpReadApphelpDisplayResources(a2, a3, v14, a4) )
LABEL_43:
        AslLogCallPrintf(1LL);
    }
    else if ( !(unsigned int)SdbpReadApphelpDisplayCustom(a2, a3, (unsigned int)a4[15], a4) )
    {
      goto LABEL_43;
    }
    v24 = SdbFindFirstTag(a2, v14, 16476LL);
    if ( v24 )
      SdbReadDWORDTag(a2, v24, 0LL);
    return 1;
  }
  return v7;
}
