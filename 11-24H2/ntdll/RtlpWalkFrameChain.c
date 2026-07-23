/*
 * XREFs of RtlpWalkFrameChain @ 0x180042B00
 * Callers:
 *     RtlWalkFrameChain @ 0x18001CA20 (RtlWalkFrameChain.c)
 * Callees:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x180042F40 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpxVirtualUnwind @ 0x180043630 (RtlpxVirtualUnwind.c)
 *     RtlpValidateContextFlags @ 0x180044820 (RtlpValidateContextFlags.c)
 *     RtlLocateExtendedFeature @ 0x180045900 (RtlLocateExtendedFeature.c)
 *     RtlInitializeExtendedContext2 @ 0x1800D2A60 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1800D2FE0 (RtlGetExtendedContextLength2.c)
 *     RtlpGetStackLimits @ 0x1800DD990 (RtlpGetStackLimits.c)
 *     RtlpCaptureContext2 @ 0x18011EEF0 (RtlpCaptureContext2.c)
 *     ZwQueryVirtualMemory @ 0x1801604B0 (ZwQueryVirtualMemory.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180164700 (_alloca_probe.c)
 */

__int64 __fastcall RtlpWalkFrameChain(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  void (*v6)(void); // rcx
  ULONG64 v7; // rdi
  ULONG v8; // esi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  void *v11; // rsp
  void *v12; // rsp
  unsigned int v13; // edi
  __int64 v14; // rsi
  __int64 v15; // rcx
  int v16; // r14d
  int v17; // eax
  _BYTE v19[4]; // [rsp+60h] [rbp+0h] BYREF
  int v20; // [rsp+64h] [rbp+4h]
  NTSTATUS v21; // [rsp+68h] [rbp+8h]
  ULONG ContextLength[3]; // [rsp+6Ch] [rbp+Ch] BYREF
  unsigned __int64 v23; // [rsp+78h] [rbp+18h] BYREF
  unsigned __int64 v24; // [rsp+80h] [rbp+20h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+88h] [rbp+28h] BYREF
  __int64 v26; // [rsp+90h] [rbp+30h] BYREF
  __int64 v27; // [rsp+98h] [rbp+38h] BYREF
  void (*v28)(void); // [rsp+A0h] [rbp+40h]
  __int64 v29; // [rsp+A8h] [rbp+48h]
  __int128 v30; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v31; // [rsp+C0h] [rbp+60h]
  __int128 v32; // [rsp+C8h] [rbp+68h]
  __int64 v33; // [rsp+D8h] [rbp+78h]
  __int128 MemoryInformation; // [rsp+E8h] [rbp+88h] BYREF
  __int128 v35; // [rsp+F8h] [rbp+98h]
  __int128 v36; // [rsp+108h] [rbp+A8h]
  void (*v37)(void); // [rsp+158h] [rbp+F8h]

  v29 = a1;
  ContextEx = 0LL;
  ContextLength[0] = 0;
  v26 = 0LL;
  v27 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  MemoryInformation = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v6 = RtlRaiseExceptionForReturnAddressHijack;
  if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) != 1 )
    v6 = 0LL;
  v28 = v6;
  v7 = v6 != 0LL ? 0x800 : 0;
  v8 = v6 != 0LL ? 1048651 : 1048587;
  RtlGetExtendedContextLength2(v8, ContextLength, (unsigned int)v7);
  v9 = ContextLength[0] + 15LL;
  if ( v9 <= ContextLength[0] )
    v9 = 0xFFFFFFFFFFFFFF0LL;
  v10 = v9 & 0xFFFFFFFFFFFFFFF0uLL;
  v11 = alloca(v10);
  v12 = alloca(v10);
  RtlInitializeExtendedContext2((PCONTEXT)v19, v8, &ContextEx, v7);
  RtlpCaptureContext2(v19);
  v19[0] = 0;
  if ( (unsigned __int8)RtlpGetStackLimits(&v23, &v24) )
  {
    v13 = 0;
    v32 = xmmword_1801E6440;
    v33 = qword_1801E6450;
    while ( 1 )
    {
      if ( (v35 & 7) != 0 || (unsigned __int64)v35 < v23 || (unsigned __int64)v35 >= v24 )
        return v13;
      v14 = RtlpLookupFunctionEntryForStackWalks(v37);
      if ( v14 )
      {
        v21 = 0;
        v15 = *(unsigned int *)(v14 + 8);
        v16 = DWORD2(v32);
        if ( !*(_WORD *)(v15 + *((_QWORD *)&v32 + 1) + 1) && (*(_BYTE *)(v15 + *((_QWORD *)&v32 + 1)) & 0x20) == 0 )
        {
          v21 = ZwQueryVirtualMemory(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  v37,
                  MemoryBasicInformation,
                  &MemoryInformation,
                  0x30uLL,
                  0LL);
          if ( v21 < 0 )
            return v13;
          if ( (BYTE4(v36) & 0x40) != 0 )
          {
            v21 = -1073741823;
            return v13;
          }
        }
      }
      else
      {
        v16 = DWORD2(v32);
        if ( !*((_QWORD *)&v32 + 1) )
          return v13;
      }
      v30 = 0LL;
      v31 = 0LL;
      v20 = 0;
      v17 = RtlpValidateContextFlags((unsigned int)v26, 0LL);
      v20 = v17;
      if ( v17 >= 0 && (v26 & 0x100000) == 0 )
        break;
      if ( v17 == -1073741811 )
        goto LABEL_34;
      if ( v17 >= 0 )
        goto LABEL_16;
      LODWORD(v26) = 1048587;
LABEL_23:
      v31 = 0LL;
      *(_QWORD *)&v30 = &v23;
      *((_QWORD *)&v30 + 1) = &v24;
      v21 = RtlpxVirtualUnwind(
              0,
              v16,
              (_DWORD)v37,
              v14,
              (__int64)v19,
              (__int64)v19,
              (__int64)&v27,
              (__int64)&v26,
              0LL,
              (__int64)&v30,
              0);
      if ( v21 >= 0 )
      {
        if ( v13 && v28 && v37 == v28 )
          v37 = *(void (**)(void))(*((_QWORD *)RtlLocateExtendedFeature(ContextEx, 0xBu, 0LL) + 1) - 8LL);
        if ( v37 )
        {
          if ( v13 >= a4 )
            *(_QWORD *)(v29 + 8LL * (v13 - a4)) = v37;
          ContextLength[1] = ++v13;
          if ( v13 < a2 )
            continue;
        }
      }
      return v13;
    }
    v20 = -1073741811;
LABEL_34:
    LODWORD(v26) = v26 | 0x100000;
    LODWORD(v26) = v26 & 0xF810001F;
    v20 = 0;
LABEL_16:
    if ( (v26 & 0x100040) == 0x100040
      && (SLODWORD(STACK[0x530]) > SLODWORD(STACK[0x540])
       || LODWORD(STACK[0x534]) < 0x530
       || LODWORD(STACK[0x534]) + LODWORD(STACK[0x530]) < LODWORD(STACK[0x544]) + LODWORD(STACK[0x540])
       || LODWORD(STACK[0x53C]) != 1232
       || LODWORD(STACK[0x544]) < 0x40
       || &v19[SLODWORD(STACK[0x538]) + 1232] != v19) )
    {
      LODWORD(v26) = v26 & 0xFFFFFFBF;
    }
    goto LABEL_23;
  }
  return 0LL;
}
