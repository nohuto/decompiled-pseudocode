/*
 * XREFs of CmpAddDriverToList @ 0x140C4AC68
 * Callers:
 *     CmpFindDrivers @ 0x140C4B4CC (CmpFindDrivers.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14040BAE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14040BBA0 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     CmpValueToData @ 0x1407E35C4 (CmpValueToData.c)
 *     CmpFindValueByName @ 0x14086A794 (CmpFindValueByName.c)
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     CmpFindTagIndex @ 0x140C4BB38 (CmpFindTagIndex.c)
 *     CmpGetNodeName @ 0x140C4BE6C (CmpGetNodeName.c)
 */

char __fastcall CmpAddDriverToList(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        ULONG_PTR a3,
        int a4,
        PCUNICODE_STRING Source,
        __int64 *a6,
        char a7)
{
  int TagIndex; // r15d
  bool v9; // zf
  char *v10; // r14
  char *v11; // rdi
  char v12; // r12
  __int64 CellPaged; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r13
  const WCHAR *NodeName; // rax
  const WCHAR *v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  char *v21; // rax
  unsigned __int16 v22; // cx
  _WORD *v23; // r12
  PCUNICODE_STRING v24; // rax
  unsigned int ValueByName; // esi
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  ULONG_PTR CellFlat; // rax
  PVOID v32; // r15
  size_t v33; // rsi
  wchar_t *v34; // rax
  const UNICODE_STRING *v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 *v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // esi
  ULONG_PTR v41; // rax
  _DWORD *v42; // rsi
  unsigned int v43; // esi
  ULONG_PTR v44; // rax
  unsigned __int16 v45; // ax
  unsigned int v46; // esi
  ULONG_PTR v47; // rax
  unsigned __int16 v48; // ax
  size_t Size; // [rsp+38h] [rbp-61h] BYREF
  unsigned int v51[2]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v52; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v53[2]; // [rsp+50h] [rbp-49h] BYREF
  UNICODE_STRING Destination; // [rsp+58h] [rbp-41h] BYREF
  __int64 v55; // [rsp+68h] [rbp-31h] BYREF
  __int64 v56; // [rsp+70h] [rbp-29h] BYREF
  __int64 v57; // [rsp+78h] [rbp-21h] BYREF
  UNICODE_STRING v58; // [rsp+80h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-9h] BYREF
  unsigned __int16 v60; // [rsp+E8h] [rbp+4Fh] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+F8h] [rbp+5Fh]
  int v62; // [rsp+100h] [rbp+67h]

  v62 = a4;
  BugCheckParameter3a = a3;
  TagIndex = -1;
  v53[0] = -1;
  v57 = 0xFFFFFFFFLL;
  v53[1] = 0;
  v9 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v10 = 0LL;
  v11 = 0LL;
  LODWORD(Size) = 0;
  v12 = 0;
  v51[1] = 0;
  v60 = 0;
  a7 = 0;
  v56 = 0xFFFFFFFFLL;
  v55 = 0xFFFFFFFFLL;
  v52 = 0xFFFFFFFFLL;
  DestinationString = 0LL;
  v51[0] = -1;
  Destination = 0LL;
  v58 = 0LL;
  if ( v9 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, a2, v53);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2, v53);
  v16 = CellPaged;
  if ( !CellPaged )
    goto LABEL_14;
  NodeName = (const WCHAR *)CmpGetNodeName(BugCheckParameter3, CellPaged, &v60);
  v18 = NodeName;
  if ( !NodeName )
    goto LABEL_14;
  if ( RtlInitUnicodeStringEx(&DestinationString, NodeName) < 0
    || (v21 = (char *)guard_dispatch_icall_no_overrides(144LL, 0LL, 540101955LL, v20), (v11 = v21) == 0LL) )
  {
    guard_dispatch_icall_no_overrides(v18, v60, v19, v20);
    goto LABEL_14;
  }
  memset_0(v21, 0, 0x90uLL);
  v22 = v60;
  v23 = v11 + 120;
  v24 = Source;
  *((_QWORD *)v11 + 8) = BugCheckParameter3;
  v10 = v11;
  *(UNICODE_STRING *)(v11 + 72) = *v24;
  *((_QWORD *)v11 + 5) = 0LL;
  *((_QWORD *)v11 + 3) = 0LL;
  *((_QWORD *)v11 + 16) = v18;
  *((_WORD *)v11 + 60) = v22 - 2;
  *((_WORD *)v11 + 61) = v22;
  ValueByName = CmpFindValueByName(BugCheckParameter3);
  if ( ValueByName == -1 )
  {
    v27 = (unsigned int)(unsigned __int16)*v23 + 46;
    Destination.MaximumLength = *v23 + 46;
    Destination.Buffer = (wchar_t *)guard_dispatch_icall_no_overrides(v27, 0LL, 540233027LL, v26);
    if ( !Destination.Buffer )
    {
      v12 = 0;
      goto LABEL_14;
    }
    if ( RtlAppendUnicodeToString(&Destination, L"System32\\Drivers\\") < 0
      || RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)(v11 + 120)) < 0
      || RtlAppendUnicodeToString(&Destination, L".sys") < 0 )
    {
      goto LABEL_13;
    }
  }
  else
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, ValueByName, v51);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, ValueByName, v51);
    if ( !CellFlat )
      goto LABEL_13;
    v32 = CmpValueToData(BugCheckParameter3, ValueByName, CellFlat, (__int64)&Size, (__int64)&v52);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v51);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v51);
    if ( !v32 )
      goto LABEL_13;
    v33 = (unsigned int)Size;
    v34 = (wchar_t *)guard_dispatch_icall_no_overrides((unsigned int)Size, 0LL, 540233027LL, v15);
    Destination.Buffer = v34;
    if ( !v34 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v52);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v52);
      goto LABEL_13;
    }
    memmove(v34, v32, v33);
    v9 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    Destination.Length = v33;
    Destination.MaximumLength = v33;
    if ( v9 )
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v52);
    else
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v52);
    TagIndex = -1;
  }
  v35 = Source;
  v58.MaximumLength = *v23 + Source->Length + 94;
  v58.Buffer = (wchar_t *)guard_dispatch_icall_no_overrides(v58.MaximumLength, 0LL, 540298563LL, v15);
  if ( !v58.Buffer
    || RtlAppendUnicodeStringToString(&v58, &CmpRegistryRootKeyPath) < 0
    || RtlAppendUnicodeStringToString(&v58, v35) < 0
    || RtlAppendUnicodeStringToString(&v58, &CmpServicesSubKeyPath) < 0
    || (v12 = 0, RtlAppendUnicodeStringToString(&v58, (PCUNICODE_STRING)(v11 + 120)) < 0) )
  {
LABEL_13:
    v12 = a7;
    goto LABEL_14;
  }
  v36 = *((_QWORD *)v11 + 3);
  if ( v36 )
    guard_dispatch_icall_no_overrides(v36, *((unsigned __int16 *)v11 + 8), v14, v15);
  v37 = *((_QWORD *)v11 + 5);
  *((UNICODE_STRING *)v11 + 1) = Destination;
  Destination = 0LL;
  if ( v37 )
    guard_dispatch_icall_no_overrides(v37, *((unsigned __int16 *)v11 + 16), v14, v15);
  v38 = a6;
  *((UNICODE_STRING *)v11 + 2) = v58;
  v39 = *v38;
  v58 = 0LL;
  if ( *(__int64 **)(v39 + 8) != v38 )
    __fastfail(3u);
  *(_QWORD *)v11 = v39;
  *((_QWORD *)v11 + 1) = v38;
  *(_QWORD *)(v39 + 8) = v11;
  v10 = 0LL;
  *v38 = (__int64)v11;
  v40 = CmpFindValueByName(BugCheckParameter3);
  if ( v40 == -1 )
  {
    *((_DWORD *)v11 + 35) = 1;
  }
  else
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v41 = HvpGetCellFlat(BugCheckParameter3, v40, v51);
    else
      v41 = HvpGetCellPaged(BugCheckParameter3, v40, v51);
    if ( !v41 )
      goto LABEL_14;
    v42 = CmpValueToData(BugCheckParameter3, v40, v41, (__int64)&Size, (__int64)&v55);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v51);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v51);
    if ( !v42 )
      goto LABEL_14;
    *((_DWORD *)v11 + 35) = *v42;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v55);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v55);
  }
  v43 = CmpFindValueByName(BugCheckParameter3);
  if ( v43 == -1 )
  {
    *((_DWORD *)v11 + 26) = 0;
    *((_QWORD *)v11 + 14) = 0LL;
  }
  else
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v44 = HvpGetCellFlat(BugCheckParameter3, v43, v51);
    else
      v44 = HvpGetCellPaged(BugCheckParameter3, v43, v51);
    if ( !v44 )
      goto LABEL_14;
    *((_QWORD *)v11 + 14) = CmpValueToData(BugCheckParameter3, v43, v44, (__int64)&Size, (__int64)&v56);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v51);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v51);
    if ( !*((_QWORD *)v11 + 14) )
      goto LABEL_14;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v56);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v56);
    v45 = Size - 2;
    *((_WORD *)v11 + 52) = Size - 2;
    if ( v45 > (unsigned __int16)Size )
      goto LABEL_14;
    *((_WORD *)v11 + 53) = v45;
  }
  v46 = CmpFindValueByName(BugCheckParameter3);
  if ( v46 == -1 )
  {
    *((_DWORD *)v11 + 22) = 0;
    *((_QWORD *)v11 + 12) = 0LL;
  }
  else
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v47 = HvpGetCellFlat(BugCheckParameter3, v46, v51);
    else
      v47 = HvpGetCellPaged(BugCheckParameter3, v46, v51);
    if ( !v47 )
      goto LABEL_14;
    *((_QWORD *)v11 + 12) = CmpValueToData(BugCheckParameter3, v46, v47, (__int64)&Size, (__int64)&v57);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v51);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v51);
    if ( !*((_QWORD *)v11 + 12) )
      goto LABEL_14;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v57);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v57);
    v48 = Size - 2;
    *((_WORD *)v11 + 44) = Size - 2;
    if ( v48 > (unsigned __int16)Size )
      goto LABEL_14;
    *((_WORD *)v11 + 45) = v48;
  }
  if ( (unsigned int)CmpFindValueByName(BugCheckParameter3) != -1 )
    TagIndex = CmpFindTagIndex(BugCheckParameter3a);
  v12 = 1;
  *((_DWORD *)v11 + 34) = TagIndex;
LABEL_14:
  if ( Destination.Buffer )
    guard_dispatch_icall_no_overrides(Destination.Buffer, Destination.Length, v14, v15);
  if ( v58.Buffer )
    guard_dispatch_icall_no_overrides(v58.Buffer, v58.Length, v14, v15);
  if ( v10 )
  {
    v28 = *((_QWORD *)v10 + 3);
    if ( v28 )
      guard_dispatch_icall_no_overrides(v28, *((unsigned __int16 *)v10 + 8), v14, v15);
    v29 = *((_QWORD *)v10 + 5);
    if ( v29 )
      guard_dispatch_icall_no_overrides(v29, *((unsigned __int16 *)v10 + 16), v14, v15);
    v30 = *((_QWORD *)v11 + 16);
    if ( v30 )
      guard_dispatch_icall_no_overrides(v30, *((unsigned __int16 *)v11 + 60), v14, v15);
    guard_dispatch_icall_no_overrides(v11, 144LL, v14, v15);
  }
  if ( v16 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v53);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v53);
  }
  return v12;
}
