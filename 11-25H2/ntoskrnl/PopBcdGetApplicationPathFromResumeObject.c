/*
 * XREFs of PopBcdGetApplicationPathFromResumeObject @ 0x140753AC0
 * Callers:
 *     PopValidateWinresume @ 0x140746DC4 (PopValidateWinresume.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140404370 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     BcdQueryObject @ 0x14080266C (BcdQueryObject.c)
 *     BcdOpenObject @ 0x1409666B4 (BcdOpenObject.c)
 *     BcdGetElementData @ 0x140A25774 (BcdGetElementData.c)
 *     PopBcdReadElement @ 0x140A25794 (PopBcdReadElement.c)
 *     BcdCloseObject @ 0x140A27BE8 (BcdCloseObject.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBcdGetApplicationPathFromResumeObject(__int64 a1, UNICODE_STRING *a2)
{
  WCHAR *v4; // rsi
  __int64 v5; // rdi
  int ElementData; // ebx
  int v7; // eax
  __int64 Pool2; // rax
  PCWSTR Source; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+28h] [rbp-48h] BYREF
  int v12; // [rsp+30h] [rbp-40h] BYREF
  int v13; // [rsp+34h] [rbp-3Ch] BYREF
  int v14; // [rsp+38h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-30h] BYREF
  PVOID P; // [rsp+48h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-20h] BYREF
  __int128 v18; // [rsp+58h] [rbp-18h] BYREF

  v17 = 0LL;
  P = 0LL;
  v13 = 0;
  v4 = 0LL;
  v11 = 0LL;
  v5 = 0LL;
  Source = 0LL;
  v14 = 0;
  v15 = 0LL;
  v18 = 0LL;
  if ( !a2 )
    return (unsigned int)-1073741811;
  ElementData = BcdOpenObject(a1, &GUID_CURRENT_BOOT_ENTRY, &v11);
  if ( ElementData >= 0 )
  {
    v12 = 16;
    ElementData = BcdGetElementData(v11, 587202563LL, &v18, &v12);
    if ( ElementData >= 0 )
    {
      v7 = BcdOpenObject(a1, &v18, &v15);
      v5 = v15;
      ElementData = v7;
      if ( v7 >= 0 )
      {
        ElementData = BcdQueryObject(v15, 1LL, &v17, 0LL);
        if ( ElementData >= 0 )
        {
          if ( (HIDWORD(v17) & 0xF0000000) != 0x10000000
            || (HIDWORD(v17) & 0xF00000) != 0x200000
            || (HIDWORD(v17) & 0xFFFFF) != 4 )
          {
            ElementData = -1073741275;
            goto LABEL_17;
          }
          ElementData = PopBcdReadElement(v5, 285212673LL, &P, &v13);
          if ( ElementData >= 0 )
          {
            ElementData = PopBcdReadElement(v5, 301989890LL, &Source, &v14);
            if ( ElementData >= 0 )
            {
              *(_DWORD *)&a2->Length = 34078720;
              Pool2 = ExAllocatePool2(0x100uLL);
              a2->Buffer = (wchar_t *)Pool2;
              if ( Pool2 )
              {
                RtlAppendUnicodeToString(a2, (PCWSTR)P + 10);
                v4 = (WCHAR *)Source;
                RtlAppendUnicodeToString(a2, Source);
                goto LABEL_17;
              }
              ElementData = -1073741670;
            }
            v4 = (WCHAR *)Source;
          }
        }
      }
    }
  }
LABEL_17:
  if ( v11 )
    BcdCloseObject(v11);
  if ( v5 )
    BcdCloseObject(v5);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)ElementData;
}
