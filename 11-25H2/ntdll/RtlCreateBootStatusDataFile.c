/*
 * XREFs of RtlCreateBootStatusDataFile @ 0x18013F990
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlInitUnicodeString @ 0x1800A8A00 (RtlInitUnicodeString.c)
 *     RtlIsStateSeparationEnabled @ 0x1800EBA90 (RtlIsStateSeparationEnabled.c)
 *     RtlRestoreBootStatusDefaults @ 0x18013FD20 (RtlRestoreBootStatusDefaults.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x18013FEA4 (RtlpGetBootStatusPathFromRegistry.c)
 *     NtWriteFile @ 0x180163320 (NtWriteFile.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwCreateFile @ 0x180163CC0 (ZwCreateFile.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCreateBootStatusDataFile(const WCHAR *a1)
{
  char v1; // di
  const WCHAR *v2; // rdx
  char IsStateSeparationEnabled; // al
  int v4; // ebx
  __int64 v5; // r9
  void *Heap; // rax
  __int64 v7; // rsi
  __int64 v8; // r9
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-19h] BYREF
  __int128 v11; // [rsp+70h] [rbp-9h] BYREF
  _DWORD v12[2]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v13; // [rsp+88h] [rbp+Fh]
  UNICODE_STRING *p_DestinationString; // [rsp+90h] [rbp+17h]
  int v15; // [rsp+98h] [rbp+1Fh]
  int v16; // [rsp+9Ch] [rbp+23h]
  __int128 v17; // [rsp+A0h] [rbp+27h]
  HANDLE Handle; // [rsp+E0h] [rbp+67h] BYREF
  const WCHAR *v19; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v20; // [rsp+F0h] [rbp+77h] BYREF

  v1 = 0;
  v16 = 0;
  Handle = 0LL;
  v19 = 0LL;
  v12[1] = 0;
  DestinationString = 0LL;
  v11 = 0LL;
  if ( a1 )
  {
    v2 = a1;
  }
  else if ( (int)RtlpGetBootStatusPathFromRegistry(&v19) < 0 )
  {
    IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
    v2 = L"\\OSDataRoot\\Windows\\bootstat.dat";
    if ( !IsStateSeparationEnabled )
      v2 = L"\\SystemRoot\\bootstat.dat";
    v19 = v2;
  }
  else
  {
    v2 = v19;
    v1 = 1;
  }
  RtlInitUnicodeString(&DestinationString, v2);
  v13 = 0LL;
  p_DestinationString = &DestinationString;
  v12[0] = 48;
  v15 = 64;
  v17 = 0LL;
  v20 = 67584LL;
  v4 = ZwCreateFile(&Handle, 1180063LL, v12, &v11, &v20, 4, 0, 2, 32800, 0LL, 0);
  if ( v4 >= 0 )
  {
    Heap = (void *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, 0x10800uLL);
    v7 = (__int64)Heap;
    if ( Heap )
    {
      memset_thunk_772440563353939046(Heap, 254, 0x10800uLL);
      v20 = 0LL;
      v4 = NtWriteFile(Handle, 0LL, 0LL, 0LL, &v11, v7, 67584, &v20, 0LL);
      if ( v4 >= 0 )
        v4 = RtlRestoreBootStatusDefaults(Handle);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7, v8);
    }
    else
    {
      v4 = -1073741801;
    }
  }
  if ( Handle )
    NtClose(Handle);
  if ( v1 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v19, v5);
  return (unsigned int)v4;
}
