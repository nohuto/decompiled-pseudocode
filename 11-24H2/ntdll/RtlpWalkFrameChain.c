/*
 * XREFs of RtlpWalkFrameChain @ 0x180016100
 * Callers:
 *     RtlWalkFrameChain @ 0x18003C7A0 (RtlWalkFrameChain.c)
 * Callees:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x180016540 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpxVirtualUnwind @ 0x180016C30 (RtlpxVirtualUnwind.c)
 *     RtlpValidateContextFlags @ 0x180017E20 (RtlpValidateContextFlags.c)
 *     RtlLocateExtendedFeature @ 0x180018F00 (RtlLocateExtendedFeature.c)
 *     RtlInitializeExtendedContext2 @ 0x1800D76F0 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1800D7C70 (RtlGetExtendedContextLength2.c)
 *     RtlpGetStackLimits @ 0x1800E23C0 (RtlpGetStackLimits.c)
 *     RtlpCaptureContext2 @ 0x180120CC0 (RtlpCaptureContext2.c)
 *     ZwQueryVirtualMemory @ 0x1801620F0 (ZwQueryVirtualMemory.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180166340 (_alloca_probe.c)
 */

__int64 __fastcall RtlpWalkFrameChain(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 (__fastcall *v6)(); // rcx
  __int64 v7; // rdi
  unsigned int v8; // esi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  void *v11; // rsp
  void *v12; // rsp
  unsigned int v13; // edi
  __int64 v14; // rsi
  __int64 v15; // rcx
  int v16; // r14d
  int v17; // eax
  __int64 v19; // [rsp+30h] [rbp-30h]
  _BYTE v20[4]; // [rsp+60h] [rbp+0h] BYREF
  int v21; // [rsp+64h] [rbp+4h]
  int v22; // [rsp+68h] [rbp+8h]
  _DWORD v23[3]; // [rsp+6Ch] [rbp+Ch] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp+18h] BYREF
  unsigned __int64 v25; // [rsp+80h] [rbp+20h] BYREF
  __int64 v26; // [rsp+88h] [rbp+28h] BYREF
  __int64 v27; // [rsp+90h] [rbp+30h] BYREF
  __int64 v28; // [rsp+98h] [rbp+38h] BYREF
  __int64 (__fastcall *v29)(); // [rsp+A0h] [rbp+40h]
  __int64 v30; // [rsp+A8h] [rbp+48h]
  __int128 v31; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v32; // [rsp+C0h] [rbp+60h]
  __int128 v33; // [rsp+C8h] [rbp+68h] BYREF
  __int64 v34; // [rsp+D8h] [rbp+78h]
  __int128 v35; // [rsp+E8h] [rbp+88h] BYREF
  __int128 v36; // [rsp+F8h] [rbp+98h]
  __int128 v37; // [rsp+108h] [rbp+A8h]
  __int64 (__fastcall *v38)(); // [rsp+158h] [rbp+F8h]

  v30 = a1;
  v26 = 0LL;
  v23[0] = 0;
  v27 = 0LL;
  v28 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v6 = RtlRaiseExceptionForReturnAddressHijack;
  if ( ((*((_QWORD *)&xmmword_1801EA4F0 + 1) >> 60) & 3) != 1 )
    v6 = 0LL;
  v29 = v6;
  v7 = v6 != 0LL ? 0x800 : 0;
  v8 = v6 != 0LL ? 1048651 : 1048587;
  RtlGetExtendedContextLength2(v8, v23, (unsigned int)v7);
  v9 = v23[0] + 15LL;
  if ( v9 <= v23[0] )
    v9 = 0xFFFFFFFFFFFFFF0LL;
  v10 = v9 & 0xFFFFFFFFFFFFFFF0uLL;
  v11 = alloca(v10);
  v12 = alloca(v10);
  RtlInitializeExtendedContext2(v20, v8, &v26, v7);
  RtlpCaptureContext2(v20);
  v20[0] = 0;
  if ( (unsigned __int8)RtlpGetStackLimits(&v24, &v25) )
  {
    v13 = 0;
    v33 = xmmword_1801E7440;
    v34 = qword_1801E7450;
    while ( 1 )
    {
      if ( (v36 & 7) != 0 || (unsigned __int64)v36 < v24 || (unsigned __int64)v36 >= v25 )
        return v13;
      v14 = RtlpLookupFunctionEntryForStackWalks(v38, &v33);
      if ( v14 )
      {
        v22 = 0;
        v15 = *(unsigned int *)(v14 + 8);
        v16 = DWORD2(v33);
        if ( !*(_WORD *)(v15 + *((_QWORD *)&v33 + 1) + 1) && (*(_BYTE *)(v15 + *((_QWORD *)&v33 + 1)) & 0x20) == 0 )
        {
          v22 = ZwQueryVirtualMemory(-1LL, v38, 0LL, &v35, 48LL, 0LL, v19);
          if ( v22 < 0 )
            return v13;
          if ( (BYTE4(v37) & 0x40) != 0 )
          {
            v22 = -1073741823;
            return v13;
          }
        }
      }
      else
      {
        v16 = DWORD2(v33);
        if ( !*((_QWORD *)&v33 + 1) )
          return v13;
      }
      v31 = 0LL;
      v32 = 0LL;
      v21 = 0;
      v17 = RtlpValidateContextFlags((unsigned int)v27, 0LL);
      v21 = v17;
      if ( v17 >= 0 && (v27 & 0x100000) == 0 )
        break;
      if ( v17 == -1073741811 )
        goto LABEL_34;
      if ( v17 >= 0 )
        goto LABEL_16;
      LODWORD(v27) = 1048587;
LABEL_23:
      v32 = 0LL;
      *(_QWORD *)&v31 = &v24;
      *((_QWORD *)&v31 + 1) = &v25;
      v22 = RtlpxVirtualUnwind(
              0,
              v16,
              (_DWORD)v38,
              v14,
              (__int64)v20,
              (__int64)v20,
              (__int64)&v28,
              (__int64)&v27,
              0LL,
              (__int64)&v31,
              0);
      if ( v22 >= 0 )
      {
        if ( v13 && v29 && v38 == v29 )
          v38 = *(__int64 (__fastcall **)())(*(_QWORD *)(RtlLocateExtendedFeature(v26, 11LL) + 8) - 8LL);
        if ( v38 )
        {
          if ( v13 >= a4 )
            *(_QWORD *)(v30 + 8LL * (v13 - a4)) = v38;
          v23[1] = ++v13;
          if ( v13 < a2 )
            continue;
        }
      }
      return v13;
    }
    v21 = -1073741811;
LABEL_34:
    LODWORD(v27) = v27 | 0x100000;
    LODWORD(v27) = v27 & 0xF810001F;
    v21 = 0;
LABEL_16:
    if ( (v27 & 0x100040) == 0x100040
      && (SLODWORD(STACK[0x530]) > SLODWORD(STACK[0x540])
       || LODWORD(STACK[0x534]) < 0x530
       || LODWORD(STACK[0x534]) + LODWORD(STACK[0x530]) < LODWORD(STACK[0x544]) + LODWORD(STACK[0x540])
       || LODWORD(STACK[0x53C]) != 1232
       || LODWORD(STACK[0x544]) < 0x40
       || &v20[SLODWORD(STACK[0x538]) + 1232] != v20) )
    {
      LODWORD(v27) = v27 & 0xFFFFFFBF;
    }
    goto LABEL_23;
  }
  return 0LL;
}
