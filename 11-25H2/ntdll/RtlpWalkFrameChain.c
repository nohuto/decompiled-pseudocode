/*
 * XREFs of RtlpWalkFrameChain @ 0x180077FE0
 * Callers:
 *     RtlWalkFrameChain @ 0x180090190 (RtlWalkFrameChain.c)
 * Callees:
 *     RtlpGetEntireXStateAreaLength @ 0x180075A00 (RtlpGetEntireXStateAreaLength.c)
 *     RtlpGetStackLimits @ 0x180075F20 (RtlpGetStackLimits.c)
 *     RtlInitializeExtendedContext2 @ 0x1800768C0 (RtlInitializeExtendedContext2.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x180078630 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpxVirtualUnwind @ 0x180078D20 (RtlpxVirtualUnwind.c)
 *     RtlpCaptureContext2 @ 0x1801227A0 (RtlpCaptureContext2.c)
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1801678D0 (_alloca_probe.c)
 */

__int64 __fastcall RtlpWalkFrameChain(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v7; // r10d
  void (*v8)(void); // rcx
  ULONG64 v9; // r8
  ULONG v10; // edi
  unsigned __int64 v11; // rcx
  int v12; // edx
  int v13; // eax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  void *v16; // rsp
  void *v17; // rsp
  unsigned int v18; // edi
  __int64 v19; // rsi
  NTSTATUS v20; // eax
  __int64 v21; // rcx
  int v22; // r14d
  bool v23; // cl
  __int64 Offset; // r8
  char *v25; // r9
  __int64 v26; // r10
  unsigned int v27; // edx
  unsigned int i; // ecx
  __int64 v29; // rax
  _BYTE v31[4]; // [rsp+60h] [rbp+0h] BYREF
  int v32; // [rsp+64h] [rbp+4h]
  int v33; // [rsp+68h] [rbp+8h]
  int v34; // [rsp+6Ch] [rbp+Ch]
  unsigned int v35; // [rsp+70h] [rbp+10h]
  int v36; // [rsp+74h] [rbp+14h]
  unsigned __int64 v37; // [rsp+78h] [rbp+18h] BYREF
  unsigned __int64 v38; // [rsp+80h] [rbp+20h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+88h] [rbp+28h] BYREF
  __int64 v40; // [rsp+90h] [rbp+30h] BYREF
  __int64 v41; // [rsp+98h] [rbp+38h] BYREF
  void (*v42)(void); // [rsp+A0h] [rbp+40h]
  __int128 v43; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v44; // [rsp+B8h] [rbp+58h]
  __int128 v45; // [rsp+C0h] [rbp+60h]
  __int64 v46; // [rsp+D0h] [rbp+70h]
  __int128 MemoryInformation; // [rsp+E0h] [rbp+80h] BYREF
  __int128 v48; // [rsp+F0h] [rbp+90h]
  __int128 v49; // [rsp+100h] [rbp+A0h]
  void (*v50)(void); // [rsp+158h] [rbp+F8h]

  ContextEx = 0LL;
  v7 = 0;
  v40 = 0LL;
  v41 = 0LL;
  v38 = 0LL;
  v37 = 0LL;
  MemoryInformation = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v8 = RtlRaiseExceptionForReturnAddressHijack;
  if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) != 1 )
    v8 = 0LL;
  v42 = v8;
  v9 = v8 != 0LL ? 0x800 : 0;
  v10 = v8 != 0LL ? 1048651 : 1048587;
  v11 = v9;
  if ( (v10 & 0x100040) == 0x100040 )
  {
    if ( !MEMORY[0x7FFE03D8] )
      goto LABEL_11;
    v12 = 2;
  }
  else
  {
    v12 = 0;
  }
  v13 = 1264;
  if ( v12 )
  {
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      v11 = (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8] | 0x8000000000000000uLL) & v9;
    v13 = RtlpGetEntireXStateAreaLength(v11) + 800;
  }
  v7 = v13 + 15;
