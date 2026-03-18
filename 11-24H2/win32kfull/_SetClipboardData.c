/*
 * XREFs of _SetClipboardData @ 0x140104750
 * Callers:
 *     NtUserSetClipboardData @ 0x1402459F0 (NtUserSetClipboardData.c)
 *     xxxSnapWindow @ 0x1402641A0 (xxxSnapWindow.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z @ 0x14010454C (-InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x1401048F0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@G@@U-$_tlgWrapperByV.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x140105EAC (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 */

__int64 __fastcall SetClipboardData(unsigned int a1, char *a2, int a3, int a4)
{
  struct tagWINDOWSTATION *v8; // rsi
  unsigned int v9; // esi
  __int64 v11; // rax
  struct _KPROCESS *CurrentProcess; // rax
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  bool v16[4]; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v17; // [rsp+54h] [rbp-2Ch] BYREF
  unsigned int CurrentProcessId; // [rsp+58h] [rbp-28h] BYREF
  __int64 v19; // [rsp+60h] [rbp-20h] BYREF
  __int64 v20; // [rsp+68h] [rbp-18h] BYREF
  LONGLONG v21[2]; // [rsp+70h] [rbp-10h] BYREF

  v8 = CheckClipboardAccess();
  if ( !v8 )
    return 0LL;
  if ( (unsigned __int64)(a2 - 1) <= 3 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  if ( (unsigned int)dword_140398BB8 > 5
    && (qword_140398BC8 & 0x400000000000LL) != 0
    && (qword_140398BD0 & 0x400000000000LL) == qword_140398BD0 )
  {
    v11 = *((_QWORD *)v8 + 10);
    v19 = 0x2000000LL;
    v16[0] = a2 == 0LL;
    if ( v11 )
      v11 = *(_QWORD *)(v11 + 464) + 984LL;
    v20 = v11;
    v17 = a1;
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess();
    v21[0] = PsGetProcessCreateTimeQuadPart(CurrentProcess);
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
      v13,
      (unsigned int)&unk_140367471,
      v14,
      v15,
      (__int64)&CurrentProcessId,
      (__int64)v21,
      (__int64)&v17,
      (__int64)&v20,
      (__int64)v16,
      (__int64)&v19);
  }
  v9 = InternalSetClipboardData(v8, a1, a2, a3, a4);
  if ( v9 )
  {
    if ( a1 == 2 )
    {
      GreSetBitmapOwner(a2, 0LL);
    }
    else if ( a1 == 9 )
    {
      GreSetPaletteOwner(a2, 0LL);
    }
  }
  return v9;
}
