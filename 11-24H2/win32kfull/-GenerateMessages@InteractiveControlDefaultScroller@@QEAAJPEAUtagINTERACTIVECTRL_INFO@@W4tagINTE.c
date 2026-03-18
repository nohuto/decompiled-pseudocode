/*
 * XREFs of ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x14012A9E8
 * Callers:
 *     ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x14021352C (-GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140005D0C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z @ 0x14012AB84 (-UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z.c)
 *     ?UpdateWindow@InteractiveControlDefaultScroller@@AEAAJPEAPEAUtagWND@@@Z @ 0x14026A518 (-UpdateWindow@InteractiveControlDefaultScroller@@AEAAJPEAPEAUtagWND@@@Z.c)
 *     ?GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z @ 0x1402EE668 (-GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z.c)
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1402EE738 (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z.c)
 *     ?Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z @ 0x1402EE8FC (-Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z.c)
 *     ?UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ @ 0x1402EECB0 (-UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::GenerateMessages(
        InteractiveControlDefaultScroller *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v6; // ebx
  int updated; // eax
  int v8; // eax
  int v9; // edx
  const char *v11; // [rsp+60h] [rbp+30h] BYREF
  int v12; // [rsp+70h] [rbp+40h] BYREF
  struct tagWND *v13; // [rsp+78h] [rbp+48h] BYREF

  *((_DWORD *)a1 + 14) = a3;
  LODWORD(v11) = 0;
  LOWORD(v12) = 0;
  v13 = 0LL;
  if ( (unsigned int)(a3 - 1) <= 1 )
  {
    updated = InteractiveControlDefaultScroller::UpdateWindow(a1, &v13);
    v6 = updated;
    if ( updated >= 0 )
    {
      updated = InteractiveControlDefaultScroller::UpdateTime(a1, (int *)&v11);
      v6 = updated;
      if ( updated >= 0 )
      {
        if ( (_DWORD)v11 )
          InteractiveControlDefaultScroller::Reset(a1, v13);
        v8 = *((_DWORD *)a1 + 15);
        v9 = *(_DWORD *)(a2 + 24);
        if ( v8 && v9 > 0 != v8 > 0 )
        {
          *((_DWORD *)a1 + 15) = v9;
          v6 = 0;
          InteractiveControlDefaultScroller::Reset(a1, v13);
          return v6;
        }
        *((_DWORD *)a1 + 15) = v9;
        updated = InteractiveControlDefaultScroller::UpdateBallistics(a1);
        v6 = updated;
        if ( updated >= 0 )
        {
          updated = InteractiveControlDefaultScroller::GenerateWheelDelta(a1, (__int16 *)&v12);
          v6 = updated;
          if ( updated >= 0 )
          {
            updated = InteractiveControlDefaultScroller::GenerateWheelMessage(a1, v12, v13);
            v6 = updated;
            if ( updated >= 0 || (unsigned int)dword_140398C28 <= 2 )
              return v6;
          }
          else if ( (unsigned int)dword_140398C28 <= 2 )
          {
            return v6;
          }
        }
        else if ( (unsigned int)dword_140398C28 <= 2 )
        {
          return v6;
        }
      }
      else if ( (unsigned int)dword_140398C28 <= 2 )
      {
        return v6;
      }
    }
    else if ( (unsigned int)dword_140398C28 <= 2 )
    {
      return v6;
    }
    v12 = updated;
    goto LABEL_24;
  }
  v6 = -1073700861;
  if ( (unsigned int)dword_140398C28 > 2 )
  {
    v12 = -1073700861;
LABEL_24:
    v11 = "Function failed.";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_140398C28,
      (__int64)&unk_1403690D7,
      a3,
      a4,
      &v11);
  }
  return v6;
}
