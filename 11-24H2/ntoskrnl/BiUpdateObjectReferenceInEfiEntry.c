/*
 * XREFs of BiUpdateObjectReferenceInEfiEntry @ 0x140815B48
 * Callers:
 *     BiCreateEfiEntry @ 0x140814FB0 (BiCreateEfiEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     _wcsupr @ 0x1404FE6D0 (_wcsupr.c)
 *     wcsstr @ 0x1405002B0 (wcsstr.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     BcdQueryObject @ 0x1408121E4 (BcdQueryObject.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x1409BCE20 (RtlStringFromGUIDEx.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1409BFAAC (BiGetObjectReferenceFromEfiEntry.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiUpdateObjectReferenceInEfiEntry(__int64 a1, __int64 a2)
{
  int ObjectReferenceFromEfiEntry; // ebx
  __int64 v5; // rax
  size_t v6; // rbx
  wchar_t *Pool2; // rax
  wchar_t *v8; // rsi
  wchar_t *v9; // rdi
  __int64 v10; // r8
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  DestinationString = 0LL;
  ObjectReferenceFromEfiEntry = BiGetObjectReferenceFromEfiEntry(a1, &v14);
  if ( ObjectReferenceFromEfiEntry >= 0 )
  {
    ObjectReferenceFromEfiEntry = BcdQueryObject(a2, 0, 0LL, (__int64)&v13);
    if ( ObjectReferenceFromEfiEntry >= 0 )
    {
      v5 = v14 - v13;
      if ( (_QWORD)v14 == (_QWORD)v13 )
        v5 = *((_QWORD *)&v14 + 1) - *((_QWORD *)&v13 + 1);
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
            LOBYTE(v10) = 1;
            ObjectReferenceFromEfiEntry = RtlStringFromGUIDEx(&v13, &DestinationString, v10);
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
