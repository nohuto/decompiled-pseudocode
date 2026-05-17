/*
 * XREFs of RtlCreateBootStatusDataFile @ 0x18013E260
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlInitUnicodeString @ 0x1800DA0A0 (RtlInitUnicodeString.c)
 *     RtlIsStateSeparationEnabled @ 0x1800EA6D0 (RtlIsStateSeparationEnabled.c)
 *     RtlRestoreBootStatusDefaults @ 0x18013E5F0 (RtlRestoreBootStatusDefaults.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x18013E774 (RtlpGetBootStatusPathFromRegistry.c)
 *     NtWriteFile @ 0x180161D90 (NtWriteFile.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwCreateFile @ 0x180162730 (ZwCreateFile.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCreateBootStatusDataFile(const WCHAR *a1)
{
  char v1; // di
  const WCHAR *v2; // rdx
  char IsStateSeparationEnabled; // al
  int v4; // ebx
  void *Heap; // rax
  unsigned __int64 v6; // rsi
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-19h] BYREF
  __int128 v9; // [rsp+70h] [rbp-9h] BYREF
  _DWORD v10[2]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v11; // [rsp+88h] [rbp+Fh]
  UNICODE_STRING *p_DestinationString; // [rsp+90h] [rbp+17h]
  int v13; // [rsp+98h] [rbp+1Fh]
  int v14; // [rsp+9Ch] [rbp+23h]
  __int128 v15; // [rsp+A0h] [rbp+27h]
  HANDLE Handle; // [rsp+E0h] [rbp+67h] BYREF
  const WCHAR *v17; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v18; // [rsp+F0h] [rbp+77h] BYREF

  v1 = 0;
  v14 = 0;
  Handle = 0LL;
  v17 = 0LL;
  v10[1] = 0;
  DestinationString = 0LL;
  v9 = 0LL;
  if ( a1 )
  {
    v2 = a1;
  }
  else if ( (int)RtlpGetBootStatusPathFromRegistry(&v17) < 0 )
  {
    IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
    v2 = L"\\OSDataRoot\\Windows\\bootstat.dat";
    if ( !IsStateSeparationEnabled )
      v2 = L"\\SystemRoot\\bootstat.dat";
    v17 = v2;
  }
  else
  {
    v2 = v17;
    v1 = 1;
  }
  RtlInitUnicodeString(&DestinationString, v2);
  v11 = 0LL;
  p_DestinationString = &DestinationString;
  v10[0] = 48;
  v13 = 64;
  v15 = 0LL;
  v18 = 67584LL;
  v4 = ZwCreateFile(&Handle, 1180063LL, v10, &v9, &v18, 4, 0, 2, 32800, 0LL);
  if ( v4 >= 0 )
  {
    Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x10800uLL);
    v6 = (unsigned __int64)Heap;
    if ( Heap )
    {
      memset_thunk_772440563353939046(Heap, 254, 0x10800uLL);
      v18 = 0LL;
      v4 = NtWriteFile(Handle, 0LL, 0LL, 0LL, &v9, v6, 67584, &v18, 0LL);
      if ( v4 >= 0 )
        v4 = RtlRestoreBootStatusDefaults(Handle);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
    }
    else
    {
      v4 = -1073741801;
    }
  }
  if ( Handle )
    NtClose(Handle);
  if ( v1 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v17);
  return (unsigned int)v4;
}
