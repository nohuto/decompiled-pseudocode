/*
 * XREFs of vDbgPrintExWithPrefixInternalHelper @ 0x1800EC7EC
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x1800EC740 (vDbgPrintExWithPrefixInternal.c)
 * Callees:
 *     RtlRaiseException @ 0x180075020 (RtlRaiseException.c)
 *     RtlStringCbVPrintfA @ 0x1800ECA58 (RtlStringCbVPrintfA.c)
 *     DbgBreakPointWithStatus @ 0x1801225E0 (DbgBreakPointWithStatus.c)
 *     DebugPrint @ 0x1801225F0 (DebugPrint.c)
 *     ZwQueryDebugFilterState @ 0x180165B90 (ZwQueryDebugFilterState.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1801678D0 (_alloca_probe.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall vDbgPrintExWithPrefixInternalHelper(
        $C9D07D6EB863460955B0DD5F998611AD *a1,
        ULONG a2,
        ULONG a3,
        __int64 a4,
        __int64 a5,
        char a6,
        unsigned int a7,
        char a8)
{
  $C9D07D6EB863460955B0DD5F998611AD *v9; // r9
  unsigned int v10; // edx
  struct _TEB *v11; // r14
  $C9D07D6EB863460955B0DD5F998611AD *v12; // r14
  __int64 result; // rax
  __int64 v14; // r12
  unsigned __int64 v15; // rax
  void *v16; // rsp
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  size_t v19; // rbx
  unsigned int v20; // [rsp+20h] [rbp+0h] BYREF
  ULONG v21; // [rsp+24h] [rbp+4h]
  $C9D07D6EB863460955B0DD5F998611AD *v22; // [rsp+28h] [rbp+8h]
  int v23; // [rsp+30h] [rbp+10h]
  __int64 v24; // [rsp+38h] [rbp+18h]
  __int64 v25; // [rsp+40h] [rbp+20h]
  struct _TEB *v26; // [rsp+48h] [rbp+28h]
  __int128 v27; // [rsp+50h] [rbp+30h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+60h] [rbp+40h] BYREF

  v25 = a4;
  v21 = a3;
  v9 = a1;
  v22 = a1;
  v24 = a5;
  v10 = a7;
  v20 = a7;
  v27 = 0LL;
  v11 = NtCurrentTeb();
  v26 = v11;
  if ( a2 != -1 && (!NtCurrentPeb()->BeingDebugged || a2 != 101) )
  {
    if ( !ZwQueryDebugFilterState(a2, a3) )
      return 0LL;
    v10 = v20;
    v9 = v22;
  }
  v12 = &v11->6126;
  v22 = v12;
  if ( (v12->SameTebFlags & 2) != 0 )
    return 0LL;
  v12->SameTebFlags |= 2u;
  v14 = v10;
  v15 = v10 + 15LL;
  if ( v15 <= v10 )
    v15 = 0xFFFFFFFFFFFFFF0LL;
  v16 = alloca(v15 & 0xFFFFFFFFFFFFFFF0uLL);
  v17 = -1LL;
  do
    ++v17;
  while ( *((_BYTE *)&v9->SameTebFlags + v17) );
  v18 = v10 - 1;
  v19 = v18;
  if ( v17 <= v18 )
    v19 = v17;
  memmove(&v20, v9, v19);
  result = RtlStringCbVPrintfA((char *)&v20 + v19, v14 - v19, v25, v24);
  v23 = result;
  if ( !a8 || (_DWORD)result != -2147483643 )
  {
    if ( (_DWORD)result == -2147483643 )
    {
      *((_BYTE *)&v20 + v20 - 2) = 10;
      *((_BYTE *)&v20 + v18) = 0;
    }
    else
    {
      v18 = -1LL;
      do
        ++v18;
      while ( *((_BYTE *)&v20 + v18) );
    }
    *((_QWORD *)&v27 + 1) = &v20;
    LOWORD(v27) = v18;
    if ( NtCurrentPeb()->FastPebLock && (NtCurrentPeb()->BeingDebugged || (MEMORY[0x7FFE02D4] & 3) != 3) )
    {
      memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
      ExceptionRecord.ExceptionCode = 1073807366;
      ExceptionRecord.ExceptionRecord = 0LL;
      ExceptionRecord.NumberParameters = 2;
      ExceptionRecord.ExceptionFlags = 0;
      ExceptionRecord.ExceptionInformation[0] = (unsigned __int16)v18 + 1LL;
      ExceptionRecord.ExceptionInformation[1] = (unsigned __int64)&v20;
      RtlRaiseException(&ExceptionRecord);
    }
    else
    {
      result = DebugPrint(&v27, a2, v21);
      if ( a6 != 1 || (_DWORD)result != -2147483645 )
        goto LABEL_21;
      DbgBreakPointWithStatus(1u);
    }
    result = 0LL;
  }
LABEL_21:
  v12->SameTebFlags &= ~2u;
  return result;
}
