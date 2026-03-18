/*
 * XREFs of ?TryLockSurface@UMPDOBJ@@SAPEAU_SURFOBJ@@PEAUHSURF__@@@Z @ 0x1401FAF1C
 * Callers:
 *     NtGdiEngLockSurface @ 0x1401FAEC0 (NtGdiEngLockSurface.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x140007028 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 */

struct _SURFOBJ *__fastcall UMPDOBJ::TryLockSurface(HSURF a1)
{
  _QWORD *v2; // rdi
  SURFOBJ *v3; // rax
  SURFOBJ *v4; // rsi
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  __int128 v9; // xmm4
  HDEV hdev; // rax
  unsigned __int64 pvScan0; // rax
  PVOID v12; // rtt
  unsigned __int64 pvBits; // rcx
  __int64 v15; // rcx
  __int128 v16; // [rsp+50h] [rbp-68h]

  v2 = 0LL;
  if ( a1 )
  {
    v3 = EngLockSurface(a1);
    v4 = v3;
    if ( v3 )
    {
      if ( ((__int64)v3[1].hsurf & 0x240000) == 0x240000 )
      {
        v2 = EngAllocUserMem(0x60uLL, 0x706D7547u);
        if ( !v2 )
          goto LABEL_11;
        v5 = *(_OWORD *)&v4->dhsurf;
        v6 = *(_OWORD *)&v4->dhpdev;
        *(_QWORD *)&v16 = v6;
        v7 = *(_OWORD *)&v4->sizlBitmap.cx;
        v8 = *(_OWORD *)&v4->pvBits;
        v9 = *(_OWORD *)&v4->lDelta;
        hdev = v4->hdev;
        if ( hdev )
        {
          *((_QWORD *)&v16 + 1) = *((_QWORD *)hdev + 2);
          v6 = v16;
        }
        *(_DWORD *)v2 = 1431130959;
        v2[1] = a1;
        *((_OWORD *)v2 + 1) = v5;
        *((_OWORD *)v2 + 2) = v6;
        *((_OWORD *)v2 + 3) = v7;
        *((_OWORD *)v2 + 4) = v8;
        *((_OWORD *)v2 + 5) = v9;
        if ( (_QWORD)v6 )
          v2[4] = *(_QWORD *)(v6 + 8);
        pvScan0 = (unsigned __int64)v4[6].pvScan0;
        if ( pvScan0 + 1 >= pvScan0 )
        {
          v12 = v4[6].pvScan0;
          if ( v12 == (PVOID)_InterlockedCompareExchange64(
                               (volatile signed __int64 *)&v4[6].pvScan0,
                               pvScan0 + 1,
                               pvScan0) )
            goto LABEL_11;
        }
        EngFreeUserMem(v2);
        v2 = 0LL;
        if ( (unsigned int)dword_140398BB8 <= 5 || !tlgKeywordOn((__int64)&dword_140398BB8, 0x200000000000LL) )
          goto LABEL_11;
      }
      else
      {
        pvBits = (unsigned __int64)v3->pvBits;
        if ( pvBits && !v3->iType && pvBits >= (unsigned __int64)MmSystemRangeStart
          || (unsigned int)dword_140398BB8 <= 5
          || !tlgKeywordOn((__int64)&dword_140398BB8, 0x200000000000LL) )
        {
          goto LABEL_11;
        }
      }
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v15,
        (__int64)&unk_14036A2D3);
LABEL_11:
      EngUnlockSurface(v4);
      return (struct _SURFOBJ *)((unsigned __int64)(v2 + 2) & -(__int64)(v2 != 0LL));
    }
  }
  return 0LL;
}
