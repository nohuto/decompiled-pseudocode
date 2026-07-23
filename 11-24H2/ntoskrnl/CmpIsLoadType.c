/*
 * XREFs of CmpIsLoadType @ 0x140C4E2A4
 * Callers:
 *     CmpFindDrivers @ 0x140C4D668 (CmpFindDrivers.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     CmpValueToData @ 0x1407E3B14 (CmpValueToData.c)
 *     CmpFindValueByName @ 0x14086EAC4 (CmpFindValueByName.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpFindSubKeyByName @ 0x140A32B78 (CmpFindSubKeyByName.c)
 *     CmpGetNodeName @ 0x140C4E008 (CmpGetNodeName.c)
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
  unsigned int SubKeyByName; // eax
  unsigned int v18; // eax
  unsigned int v19; // r14d
  ULONG_PTR v20; // rax
  _DWORD *v21; // r14
  __int64 *v22; // r14
  unsigned int v23; // eax
  ULONG_PTR CellFlat; // rax
  _DWORD *v26; // rsi
  char v27; // al
  __int64 v29; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v31; // [rsp+90h] [rbp+40h] BYREF
  int v32; // [rsp+94h] [rbp+44h]
  int v33; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v34; // [rsp+A8h] [rbp+58h] BYREF
  __int64 v35; // [rsp+C8h] [rbp+78h] BYREF
  va_list va; // [rsp+C8h] [rbp+78h]
  __int64 v37; // [rsp+D0h] [rbp+80h] BYREF
  va_list va1; // [rsp+D0h] [rbp+80h]
  __int64 v39; // [rsp+D8h] [rbp+88h] BYREF
  va_list va2; // [rsp+D8h] [rbp+88h]
  va_list va3; // [rsp+E0h] [rbp+90h] BYREF

  va_start(va3, a7);
  va_start(va2, a7);
  va_start(va1, a7);
  va_start(va, a7);
  v35 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v37 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v39 = va_arg(va3, _QWORD);
  v34 = a4;
  v33 = a3;
  v7 = 0;
  v8 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  a5 = 0xFFFFFFFFLL;
  v39 = 0xFFFFFFFFLL;
  v10 = 0LL;
  ValueByName = -1;
  LODWORD(v34) = 0;
  v31 = -1;
  v32 = 0;
  v29 = 0xFFFFFFFFLL;
  v35 = 0xFFFFFFFFLL;
  DestinationString = 0LL;
  v37 = 0xFFFFFFFFLL;
  LOWORD(v33) = 0;
  if ( v8 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, a2, (__int64 *)va2);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2, (__int64 *)va2);
  if ( !CellPaged )
    return CellPaged;
  v13 = BugCheckParameter3a;
  if ( BugCheckParameter3a && a7 )
  {
    NodeName = CmpGetNodeName(BugCheckParameter3, CellPaged, (unsigned __int16 *)&v33);
    v15 = NodeName;
    if ( NodeName )
    {
      if ( RtlInitUnicodeStringEx(&DestinationString, NodeName) >= 0 )
      {
        SubKeyByName = CmpFindSubKeyByName(v13, a7, &DestinationString.Length);
        if ( SubKeyByName != -1 )
        {
          if ( (*(_BYTE *)(v13 + 140) & 1) != 0
             ? HvpGetCellFlat(v13, SubKeyByName, &v31)
             : HvpGetCellPaged(v13, SubKeyByName, &v31) )
          {
            v10 = v13;
            ValueByName = CmpFindValueByName(v13);
            if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v13, (__int64)&v31);
            else
              HvpReleaseCellPaged(v13, &v31);
          }
        }
      }
      guard_dispatch_icall_no_overrides(v15, (unsigned __int16)v33);
      if ( ValueByName != -1 )
        goto LABEL_42;
    }
    v18 = CmpFindValueByName(BugCheckParameter3);
    v19 = v18;
    if ( v18 == -1 )
      goto LABEL_58;
    v20 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
        ? HvpGetCellFlat(BugCheckParameter3, v18, (__int64 *)va)
        : HvpGetCellPaged(BugCheckParameter3, v18, (__int64 *)va);
    if ( !v20 )
      goto LABEL_58;
    v21 = CmpValueToData(BugCheckParameter3, v19, v20, (__int64)&v34, (__int64)&v29);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)va);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)va);
    if ( !v21 )
      goto LABEL_58;
    v8 = (*v21 & 0xB) == 0;
    v22 = &CmpDriverWildcardString;
    if ( v8 )
      v22 = &CmpServiceWildcardString;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v29);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v29);
    v23 = CmpFindSubKeyByName(v13, a7, (unsigned __int16 *)v22);
    if ( v23 != -1 )
    {
      if ( (*(_BYTE *)(v13 + 140) & 1) != 0 ? HvpGetCellFlat(v13, v23, &v31) : HvpGetCellPaged(v13, v23, &v31) )
      {
        v10 = v13;
        ValueByName = CmpFindValueByName(v13);
        if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v13, (__int64)&v31);
        else
          HvpReleaseCellPaged(v13, &v31);
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
      v26 = CmpValueToData(v10, ValueByName, CellFlat, (__int64)&v34, (__int64)&a5);
      if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v10, (__int64)va1);
      else
        HvpReleaseCellPaged(v10, (unsigned int *)va1);
      if ( v26 )
      {
        v27 = *(_BYTE *)(v10 + 140);
        if ( *v26 == 1 )
        {
          if ( (v27 & 1) != 0 )
            HvpReleaseCellFlat(v10, (__int64)&a5);
          else
            HvpReleaseCellPaged(v10, (unsigned int *)&a5);
          v7 = 1;
        }
        else if ( (v27 & 1) != 0 )
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
