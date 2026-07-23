/*
 * XREFs of ExProcessCounterSetCallback @ 0x14085F3F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeQueryInterruptTimePrecise @ 0x14031B120 (KeQueryInterruptTimePrecise.c)
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
 *     KeFlushProcessWriteBuffers @ 0x14039E2AC (KeFlushProcessWriteBuffers.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x140407120 (PsIsProcessInSilo.c)
 *     ExReleaseExtensionTable @ 0x1404450F0 (ExReleaseExtensionTable.c)
 *     RtlUnicodeStringPrintf @ 0x14047B368 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExpCopyProcessInfo @ 0x14085DF24 (ExpCopyProcessInfo.c)
 *     ExGetNextProcess @ 0x140860570 (ExGetNextProcess.c)
 *     ExpSysInfoShouldSkipProcess @ 0x140860880 (ExpSysInfoShouldSkipProcess.c)
 *     RtlIntegerToUnicodeString @ 0x140860970 (RtlIntegerToUnicodeString.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140860D60 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ExIsRestrictedCaller @ 0x140A0DA38 (ExIsRestrictedCaller.c)
 *     ExpPcwDisabledStatus @ 0x140A43080 (ExpPcwDisabledStatus.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExProcessCounterSetCallback(int a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned __int64 CurrentServerSilo; // rsi
  __int64 v6; // r15
  __int64 v7; // rcx
  LARGE_INTEGER v8; // rax
  PEPROCESS NextProcess; // rbx
  LARGE_INTEGER v10; // r12
  int v11; // edi
  __int128 v12; // xmm0
  unsigned __int16 v13; // cx
  unsigned __int16 i; // r8
  __int16 v15; // ax
  bool v17; // sf
  __int128 *QuadPart; // rax
  _QWORD **v19; // [rsp+28h] [rbp-E0h]
  __int128 v20; // [rsp+38h] [rbp-D0h] BYREF
  LARGE_INTEGER String; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING String_8; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD *v24; // [rsp+70h] [rbp-98h] BYREF
  int v25; // [rsp+78h] [rbp-90h]
  char v26[8]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v27; // [rsp+90h] [rbp-78h]
  __int64 v28; // [rsp+B0h] [rbp-58h]
  __int64 v29; // [rsp+B8h] [rbp-50h]
  int v30; // [rsp+D0h] [rbp-38h]
  ULONG v31; // [rsp+D8h] [rbp-30h]
  int v32; // [rsp+E0h] [rbp-28h]
  int v33; // [rsp+E8h] [rbp-20h]
  __int64 v34; // [rsp+F8h] [rbp-10h]
  __int64 v35; // [rsp+100h] [rbp-8h]
  int v36; // [rsp+108h] [rbp+0h]
  __int64 v37; // [rsp+110h] [rbp+8h]
  __int64 v38; // [rsp+118h] [rbp+10h]
  __int64 v39; // [rsp+128h] [rbp+20h]
  __int64 v40; // [rsp+138h] [rbp+30h]
  __int64 v41; // [rsp+140h] [rbp+38h]
  __int64 v42; // [rsp+148h] [rbp+40h]
  __int64 v43; // [rsp+150h] [rbp+48h]
  __int64 v44; // [rsp+158h] [rbp+50h]
  __int64 v45; // [rsp+160h] [rbp+58h]
  __int64 v46; // [rsp+168h] [rbp+60h]
  __int64 v47; // [rsp+170h] [rbp+68h]
  __int64 v48; // [rsp+178h] [rbp+70h]
  __int64 v49; // [rsp+180h] [rbp+78h]
  _QWORD v50[14]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v51[5]; // [rsp+1F8h] [rbp+F0h] BYREF
  int v52; // [rsp+220h] [rbp+118h]
  int v53; // [rsp+224h] [rbp+11Ch]
  __int64 v54; // [rsp+228h] [rbp+120h]
  __int64 v55; // [rsp+230h] [rbp+128h]
  __int64 v56; // [rsp+238h] [rbp+130h]
  __int64 v57; // [rsp+240h] [rbp+138h]
  __int64 v58; // [rsp+248h] [rbp+140h]
  int Blink; // [rsp+250h] [rbp+148h]
  int v60; // [rsp+254h] [rbp+14Ch]
  unsigned __int64 ContextSwitches; // [rsp+258h] [rbp+150h]
  ULONG Value; // [rsp+260h] [rbp+158h]
  int v63; // [rsp+264h] [rbp+15Ch]
  __int64 v64; // [rsp+268h] [rbp+160h]
  __int64 v65; // [rsp+270h] [rbp+168h]
  __int64 v66; // [rsp+278h] [rbp+170h]
  __int64 v67; // [rsp+280h] [rbp+178h]
  __int64 v68; // [rsp+288h] [rbp+180h]
  __int64 v69; // [rsp+290h] [rbp+188h]
  __int64 v70; // [rsp+298h] [rbp+190h]
  __int64 v71; // [rsp+2A0h] [rbp+198h]
  __int64 v72; // [rsp+2A8h] [rbp+1A0h]
  __int64 v73; // [rsp+2B0h] [rbp+1A8h]
  __int64 v74; // [rsp+2B8h] [rbp+1B0h]
  __int64 v75; // [rsp+2C0h] [rbp+1B8h]
  LARGE_INTEGER v76; // [rsp+2C8h] [rbp+1C0h]
  char v77; // [rsp+2D8h] [rbp+1D0h] BYREF
  char v78; // [rsp+2F8h] [rbp+1F0h] BYREF

  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( (unsigned int)(a1 - 2) > 1 )
    return 0LL;
  v6 = *(_QWORD *)(a2 + 24);
  LOBYTE(v4) = 1;
  ExIsRestrictedCaller(v4, 0LL);
  LOBYTE(v7) = 1;
  KeFlushProcessWriteBuffers(v7);
  v8 = KeQueryInterruptTimePrecise(&String);
  NextProcess = (PEPROCESS)PsIdleProcess;
  v10 = v8;
  v11 = 0;
  if ( PsIdleProcess )
  {
    do
    {
      memset_0(v51, 0, 0xD8uLL);
      memset_0(v26, 0, 0x100uLL);
      memset_0(v50, 0, 0x68uLL);
      String.QuadPart = 0LL;
      v20 = 0LL;
      String_8 = 0LL;
      DestinationString_8 = 0LL;
      if ( !(unsigned __int8)ExpSysInfoShouldSkipProcess(NextProcess)
        && PsIsProcessInSilo(NextProcess, CurrentServerSilo) )
      {
        v11 = ExpCopyProcessInfo((__int64)v26, (__int64)NextProcess, 0, v50);
        if ( v11 < 0 )
          break;
        v51[1] = v28;
        v51[2] = v29;
        v51[0] = v28 + v29;
        v51[3] = v34;
        v51[4] = v35;
        v52 = v36;
        v53 = v33;
        v54 = v37;
        v55 = v38;
        v56 = v42;
        v57 = v41;
        v58 = v43;
        Blink = (int)NextProcess[1].CpuPartitionList.Blink;
        v60 = v30;
        ContextSwitches = NextProcess[3].ContextSwitches;
        Value = v31;
        v63 = v32;
        v64 = v39;
        v65 = v40;
        v67 = v45;
        v68 = v44 + v45;
        v69 = v46;
        v71 = v48;
        v66 = v44;
        v70 = v47;
        v72 = v47 + v48;
        v73 = v49;
        v74 = v27;
        v75 = 10000000LL;
        v76 = v10;
        String.QuadPart = 0LL;
        if ( NextProcess == PsIdleProcess )
        {
          v12 = *(_OWORD *)L"\b\n";
          v53 = 0;
        }
        else if ( NextProcess == PsInitialSystemProcess )
        {
          v12 = *(_OWORD *)ExpSystemProcessName;
        }
        else if ( NextProcess == (PEPROCESS)PsSecureSystemProcess )
        {
          v12 = *(_OWORD *)ExpSecureSystemProcessName;
          v55 = qword_140E2DD28 << 12;
          v74 = qword_140E2DD28 << 12;
        }
        else if ( (NextProcess[3].ActiveGroupsMask.Masks[1] & 0x4000000000000000LL) != 0 )
        {
          v12 = *(_OWORD *)L"$&";
        }
        else
        {
          v17 = (int)PsGetAllocatedFullProcessImageNameEx(NextProcess, &String) < 0;
          QuadPart = (__int128 *)String.QuadPart;
          if ( v17 )
            QuadPart = (__int128 *)NextProcess[1].LastRebalanceQpc;
          v12 = *QuadPart;
        }
        v20 = v12;
        v13 = (unsigned __int16)v12 >> 1;
        if ( (unsigned __int16)((unsigned __int16)v12 >> 1) >= 4u
          && *(_WORD *)(*((_QWORD *)&v12 + 1) + 2LL * v13 - 8) == 46
          && (*(_WORD *)(*((_QWORD *)&v12 + 1) + 2LL * v13 - 6) | 0x20) == 0x65
          && (*(_WORD *)(*((_QWORD *)&v12 + 1) + 2LL * v13 - 4) | 0x20) == 0x78
          && (*(_WORD *)(*((_QWORD *)&v12 + 1) + 2LL * v13 - 2) | 0x20) == 0x65 )
        {
          v13 -= 4;
        }
        for ( i = v13; i; --i )
        {
          if ( *(_WORD *)(*((_QWORD *)&v12 + 1) + 2LL * i - 2) == 92 )
            break;
        }
        *(_DWORD *)&String_8.Length = 1310720;
        LOWORD(v20) = 2 * (v13 - i);
        WORD1(v20) = v20;
        *((_QWORD *)&v20 + 1) = *((_QWORD *)&v12 + 1) + 2LL * i;
        String_8.Buffer = (wchar_t *)&v77;
        RtlIntegerToUnicodeString(Value, 0xAu, &String_8);
        v15 = v20;
        *(_DWORD *)&DestinationString_8.Length = 0x800000;
        if ( (unsigned __int16)(126 - String_8.Length) < (unsigned __int16)v20 )
          v15 = 126 - String_8.Length;
        LOWORD(v20) = v15;
        DestinationString_8.Buffer = (wchar_t *)&v78;
        RtlUnicodeStringPrintf(&DestinationString_8, L"%wZ:%wZ", &v20, &String_8, v19);
        v24 = v51;
        v25 = 216;
        if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
        {
          v19 = &v24;
          v11 = guard_dispatch_icall_no_overrides(v6, &DestinationString_8);
          ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
        }
        else
        {
          v11 = ExpPcwDisabledStatus();
        }
        if ( String.QuadPart )
          ExFreePoolWithTag((PVOID)String.QuadPart, 0);
        if ( v11 < 0 )
          break;
      }
      if ( NextProcess == PsIdleProcess )
        NextProcess = 0LL;
      NextProcess = (PEPROCESS)ExGetNextProcess(NextProcess);
    }
    while ( NextProcess );
    if ( NextProcess )
    {
      if ( NextProcess != PsIdleProcess )
        ObfDereferenceObjectWithTag(NextProcess, 0x6E457350u);
    }
  }
  return (unsigned int)v11;
}
