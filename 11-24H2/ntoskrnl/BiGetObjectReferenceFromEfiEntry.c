/*
 * XREFs of BiGetObjectReferenceFromEfiEntry @ 0x1409A60FC
 * Callers:
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140816288 (BiUpdateObjectReferenceInEfiEntry.c)
 *     BiBuildIdentifierList @ 0x1409A55CC (BiBuildIdentifierList.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     _wcsupr @ 0x1404FBF90 (_wcsupr.c)
 *     wcsstr @ 0x1404FDB70 (wcsstr.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlGUIDFromString @ 0x1408C7C70 (RtlGUIDFromString.c)
 *     BiIsWindowsEfiEntry @ 0x1409A619C (BiIsWindowsEfiEntry.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetObjectReferenceFromEfiEntry(__int64 a1, GUID *a2)
{
  unsigned int v4; // ebx
  ULONG_PTR v6; // rbx
  wchar_t *Pool2; // rax
  wchar_t *v8; // rdi
  wchar_t *v9; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  WCHAR SourceString[8]; // [rsp+30h] [rbp-29h] BYREF
  __int128 v12; // [rsp+40h] [rbp-19h]
  __int128 v13; // [rsp+50h] [rbp-9h]
  __int128 v14; // [rsp+60h] [rbp+7h]
  __int64 v15; // [rsp+70h] [rbp+17h]
  int v16; // [rsp+78h] [rbp+1Fh]
  __int16 v17; // [rsp+7Ch] [rbp+23h]

  DestinationString = 0LL;
  if ( (unsigned __int8)BiIsWindowsEfiEntry(a1, a2) )
  {
    v6 = (unsigned int)(*(_DWORD *)(a1 + 40) - 20);
    Pool2 = (wchar_t *)ExAllocatePool2(0x102uLL, v6, 0x4B444342u);
    v8 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, (const void *)(a1 + 48), v6);
      wcsupr(v8);
      v9 = wcsstr(v8, L"BCDOBJECT=");
      if ( v9 && (unsigned __int64)v8 + v6 - (_QWORD)(v9 + 10) >= 0x4E )
      {
        *(_OWORD *)SourceString = *(_OWORD *)(v9 + 10);
        v12 = *(_OWORD *)(v9 + 18);
        v13 = *(_OWORD *)(v9 + 26);
        v14 = *(_OWORD *)(v9 + 34);
        v15 = *(_QWORD *)(v9 + 42);
        v16 = *((_DWORD *)v9 + 23);
        v17 = 0;
        RtlInitUnicodeString(&DestinationString, SourceString);
        v4 = RtlGUIDFromString(&DestinationString, a2);
      }
      else
      {
        v4 = -1073741275;
      }
      ExFreePoolWithTag(v8, 0x4B444342u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
