/*
 * XREFs of ObCreateObjectTypeEx @ 0x140A99090
 * Callers:
 *     ObCreateObjectType @ 0x1406F96E0 (ObCreateObjectType.c)
 *     AlpcpInitSystem @ 0x14073FD1C (AlpcpInitSystem.c)
 *     TtmiInitTerminals @ 0x14076FA00 (TtmiInitTerminals.c)
 *     TtmiInitQueues @ 0x140770B28 (TtmiInitQueues.c)
 *     EtwpInitializePrivateSessionDemuxObject @ 0x1407AD7B4 (EtwpInitializePrivateSessionDemuxObject.c)
 *     CmpInitializeLightWeightTransactionType @ 0x1407DE984 (CmpInitializeLightWeightTransactionType.c)
 *     VRegSetup @ 0x140829940 (VRegSetup.c)
 *     IoCreateObjectTypes @ 0x140C1C664 (IoCreateObjectTypes.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     ObpReleaseLookupContext @ 0x14028EDF0 (ObpReleaseLookupContext.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObpInitObjectTypeSD @ 0x1407427B8 (ObpInitObjectTypeSD.c)
 *     ObpLookupDirectoryEntry @ 0x14083E800 (ObpLookupDirectoryEntry.c)
 *     ObpAllocateObject @ 0x1408A3930 (ObpAllocateObject.c)
 *     RtlUnicodeToMultiByteSize @ 0x140905100 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x1409051E0 (RtlUnicodeStringToAnsiString.c)
 *     ObpUnlockObjectType @ 0x1409C64EC (ObpUnlockObjectType.c)
 *     ObpLockObjectTypeExclusive @ 0x1409C6564 (ObpLockObjectTypeExclusive.c)
 *     ObpLockDirectoryExclusive @ 0x1409DF8B8 (ObpLockDirectoryExclusive.c)
 *     ObpInsertDirectoryEntry @ 0x140A03DDC (ObpInsertDirectoryEntry.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObCreateObjectTypeEx(PCUNICODE_STRING SourceString, _DWORD *Src, void *a3, __int16 *a4, _QWORD *a5)
{
  char v5; // bl
  unsigned int Length; // ecx
  char v10; // al
  int v11; // eax
  wchar_t *Buffer; // rdx
  unsigned int v13; // ecx
  __int16 v15; // ax
  unsigned int v17; // edi
  _BYTE *v18; // rbx
  UNICODE_STRING v19; // xmm6
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  int inited; // esi
  __int64 v28; // rax
  _QWORD *v29; // rbx
  bool v30; // zf
  int v31; // r15d
  ULONG v32; // r8d
  wchar_t *v33; // rdx
  unsigned __int16 v34; // r13
  void *Pool2; // rax
  PVOID v36; // r13
  char *v37; // r8
  unsigned int v38; // ecx
  unsigned int MaximumLength; // r9d
  char *v40; // rdx
  size_t v41; // r13
  char v42; // dl
  int v43; // ecx
  __int16 *v44; // rcx
  _QWORD *v45; // rax
  _QWORD *v46; // rdx
  PVOID *v47; // r8
  PVOID v48; // rdx
  unsigned int v49; // eax
  char v50; // [rsp+48h] [rbp-C0h]
  ULONG BytesInMultiByteString; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v52; // [rsp+50h] [rbp-B8h]
  __int64 DestinationString; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+60h] [rbp-A8h] BYREF
  __int128 P_8; // [rsp+70h] [rbp-98h] BYREF
  __int64 v56; // [rsp+80h] [rbp-88h]
  __int16 *v57; // [rsp+88h] [rbp-80h]
  _STRING v58; // [rsp+90h] [rbp-78h] BYREF
  PVOID v59; // [rsp+A0h] [rbp-68h]
  _QWORD *v60; // [rsp+A8h] [rbp-60h]
  __int128 v61; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v62; // [rsp+C8h] [rbp-40h]
  __int128 v63; // [rsp+D8h] [rbp-30h]
  __int64 v64; // [rsp+E8h] [rbp-20h]
  int v65; // [rsp+F0h] [rbp-18h]
  _BYTE v66[16]; // [rsp+F8h] [rbp-10h] BYREF
  UNICODE_STRING v67; // [rsp+108h] [rbp+0h]
  char v68; // [rsp+120h] [rbp+18h]
  __int128 v69; // [rsp+138h] [rbp+30h]
  __int128 v70; // [rsp+148h] [rbp+40h]
  __int128 v71; // [rsp+158h] [rbp+50h]
  __int128 v72; // [rsp+168h] [rbp+60h]
  __int128 v73; // [rsp+178h] [rbp+70h]
  __int128 v74; // [rsp+188h] [rbp+80h]
  __int128 v75; // [rsp+198h] [rbp+90h]
  __int64 v76; // [rsp+1A8h] [rbp+A0h]
  int v77; // [rsp+1B8h] [rbp+B0h]

  v5 = (char)a4;
  v57 = a4;
  v60 = a5;
  memset_0(v66, 0, 0xE0uLL);
  v56 = 0LL;
  DestinationString = 0LL;
  v64 = 0LL;
  v65 = 0;
  P_8 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  DestinationString_8 = 0LL;
  if ( !SourceString
    || (Length = SourceString->Length, !(_WORD)Length)
    || (Length & 1) != 0
    || !Src
    || (Src[2] & 0xFFFEE00D) != 0
    || *(_WORD *)Src < 0x78u
    || *((_BYTE *)Src + 3) >= 4u
    || (v10 = *((_BYTE *)Src + 2), (v10 & 0x10) != 0) && !*((_QWORD *)Src + 7) && !*((_QWORD *)Src + 8)
    || (v10 & 4) == 0 && (v11 = Src[9]) != 0 && v11 != 512 && (v5 & 1) == 0 )
  {
    DbgPrintEx(0, 0, "Error creating object type\n");
    __debugbreak();
  }
  Buffer = SourceString->Buffer;
  LODWORD(v52) = Src[9];
  v13 = Length >> 1;
  while ( v13-- )
  {
    v15 = *Buffer++;
    if ( v15 == 92 )
      return 3221225523LL;
  }
  if ( ObpTypeDirectoryObject )
  {
    ObpLockDirectoryExclusive((__int64)&P_8, (__int64)ObpTypeDirectoryObject);
    if ( ObpLookupDirectoryEntry(&SourceString->Length, 64, (__int64)&P_8) )
    {
      v17 = -1073741771;
LABEL_24:
      ObpReleaseLookupContext((__int64)&P_8);
      return v17;
    }
  }
  DestinationString_8.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL, SourceString->MaximumLength, 0x6D4E624Fu);
  if ( !DestinationString_8.Buffer )
  {
    v17 = -1073741670;
    goto LABEL_24;
  }
  DestinationString_8.MaximumLength = SourceString->MaximumLength;
  RtlCopyUnicodeString(&DestinationString_8, SourceString);
  v18 = ObpTypeObjectType;
  v19 = DestinationString_8;
  if ( !ObpTypeObjectType )
  {
    v20 = *(_OWORD *)Src;
    v68 = 2;
    v18 = v66;
    v21 = *((_OWORD *)Src + 1);
    v77 = 1416258127;
    v69 = v20;
    v22 = *((_OWORD *)Src + 2);
    v70 = v21;
    v23 = *((_OWORD *)Src + 3);
    v71 = v22;
    v24 = *((_OWORD *)Src + 4);
    v72 = v23;
    v25 = *((_OWORD *)Src + 5);
    v73 = v24;
    v26 = *((_OWORD *)Src + 6);
    v74 = v25;
    *(_QWORD *)&v25 = *((_QWORD *)Src + 14);
    v75 = v26;
    v76 = v25;
    v67 = DestinationString_8;
  }
  memset_0(&v61, 0, 0x40uLL);
  LODWORD(v61) = 16;
  *(_QWORD *)((char *)&v62 + 4) = *((_QWORD *)v18 + 13);
  HIDWORD(v62) = 2048;
  inited = ObpAllocateObject(&v61, 0, (__int64)v18, &DestinationString_8, 224, &DestinationString, 0LL);
  if ( inited < 0 )
  {
    ObpReleaseLookupContext((__int64)&P_8);
    ExFreePoolWithTag(DestinationString_8.Buffer, 0);
    return (unsigned int)inited;
  }
  v28 = DestinationString;
  *(_QWORD *)(DestinationString + 32) = 0LL;
  v29 = (_QWORD *)(v28 + 48);
  v30 = (_DWORD)InitializationPhase == 0;
  *(UNICODE_STRING *)(v28 + 64) = v19;
  if ( !v30 )
  {
    inited = ObpInitObjectTypeSD(v28 + 48, a3);
    if ( inited < 0 )
    {
      ObpReleaseLookupContext((__int64)&P_8);
      ObfDereferenceObject(v29);
      return (unsigned int)inited;
    }
  }
  *(_OWORD *)((char *)v29 + 44) = 0LL;
  *((_DWORD *)v29 + 15) = 0;
  v31 = 3;
  if ( ObpTypeObjectType )
  {
    v32 = SourceString->Length;
    v33 = SourceString->Buffer;
    v50 = 1;
    BytesInMultiByteString = 0;
    RtlUnicodeToMultiByteSize(&BytesInMultiByteString, v33, v32);
    v34 = ((BytesInMultiByteString + 3) & 0xFFFC) + 1;
    Pool2 = (void *)ExAllocatePool2(0x100uLL, v34, 0x6E54624Fu);
    v59 = Pool2;
    if ( !Pool2 )
      goto LABEL_45;
    memset_0(Pool2, 0, v34);
    *(_QWORD *)&v58.Length = 0LL;
    v58.MaximumLength = v34;
    v36 = v59;
    v58.Buffer = (char *)v59;
    if ( RtlUnicodeStringToAnsiString(&v58, SourceString, 0) >= 0 )
    {
      v37 = v58.Buffer;
      v38 = SourceString->Length >> 1;
      if ( v38 < 4 )
      {
        MaximumLength = v58.MaximumLength;
        v40 = &v58.Buffer[v38];
        do
        {
          if ( v38 < MaximumLength )
            *v40 = 32;
          ++v38;
          ++v40;
        }
        while ( v38 < 4 );
      }
      *((_DWORD *)v29 + 48) = *(_DWORD *)v37;
      v50 = 0;
    }
    ExFreePoolWithTag(v36, 0);
    if ( v50 )
    {
LABEL_45:
      if ( SourceString->Length < 4u )
        *((_DWORD *)v29 + 48) = 1063936591;
      else
        *((_DWORD *)v29 + 48) = *(_DWORD *)SourceString->Buffer;
    }
  }
  else
  {
    ObpTypeObjectType = v29;
    *((_DWORD *)v29 + 11) = 1;
    *((_DWORD *)v29 + 48) = 1416258127;
  }
  v41 = 120LL;
  memset_0(v29 + 8, 0, 0x78uLL);
  if ( *(_WORD *)Src <= 0x78u )
    v41 = *(unsigned __int16 *)Src;
  memmove(v29 + 8, Src, v41);
  if ( *(_WORD *)Src >= 0x80u )
  {
    *((_DWORD *)v29 + 54) = Src[30];
    *((_DWORD *)v29 + 55) = Src[31];
  }
  v42 = v52;
  *((_DWORD *)v29 + 25) = v52;
  if ( (NtGlobalFlag & 0x4000) != 0 )
    *((_BYTE *)v29 + 66) |= 0x20u;
  v43 = (*((_BYTE *)Src + 2) & 0x10) != 0 ? 104 : 88;
  if ( (v42 & 1) != 0 )
    *((_DWORD *)v29 + 26) += v43;
  else
    *((_DWORD *)v29 + 27) += v43;
  if ( !*((_QWORD *)Src + 11) )
    v29[19] = SeDefaultObjectMethod;
  v29[23] = 0LL;
  v29[1] = v29;
  *v29 = v29;
  v29[26] = v29 + 25;
  v29[25] = v29 + 25;
  if ( (*((_BYTE *)v29 + 66) & 4) != 0 )
  {
    *((_DWORD *)v29 + 23) |= 0x100000u;
    v44 = &ObpDefaultObject;
  }
  else
  {
    v44 = v57;
  }
  v29[4] = v44;
  ObpLockObjectTypeExclusive((__int64)ObpTypeObjectType);
  v45 = (_QWORD *)(DestinationString - 32);
  if ( (*(_BYTE *)(DestinationString + 26) & 1) == 0 )
    v45 = 0LL;
  v46 = ObpTypeObjectType;
  v47 = (PVOID *)*((_QWORD *)ObpTypeObjectType + 1);
  if ( *v47 != ObpTypeObjectType )
    __fastfail(3u);
  *v45 = ObpTypeObjectType;
  v45[1] = v47;
  v17 = -1073741670;
  *v47 = v45;
  v46[1] = v45;
  v48 = ObpTypeObjectType;
  v49 = *((_DWORD *)ObpTypeObjectType + 11);
  if ( v49 >= 0x100 )
    inited = -1073741670;
  else
    ObpObjectTypes[v49 - 1] = (__int64)v29;
  ObpUnlockObjectType((__int64)v48);
  if ( v29 != ObpTypeObjectType )
  {
    if ( inited >= 0 )
    {
      while ( (unsigned __int64)v31 < 0x100 )
      {
        if ( !_InterlockedCompareExchange64(&ObTypeIndexTable[v31], 1LL, 0LL) )
          goto LABEL_71;
        ++v31;
      }
      inited = -1073741823;
    }
    v17 = inited;
    goto LABEL_81;
  }
  LOBYTE(v31) = 2;
LABEL_71:
  ObTypeIndexTable[(unsigned __int8)v31] = (__int64)v29;
  *((_BYTE *)v29 + 40) = v31;
  if ( ObpTypeDirectoryObject && !ObpInsertDirectoryEntry((char *)ObpTypeDirectoryObject, (char *)v29, (__int64)&P_8) )
  {
    ObTypeIndexTable[(unsigned __int8)v31] = 0LL;
LABEL_81:
    ObpReleaseLookupContext((__int64)&P_8);
    ObfDereferenceObject(v29);
    return v17;
  }
  ObpReleaseLookupContext((__int64)&P_8);
  *v60 = v29;
  return 0LL;
}
