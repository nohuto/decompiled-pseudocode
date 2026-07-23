/*
 * XREFs of LdrpEtwLogLoaderSnaps @ 0x180112B50
 * Callers:
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x180030140 (LdrpLogEtwEvent.c)
 *     LdrpGenerateSnapsUnicodeStrings @ 0x180040400 (LdrpGenerateSnapsUnicodeStrings.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

int __fastcall LdrpEtwLogLoaderSnaps(__int64 a1, int a2, char *Format, va_list ArgList)
{
  struct _PEB *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v12[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v13; // [rsp+48h] [rbp-B8h]
  int v14[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE *v15; // [rsp+58h] [rbp-A8h]
  _BYTE v16[256]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v17[512]; // [rsp+160h] [rbp+60h] BYREF

  v14[1] = 0;
  v12[1] = 0;
  LODWORD(v8) = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)v8 )
  {
    v8 = NtCurrentPeb();
    v9 = (__int64)v8->SharedData + 554;
  }
  else
  {
    v9 = 2147353476LL;
  }
  if ( *(_BYTE *)v9 )
  {
    v8 = NtCurrentPeb();
    if ( (v8->TracingFlags & 4) != 0 )
    {
      LODWORD(v8) = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)v8 )
      {
        v8 = NtCurrentPeb();
        v10 = (__int64)v8->SharedData + 555;
      }
      else
      {
        v10 = 2147353477LL;
      }
      if ( *(char *)v10 < 0 )
      {
        memset_thunk_772440563353939046(v16, 0, 0x100uLL);
        memset_thunk_772440563353939046(v17, 0, 0x200uLL);
        v15 = v16;
        v13 = v17;
        v14[0] = 0x1000000;
        v12[0] = 0x2000000;
        LODWORD(v8) = LdrpGenerateSnapsUnicodeStrings(1, (__int64)v14, (__int64)v12, a1, a2, Format, ArgList);
        if ( !(_DWORD)v8 )
          LODWORD(v8) = LdrpLogEtwEvent(5335, 0LL, 0, 0, (unsigned __int16 *)v14, (unsigned __int16 *)v12);
      }
    }
  }
  return (int)v8;
}