LABEL_11:
  v14 = v7 + 15LL;
  if ( v14 <= v7 )
    v14 = 0xFFFFFFFFFFFFFF0LL;
  v15 = v14 & 0xFFFFFFFFFFFFFFF0uLL;
  v16 = alloca(v15);
  v17 = alloca(v15);
  RtlInitializeExtendedContext2((PCONTEXT)v31, v10, &ContextEx, v9);
  RtlpCaptureContext2(v31);
  v31[0] = 0;
  if ( RtlpGetStackLimits(&v37, (void **)&v38) )
  {
    v18 = 0;
    v45 = xmmword_1801E9430;
    v46 = qword_1801E9440;
    while ( 1 )
    {
      if ( (BYTE8(v48) & 7) != 0 || *((_QWORD *)&v48 + 1) < v37 || *((_QWORD *)&v48 + 1) >= v38 )
        return v18;
      v19 = RtlpLookupFunctionEntryForStackWalks(v50);
      if ( v19 )
      {
        v20 = 0;
        v34 = 0;
        v21 = *(unsigned int *)(v19 + 8);
        v22 = DWORD2(v45);
        if ( !*(_WORD *)(v21 + *((_QWORD *)&v45 + 1) + 1) && (*(_BYTE *)(v21 + *((_QWORD *)&v45 + 1)) & 0x20) == 0 )
        {
          v20 = ZwQueryVirtualMemory(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  v50,
                  MemoryBasicInformation,
                  &MemoryInformation,
                  0x30uLL,
                  0LL);
          v34 = v20;
          if ( v20 >= 0 && (BYTE4(v49) & 0x40) != 0 )
          {
            v34 = -1073741823;
            return v18;
          }
        }
        if ( v20 < 0 )
          return v18;
      }
      else
      {
        v22 = DWORD2(v45);
        if ( !*((_QWORD *)&v45 + 1) )
          return v18;
      }
      v43 = 0LL;
      v44 = 0LL;
      v32 = 0;
      if ( (v40 & 0x27FFFF80) != 0x10000
        && (v40 & 0x7FFFF20) != 0x100000
        && (v40 & 0x7FFFFF0) != 0x200000
        && (v40 & 0x7FFFFC0) != 0x400000 )
      {
        goto LABEL_46;
      }
      v23 = 0;
      if ( (v40 & 0x400020) != 0x400020 )
        v23 = (v40 & 0x10040) != 65600 && (v40 & 0x100040) != 1048640;
      if ( !v23 && !MEMORY[0x7FFE03D8] || (v40 & 0x100080) == 0x100080 )
      {
        v32 = -1073741637;
        LODWORD(v40) = 1048587;
        goto LABEL_35;
      }
      v32 = 0;
      if ( (v40 & 0x100000) == 0 )
      {
LABEL_46:
        LODWORD(v40) = v40 & 0xF800001F | 0x100000;
        v32 = 0;
      }
      if ( (v40 & 0x100040) == 0x100040
        && (SLODWORD(STACK[0x530]) > SLODWORD(STACK[0x540])
         || LODWORD(STACK[0x534]) < 0x530
         || LODWORD(STACK[0x534]) + LODWORD(STACK[0x530]) < LODWORD(STACK[0x544]) + LODWORD(STACK[0x540])
         || LODWORD(STACK[0x53C]) != 1232
         || LODWORD(STACK[0x544]) < 0x40
         || &v31[SLODWORD(STACK[0x538]) + 1232] != v31) )
      {
        LODWORD(v40) = v40 & 0xFFFFFFBF;
      }
LABEL_35:
      v44 = 0LL;
      *(_QWORD *)&v43 = &v37;
      *((_QWORD *)&v43 + 1) = &v38;
      v34 = RtlpxVirtualUnwind(
              0,
              v22,
              (_DWORD)v50,
              v19,
              (__int64)v31,
              (__int64)v31,
              (__int64)&v41,
              (__int64)&v40,
              0LL,
              (__int64)&v43,
              0);
      if ( v34 < 0 )
        return v18;
      if ( !v18 || !v42 || v50 != v42 )
        goto LABEL_38;
      v35 = 0;
      v33 = 0;
      if ( ((MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0x800) == 0 )
        goto LABEL_80;
      if ( (MEMORY[0x7FFE03EC] & 0xFFFFFFF8) != 0 )
        goto LABEL_80;
      Offset = ContextEx->XState.Offset;
      if ( ContextEx->All.Offset > (int)Offset )
        goto LABEL_80;
      if ( (signed int)(ContextEx->All.Length + ContextEx->All.Offset) < (signed int)(Offset + ContextEx->XState.Length) )
        goto LABEL_80;
      v25 = (char *)ContextEx + Offset;
      if ( !(PCONTEXT_EX)((char *)ContextEx + Offset) )
        goto LABEL_80;
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      {
        v26 = *((_QWORD *)v25 + 1);
        if ( (v26 & 0x800) != 0 )
        {
          v27 = 576;
          v33 = 576;
          for ( i = 2; ; ++i )
          {
            v35 = i;
            if ( i >= 0xB )
              break;
            if ( (v26 & (1LL << i)) != 0 )
            {
              if ( (MEMORY[0x7FFE05F8] & (1LL << i)) != 0 )
              {
                v27 = (v27 + 63) & 0xFFFFFFC0;
                v33 = v27;
              }
              v27 += *(_DWORD *)(4LL * i + 0x7FFE0604);
              v33 = v27;
            }
          }
          if ( (MEMORY[0x7FFE05F8] & 0x800) != 0 )
          {
            v27 = (v27 + 63) & 0xFFFFFFC0;
            v33 = v27;
          }
          v29 = (__int64)&v25[v27 - 504];
        }
        else
        {
LABEL_80:
          v29 = 8LL;
        }
        v50 = *(void (**)(void))(*(_QWORD *)v29 - 8LL);
        goto LABEL_38;
      }
      v50 = *(void (**)(void))(*(_QWORD *)&v25[MEMORY[0x7FFE0448] - 504] - 8LL);
LABEL_38:
      if ( v50 )
      {
        if ( v18 >= a4 )
          *(_QWORD *)(a1 + 8LL * (v18 - a4)) = v50;
        v36 = ++v18;
        if ( v18 < a2 )
          continue;
      }
      return v18;
    }
  }
  return 0LL;
}
