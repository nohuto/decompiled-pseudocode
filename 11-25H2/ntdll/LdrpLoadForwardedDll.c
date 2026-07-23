/*
 * XREFs of LdrpLoadForwardedDll @ 0x18004A820
 * Callers:
 *     LdrpResolveProcedureAddress @ 0x180013B70 (LdrpResolveProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x180022ED0 (LdrpHandleProtectedDelayload.c)
 *     LdrpGetDelayloadExportDll @ 0x180023840 (LdrpGetDelayloadExportDll.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     LdrpPreprocessDllName @ 0x1800161D0 (LdrpPreprocessDllName.c)
 *     LdrpLoadDllInternal @ 0x18004A300 (LdrpLoadDllInternal.c)
 *     RtlUTF8ToUnicodeN @ 0x18004B290 (RtlUTF8ToUnicodeN.c)
 *     RtlAnsiStringToUnicodeString @ 0x18004BE00 (RtlAnsiStringToUnicodeString.c)
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18004E410 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlRaiseException @ 0x180075020 (RtlRaiseException.c)
 *     NtdllpReallocateStringRoutine @ 0x1801204A8 (NtdllpReallocateStringRoutine.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpLoadForwardedDll(PCANSI_STRING SourceString, int a2, char *a3, char *a4, int a5, __int64 *a6)
{
  __int64 *v10; // r15
  int v11; // ebx
  ULONG UTF8StringByteCount; // eax
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
  int v29[2]; // [rsp+58h] [rbp-370h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-368h] BYREF
  _QWORD v31[2]; // [rsp+70h] [rbp-358h] BYREF
  __int128 v32; // [rsp+80h] [rbp-348h] BYREF
  __int128 v33; // [rsp+90h] [rbp-338h]
  __int128 v34; // [rsp+A0h] [rbp-328h]
  __int64 v35; // [rsp+B0h] [rbp-318h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+C0h] [rbp-308h] BYREF
  _DWORD v37[2]; // [rsp+160h] [rbp-268h] BYREF
  void *Src; // [rsp+168h] [rbp-260h]
  __int16 v39; // [rsp+170h] [rbp-258h] BYREF
  _BYTE v40[254]; // [rsp+172h] [rbp-256h] BYREF
  _UNICODE_STRING v41; // [rsp+270h] [rbp-158h] BYREF
  __int16 v42; // [rsp+280h] [rbp-148h] BYREF
  _BYTE v43[254]; // [rsp+282h] [rbp-146h] BYREF
  _UNKNOWN *retaddr; // [rsp+3C8h] [rbp+0h]

  v10 = a6;
  *(_QWORD *)v29 = a6;
  *(_DWORD *)(&v41.MaximumLength + 1) = 0;
  memset_thunk_772440563353939046(v43, 0, 0xFEuLL);
  v27 = 0;
  v37[1] = 0;
  memset_thunk_772440563353939046(v40, 0, 0xFEuLL);
  v41.Buffer = (wchar_t *)&v42;
  *(_DWORD *)&v41.Length = 0x1000000;
  v42 = 0;
  Src = &v39;
  v37[0] = 0x1000000;
  v39 = 0;
  DestinationString = 0LL;
  v11 = 0;
  UTF8StringByteCount = SourceString->Length;
  if ( !(_WORD)UTF8StringByteCount )
    goto LABEL_9;
  v28 = 0;
  Buffer = SourceString->Buffer;
  _InterlockedOr(v26, 0);
  if ( CodePageTable.CodePage == 0xFDE9 || GlobalRtlNlsState.CodePage == 0xFDE9 )
  {
    RtlUTF8ToUnicodeN(0LL, 0, (PULONG)&v28, Buffer, UTF8StringByteCount);
    v14 = v28;
  }
  else
  {
    _InterlockedOr(v26, 0);
    v14 = 0;
    if ( GlobalRtlNlsState.DBCSCodePage )
    {
      while ( UTF8StringByteCount-- )
      {
        v23 = (unsigned __int8)*Buffer++;
        if ( *(_WORD *)(qword_1801CF020 + 2 * v23) )
        {
          if ( !UTF8StringByteCount )
          {
            v14 += 2;
            break;
          }
          --UTF8StringByteCount;
          ++Buffer;
        }
        v14 += 2;
      }
    }
    else
    {
      v14 = 2 * UTF8StringByteCount;
    }
  }
  v15 = v37[0];
  v16 = v14 + LOWORD(v37[0]) + 2;
  LOWORD(v17) = HIWORD(v37[0]);
  if ( v16 > HIWORD(v37[0]) )
  {
    if ( v16 > 0xFFFE )
    {
      v11 = -1073741562;
      goto LABEL_7;
    }
    v17 = (v16 + 63) & 0xFFFFFFC0;
    if ( v17 > 0xFFFE )
      v17 = 65534;
    if ( Src == &v39 )
    {
      Atom = (void *)RtlpAllocateAtom(v17);
      v24 = Atom;
      if ( Atom )
      {
        v15 = v37[0];
        if ( !LOWORD(v37[0]) )
          goto LABEL_42;
        memmove(Atom, Src, LOWORD(v37[0]));
      }
    }
    else
    {
      v24 = (void *)NtdllpReallocateStringRoutine(v17);
    }
    v15 = v37[0];
LABEL_42:
    if ( v24 )
    {
      Src = v24;
      HIWORD(v37[0]) = v17;
    }
    else
    {
      v11 = -1073741801;
      LOWORD(v17) = HIWORD(v37[0]);
    }
    v10 = *(__int64 **)v29;
  }
LABEL_7:
  if ( v11 >= 0 )
  {
    DestinationString.Buffer = (wchar_t *)((char *)Src + v15);
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v17 - v15;
    RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
    LOWORD(v37[0]) += DestinationString.Length;
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
  v18 = *((_QWORD *)a4 + 17);
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
  v29[0] = 0;
  v27 = LdrpPreprocessDllName((unsigned __int16 *)v37, &v41, (__int64)a4, v29);
  if ( (v27 & 0x80000000) == 0 )
    LdrpLoadDllInternal((__int64)&v41, a2, v29[0], a5, a4, a3, v10, (int *)&v27, 0LL, 0);
  RtlDeactivateActivationContextUnsafeFast(v31);
LABEL_21:
  if ( &v39 != Src )
    RtlpSysVolFree(Src);
  Src = &v39;
  v37[0] = 0x1000000;
  v39 = 0;
  if ( &v42 != (__int16 *)v41.Buffer )
    RtlpSysVolFree(v41.Buffer);
  return v27;
}
