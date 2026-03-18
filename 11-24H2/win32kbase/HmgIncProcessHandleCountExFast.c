/*
 * XREFs of HmgIncProcessHandleCountExFast @ 0x1401C4F84
 * Callers:
 *     HmgInsertObjectInternal @ 0x14001E500 (HmgInsertObjectInternal.c)
 *     HmgIncProcessHandleCountEx @ 0x1400D9480 (HmgIncProcessHandleCountEx.c)
 *     HmgAllocFast @ 0x1401C21B0 (HmgAllocFast.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ?HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z @ 0x140062AA0 (-HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1400BA7E0 (-GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140141B98 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C1930 (--0-$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall HmgIncProcessHandleCountExFast(__int64 a1, int a2, int a3)
{
  unsigned int v5; // esi
  struct _W32PROCESS *W32ProcessFromId; // rbx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  HSEMAPHORE v12[4]; // [rsp+38h] [rbp-20h] BYREF
  int v13; // [rsp+68h] [rbp+10h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v5 = 1;
  if ( a2 && a2 != -2147483630 )
  {
    Object = 0LL;
    W32ProcessFromId = GetW32ProcessFromId(a2, (struct _EPROCESS **)&Object);
    if ( W32ProcessFromId )
    {
      SEMOBJ<20>::SEMOBJ<20>(v12, (_QWORD *)a1);
      if ( a3 || *((_DWORD *)W32ProcessFromId + 15) < *(_DWORD *)(a1 + 2216) )
      {
        HmgpIncProcessHandleCountEx(W32ProcessFromId);
      }
      else
      {
        v7 = *((_DWORD *)W32ProcessFromId + 69);
        v5 = 0;
        if ( (v7 & 8) == 0 )
        {
          *((_DWORD *)W32ProcessFromId + 69) = v7 | 8;
          if ( (unsigned int)dword_14029AF48 > 5 && tlgKeywordOn((__int64)&dword_14029AF48, 0x400000000000LL) )
          {
            v11 = 0x1000000LL;
            v13 = v8;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              (__int64)&dword_14029AF48,
              byte_140276657,
              v8,
              v9,
              (__int64)&v13,
              (__int64)&v11);
          }
        }
      }
      SEMOBJ<20>::vUnlock(v12);
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
  return v5;
}
