/*
 * XREFs of ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z @ 0x14021E938
 * Callers:
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021F500 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?ValidateRect@@YAEPEBUtagRECT@@@Z @ 0x14021EBD4 (-ValidateRect@@YAEPEBUtagRECT@@@Z.c)
 *     ?ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z @ 0x14021EC48 (-ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z.c)
 *     ?ValidateSubRect@@YAEPEBUtagRECT@@0@Z @ 0x14021ED40 (-ValidateSubRect@@YAEPEBUtagRECT@@0@Z.c)
 */

unsigned __int8 __fastcall ValidateGdiCommand(
        unsigned int a1,
        unsigned int a2,
        const unsigned __int8 *a3,
        unsigned __int8 *a4,
        const unsigned __int8 *a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        const struct tagRECT *a8,
        const struct tagRECT *a9,
        unsigned int a10,
        unsigned int a11,
        unsigned __int8 a12,
        char a13,
        unsigned int a14,
        unsigned __int8 **a15)
{
  unsigned __int64 v15; // rax
  unsigned int v17; // r9d
  __int64 v18; // rax
  const unsigned __int8 *v19; // rcx
  unsigned __int8 *v20; // rsi
  const wchar_t *v21; // r9
  unsigned int i; // edi

  v15 = 16LL * a14;
  if ( v15 > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(2LL);
    v18 = 2394LL;
    goto LABEL_31;
  }
  v17 = v15 + a1;
  if ( (unsigned int)v15 + a1 < a1 )
  {
    WdLogSingleEntry0(2LL);
    v18 = 2400LL;
    goto LABEL_31;
  }
  if ( v17 > a2 )
  {
    WdLogSingleEntry0(2LL);
    v18 = 2405LL;
LABEL_31:
    v21 = L"Malformed packet";
    goto LABEL_32;
  }
  if ( *a15 <= a5 )
  {
    WdLogSingleEntry0(2LL);
    v18 = 2410LL;
    goto LABEL_31;
  }
  v19 = &a4[v17];
  v20 = (unsigned __int8 *)&a3[*a15 - a5];
  *a15 = v20;
  if ( v20 <= a4 || v20 >= v19 || v19 - v20 < (int)v15 )
  {
    WdLogSingleEntry0(2LL);
    v18 = 2417LL;
    goto LABEL_31;
  }
  if ( ValidateRect(a8) )
  {
    for ( i = 0; i < a14; ++i )
    {
      if ( !ValidateSubRect((const struct tagRECT *)&v20[16 * i], a8) )
      {
        WdLogSingleEntry0(2LL);
        v18 = 2446LL;
        goto LABEL_18;
      }
      if ( !ValidateRectBounds((const struct tagRECT *)&v20[16 * i], a10, a6) )
      {
        WdLogSingleEntry0(2LL);
        v18 = 2451LL;
LABEL_18:
        v21 = L"Invalid subrect";
        goto LABEL_32;
      }
    }
    if ( a9 )
    {
      if ( !ValidateRect(a9) )
      {
        WdLogSingleEntry0(2LL);
        v18 = 2459LL;
LABEL_23:
        v21 = L"Invalid SrcRect";
        goto LABEL_32;
      }
      if ( a13 && !ValidateRectBounds(a9, a11, a7) )
      {
        WdLogSingleEntry0(2LL);
        v18 = 2466LL;
        goto LABEL_23;
      }
    }
    return 1;
  }
  WdLogSingleEntry0(2LL);
  v18 = 2431LL;
  v21 = L"Invalid DstRect";
LABEL_32:
  WdLogGlobalForLineNumber = v18;
  DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v21, v18, 0LL, 0LL, 0LL, 0LL);
  return 0;
}
