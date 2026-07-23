/*
 * XREFs of BiUpdateObjectReferenceInEfiEntry @ 0x140805C44
 * Callers:
 *     BiCreateEfiEntry @ 0x140805438 (BiCreateEfiEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     _wcsupr @ 0x1404FBF50 (_wcsupr.c)
 *     wcsstr @ 0x1404FDB30 (wcsstr.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     BcdQueryObject @ 0x14080266C (BcdQueryObject.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x140965070 (RtlStringFromGUIDEx.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140A27C2C (BiGetObjectReferenceFromEfiEntry.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiUpdateObjectReferenceInEfiEntry(__int64 a1, void *a2)
{
  NTSTATUS ObjectReferenceFromEfiEntry; // ebx
  __int64 v5; // rax
  size_t v6; // rbx
  wchar_t *Pool2; // rax
  wchar_t *v8; // rsi
  wchar_t *v9; // rdi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  GUID Identifier; // [rsp+30h] [rbp-30h] BYREF
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF

  Identifier = 0LL;
  v13 = 0LL;
  DestinationString = 0LL;
  ObjectReferenceFromEfiEntry = BiGetObjectReferenceFromEfiEntry(a1, &v13);
  if ( ObjectReferenceFromEfiEntry >= 0 )
  {
    ObjectReferenceFromEfiEntry = BcdQueryObject(a2, 0, 0LL, &Identifier);
    if ( ObjectReferenceFromEfiEntry >= 0 )
    {
      v5 = v13 - *(_QWORD *)&Identifier.Data1;
      if ( (_QWORD)v13 == *(_QWORD *)&Identifier.Data1 )
        v5 = *((_QWORD *)&v13 + 1) - *(_QWORD *)Identifier.Data4;
      if ( v5 )
      {
        v6 = (unsigned int)(*(_DWORD *)(a1 + 40) - 20);
        Pool2 = (wchar_t *)ExAllocatePool2(0x102uLL);
        v8 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, (const void *)(a1 + 48), v6);
          wcsupr(v8);
          v9 = wcsstr(v8, L"BCDOBJECT=");
          if ( v9 )
          {
            RtlInitUnicodeString(&DestinationString, 0LL);
            ObjectReferenceFromEfiEntry = RtlStringFromGUIDEx(&Identifier, &DestinationString, 1u);
            if ( ObjectReferenceFromEfiEntry >= 0 )
            {
              memmove(
                (void *)(a1 + 68 + 2 * ((unsigned __int64)(v9 - v8) >> 1)),
                DestinationString.Buffer,
                DestinationString.Length);
              RtlFreeAnsiString(&DestinationString);
            }
          }
          else
          {
            ObjectReferenceFromEfiEntry = -1073741275;
          }
          ExFreePoolWithTag(v8, 0x4B444342u);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
  }
  return (unsigned int)ObjectReferenceFromEfiEntry;
}
