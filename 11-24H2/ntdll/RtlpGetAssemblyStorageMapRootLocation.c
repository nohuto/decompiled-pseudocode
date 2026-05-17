/*
 * XREFs of RtlpGetAssemblyStorageMapRootLocation @ 0x180082694
 * Callers:
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180081C00 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x18000D2C0 (RtlpAllocateAtom.c)
 *     DbgPrintEx @ 0x18005EA90 (DbgPrintEx.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpGetAssemblyStorageMapRootLocation(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  const char *v8; // r8
  unsigned int v9; // ecx
  __int64 Atom; // rax
  __int64 v12; // [rsp+20h] [rbp-E0h]
  __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v16; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v17; // [rsp+58h] [rbp-A8h]
  __int128 v18; // [rsp+68h] [rbp-98h]
  _BYTE v19[4]; // [rsp+80h] [rbp-80h] BYREF
  int v20; // [rsp+84h] [rbp-7Ch]
  unsigned int Size; // [rsp+88h] [rbp-78h]
  size_t Size_4; // [rsp+8Ch] [rbp-74h] BYREF

  Handle = 0LL;
  v14 = 0;
  v13 = a2;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  memset_thunk_772440563353939046(v19, 0, 0x218uLL);
  if ( a1 && a2 && a3 )
  {
    LODWORD(v16) = 48;
    *(_QWORD *)&v17 = &v13;
    *((_QWORD *)&v16 + 1) = a1;
    DWORD2(v17) = 64;
    v18 = 0LL;
    v6 = NtOpenKey(&Handle, 1LL, &v16);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = "SXS: Unable to open storage root subkey %wZ; Status = 0x%08lx\n";
LABEL_6:
      LODWORD(v12) = v6;
      DbgPrintEx(51, 0, v8, &v13, v12);
      goto LABEL_22;
    }
    v6 = NtQueryValueKey(Handle, &unk_180174980, 2LL, v19, 536, &v14);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = "SXS: Unabel to query location from storage root subkey %wZ; Status = 0x%08lx\n";
      goto LABEL_6;
    }
    if ( v20 != 1 )
    {
      DbgPrintEx(51, 0, "SXS: Assembly storage root location value type is not REG_SZ\n");
LABEL_11:
      v7 = -1073741766;
      goto LABEL_22;
    }
    v9 = Size;
    if ( (Size & 1) != 0 )
    {
      DbgPrintEx(51, 0, "SXS: Assembly storage root location value has non-even size\n");
      goto LABEL_11;
    }
    if ( Size > *(unsigned __int16 *)(a3 + 2) )
    {
      if ( Size > 0xFFFE )
      {
        DbgPrintEx(51, 0, "SXS: Assembly storage root location for %wZ does not fit in a UNICODE STRING\n", &v13);
        v7 = -1073741562;
        goto LABEL_22;
      }
      *(_WORD *)(a3 + 2) = Size;
      Atom = RtlpAllocateAtom((unsigned __int16)v9);
      *(_QWORD *)(a3 + 8) = Atom;
      if ( !Atom )
      {
        v7 = -1073741801;
        goto LABEL_22;
      }
      v9 = Size;
    }
    memmove(*(void **)(a3 + 8), &Size_4, v9);
    v7 = 0;
    *(_WORD *)a3 = Size;
  }
  else
  {
    v7 = -1073741811;
  }
LABEL_22:
  if ( Handle )
    NtClose(Handle);
  return v7;
}
