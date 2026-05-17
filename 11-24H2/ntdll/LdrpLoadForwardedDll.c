/*
 * XREFs of LdrpLoadForwardedDll @ 0x18000B980
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x1800096B0 (LdrpHandleProtectedDelayload.c)
 *     LdrpGetDelayloadExportDll @ 0x180009D20 (LdrpGetDelayloadExportDll.c)
 *     LdrpResolveProcedureAddress @ 0x180057F30 (LdrpResolveProcedureAddress.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     LdrpLoadDllInternal @ 0x18000B460 (LdrpLoadDllInternal.c)
 *     RtlUTF8ToUnicodeN @ 0x18000C3F0 (RtlUTF8ToUnicodeN.c)
 *     RtlAnsiStringToUnicodeString @ 0x18000CF60 (RtlAnsiStringToUnicodeString.c)
 *     RtlpAllocateAtom @ 0x18000D2C0 (RtlpAllocateAtom.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18000F570 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpPreprocessDllName @ 0x18005A570 (LdrpPreprocessDllName.c)
 *     RtlRaiseException @ 0x180070510 (RtlRaiseException.c)
 *     NtdllpReallocateStringRoutine @ 0x18011EBD8 (NtdllpReallocateStringRoutine.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpLoadForwardedDll(
        PCANSI_STRING SourceString,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 *a6)
{
  __int64 *v10; // r15
  int v11; // ebx
  int Length; // eax
  char *Buffer; // r9
  int v14; // edx
  unsigned __int16 v15; // cx
  unsigned int v16; // r8d
  unsigned int v17; // edi
  __int64 v18; // rdi
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rsi
  unsigned __int64 ActiveFrame; // rbx
  __int64 v23; // rcx
  void *v24; // r15
  void *Atom; // rax
  signed __int32 v26[8]; // [rsp+0h] [rbp-3C8h] BYREF
  unsigned int v27; // [rsp+50h] [rbp-378h] BYREF
  int v28; // [rsp+54h] [rbp-374h] BYREF
  __int64 v29; // [rsp+58h] [rbp-370h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-368h] BYREF
  _QWORD v31[2]; // [rsp+70h] [rbp-358h] BYREF
  __int128 v32; // [rsp+80h] [rbp-348h] BYREF
  __int128 v33; // [rsp+90h] [rbp-338h]
  __int128 v34; // [rsp+A0h] [rbp-328h]
  __int64 v35; // [rsp+B0h] [rbp-318h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+C0h] [rbp-308h] BYREF
  char v37[4]; // [rsp+160h] [rbp-268h] BYREF
  int v38; // [rsp+164h] [rbp-264h]
  void *Src; // [rsp+168h] [rbp-260h]
  __int16 v40; // [rsp+170h] [rbp-258h] BYREF
  _BYTE v41[254]; // [rsp+172h] [rbp-256h] BYREF
  _DWORD v42[2]; // [rsp+270h] [rbp-158h] BYREF
  __int16 *v43; // [rsp+278h] [rbp-150h]
  __int16 v44; // [rsp+280h] [rbp-148h] BYREF
  _BYTE v45[254]; // [rsp+282h] [rbp-146h] BYREF
  _UNKNOWN *retaddr; // [rsp+3C8h] [rbp+0h]

  v10 = a6;
  v29 = (__int64)a6;
  v42[1] = 0;
  memset_thunk_772440563353939046(v45, 0, 0xFEuLL);
  v27 = 0;
  v38 = 0;
  memset_thunk_772440563353939046(v41, 0, 0xFEuLL);
  v43 = &v44;
  v42[0] = 0x1000000;
  v44 = 0;
  Src = &v40;
  *(_DWORD *)v37 = 0x1000000;
  v40 = 0;
  DestinationString = 0LL;
  v11 = 0;
  Length = SourceString->Length;
  if ( !(_WORD)Length )
    goto LABEL_9;
  v28 = 0;
  Buffer = SourceString->Buffer;
  _InterlockedOr(v26, 0);
  if ( word_1801CCFD0 == -535 || GlobalRtlNlsState == -535 )
  {
    RtlUTF8ToUnicodeN(0, 0, (unsigned int)&v28, (_DWORD)Buffer, Length);
    v14 = v28;
  }
  else
  {
    _InterlockedOr(v26, 0);
    v14 = 0;
    if ( word_1801CCF9C )
    {
      while ( Length-- )
      {
        v23 = (unsigned __int8)*Buffer++;
        if ( *(_WORD *)(qword_1801CD020 + 2 * v23) )
        {
          if ( !Length )
          {
            v14 += 2;
            break;
          }
          --Length;
          ++Buffer;
        }
        v14 += 2;
      }
    }
    else
    {
      v14 = 2 * Length;
    }
  }
  v15 = *(_WORD *)v37;
  v16 = v14 + *(unsigned __int16 *)v37 + 2;
  LOWORD(v17) = *(_WORD *)&v37[2];
  if ( v16 > *(unsigned __int16 *)&v37[2] )
  {
    if ( v16 > 0xFFFE )
    {
      v11 = -1073741562;
      goto LABEL_7;
    }
    v17 = (v16 + 63) & 0xFFFFFFC0;
    if ( v17 > 0xFFFE )
      v17 = 65534;
    if ( Src == &v40 )
    {
      Atom = (void *)RtlpAllocateAtom(v17);
      v24 = Atom;
      if ( Atom )
      {
        v15 = *(_WORD *)v37;
        if ( !*(_WORD *)v37 )
          goto LABEL_42;
        memmove(Atom, Src, *(unsigned __int16 *)v37);
      }
    }
    else
    {
      v24 = (void *)NtdllpReallocateStringRoutine(v17);
    }
    v15 = *(_WORD *)v37;
LABEL_42:
    if ( v24 )
    {
      Src = v24;
      *(_WORD *)&v37[2] = v17;
    }
    else
    {
      v11 = -1073741801;
      LOWORD(v17) = *(_WORD *)&v37[2];
    }
    v10 = (__int64 *)v29;
  }
LABEL_7:
  if ( v11 >= 0 )
  {
    DestinationString.Buffer = (wchar_t *)((char *)Src + v15);
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v17 - v15;
    RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
    *(_WORD *)v37 += DestinationString.Length;
  }
LABEL_9:
  v27 = v11;
  if ( v11 < 0 )
    goto LABEL_21;
  v31[0] = 72LL;
  v31[1] = 1LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v18 = *(_QWORD *)(a4 + 136);
  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  if ( ActivationContextStackPointer )
    ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
  else
    ActiveFrame = 0LL;
  memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
  if ( v31[0] >= 0x48uLL )
  {
    *((_QWORD *)&v33 + 1) = ~ActiveFrame;
    *(_QWORD *)&v34 = ~v18;
    *((_QWORD *)&v34 + 1) = retaddr;
  }
  if ( ActiveFrame && (*(_DWORD *)(ActiveFrame + 16) & 0x70) != 0x20 )
  {
    ExceptionRecord.NumberParameters = 4;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)ActivationContextStackPointer;
    ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[2] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[3] = *(unsigned int *)(ActiveFrame + 16);
    ExceptionRecord.ExceptionCode = -1072365548;
    ExceptionRecord.ExceptionFlags = 1;
    RtlRaiseException(&ExceptionRecord);
    goto LABEL_18;
  }
  *(_QWORD *)&v32 = ActiveFrame;
  *((_QWORD *)&v32 + 1) = v18;
  LODWORD(v33) = 32;
  if ( ActiveFrame )
  {
    if ( *(_QWORD *)(ActiveFrame + 8) == v18 )
      goto LABEL_17;
LABEL_33:
    ActivationContextStackPointer->ActiveFrame = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)&v32;
    goto LABEL_18;
  }
  if ( v18 )
    goto LABEL_33;
LABEL_17:
  LODWORD(v33) = 48;
LABEL_18:
  LODWORD(v29) = 0;
  v27 = LdrpPreprocessDllName((char)v37);
  if ( (v27 & 0x80000000) == 0 )
    LdrpLoadDllInternal((__int64)v42, a2, v29, a5, a4, a3, v10, (int *)&v27, 0LL, 0);
  RtlDeactivateActivationContextUnsafeFast(v31);
LABEL_21:
  if ( &v40 != Src )
    RtlpSysVolFree((__int64)Src);
  Src = &v40;
  *(_DWORD *)v37 = 0x1000000;
  v40 = 0;
  if ( &v44 != v43 )
    RtlpSysVolFree((__int64)v43);
  return v27;
}
