/*
 * XREFs of ?PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z @ 0x18013892C
 * Callers:
 *     PiiFilterCreate @ 0x180136DFC (PiiFilterCreate.c)
 * Callees:
 *     ?PiiFilterpAddItemSorted@@YAJPEAU_PII_FILTER@@PEAG1@Z @ 0x180138C40 (-PiiFilterpAddItemSorted@@YAJPEAU_PII_FILTER@@PEAG1@Z.c)
 *     AslRegistryGetString @ 0x180138F90 (AslRegistryGetString.c)
 *     AslRegistryOpenSubKey @ 0x18013918C (AslRegistryOpenSubKey.c)
 *     AslRegistryOpenKey @ 0x180139504 (AslRegistryOpenKey.c)
 *     ?Insert@RtlNameValueArray@@QEAAJPEBG00_K@Z @ 0x1801395C4 (-Insert@RtlNameValueArray@@QEAAJPEBG00_K@Z.c)
 *     _wcsicmp @ 0x1802D24F4 (_wcsicmp.c)
 *     _wcslwr @ 0x1802D2500 (_wcslwr.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

__int64 __fastcall PiiFilterpAddProfiles(struct _PII_FILTER *a1)
{
  wchar_t *Heap; // r14
  PVOID v3; // rsi
  int v4; // ebx
  unsigned __int16 *v5; // rdi
  ULONG i; // r15d
  NTSTATUS v7; // eax
  unsigned int j; // ebx
  int String; // eax
  wchar_t *v10; // rax
  const unsigned __int16 *v11; // rdx
  HANDLE KeyHandle; // [rsp+30h] [rbp-10h] BYREF
  ULONG ResultLength; // [rsp+88h] [rbp+48h] BYREF
  PVOID P; // [rsp+90h] [rbp+50h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+58h] BYREF

  ResultLength = 0;
  Handle = 0LL;
  KeyHandle = 0LL;
  P = 0LL;
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x218uLL);
  if ( Heap )
  {
    v3 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x218uLL);
    if ( v3 )
    {
      v4 = AslRegistryOpenKey(&KeyHandle);
      if ( v4 >= 0 )
      {
        v5 = (unsigned __int16 *)P;
        for ( i = 0; ; ++i )
        {
          if ( Handle )
          {
            ZwClose(Handle);
            Handle = 0LL;
          }
          if ( v5 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
          P = 0LL;
          v5 = 0LL;
          memset_0(v3, 0, 0x218uLL);
          memset_0(Heap, 0, 0x218uLL);
          v7 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, Heap, 0x217u, &ResultLength);
          if ( v7 == -2147483622 )
            break;
          if ( v7 >= 0 )
          {
            for ( j = 0; j < 3; ++j )
            {
              if ( !wcsicmp(Heap + 8, off_180718558[j]) )
                goto LABEL_17;
            }
            if ( (int)AslRegistryOpenSubKey(&Handle) >= 0 )
            {
              String = AslRegistryGetString(&P, Handle, L"ProfileImagePath");
              v5 = (unsigned __int16 *)P;
              if ( String >= 0 )
              {
                wcslwr((wchar_t *)P);
                v4 = PiiFilterpAddItemSorted(a1, v5, L"%USERPROFILE%");
                if ( v4 < 0 )
                  goto LABEL_19;
                v10 = wcsrchr(v5, 0x5Cu);
                if ( v10 )
                {
                  if ( v10[1] )
                  {
                    v4 = RtlNameValueArray::Insert(
                           (struct _PII_FILTER *)((char *)a1 + 48),
                           v11,
                           v10 + 1,
                           L"%USERNAME%",
                           *((_QWORD *)a1 + 8));
                    if ( v4 < 0 )
                      goto LABEL_19;
                  }
                }
              }
            }
          }
LABEL_17:
          ;
        }
        v4 = 0;
      }
    }
    else
    {
      v4 = -1073741801;
    }
LABEL_19:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  else
  {
    v4 = -1073741801;
  }
  if ( P )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v4;
}
