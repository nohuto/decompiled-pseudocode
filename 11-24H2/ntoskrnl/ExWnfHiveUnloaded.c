/*
 * XREFs of ExWnfHiveUnloaded @ 0x14092D110
 * Callers:
 *     CmUnloadKey @ 0x14092D238 (CmUnloadKey.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     SeConvertStringSidToSid @ 0x1404B5F90 (SeConvertStringSidToSid.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlPrefixUnicodeString @ 0x1408726F0 (RtlPrefixUnicodeString.c)
 *     ExpWnfInvalidateDataStores @ 0x140A9A7A8 (ExpWnfInvalidateDataStores.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
    && (v5 = String2->Length - 30, Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, v5 + 2, 0x20666E57u),
                                   (v3 = Pool2) != 0LL)
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
