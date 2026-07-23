/*
 * XREFs of PipFindDeviceOverrideEntry @ 0x140A26D28
 * Callers:
 *     PiQueryRemovableDeviceOverride @ 0x140A26B08 (PiQueryRemovableDeviceOverride.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PipCallbackHasDeviceOverrides @ 0x1407178E4 (PipCallbackHasDeviceOverrides.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     IopOpenRegistryKeyEx @ 0x140A39394 (IopOpenRegistryKeyEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipFindDeviceOverrideEntry(_WORD *Src, __int64 a2, __int64 a3)
{
  _WORD *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int16 *Pool2; // rax
  __int16 *v9; // rdi
  __int16 v10; // bx
  __int16 *v11; // rcx
  __int16 v12; // ax
  const WCHAR *v13; // r12
  int v14; // ebx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned int v16; // r10d
  int v17; // r9d
  wchar_t *Buffer; // r11
  struct _LIST_ENTRY *i; // rbx
  unsigned __int64 v20; // r8
  const UNICODE_STRING **v21; // rsi
  const UNICODE_STRING *j; // r15
  __int64 v23; // rax
  HANDLE v25; // rdx
  __int128 v26; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  HANDLE v28; // [rsp+80h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+48h] BYREF

  v4 = Src;
  v28 = 0LL;
  v26 = 0LL;
  Handle = 0LL;
  DestinationString = 0LL;
  if ( *Src )
  {
    LODWORD(v5) = 0;
    do
    {
      v6 = -1LL;
      do
        ++v6;
      while ( Src[v6] );
      v5 = (unsigned int)(v6 + v5 + 1);
      Src = &v4[v5];
    }
    while ( *Src );
    v7 = v5 + 1;
    Pool2 = (__int16 *)ExAllocatePool2(0x100uLL, 2LL * v7, 0x6E697050u);
    v9 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, v4, 2LL * v7);
      *((_QWORD *)&v26 + 1) = v9;
      LOWORD(v26) = 2 * v7;
      WORD1(v26) = 2 * v7;
      v10 = (unsigned __int16)(2 * v7) >> 1;
      if ( v10 )
      {
        v11 = v9;
        do
        {
          --v10;
          v12 = *v11;
          if ( *v11 == 92 || v12 == 47 )
            v12 = 35;
          *v11++ = v12;
        }
        while ( v10 );
      }
      v13 = (const WCHAR *)v9;
      v14 = -1073741772;
      if ( *v9 )
      {
        do
        {
          RtlInitUnicodeString(&DestinationString, v13);
          CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
          v17 = DestinationString.Length >> 1;
          Buffer = DestinationString.Buffer;
          for ( i = CurrentServerSiloGlobals[75].Flink; v17; v16 = (unsigned __int16)v20 + 65599 * v16 )
          {
            v20 = *Buffer;
            --v17;
            ++Buffer;
            if ( (unsigned int)v20 >= 0x61 )
            {
              if ( (unsigned int)v20 > 0x7A )
              {
                if ( i && (unsigned __int16)v20 >= 0xC0u )
                  LOWORD(v20) = *((_WORD *)&i->Flink
                                + (v20 & 0xF)
                                + *((unsigned __int16 *)&i->Flink
                                  + ((unsigned __int8)v20 >> 4)
                                  + (unsigned int)*((unsigned __int16 *)&i->Flink + (v20 >> 8))))
                              + v20;
              }
              else
              {
                LOWORD(v20) = v20 - 32;
              }
            }
          }
          v14 = -1073741772;
          v21 = (const UNICODE_STRING **)(PnpDeviceOverrideHashList + 16LL * (v16 % PnpDeviceOverrideHashListSize));
          for ( j = *v21; j != (const UNICODE_STRING *)v21; j = *(const UNICODE_STRING **)&j->Length )
          {
            if ( RtlEqualUnicodeString(&DestinationString, j + 1, 1u) )
            {
              v25 = v28;
              if ( !v28 )
              {
                LODWORD(v26) = 8781956;
                *((_QWORD *)&v26 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\DeviceOverrides";
                v14 = IopOpenRegistryKeyEx(&v28, 0LL, &v26, 131097LL);
                if ( v14 < 0 )
                  goto LABEL_23;
                v25 = v28;
              }
              v14 = IopOpenRegistryKeyEx(&Handle, v25, &DestinationString, 131097LL);
              if ( v14 >= 0 )
              {
                if ( PipCallbackHasDeviceOverrides((__int64)Handle, a3) )
                {
                  ZwClose(Handle);
                  goto LABEL_23;
                }
                ZwClose(Handle);
                v14 = -1073741772;
              }
              break;
            }
          }
          v23 = -1LL;
          do
            ++v23;
          while ( v13[v23] );
          v13 += v23 + 1;
        }
        while ( *v13 );
      }
    }
    else
    {
      v14 = -1073741670;
    }
LABEL_23:
    if ( v28 )
      ZwClose(v28);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return (unsigned int)v14;
}
