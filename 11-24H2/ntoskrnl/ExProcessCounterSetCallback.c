/*
 * XREFs of ExProcessCounterSetCallback @ 0x1408EDBC0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     KeQueryInterruptTimePrecise @ 0x14033BC40 (KeQueryInterruptTimePrecise.c)
 *     PsGetCurrentServerSilo @ 0x140349A50 (PsGetCurrentServerSilo.c)
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     KeFlushProcessWriteBuffers @ 0x1403AFA9C (KeFlushProcessWriteBuffers.c)
 *     PsIsProcessInSilo @ 0x14040EF20 (PsIsProcessInSilo.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     RtlUnicodeStringPrintf @ 0x140480894 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExpCopyProcessInfo @ 0x1408EC6F4 (ExpCopyProcessInfo.c)
 *     ExGetNextProcess @ 0x1408EED40 (ExGetNextProcess.c)
 *     ExpSysInfoShouldSkipProcess @ 0x1408EF080 (ExpSysInfoShouldSkipProcess.c)
 *     RtlIntegerToUnicodeString @ 0x1408EF170 (RtlIntegerToUnicodeString.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1408EF560 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ExIsRestrictedCaller @ 0x140A14B1C (ExIsRestrictedCaller.c)
 *     ExpPcwDisabledStatus @ 0x140A4C4F0 (ExpPcwDisabledStatus.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExProcessCounterSetCallback(int a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned __int64 CurrentServerSilo; // rsi
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 InterruptTimePrecise; // rax
  PEPROCESS NextProcess; // rbx
  __int64 v10; // r12
  int v11; // edi
  __int128 v12; // xmm0
  unsigned __int16 v13; // cx
  unsigned __int16 i; // r8
  __int16 v15; // ax
  ULONG v16; // edi
  bool v18; // sf
  __int128 *LastRebalanceQpc; // rax
  _QWORD **v20; // [rsp+28h] [rbp-E0h]
  __int128 v21; // [rsp+38h] [rbp-D0h] BYREF
  __int128 *String; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING String_8; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD *v25; // [rsp+70h] [rbp-98h] BYREF
  int v26; // [rsp+78h] [rbp-90h]
  char v27[8]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v28; // [rsp+90h] [rbp-78h]
  __int64 v29; // [rsp+B0h] [rbp-58h]
  __int64 v30; // [rsp+B8h] [rbp-50h]
  int v31; // [rsp+D0h] [rbp-38h]
  ULONG v32; // [rsp+D8h] [rbp-30h]
  int v33; // [rsp+E0h] [rbp-28h]
  int v34; // [rsp+E8h] [rbp-20h]
  __int64 v35; // [rsp+F8h] [rbp-10h]
  __int64 v36; // [rsp+100h] [rbp-8h]
  int v37; // [rsp+108h] [rbp+0h]
  __int64 v38; // [rsp+110h] [rbp+8h]
  __int64 v39; // [rsp+118h] [rbp+10h]
  __int64 v40; // [rsp+128h] [rbp+20h]
  __int64 v41; // [rsp+138h] [rbp+30h]
  __int64 v42; // [rsp+140h] [rbp+38h]
  __int64 v43; // [rsp+148h] [rbp+40h]
  __int64 v44; // [rsp+150h] [rbp+48h]
  __int64 v45; // [rsp+158h] [rbp+50h]
  __int64 v46; // [rsp+160h] [rbp+58h]
  __int64 v47; // [rsp+168h] [rbp+60h]
  __int64 v48; // [rsp+170h] [rbp+68h]
  __int64 v49; // [rsp+178h] [rbp+70h]
  __int64 v50; // [rsp+180h] [rbp+78h]
  _QWORD v51[14]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v52[5]; // [rsp+1F8h] [rbp+F0h] BYREF
  int v53; // [rsp+220h] [rbp+118h]
  int v54; // [rsp+224h] [rbp+11Ch]
  __int64 v55; // [rsp+228h] [rbp+120h]
  __int64 v56; // [rsp+230h] [rbp+128h]
  __int64 v57; // [rsp+238h] [rbp+130h]
  __int64 v58; // [rsp+240h] [rbp+138h]
  __int64 v59; // [rsp+248h] [rbp+140h]
  int Blink; // [rsp+250h] [rbp+148h]
  int v61; // [rsp+254h] [rbp+14Ch]
  unsigned __int64 ContextSwitches; // [rsp+258h] [rbp+150h]
  ULONG Value; // [rsp+260h] [rbp+158h]
  int v64; // [rsp+264h] [rbp+15Ch]
  __int64 v65; // [rsp+268h] [rbp+160h]
  __int64 v66; // [rsp+270h] [rbp+168h]
  __int64 v67; // [rsp+278h] [rbp+170h]
  __int64 v68; // [rsp+280h] [rbp+178h]
  __int64 v69; // [rsp+288h] [rbp+180h]
  __int64 v70; // [rsp+290h] [rbp+188h]
  __int64 v71; // [rsp+298h] [rbp+190h]
  __int64 v72; // [rsp+2A0h] [rbp+198h]
  __int64 v73; // [rsp+2A8h] [rbp+1A0h]
  __int64 v74; // [rsp+2B0h] [rbp+1A8h]
  __int64 v75; // [rsp+2B8h] [rbp+1B0h]
  __int64 v76; // [rsp+2C0h] [rbp+1B8h]
  __int64 v77; // [rsp+2C8h] [rbp+1C0h]
  char v78; // [rsp+2D8h] [rbp+1D0h] BYREF
  char v79; // [rsp+2F8h] [rbp+1F0h] BYREF

  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( (unsigned int)(a1 - 2) > 1 )
    return 0LL;
  v6 = *(_QWORD *)(a2 + 24);
  LOBYTE(v4) = 1;
  ExIsRestrictedCaller(v4, 0LL);
  LOBYTE(v7) = 1;
  KeFlushProcessWriteBuffers(v7);
  InterruptTimePrecise = KeQueryInterruptTimePrecise((__int64)&String);
  NextProcess = (PEPROCESS)PsIdleProcess;
  v10 = InterruptTimePrecise;
  v11 = 0;
  if ( PsIdleProcess )
  {
    do
    {
      memset_0(v52, 0, 0xD8uLL);
      memset_0(v27, 0, 0x100uLL);
      memset_0(v51, 0, 0x68uLL);
      String = 0LL;
      v21 = 0LL;
      String_8 = 0LL;
      DestinationString_8 = 0LL;
      if ( !(unsigned __int8)ExpSysInfoShouldSkipProcess(NextProcess)
        && PsIsProcessInSilo(NextProcess, CurrentServerSilo) )
      {
        v11 = ExpCopyProcessInfo((__int64)v27, (__int64)NextProcess, 0, v51);
        if ( v11 < 0 )
          break;
        v52[1] = v29;
        v52[2] = v30;
        v52[0] = v29 + v30;
        v52[3] = v35;
        v52[4] = v36;
        v53 = v37;
        v54 = v34;
        v55 = v38;
        v56 = v39;
        v57 = v43;
        v58 = v42;
        v59 = v44;
        Blink = (int)NextProcess[1].CpuPartitionList.Blink;
        v61 = v31;
        ContextSwitches = NextProcess[3].ContextSwitches;
        Value = v32;
        v64 = v33;
        v65 = v40;
        v66 = v41;
        v68 = v46;
        v69 = v45 + v46;
        v70 = v47;
        v72 = v49;
        v67 = v45;
        v71 = v48;
        v73 = v48 + v49;
        v74 = v50;
        v75 = v28;
        v76 = 10000000LL;
        v77 = v10;
        String = 0LL;
        if ( NextProcess == PsIdleProcess )
        {
          v12 = *(_OWORD *)L"\b\n";
          v54 = 0;
        }
        else if ( NextProcess == PsInitialSystemProcess )
        {
          v12 = *(_OWORD *)ExpSystemProcessName;
        }
        else if ( NextProcess == (PEPROCESS)PsSecureSystemProcess )
        {
          v12 = *(_OWORD *)ExpSecureSystemProcessName;
          v56 = qword_140E2DBE8 << 12;
          v75 = qword_140E2DBE8 << 12;
        }
        else if ( (NextProcess[3].ActiveGroupsMask.Masks[1] & 0x4000000000000000LL) != 0 )
        {
          v12 = *(_OWORD *)L"$&";
        }
        else
        {
          v18 = (int)PsGetAllocatedFullProcessImageNameEx(NextProcess, &String) < 0;
          LastRebalanceQpc = String;
          if ( v18 )
            LastRebalanceQpc = (__int128 *)NextProcess[1].LastRebalanceQpc;
          v12 = *LastRebalanceQpc;
        }
        v21 = v12;
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
        LOWORD(v21) = 2 * (v13 - i);
        WORD1(v21) = v21;
        *((_QWORD *)&v21 + 1) = *((_QWORD *)&v12 + 1) + 2LL * i;
        String_8.Buffer = (wchar_t *)&v78;
        RtlIntegerToUnicodeString(Value, 0xAu, &String_8);
        v15 = v21;
        *(_DWORD *)&DestinationString_8.Length = 0x800000;
        if ( (unsigned __int16)(126 - String_8.Length) < (unsigned __int16)v21 )
          v15 = 126 - String_8.Length;
        LOWORD(v21) = v15;
        DestinationString_8.Buffer = (wchar_t *)&v79;
        RtlUnicodeStringPrintf(&DestinationString_8, L"%wZ:%wZ", &v21, &String_8, v20);
        v16 = Value;
        v25 = v52;
        v26 = 216;
        if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
        {
          v20 = &v25;
          v11 = guard_dispatch_icall_no_overrides(v6, &DestinationString_8, v16, 1LL);
          ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
        }
        else
        {
          v11 = ExpPcwDisabledStatus();
        }
        if ( String )
          ExFreePoolWithTag(String, 0);
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
