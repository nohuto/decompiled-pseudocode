/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U3@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@2@Z @ 0x14000261C
 * Callers:
 *     NtUserWin32kSysCallFilterStub @ 0x140143AE0 (NtUserWin32kSysCallFilterStub.c)
 * Callees:
 *     _tlgWriteAgg @ 0x1400914C8 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        const WCHAR **a6,
        const WCHAR **a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // rcx
  int v11; // r8d
  const WCHAR *v12; // rdx
  __int64 v13; // rax
  int v14; // eax
  const WCHAR *v15; // rdx
  __int64 v16; // rax
  _BYTE *v17; // rdx
  int v18; // ecx
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+30h] [rbp-61h] BYREF
  __int64 v21; // [rsp+50h] [rbp-41h]
  __int64 v22; // [rsp+58h] [rbp-39h]
  _BYTE *v23; // [rsp+60h] [rbp-31h]
  int v24; // [rsp+68h] [rbp-29h]
  int v25; // [rsp+6Ch] [rbp-25h]
  const WCHAR *v26; // [rsp+70h] [rbp-21h]
  int v27; // [rsp+78h] [rbp-19h]
  int v28; // [rsp+7Ch] [rbp-15h]
  const WCHAR *v29; // [rsp+80h] [rbp-11h]
  int v30; // [rsp+88h] [rbp-9h]
  int v31; // [rsp+8Ch] [rbp-5h]
  __int64 v32; // [rsp+90h] [rbp-1h]
  __int64 v33; // [rsp+98h] [rbp+7h]
  __int64 v34; // [rsp+A0h] [rbp+Fh]
  __int64 v35; // [rsp+A8h] [rbp+17h]

  v34 = a9;
  v10 = -1LL;
  v32 = a8;
  v11 = 2;
  v35 = 8LL;
  v33 = 4LL;
  v12 = *a7;
  if ( *a7 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v12 = &word_14025E168;
    v14 = 2;
  }
  v30 = v14;
  v29 = v12;
  v31 = 0;
  v15 = *a6;
  if ( *a6 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v15[v16] );
    v11 = 2 * v16 + 2;
  }
  else
  {
    v15 = &word_14025E168;
  }
  v26 = v15;
  v27 = v11;
  v28 = 0;
  v17 = *a5;
  if ( *a5 )
  {
    do
      ++v10;
    while ( v17[v10] );
    v18 = v10 + 1;
  }
  else
  {
    v17 = &unk_14025D828;
    v18 = 1;
  }
  v23 = v17;
  v24 = v18;
  v21 = a4;
  v25 = 0;
  v22 = 8LL;
  return tlgWriteAgg((int)&dword_14029AED8, a2, 0, 8, &v20);
}
