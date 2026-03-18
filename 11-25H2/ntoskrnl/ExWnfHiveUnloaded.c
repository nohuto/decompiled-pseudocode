/*
 * XREFs of ExWnfHiveUnloaded @ 0x140864AFC
 * Callers:
 *     CmUnloadKey @ 0x1408644F8 (CmUnloadKey.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     RtlLengthSid @ 0x140458B00 (RtlLengthSid.c)
 *     SeConvertStringSidToSid @ 0x1404BBDB0 (SeConvertStringSidToSid.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     RtlPrefixUnicodeString @ 0x140871070 (RtlPrefixUnicodeString.c)
 *     ExpWnfInvalidateDataStores @ 0x140A9A1F8 (ExpWnfInvalidateDataStores.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ExWnfHiveUnloaded(PCUNICODE_STRING String2)
{
  struct _KTHREAD *CurrentThread; // rax
  wchar_t *v3; // rdi
  PSID v4; // rbx
  unsigned int v5; // ebx
  wchar_t *Pool2; // rax
  ULONG v7; // eax
  UNICODE_STRING v8; // [rsp+20h] [rbp-28h] BYREF
  PSID Sid; // [rsp+58h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  Sid = 0LL;
  *(_QWORD *)&v8.Length = 2359330LL;
  --CurrentThread->KernelApcDisable;
  v3 = 0LL;
  v8.Buffer = L"\\Registry\\User\\S-";
  if ( RtlPrefixUnicodeString(&v8, String2, 1u)
    && (v5 = String2->Length - 30, Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL), (v3 = Pool2) != 0LL)
    && (memmove(Pool2, String2->Buffer + 15, v5),
        v3[(unsigned __int64)v5 >> 1] = 0,
        (int)SeConvertStringSidToSid(v3, (__int64 *)&Sid) >= 0) )
  {
    v4 = Sid;
    v7 = RtlLengthSid(Sid);
    ExpWnfInvalidateDataStores(v4, v7);
  }
  else
  {
    v4 = Sid;
  }
  KeLeaveCriticalRegion();
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x20666E57u);
}
