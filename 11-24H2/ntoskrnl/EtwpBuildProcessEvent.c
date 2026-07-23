/*
 * XREFs of EtwpBuildProcessEvent @ 0x1408EFB30
 * Callers:
 *     EtwpTraceProcessRundown @ 0x1408EF628 (EtwpTraceProcessRundown.c)
 *     EtwpWriteProcessEvent @ 0x1408F13BC (EtwpWriteProcessEvent.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     RtlInitAnsiString @ 0x14045BBA0 (RtlInitAnsiString.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     EtwpQueryTokenPackageInfo @ 0x1408EFE7C (EtwpQueryTokenPackageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x1408F01B4 (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryProcessCommandLine @ 0x1408F0230 (EtwpQueryProcessCommandLine.c)
 *     RtlUnicodeStringToAnsiString @ 0x1409051E0 (RtlUnicodeStringToAnsiString.c)
 */

unsigned int *__fastcall EtwpBuildProcessEvent(
        __int64 a1,
        __int16 a2,
        char a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6,
        unsigned int *a7,
        ULONG_PTR *PackageSize,
        PSTRING DestinationString,
        unsigned __int16 *a10,
        PVOID *a11)
{
  PSTRING v11; // r13
  PVOID *v14; // r12
  int v15; // eax
  int *v16; // r15
  unsigned int v17; // ebp
  unsigned __int64 v18; // rax
  int v19; // ecx
  _QWORD *v20; // rsi
  void *v21; // rax
  ULONG_PTR *v22; // r15
  void *v23; // rdi
  NTSTATUS v24; // ebx
  int *v25; // rdx
  int v26; // ecx
  __int64 v27; // rbx
  __int64 Length; // rdi
  char v29; // di
  unsigned __int16 *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned int v33; // ebp
  int v34; // ecx
  unsigned int v35; // ecx
  __int64 v36; // rdx
  unsigned int v37; // ebp
  __int64 v38; // rcx
  unsigned int *result; // rax
  const UNICODE_STRING *v40; // rdx
  char *Buffer; // rdx
  char *v42; // rcx
  char *v43; // rax
  __int64 v44; // r8
  bool v45; // zf
  int v46; // ecx
  __int16 v47; // ax
  PVOID TokenInformation; // [rsp+60h] [rbp+8h] BYREF
  __int16 v49; // [rsp+68h] [rbp+10h]
  char v50; // [rsp+70h] [rbp+18h]

  v50 = a3;
  v49 = a2;
  v11 = DestinationString;
  TokenInformation = 0LL;
  RtlInitAnsiString(DestinationString, 0LL);
  v14 = a11;
  *(_QWORD *)a4 = a1;
  *(_DWORD *)(a4 + 8) = *(_DWORD *)(a1 + 464);
  v15 = *(_DWORD *)(a1 + 720);
  *v14 = 0LL;
  *(_DWORD *)(a4 + 12) = v15;
  *(_DWORD *)(a4 + 16) = PsGetSessionIdEx(a1);
  v16 = (int *)(a4 + 32);
  v17 = 4;
  *(_DWORD *)(a4 + 20) = *(_DWORD *)(a1 + 1364);
  v18 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(a4 + 32) = 0;
  *(_QWORD *)(a4 + 24) = v18;
  if ( *(_QWORD *)(a1 + 784) && ((v47 = *(_WORD *)(a1 + 1772), v47 == 332) || v47 == 452) )
  {
    *v16 = 2;
    v19 = 6;
  }
  else
  {
    v19 = 4;
  }
  if ( (*(_BYTE *)(a1 + 1530) & 7) != 0 )
    *v16 = v19;
  v20 = a6;
  *a6 = a4;
  v20[1] = 36LL;
  v21 = (void *)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
  v22 = PackageSize;
  v23 = v21;
  EtwpQueryTokenPackageInfo(v21, PackageSize);
  v24 = SeQueryInformationToken(v23, TokenUser, &TokenInformation);
  ObFastDereferenceObject((__int64 *)(a1 + 584), (ULONG_PTR)v23, 0x746C6644u);
  if ( v24 < 0 )
  {
    v26 = 4;
    TokenInformation = &EtwpNull;
    v25 = &EtwpNull;
  }
  else
  {
    v25 = (int *)TokenInformation;
    *v14 = TokenInformation;
    v26 = 4 * *(unsigned __int8 *)(*(_QWORD *)v25 + 1LL) + 24;
  }
  v20[2] = v25;
  *((_DWORD *)v20 + 7) = 0;
  v27 = a1 + 824;
  Length = -1LL;
  *((_DWORD *)v20 + 6) = v26;
  do
    ++Length;
  while ( *(_BYTE *)(v27 + Length) );
  if ( (_DWORD)Length == 14 )
  {
    v40 = *(const UNICODE_STRING **)(a1 + 848);
    if ( v40 )
    {
      if ( v40->Length && RtlUnicodeStringToAnsiString(v11, v40, 1u) >= 0 )
      {
        Length = v11->Length;
        Buffer = v11->Buffer;
        v27 = (__int64)&Buffer[Length];
        v42 = &Buffer[Length];
        v43 = &Buffer[Length];
        while ( 1 )
        {
          v44 = (__int64)v43;
          if ( v42 == Buffer )
            break;
          v27 = (__int64)(v43 - 1);
          v45 = *(v43 - 1) == 92;
          v42 = --v43;
          if ( v45 )
          {
            v27 = v44;
            break;
          }
        }
        LODWORD(Length) = LODWORD(v11->Buffer) - v27 + Length;
      }
    }
  }
  *((_DWORD *)v20 + 10) = Length;
  v29 = v50;
  v20[4] = v27;
  *((_DWORD *)v20 + 11) = 0;
  v20[6] = &EtwpNull;
  v20[7] = 1LL;
  if ( v29 )
    EtwpQueryProcessOtherInfo(a1, a5);
  else
    *a5 = 0LL;
  v30 = a10;
  *a10 = 0;
  if ( *(_QWORD *)(a1 + 736) )
  {
    if ( v29 )
    {
      EtwpQueryProcessCommandLine(a1, v30);
      v46 = *v30;
      if ( (_WORD)v46 )
      {
        v17 = 5;
        v20[8] = *((_QWORD *)v30 + 1);
        *((_DWORD *)v20 + 18) = v46;
        *((_DWORD *)v20 + 19) = 0;
      }
    }
  }
  v31 = 2LL * v17;
  v32 = v17 + 1;
  v33 = v17 + 2;
  v32 *= 2LL;
  v20[v31] = &EtwpNull;
  v20[v31 + 1] = 2LL;
  v34 = *(_DWORD *)v22;
  v20[v32] = v22 + 3;
  LODWORD(v20[v32 + 1]) = v34;
  HIDWORD(v20[v32 + 1]) = 0;
  v35 = *((_DWORD *)v22 + 2);
  v36 = v33;
  v37 = v33 + 1;
  v36 *= 2LL;
  v20[v36] = v22 + 35;
  v20[v36 + 1] = v35;
  if ( v49 == 807 )
  {
    v38 = 2LL * v37++;
    v20[v38] = a1 + 1472;
    v20[v38 + 1] = 8LL;
  }
  result = a7;
  *a7 = v37;
  return result;
}
