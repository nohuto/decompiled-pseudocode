/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UCPenContact@@$0A@@@QEAAJPEFBUCPenContact@@I@Z @ 0x18000DED8
 * Callers:
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18000F274 (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K.c)
 *     ?PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z @ 0x18000F8D4 (-PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CPenContact,0>::AddMultipleAndSet(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v8; // rcx
  __int64 v9; // rax

  v2 = *((unsigned int *)a1 + 6);
  v4 = v2 + 1;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB3u, 0LL);
  }
  else
  {
    v5 = 0;
    if ( v4 <= *((_DWORD *)a1 + 5) )
    {
      v8 = 5 * v2;
      v9 = *a1;
      *(_OWORD *)(v9 + 8 * v8) = *(_OWORD *)a2;
      *(_OWORD *)(v9 + 8 * v8 + 16) = *(_OWORD *)(a2 + 16);
      *(_QWORD *)(v9 + 8 * v8 + 32) = *(_QWORD *)(a2 + 32);
      *((_DWORD *)a1 + 6) = v4;
    }
    else
    {
      v6 = DynArrayImpl<0>::AddMultipleAndSet(a1, 40LL, 1LL, a2);
      v5 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xBEu, 0LL);
    }
  }
  return v5;
}
