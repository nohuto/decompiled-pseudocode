/*
 * XREFs of CmpIsLoadType @ 0x140C4C108
 * Callers:
 *     CmpFindDrivers @ 0x140C4B4CC (CmpFindDrivers.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpValueToData @ 0x1407E35C4 (CmpValueToData.c)
 *     CmpFindValueByName @ 0x14086A794 (CmpFindValueByName.c)
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     CmpFindSubKeyByName @ 0x140A3D268 (CmpFindSubKeyByName.c)
 *     CmpGetNodeName @ 0x140C4BE6C (CmpGetNodeName.c)
 */

char CmpIsLoadType(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        int a3,
        __int64 a4,
        __int64 a5,
        ULONG_PTR BugCheckParameter3a,
        __int64 a7,
        ...)
{
  char v7; // bl
  bool v8; // zf
  ULONG_PTR v10; // r14
  unsigned int ValueByName; // r15d
  __int64 CellPaged; // rax
  ULONG_PTR v13; // rsi
  const WCHAR *NodeName; // rax
  const WCHAR *v15; // r13
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int SubKeyByName; // eax
  unsigned int v20; // eax
  unsigned int v21; // r14d
  ULONG_PTR v22; // rax
  _DWORD *v23; // r14
  __int64 *v24; // r14
  unsigned int v25; // eax
  ULONG_PTR CellFlat; // rax
  _DWORD *v28; // rsi
  char v29; // al
  __int64 v31; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v33; // [rsp+90h] [rbp+40h] BYREF
  int v34; // [rsp+94h] [rbp+44h]
  int v35; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v36; // [rsp+A8h] [rbp+58h] BYREF
  __int64 v37; // [rsp+C8h] [rbp+78h] BYREF
  va_list va; // [rsp+C8h] [rbp+78h]
  __int64 v39; // [rsp+D0h] [rbp+80h] BYREF
  va_list va1; // [rsp+D0h] [rbp+80h]
  __int64 v41; // [rsp+D8h] [rbp+88h] BYREF
  va_list va2; // [rsp+D8h] [rbp+88h]
  va_list va3; // [rsp+E0h] [rbp+90h] BYREF

  va_start(va3, a7);
  va_start(va2, a7);
  va_start(va1, a7);
  va_start(va, a7);
  v37 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v39 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v41 = va_arg(va3, _QWORD);
  v36 = a4;
  v35 = a3;
  v7 = 0;
  v8 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  a5 = 0xFFFFFFFFLL;
  v41 = 0xFFFFFFFFLL;
  v10 = 0LL;
  ValueByName = -1;
  LODWORD(v36) = 0;
  v33 = -1;
  v34 = 0;
  v31 = 0xFFFFFFFFLL;
  v37 = 0xFFFFFFFFLL;
  DestinationString = 0LL;
  v39 = 0xFFFFFFFFLL;
  LOWORD(v35) = 0;
  if ( v8 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, a2, (__int64 *)va2);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2, (__int64 *)va2);
  if ( !CellPaged )
    return CellPaged;
  v13 = BugCheckParameter3a;
  if ( BugCheckParameter3a && a7 )
  {
    NodeName = CmpGetNodeName(BugCheckParameter3, CellPaged, (unsigned __int16 *)&v35);
    v15 = NodeName;
    if ( NodeName )
    {
      if ( RtlInitUnicodeStringEx(&DestinationString, NodeName) >= 0 )
      {
        SubKeyByName = CmpFindSubKeyByName(v13, a7, &DestinationString.Length);
        if ( SubKeyByName != -1 )
        {
          if ( (*(_BYTE *)(v13 + 140) & 1) != 0
             ? HvpGetCellFlat(v13, SubKeyByName, &v33)
             : HvpGetCellPaged(v13, SubKeyByName, &v33) )
          {
            v10 = v13;
            ValueByName = CmpFindValueByName(v13);
            if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v13, (__int64)&v33);
            else
              HvpReleaseCellPaged(v13, &v33);
          }
        }
      }
      guard_dispatch_icall_no_overrides(v15, (unsigned __int16)v35, v16, v17);
      if ( ValueByName != -1 )
        goto LABEL_42;
    }
    v20 = CmpFindValueByName(BugCheckParameter3);
    v21 = v20;
    if ( v20 == -1 )
      goto LABEL_58;
    v22 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
        ? HvpGetCellFlat(BugCheckParameter3, v20, (__int64 *)va)
        : HvpGetCellPaged(BugCheckParameter3, v20, (__int64 *)va);
    if ( !v22 )
      goto LABEL_58;
    v23 = CmpValueToData(BugCheckParameter3, v21, v22, (__int64)&v36, (__int64)&v31);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)va);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)va);
    if ( !v23 )
      goto LABEL_58;
    v8 = (*v23 & 0xB) == 0;
    v24 = &CmpDriverWildcardString;
    if ( v8 )
      v24 = &CmpServiceWildcardString;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v31);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v31);
    v25 = CmpFindSubKeyByName(v13, a7, (unsigned __int16 *)v24);
    if ( v25 != -1 )
    {
      if ( (*(_BYTE *)(v13 + 140) & 1) != 0 ? HvpGetCellFlat(v13, v25, &v33) : HvpGetCellPaged(v13, v25, &v33) )
      {
        v10 = v13;
        ValueByName = CmpFindValueByName(v13);
        if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v13, (__int64)&v33);
        else
          HvpReleaseCellPaged(v13, &v33);
        if ( ValueByName != -1 )
          goto LABEL_42;
      }
    }
  }
  v10 = BugCheckParameter3;
  ValueByName = CmpFindValueByName(BugCheckParameter3);
  if ( ValueByName != -1 )
  {
LABEL_42:
    if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(v10, ValueByName, (__int64 *)va1);
    else
      CellFlat = HvpGetCellPaged(v10, ValueByName, (__int64 *)va1);
    if ( CellFlat )
    {
      v28 = CmpValueToData(v10, ValueByName, CellFlat, (__int64)&v36, (__int64)&a5);
      if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v10, (__int64)va1);
      else
        HvpReleaseCellPaged(v10, (unsigned int *)va1);
      if ( v28 )
      {
        v29 = *(_BYTE *)(v10 + 140);
        if ( *v28 == 1 )
        {
          if ( (v29 & 1) != 0 )
            HvpReleaseCellFlat(v10, (__int64)&a5);
          else
            HvpReleaseCellPaged(v10, (unsigned int *)&a5);
          v7 = 1;
        }
        else if ( (v29 & 1) != 0 )
        {
          HvpReleaseCellFlat(v10, (__int64)&a5);
        }
        else
        {
          HvpReleaseCellPaged(v10, (unsigned int *)&a5);
        }
      }
    }
  }
LABEL_58:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)va2);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)va2);
  LOBYTE(CellPaged) = v7;
  return CellPaged;
}
