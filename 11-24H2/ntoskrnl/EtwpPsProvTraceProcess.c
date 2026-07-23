/*
 * XREFs of EtwpPsProvTraceProcess @ 0x1408F1570
 * Callers:
 *     EtwpWriteProcessEvent @ 0x1408F13BC (EtwpWriteProcessEvent.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140A56950 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     PsGetSessionId @ 0x1403C1560 (PsGetSessionId.c)
 *     SeQueryTokenIntegrity @ 0x140409224 (SeQueryTokenIntegrity.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x140472F38 (RtlStringCchPrintfW.c)
 *     EtwpQueryProcessEnabledSecurityMitigations @ 0x14048B3C0 (EtwpQueryProcessEnabledSecurityMitigations.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PsQueryStatisticsProcess @ 0x14085E140 (PsQueryStatisticsProcess.c)
 *     ObGetProcessHandleCount @ 0x14085E360 (ObGetProcessHandleCount.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     PsLookupProcessByProcessId @ 0x1408F21F0 (PsLookupProcessByProcessId.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall EtwpPsProvTraceProcess(__int64 a1, char a2, unsigned int *a3, int *a4, __int16 a5)
{
  NTSTATUS result; // eax
  __int64 v10; // rdi
  const EVENT_DESCRIPTOR *v11; // r12
  ULONG v12; // esi
  void *v13; // rcx
  void *v14; // r14
  int v15; // eax
  UNICODE_STRING *p_DestinationString; // rax
  unsigned int Length; // ecx
  unsigned int v18; // eax
  void *v19; // r14
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // [rsp+38h] [rbp-D0h] BYREF
  PVOID TokenInformation; // [rsp+40h] [rbp-C8h] BYREF
  int ProcessHandleCount; // [rsp+48h] [rbp-C0h] BYREF
  int v29; // [rsp+4Ch] [rbp-BCh] BYREF
  int v30; // [rsp+50h] [rbp-B8h] BYREF
  int v31; // [rsp+54h] [rbp-B4h] BYREF
  int v32; // [rsp+58h] [rbp-B0h] BYREF
  int v33; // [rsp+5Ch] [rbp-ACh] BYREF
  int SessionId; // [rsp+60h] [rbp-A8h] BYREF
  int v35; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v36; // [rsp+68h] [rbp-A0h] BYREF
  PEPROCESS Process; // [rsp+70h] [rbp-98h] BYREF
  __int64 v38; // [rsp+78h] [rbp-90h] BYREF
  __int64 v39; // [rsp+80h] [rbp-88h] BYREF
  __int64 v40; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 CycleTime; // [rsp+90h] [rbp-78h] BYREF
  PVOID P; // [rsp+98h] [rbp-70h] BYREF
  _SID_AND_ATTRIBUTES IntegritySA; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v45[3]; // [rsp+C8h] [rbp-40h] BYREF
  char v46; // [rsp+E0h] [rbp-28h] BYREF
  int v47; // [rsp+F0h] [rbp-18h]
  int v48; // [rsp+F4h] [rbp-14h]
  int v49; // [rsp+F8h] [rbp-10h]
  int v50; // [rsp+FCh] [rbp-Ch]
  __int64 v51; // [rsp+108h] [rbp+0h]
  __int64 v52; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+138h] [rbp+30h] BYREF
  __int64 v54; // [rsp+148h] [rbp+40h]
  __int64 v55; // [rsp+150h] [rbp+48h]
  __int64 v56; // [rsp+158h] [rbp+50h]
  __int64 v57; // [rsp+160h] [rbp+58h]
  int *v58; // [rsp+168h] [rbp+60h]
  __int64 v59; // [rsp+170h] [rbp+68h]
  unsigned __int64 *p_CycleTime; // [rsp+178h] [rbp+70h]
  __int64 v61; // [rsp+180h] [rbp+78h]
  __int64 *p_SessionId; // [rsp+188h] [rbp+80h]
  __int64 v63; // [rsp+190h] [rbp+88h]
  char *p_ProcessHandleCount; // [rsp+198h] [rbp+90h]
  __int64 v65; // [rsp+1A0h] [rbp+98h]
  __int64 *v66; // [rsp+1A8h] [rbp+A0h]
  __int64 v67; // [rsp+1B0h] [rbp+A8h]
  int *v68; // [rsp+1B8h] [rbp+B0h]
  __int64 v69; // [rsp+1C0h] [rbp+B8h]
  char *Sid; // [rsp+1C8h] [rbp+C0h]
  __int64 v71; // [rsp+1D0h] [rbp+C8h]
  wchar_t *Buffer; // [rsp+1D8h] [rbp+D0h]
  __int64 v73; // [rsp+1E0h] [rbp+D8h]
  int *v74; // [rsp+1E8h] [rbp+E0h]
  __int64 v75; // [rsp+1F0h] [rbp+E8h]
  int *v76; // [rsp+1F8h] [rbp+F0h]
  __int64 v77; // [rsp+200h] [rbp+F8h]
  int *v78; // [rsp+208h] [rbp+100h]
  __int64 v79; // [rsp+210h] [rbp+108h]
  unsigned int *v80; // [rsp+218h] [rbp+110h]
  __int64 v81; // [rsp+220h] [rbp+118h]
  unsigned int *v82; // [rsp+228h] [rbp+120h]
  unsigned int v83; // [rsp+230h] [rbp+128h]
  int v84; // [rsp+234h] [rbp+12Ch]
  __int64 *v85; // [rsp+238h] [rbp+130h]
  __int64 v86; // [rsp+240h] [rbp+138h]
  wchar_t pszDest[16]; // [rsp+248h] [rbp+140h] BYREF

  v33 = 0;
  SessionId = 0;
  v26 = 0LL;
  ProcessHandleCount = 0;
  v39 = 0LL;
  v40 = 0LL;
  result = (unsigned int)memset_0(v45, 0, 0x68uLL);
  v10 = -1LL;
  v35 = -1;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  CycleTime = -1LL;
  LODWORD(v36) = 0;
  DestinationString = 0LL;
  IntegritySA = 0LL;
  switch ( a5 )
  {
    case 769:
      v11 = &ProcessStart;
      break;
    case 770:
      v11 = (const EVENT_DESCRIPTOR *)ProcessStop;
      break;
    case 771:
      v11 = (const EVENT_DESCRIPTOR *)ProcessRundown;
      break;
    default:
      return result;
  }
  LODWORD(v38) = *(_DWORD *)(a1 + 464);
  v12 = 3;
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&v38;
  v54 = a1 + 1656;
  v56 = a1 + 504;
  v55 = 8LL;
  v57 = 8LL;
  if ( ((a5 - 769) & 0xFFFD) != 0 )
  {
    if ( a5 == 770 )
    {
      TokenInformation = 0LL;
      PsQueryStatisticsProcess((_QWORD *)a1, v45);
      v59 = 8LL;
      v58 = (int *)(a1 + 1472);
      v61 = 4LL;
      p_CycleTime = (unsigned __int64 *)(a1 + 1364);
      v19 = (void *)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
      if ( SeQueryInformationToken(v19, TokenElevationType, &TokenInformation) >= 0 )
      {
        if ( *(_DWORD *)TokenInformation == 1 )
        {
          Process = 0LL;
          if ( SeQueryInformationToken(v19, TokenElevation, (PVOID *)&Process) >= 0 )
            LODWORD(v26) = Process->Header.LockNV != 0 ? 1 : 4;
          if ( Process )
            ExFreePoolWithTag(Process, 0);
        }
        else
        {
          LODWORD(v26) = *(_DWORD *)TokenInformation;
        }
      }
      ObFastDereferenceObject((__int64 *)(a1 + 584), (ULONG_PTR)v19, 0x746C6644u);
      if ( TokenInformation )
        ExFreePoolWithTag(TokenInformation, 0);
      v63 = 4LL;
      p_SessionId = &v26;
      ProcessHandleCount = ObGetProcessHandleCount((struct _EX_RUNDOWN_REF *)a1, 0LL);
      v65 = 4LL;
      p_ProcessHandleCount = (char *)&ProcessHandleCount;
      v39 = *(_QWORD *)(a1 + 984) << 12;
      v66 = &v39;
      v40 = *(_QWORD *)(a1 + 992) << 12;
      v68 = (int *)&v40;
      Sid = &v46;
      v20 = v47;
      if ( v48 )
        v20 = -1;
      v67 = 8LL;
      v29 = v20;
      Buffer = (wchar_t *)&v29;
      v21 = v49;
      if ( v50 )
        v21 = -1;
      v69 = 8LL;
      v22 = v51 >> 10;
      v30 = v21;
      v74 = &v30;
      v51 = v22;
      v71 = 8LL;
      if ( HIDWORD(v22) )
        LODWORD(v22) = -1;
      v76 = &v31;
      v31 = v22;
      v52 >>= 10;
      v23 = v52;
      v73 = 4LL;
      v75 = 4LL;
      if ( HIDWORD(v52) )
        v23 = -1;
      v78 = &v32;
      v24 = a1 + 1192;
      v77 = 4LL;
      v25 = a1 + 824;
      v32 = v23;
      v82 = (unsigned int *)v25;
      v79 = 4LL;
      v80 = (unsigned int *)v24;
      v81 = 4LL;
      do
        ++v10;
      while ( *(_BYTE *)(v25 + v10) );
      v84 = 0;
      v83 = v10 + 1;
      v12 = 16;
    }
  }
  else
  {
    v33 = *(_DWORD *)(a1 + 720);
    Process = 0LL;
    TokenInformation = 0LL;
    P = 0LL;
    v13 = *(void **)(a1 + 720);
    v58 = &v33;
    v59 = 4LL;
    if ( PsLookupProcessByProcessId(v13, &Process) >= 0 )
    {
      CycleTime = Process[3].CycleTime;
      ObfDereferenceObject(Process);
    }
    p_CycleTime = &CycleTime;
    v61 = 8LL;
    SessionId = PsGetSessionId(a1);
    p_SessionId = (__int64 *)&SessionId;
    v63 = 4LL;
    if ( (a2 & 1) != 0 )
      HIDWORD(v26) = 1;
    else
      v12 = 2;
    if ( (a2 & 8) != 0 )
      HIDWORD(v26) = v12;
    v65 = 4LL;
    p_ProcessHandleCount = (char *)&v26 + 4;
    v14 = (void *)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
    if ( SeQueryInformationToken(v14, TokenElevationType, &TokenInformation) >= 0 )
      LODWORD(v10) = *(_DWORD *)TokenInformation;
    LODWORD(v26) = v10;
    v66 = &v26;
    v67 = 4LL;
    if ( TokenInformation )
      ExFreePoolWithTag(TokenInformation, 0);
    if ( SeQueryInformationToken(v14, TokenElevation, &P) >= 0 )
      v35 = *(_DWORD *)P;
    v69 = 4LL;
    v68 = &v35;
    if ( P )
      ExFreePoolWithTag(P, 0);
    SeQueryTokenIntegrity(v14, &IntegritySA);
    v15 = *((unsigned __int8 *)IntegritySA.Sid + 1);
    Sid = (char *)IntegritySA.Sid;
    v71 = (unsigned int)(4 * v15 + 8);
    ObFastDereferenceObject((__int64 *)(a1 + 584), (ULONG_PTR)v14, 0x746C6644u);
    p_DestinationString = *(UNICODE_STRING **)(a1 + 848);
    if ( !p_DestinationString || !p_DestinationString->Length )
    {
      RtlStringCchPrintfW(pszDest, 0xFuLL, L"%S", a1 + 824);
      RtlInitUnicodeString(&DestinationString, pszDest);
      p_DestinationString = &DestinationString;
    }
    Length = p_DestinationString->Length;
    Buffer = p_DestinationString->Buffer;
    v74 = &EtwpNull;
    v78 = a4 + 1;
    v80 = a3 + 6;
    v81 = *a3;
    v82 = a3 + 70;
    v18 = a3[2];
    v73 = Length;
    v83 = v18;
    v75 = 2LL;
    v76 = a4;
    v77 = 4LL;
    v79 = 4LL;
    v84 = 0;
    LODWORD(v36) = EtwpQueryProcessEnabledSecurityMitigations(a1);
    v12 = 17;
    v86 = 4LL;
    v85 = &v36;
  }
  return EtwWrite(EtwpPsProvRegHandle, v11, 0LL, v12, &UserData);
}
